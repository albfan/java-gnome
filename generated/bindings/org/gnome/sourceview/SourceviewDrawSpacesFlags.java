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
package org.gnome.sourceview;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.sourceview.Plumbing;

final class SourceviewDrawSpacesFlags extends Plumbing
{
    private SourceviewDrawSpacesFlags() {}

    static final int SPACE = get_ordinal_space();

    private static native final int get_ordinal_space();

    static final int TAB = get_ordinal_tab();

    private static native final int get_ordinal_tab();

    static final int NEWLINE = get_ordinal_newline();

    private static native final int get_ordinal_newline();

    static final int NBSP = get_ordinal_nbsp();

    private static native final int get_ordinal_nbsp();

    static final int LEADING = get_ordinal_leading();

    private static native final int get_ordinal_leading();

    static final int TEXT = get_ordinal_text();

    private static native final int get_ordinal_text();

    static final int TRAILING = get_ordinal_trailing();

    private static native final int get_ordinal_trailing();

    static final int ALL = get_ordinal_all();

    private static native final int get_ordinal_all();
}

