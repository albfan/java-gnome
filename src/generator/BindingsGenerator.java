/*
 * java-gnome, a UI library for writing GTK and GNOME programs from Java!
 *
 * Copyright © 2007-2013 Operational Dynamics Consulting, Pty Ltd
 *
 * The code in this file, and the program it is a part of, is made available
 * to you by its authors as open source software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License version
 * 2 ("GPL") as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GPL for more details.
 *
 * You should have received a copy of the GPL along with this program. If not,
 * see http://www.gnu.org/licenses/. The authors of this program may be
 * contacted through http://java-gnome.sourceforge.net/.
 */

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.FilenameFilter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import nu.xom.ParsingException;

import com.operationaldynamics.driver.DefsFile;
import com.operationaldynamics.driver.ImproperDefsFileException;
import com.operationaldynamics.parser.Block;
import com.operationaldynamics.parser.DefsLineNumberReader;
import com.operationaldynamics.parser.DefsParser;
import com.operationaldynamics.parser.FunctionBlock;
import com.operationaldynamics.parser.IntrospectionParser;
import com.operationaldynamics.parser.IntrospectionRepository;

/**
 * The java-gnome code generator.
 * 
 * <p>
 * The biggest problem architecturally is transforming information from the
 * form that the upstream .gir data provides to one we can do something useful
 * with in our context. The code generator, then is essentially two separate
 * pieces that have nothing to do with each other:
 * 
 * <ul>
 * <li>At the front end is the .gir file parser. IntrospectionParser takes an
 * input file of GNOME GIR XML metadata and turns it into an array of Block
 * objects. Blocks are Java objects representing the contents of a given XML
 * description.
 * 
 * <li>Completely independent of the parser is the code generator. A hierarchy
 * of Generator objects exist with the code to output the necessary Java and C
 * code They have constructors which minutely specify the information they
 * require (and with variables names that means something to the task of
 * bindings generation, rather than whatever the origin .gir data might have
 * called it). The types information describing the underlying library is
 * stored in a hash table of which uses the underlying type (as found in the
 * source .gir data) as a key, and a Thing object as the value containing all
 * the necessary mappings of that type to the actual Java or C language type
 * used at each layer of the bindings.
 * </ul>
 * 
 * <p>
 * The link between the two sides are the createThing() and createGenerator()
 * methods in each Block object; this is where we translate from the
 * characteristic key names in the .gir data to the names we use in the
 * generator.
 * 
 * <p>
 * To generate the java-gnome bindings, we therefore do several things:
 * 
 * <ol>
 * <li>register all the type information: We load each .gir file and create
 * arrays of Blocks. We then stash these Blocks in an a class called DefsFile.
 * Along the way we call each Block's createThing() and then Thing.register()
 * to store the the resultant in our lookup table.
 * 
 * <li>parse data to override known .gir data: We load each .defs file and
 * create arrays of Blocks. The .defs file may contain a full description of
 * an object but also a single function, method or signal to add to the
 * original data taken from the Introspection XML.
 * 
 * <li>with a full database of type information in hand, we can then do an
 * iteration over the Block arrays to actually generate the code that goes
 * with each stanza. We get the appropriate Generator object by calling each
 * Block's createGenerator() method and then run its writeTranslationCode()
 * and writeJniCode() methods to finally emit the generated translation layer
 * (Java) and jni layer (C) code.
 * </ol>
 * 
 * @author Andrew Cowie
 * @author Guillaume Mazoyer
 * @since 4.0.3
 */
/*
 * This class's name would seem to imply it is a subclass of Generator, which
 * of course is not the case. It is, however, a good name to have show up when
 * building the library via `make`, so "BindingsGenerator" it is. If someone
 * wants to suggest a better name, go ahead.
 */
public class BindingsGenerator
{
    public static void main(String[] args) throws IOException {
        runGeneratorOutputIntrospectionToFiles(args, new File("generated/bindings/"));
    }

    /**
     * This is building towards the main loop that will drive the .gir file
     * parser and subsequent runs of the bindings code generators, but it is
     * still an intermediate form.
     */
    private static void runGeneratorOutputIntrospectionToFiles(final String[] files, final File outputDir) {
        final IntrospectionRepository[] repositories;
        final File[] overriders;
        final Map<String, Block[]> introspected;
        final List<DefsFile> all;
        IntrospectionParser parser;
        DefsParser secondParser;
        Block[] blocks;
        PrintWriter typeMapping;
        DefsLineNumberReader in;

        repositories = new IntrospectionRepository[files.length];
        all = new ArrayList<DefsFile>();
        introspected = new HashMap<String, Block[]>();

        /*
         * Load the all the .gir files into memory and extract repository
         * objects from them.
         */

        for (int i = 0; i < files.length; i++) {
            final FileReader reader;

            try {
                reader = new FileReader(files[i]);

                repositories[i] = new IntrospectionRepository(reader);

                reader.close();
            } catch (ParsingException e) {
                System.out.println("Malformed XML data in " + files[i] + ":");
                System.out.println(e.getMessage());
                System.out.println("[continuing next file]\n");
            } catch (IOException e) {
                System.out.println("I/O problem when trying to parse " + files[i]);
                System.out.println(e.getMessage());
                System.out.println("[continuing next file]\n");
                continue;
            } finally {
                System.out.flush();
            }
        }

        /*
         * Parse all loaded repositories and put them in the map of Block
         * array.
         */

        for (IntrospectionRepository repository : repositories) {
            parser = new IntrospectionParser(repository);

            introspected.putAll(parser.parseData());
        }

        /*
         * Parse .defs files which are used to override Introspection data.
         */

        overriders = new File("src/overriders").listFiles(new FilenameFilter() {
            public boolean accept(File dir, String name) {
                return name.endsWith(".defs");
            }
        });

        /*
         * Load the all the .defs files into DefsFile objects, one per type.
         * Along the way, this registers the type information.
         */

        for (File overrider : overriders) {
            try {
                in = new DefsLineNumberReader(new FileReader(overrider), overrider.getName());

                secondParser = new DefsParser(in);
                blocks = secondParser.parseData();

                /*
                 * The definition is made to add more things or change what we
                 * know from the introspection data.
                 */

                if (!(blocks[0] instanceof FunctionBlock)) {
                    all.add(new DefsFile(blocks));
                } else {
                    for (Block block : blocks) {
                        final FunctionBlock function;
                        Block[] toChange, changed;
                        String object;
                        boolean toAdd;

                        function = (FunctionBlock) block;
                        toAdd = true;

                        /*
                         * We are only interested in the isConstructorOf and
                         * ofObject fields to find the object that we will
                         * need to change.
                         */

                        object = function.getOfObject();
                        if (object == null) {
                            object = function.getIsConstructorOf();
                        }

                        /*
                         * We are unable to determine to which object this
                         * FunctionBlock should be associated. The .defs file
                         * is probably incorrect.
                         */

                        if (object == null) {
                            System.out.println("Cannot find the object name that FunctionBlock "
                                    + function.getCName() + " belongs to.");
                            System.out.println("Please check the data in " + overrider + ".");
                            continue;
                        }

                        /*
                         * Look for the object and add the new Block.
                         */

                        toChange = introspected.get(object);

                        /*
                         * We are unable to find the object this FunctionBlock
                         * should be associated. This means that we did not
                         * parse any data from this object before.
                         */

                        if (toChange == null) {
                            System.out.println("Cannot the object " + object
                                    + " that the FunctionBlock " + function.getCName() + " belongs to.");
                            System.out.println("Do we have enough data about it?");
                            continue;
                        }

                        /*
                         * The Block that we are trying to add override
                         * another existing Block so we need to replace the
                         * old one by the new one.
                         */

                        for (int i = 0; i < toChange.length; i++) {
                            final String cNameCurrent, cNameNew;

                            if (toChange[i] instanceof FunctionBlock) {
                                cNameCurrent = ((FunctionBlock) toChange[i]).getCName();
                                cNameNew = function.getCName();

                                if ((cNameCurrent != null) && (cNameNew != null)
                                        && (cNameCurrent.equals(cNameNew))) {
                                    toAdd = false;
                                    toChange[i] = block;
                                    break;
                                }
                            }
                        }

                        /*
                         * The Block that we are trying to add does not
                         * replace another one so we just add it to the array.
                         */

                        if (toAdd) {
                            changed = Arrays.copyOf(toChange, toChange.length + 1);
                            changed[toChange.length] = block;

                            introspected.put(object, changed);
                        }
                    }
                }

                in.close();
            } catch (IOException e) {
                System.out.println("I/O problem when trying to parse " + overrider);
                System.out.println(e.getMessage());
                System.out.println("[continuing next file]\n");
                continue;
            } catch (ImproperDefsFileException e) {
                System.out.println("Couldn't get sufficient information from " + overrider + ":");
                System.out.println(e.getMessage());
                System.out.println("[continuing next file]\n");
                continue;
            } finally {
                System.out.flush();
            }
        }

        /*
         * Add all data from introspection to the list of data to be processed
         * by the code generator.
         */

        for (Map.Entry<String, Block[]> data : introspected.entrySet()) {
            try {
                all.add(new DefsFile(data.getValue()));
            } catch (ImproperDefsFileException e) {
                System.out.println("Couldn't get sufficient information for " + data.getKey() + ":");
                System.out.println(e.getMessage());
                System.out.println("[continuing next file]\n");
            }
        }

        /*
         * Now, with the meta data completely loaded, we can generate the
         * bindings code.
         */

        try {
            typeMapping = new PrintWriter(new BufferedWriter(new FileWriter(
                    "generated/bindings/typeMapping.properties")));
        } catch (IOException ie) {
            System.err.println("Can't open typeMapping file for writing!\n" + ie);
            return;
        }

        for (DefsFile data : all) {
            String packageAndClassName;
            File transTarget, jniTarget;
            PrintWriter trans, jni;

            packageAndClassName = data.getType().fullyQualifiedTranslationClassName().replace('.', '/');
            transTarget = new File(outputDir, packageAndClassName + ".java");
            jniTarget = new File(outputDir, packageAndClassName + ".c");


            System.out.println("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"+packageAndClassName);

            if (!transTarget.getParentFile().isDirectory()) {
                transTarget.getParentFile().mkdirs();
            }

            try {
                trans = new PrintWriter(new BufferedWriter(new FileWriter(transTarget)));
                jni = new PrintWriter(new BufferedWriter(new FileWriter(jniTarget)));
            } catch (IOException ioe) {
                System.err.println("How come we can't open a file for writing?\n" + ioe);
                return;
            }

            try {
                data.generateTranslationLayer(trans);
            } catch (UnsupportedOperationException uoe) {
                // act to remove that file? Or close it off, or...
            }

            try {
                data.generateJniLayer(jni);
            } catch (UnsupportedOperationException uoe) {
                // act to remove the file in the event there was nothing
                // printed?
            }

            typeMapping.println(data.getType().bareTranslationClassName() + "="
                    + data.getType().fullyQualifiedJavaClassName());

            trans.close();
            jni.close();
        }
        typeMapping.close();
    }
}
