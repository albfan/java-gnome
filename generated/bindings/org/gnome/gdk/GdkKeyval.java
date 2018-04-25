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

final class GdkKeyval extends Plumbing
{
    private GdkKeyval() {}

    static final String name(int keyval) {
        String result;

        synchronized (lock) {
            result = gdk_keyval_name(keyval);

            return result;
        }
    }

    private static native final String gdk_keyval_name(int keyval);

    static final int fromName(String keyvalName) {
        int result;

        if (keyvalName == null) {
            throw new IllegalArgumentException("keyvalName can't be null");
        }

        synchronized (lock) {
            result = gdk_keyval_from_name(keyvalName);

            return result;
        }
    }

    private static native final int gdk_keyval_from_name(String keyvalName);

    static final void convertCase(int symbol, int[] lower, int[] upper) {
        if (lower == null) {
            throw new IllegalArgumentException("lower can't be null");
        }

        if (upper == null) {
            throw new IllegalArgumentException("upper can't be null");
        }

        synchronized (lock) {
            gdk_keyval_convert_case(symbol, lower, upper);
        }
    }

    private static native final void gdk_keyval_convert_case(int symbol, int[] lower, int[] upper);

    static final int toUpper(int keyval) {
        int result;

        synchronized (lock) {
            result = gdk_keyval_to_upper(keyval);

            return result;
        }
    }

    private static native final int gdk_keyval_to_upper(int keyval);

    static final int toLower(int keyval) {
        int result;

        synchronized (lock) {
            result = gdk_keyval_to_lower(keyval);

            return result;
        }
    }

    private static native final int gdk_keyval_to_lower(int keyval);

    static final boolean isUpper(int keyval) {
        boolean result;

        synchronized (lock) {
            result = gdk_keyval_is_upper(keyval);

            return result;
        }
    }

    private static native final boolean gdk_keyval_is_upper(int keyval);

    static final boolean isLower(int keyval) {
        boolean result;

        synchronized (lock) {
            result = gdk_keyval_is_lower(keyval);

            return result;
        }
    }

    private static native final boolean gdk_keyval_is_lower(int keyval);

    static final int toUnicode(int keyval) {
        int result;

        synchronized (lock) {
            result = gdk_keyval_to_unicode(keyval);

            return result;
        }
    }

    private static native final int gdk_keyval_to_unicode(int keyval);

    static final int unicodeToKeyval(int wc) {
        int result;

        synchronized (lock) {
            result = gdk_unicode_to_keyval(wc);

            return result;
        }
    }

    private static native final int gdk_unicode_to_keyval(int wc);
}

