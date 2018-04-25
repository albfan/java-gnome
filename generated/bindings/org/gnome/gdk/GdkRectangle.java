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
import org.gnome.gdk.Rectangle;

final class GdkRectangle extends Plumbing
{
    private GdkRectangle() {}

    static final int getX(Rectangle self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_rectangle_get_x(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_rectangle_get_x(long self);

    static final void setX(Rectangle self, int x) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_rectangle_set_x(pointerOf(self), x);
        }
    }

    private static native final void gdk_rectangle_set_x(long self, int x);

    static final int getY(Rectangle self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_rectangle_get_y(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_rectangle_get_y(long self);

    static final void setY(Rectangle self, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_rectangle_set_y(pointerOf(self), y);
        }
    }

    private static native final void gdk_rectangle_set_y(long self, int y);

    static final int getWidth(Rectangle self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_rectangle_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_rectangle_get_width(long self);

    static final void setWidth(Rectangle self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_rectangle_set_width(pointerOf(self), width);
        }
    }

    private static native final void gdk_rectangle_set_width(long self, int width);

    static final int getHeight(Rectangle self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_rectangle_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_rectangle_get_height(long self);

    static final void setHeight(Rectangle self, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_rectangle_set_height(pointerOf(self), height);
        }
    }

    private static native final void gdk_rectangle_set_height(long self, int height);

    static final boolean equal(Rectangle self, org.gnome.gdk.Rectangle rect2) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rect2 == null) {
            throw new IllegalArgumentException("rect2 can't be null");
        }

        synchronized (lock) {
            result = gdk_rectangle_equal(pointerOf(self), pointerOf(rect2));

            return result;
        }
    }

    private static native final boolean gdk_rectangle_equal(long self, long rect2);

    static final boolean intersect(Rectangle self, org.gnome.gdk.Rectangle src2, Rectangle dest) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (src2 == null) {
            throw new IllegalArgumentException("src2 can't be null");
        }

        synchronized (lock) {
            result = gdk_rectangle_intersect(pointerOf(self), pointerOf(src2), pointerOf(dest));

            return result;
        }
    }

    private static native final boolean gdk_rectangle_intersect(long self, long src2, long dest);

    static final void union(Rectangle self, org.gnome.gdk.Rectangle src2, Rectangle dest) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (src2 == null) {
            throw new IllegalArgumentException("src2 can't be null");
        }

        synchronized (lock) {
            gdk_rectangle_union(pointerOf(self), pointerOf(src2), pointerOf(dest));
        }
    }

    private static native final void gdk_rectangle_union(long self, long src2, long dest);
}

