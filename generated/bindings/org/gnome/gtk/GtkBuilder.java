/*
 * java-gnome, a UI library for writing GTK and GNOME programs from Java!
 *
 * Copyright © 2006-2012 Operational Dynamics Consulting, Pty Ltd and Others
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
 *
 * Linking this library statically or dynamically with other modules is making
 * a combined work based on this library. Thus, the terms and conditions of
 * the GPL cover the whole combination. As a special exception (the
 * "Classpath Exception"), the copyright holders of this library give you
 * permission to link this library with independent modules to produce an
 * executable, regardless of the license terms of these independent modules,
 * and to copy and distribute the resulting executable under terms of your
 * choice, provided that you also meet, for each linked independent module,
 * the terms and conditions of the license of that module. An independent
 * module is a module which is not derived from or based on this library. If
 * you modify this library, you may extend the Classpath Exception to your
 * version of the library, but you are not obligated to do so. If you do not
 * wish to do so, delete this exception statement from your version.
 */
package org.gnome.gtk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.glib.GlibException;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.glib.Value;
import org.gnome.gtk.Application;
import org.gnome.gtk.Builder;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkBuilder extends Plumbing
{
    private GtkBuilder() {}

    static final long createBuilder() {
        long result;

        synchronized (lock) {
            result = gtk_builder_new();

            return result;
        }
    }

    private static native final long gtk_builder_new();

    static final long createBuilderFromFile(String filename) {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_new_from_file(filename);

            return result;
        }
    }

    private static native final long gtk_builder_new_from_file(String filename);

    static final long createBuilderFromResource(String resourcePath) {
        long result;

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_new_from_resource(resourcePath);

            return result;
        }
    }

    private static native final long gtk_builder_new_from_resource(String resourcePath);

    static final long createBuilderFromString(String string, int length) {
        long result;

        if (string == null) {
            throw new IllegalArgumentException("string can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_new_from_string(string, length);

            return result;
        }
    }

    private static native final long gtk_builder_new_from_string(String string, int length);

    @SuppressWarnings("unused")
    static final void addCallbackSymbol(Builder self, String callbackName, FIXME callbackSymbol) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCallback");
    }

    @SuppressWarnings("unused")
    static final void addCallbackSymbols(Builder self, String firstCallbackName, FIXME firstCallbackSymbol) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCallback");
    }

    static final int addFromFile(Builder self, String filename) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_add_from_file(pointerOf(self), filename);

            return result;
        }
    }

    private static native final int gtk_builder_add_from_file(long self, String filename) throws GlibException;

    static final int addFromResource(Builder self, String resourcePath) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_add_from_resource(pointerOf(self), resourcePath);

            return result;
        }
    }

    private static native final int gtk_builder_add_from_resource(long self, String resourcePath) throws GlibException;

    static final int addFromString(Builder self, String buffer, long length) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_add_from_string(pointerOf(self), buffer, length);

            return result;
        }
    }

    private static native final int gtk_builder_add_from_string(long self, String buffer, long length) throws GlibException;

    static final int addObjectsFromFile(Builder self, String filename, String[] objectIds) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        if (objectIds == null) {
            throw new IllegalArgumentException("objectIds can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_add_objects_from_file(pointerOf(self), filename, objectIds);

            return result;
        }
    }

    private static native final int gtk_builder_add_objects_from_file(long self, String filename, String[] objectIds) throws GlibException;

    static final int addObjectsFromResource(Builder self, String resourcePath, String[] objectIds) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        if (objectIds == null) {
            throw new IllegalArgumentException("objectIds can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_add_objects_from_resource(pointerOf(self), resourcePath, objectIds);

            return result;
        }
    }

    private static native final int gtk_builder_add_objects_from_resource(long self, String resourcePath, String[] objectIds) throws GlibException;

    static final int addObjectsFromString(Builder self, String buffer, long length, String[] objectIds) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        if (objectIds == null) {
            throw new IllegalArgumentException("objectIds can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_add_objects_from_string(pointerOf(self), buffer, length, objectIds);

            return result;
        }
    }

    private static native final int gtk_builder_add_objects_from_string(long self, String buffer, long length, String[] objectIds) throws GlibException;

    @SuppressWarnings("unused")
    static final void connectSignals(Builder self, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    @SuppressWarnings("unused")
    static final void connectSignalsFull(Builder self, FIXME func, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkBuilderConnectFunc");
    }

    static final void exposeObject(Builder self, String name, Object object) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (object == null) {
            throw new IllegalArgumentException("object can't be null");
        }

        synchronized (lock) {
            gtk_builder_expose_object(pointerOf(self), name, pointerOf(object));
        }
    }

    private static native final void gtk_builder_expose_object(long self, String name, long object);

    @SuppressWarnings("unused")
    static final int extendWithTemplate(Builder self, Widget widget, FIXME templateType, String buffer, long length) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    static final Application getApplication(Builder self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_get_application(pointerOf(self));

            return (Application) objectFor(result);
        }
    }

    private static native final long gtk_builder_get_application(long self);

    static final Object getObject(Builder self, String name) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_get_object(pointerOf(self), name);

            return (Object) objectFor(result);
        }
    }

    private static native final long gtk_builder_get_object(long self, String name);

    static final Object[] getObjects(Builder self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_get_objects(pointerOf(self));

            return (Object[]) objectArrayFor(result, new Object[result.length]);
        }
    }

    private static native final long[] gtk_builder_get_objects(long self);

    static final String getTranslationDomain(Builder self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_builder_get_translation_domain(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_builder_get_translation_domain(long self);

    @SuppressWarnings("unused")
    static final FIXME getTypeFromName(Builder self, String typeName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    @SuppressWarnings("unused")
    static final FIXME lookupCallbackSymbol(Builder self, String callbackName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCallback");
    }

    static final void setApplication(Builder self, Application application) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (application == null) {
            throw new IllegalArgumentException("application can't be null");
        }

        synchronized (lock) {
            gtk_builder_set_application(pointerOf(self), pointerOf(application));
        }
    }

    private static native final void gtk_builder_set_application(long self, long application);

    static final void setTranslationDomain(Builder self, String domain) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_builder_set_translation_domain(pointerOf(self), domain);
        }
    }

    private static native final void gtk_builder_set_translation_domain(long self, String domain);

    @SuppressWarnings("unused")
    static final boolean valueFromString(Builder self, FIXME pspec, String string, Value value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GParamSpec*");
    }

    @SuppressWarnings("unused")
    static final boolean valueFromStringType(Builder self, FIXME type, String string, Value value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    interface GetTypeFromNameSignal extends Signal
    {
        FIXME onGetTypeFromName(Builder source, String typeName);
    }

    static final void connect(Builder self, GtkBuilder.GetTypeFromNameSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkBuilder.class, "get-type-from-name", after);
    }

    protected static final java.lang.Object receiveGetTypeFromName(Signal handler, long source, String typeName) {
        FIXME result;

        result = ((GtkBuilder.GetTypeFromNameSignal) handler).onGetTypeFromName((Builder) objectFor(source), typeName);

        return result;
    }
}

