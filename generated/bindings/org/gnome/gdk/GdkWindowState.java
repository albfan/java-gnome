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
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.gdk.Plumbing;

final class GdkWindowState extends Plumbing
{
    private GdkWindowState() {}

    static final int WITHDRAWN = get_ordinal_withdrawn();

    private static native final int get_ordinal_withdrawn();

    static final int ICONIFIED = get_ordinal_iconified();

    private static native final int get_ordinal_iconified();

    static final int MAXIMIZED = get_ordinal_maximized();

    private static native final int get_ordinal_maximized();

    static final int STICKY = get_ordinal_sticky();

    private static native final int get_ordinal_sticky();

    static final int FULLSCREEN = get_ordinal_fullscreen();

    private static native final int get_ordinal_fullscreen();

    static final int ABOVE = get_ordinal_above();

    private static native final int get_ordinal_above();

    static final int BELOW = get_ordinal_below();

    private static native final int get_ordinal_below();

    static final int FOCUSED = get_ordinal_focused();

    private static native final int get_ordinal_focused();

    static final int TILED = get_ordinal_tiled();

    private static native final int get_ordinal_tiled();

    static final int TOP_TILED = get_ordinal_top_tiled();

    private static native final int get_ordinal_top_tiled();

    static final int TOP_RESIZABLE = get_ordinal_top_resizable();

    private static native final int get_ordinal_top_resizable();

    static final int RIGHT_TILED = get_ordinal_right_tiled();

    private static native final int get_ordinal_right_tiled();

    static final int RIGHT_RESIZABLE = get_ordinal_right_resizable();

    private static native final int get_ordinal_right_resizable();

    static final int BOTTOM_TILED = get_ordinal_bottom_tiled();

    private static native final int get_ordinal_bottom_tiled();

    static final int BOTTOM_RESIZABLE = get_ordinal_bottom_resizable();

    private static native final int get_ordinal_bottom_resizable();

    static final int LEFT_TILED = get_ordinal_left_tiled();

    private static native final int get_ordinal_left_tiled();

    static final int LEFT_RESIZABLE = get_ordinal_left_resizable();

    private static native final int get_ordinal_left_resizable();
}

