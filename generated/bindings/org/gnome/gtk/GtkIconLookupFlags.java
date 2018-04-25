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

import org.gnome.gtk.Plumbing;

final class GtkIconLookupFlags extends Plumbing
{
    private GtkIconLookupFlags() {}

    static final int NO_SVG = get_ordinal_no_svg();

    private static native final int get_ordinal_no_svg();

    static final int FORCE_SVG = get_ordinal_force_svg();

    private static native final int get_ordinal_force_svg();

    static final int USE_BUILTIN = get_ordinal_use_builtin();

    private static native final int get_ordinal_use_builtin();

    static final int GENERIC_FALLBACK = get_ordinal_generic_fallback();

    private static native final int get_ordinal_generic_fallback();

    static final int FORCE_SIZE = get_ordinal_force_size();

    private static native final int get_ordinal_force_size();

    static final int FORCE_REGULAR = get_ordinal_force_regular();

    private static native final int get_ordinal_force_regular();

    static final int FORCE_SYMBOLIC = get_ordinal_force_symbolic();

    private static native final int get_ordinal_force_symbolic();

    static final int DIR_LTR = get_ordinal_dir_ltr();

    private static native final int get_ordinal_dir_ltr();

    static final int DIR_RTL = get_ordinal_dir_rtl();

    private static native final int get_ordinal_dir_rtl();
}

