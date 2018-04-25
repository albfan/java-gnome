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
import org.gnome.gdk.RGBA;

final class GdkRGBA extends Plumbing
{
    private GdkRGBA() {}

    static final double getRed(RGBA self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_r_g_b_a_get_red(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_r_g_b_a_get_red(long self);

    static final void setRed(RGBA self, double red) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_r_g_b_a_set_red(pointerOf(self), red);
        }
    }

    private static native final void gdk_r_g_b_a_set_red(long self, double red);

    static final double getGreen(RGBA self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_r_g_b_a_get_green(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_r_g_b_a_get_green(long self);

    static final void setGreen(RGBA self, double green) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_r_g_b_a_set_green(pointerOf(self), green);
        }
    }

    private static native final void gdk_r_g_b_a_set_green(long self, double green);

    static final double getBlue(RGBA self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_r_g_b_a_get_blue(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_r_g_b_a_get_blue(long self);

    static final void setBlue(RGBA self, double blue) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_r_g_b_a_set_blue(pointerOf(self), blue);
        }
    }

    private static native final void gdk_r_g_b_a_set_blue(long self, double blue);

    static final double getAlpha(RGBA self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_r_g_b_a_get_alpha(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_r_g_b_a_get_alpha(long self);

    static final void setAlpha(RGBA self, double alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_r_g_b_a_set_alpha(pointerOf(self), alpha);
        }
    }

    private static native final void gdk_r_g_b_a_set_alpha(long self, double alpha);

    static final RGBA copy(RGBA self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_rgba_copy(pointerOf(self));

            return (RGBA) boxedFor(RGBA.class, result);
        }
    }

    private static native final long gdk_rgba_copy(long self);

    static final boolean equal(RGBA self, RGBA p2) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (p2 == null) {
            throw new IllegalArgumentException("p2 can't be null");
        }

        synchronized (lock) {
            result = gdk_rgba_equal(pointerOf(self), pointerOf(p2));

            return result;
        }
    }

    private static native final boolean gdk_rgba_equal(long self, long p2);

    static final void free(RGBA self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_rgba_free(pointerOf(self));
        }
    }

    private static native final void gdk_rgba_free(long self);

    static final int hash(RGBA self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_rgba_hash(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_rgba_hash(long self);

    static final boolean parse(RGBA self, String spec) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (spec == null) {
            throw new IllegalArgumentException("spec can't be null");
        }

        synchronized (lock) {
            result = gdk_rgba_parse(pointerOf(self), spec);

            return result;
        }
    }

    private static native final boolean gdk_rgba_parse(long self, String spec);

    static final String toString(RGBA self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_rgba_to_string(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_rgba_to_string(long self);
}

