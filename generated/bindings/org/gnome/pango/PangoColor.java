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
package org.gnome.pango;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.pango.Color;
import org.gnome.pango.Plumbing;

final class PangoColor extends Plumbing
{
    private PangoColor() {}

    static final char getRed(Color self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_color_get_red(pointerOf(self));

            return result;
        }
    }

    private static native final char pango_color_get_red(long self);

    static final void setRed(Color self, char red) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_color_set_red(pointerOf(self), red);
        }
    }

    private static native final void pango_color_set_red(long self, char red);

    static final char getGreen(Color self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_color_get_green(pointerOf(self));

            return result;
        }
    }

    private static native final char pango_color_get_green(long self);

    static final void setGreen(Color self, char green) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_color_set_green(pointerOf(self), green);
        }
    }

    private static native final void pango_color_set_green(long self, char green);

    static final char getBlue(Color self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_color_get_blue(pointerOf(self));

            return result;
        }
    }

    private static native final char pango_color_get_blue(long self);

    static final void setBlue(Color self, char blue) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_color_set_blue(pointerOf(self), blue);
        }
    }

    private static native final void pango_color_set_blue(long self, char blue);

    static final Color copy(Color self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_color_copy(pointerOf(self));

            return (Color) boxedFor(Color.class, result);
        }
    }

    private static native final long pango_color_copy(long self);

    static final void free(Color self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_color_free(pointerOf(self));
        }
    }

    private static native final void pango_color_free(long self);

    static final boolean parse(Color self, String spec) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (spec == null) {
            throw new IllegalArgumentException("spec can't be null");
        }

        synchronized (lock) {
            result = pango_color_parse(pointerOf(self), spec);

            return result;
        }
    }

    private static native final boolean pango_color_parse(long self, String spec);

    static final String toString(Color self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_color_to_string(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_color_to_string(long self);
}

