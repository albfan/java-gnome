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

import org.gnome.gdk.Gravity;
import org.gnome.gdk.Plumbing;

final class GdkGeometry extends Plumbing
{
    private GdkGeometry() {}

    static final int getMinWidth(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_min_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_min_width(long self);

    static final void setMinWidth(Geometry self, int minWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_min_width(pointerOf(self), minWidth);
        }
    }

    private static native final void gdk_geometry_set_min_width(long self, int minWidth);

    static final int getMinHeight(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_min_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_min_height(long self);

    static final void setMinHeight(Geometry self, int minHeight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_min_height(pointerOf(self), minHeight);
        }
    }

    private static native final void gdk_geometry_set_min_height(long self, int minHeight);

    static final int getMaxWidth(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_max_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_max_width(long self);

    static final void setMaxWidth(Geometry self, int maxWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_max_width(pointerOf(self), maxWidth);
        }
    }

    private static native final void gdk_geometry_set_max_width(long self, int maxWidth);

    static final int getMaxHeight(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_max_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_max_height(long self);

    static final void setMaxHeight(Geometry self, int maxHeight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_max_height(pointerOf(self), maxHeight);
        }
    }

    private static native final void gdk_geometry_set_max_height(long self, int maxHeight);

    static final int getBaseWidth(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_base_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_base_width(long self);

    static final void setBaseWidth(Geometry self, int baseWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_base_width(pointerOf(self), baseWidth);
        }
    }

    private static native final void gdk_geometry_set_base_width(long self, int baseWidth);

    static final int getBaseHeight(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_base_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_base_height(long self);

    static final void setBaseHeight(Geometry self, int baseHeight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_base_height(pointerOf(self), baseHeight);
        }
    }

    private static native final void gdk_geometry_set_base_height(long self, int baseHeight);

    static final int getWidthInc(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_width_inc(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_width_inc(long self);

    static final void setWidthInc(Geometry self, int widthInc) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_width_inc(pointerOf(self), widthInc);
        }
    }

    private static native final void gdk_geometry_set_width_inc(long self, int widthInc);

    static final int getHeightInc(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_height_inc(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_geometry_get_height_inc(long self);

    static final void setHeightInc(Geometry self, int heightInc) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_height_inc(pointerOf(self), heightInc);
        }
    }

    private static native final void gdk_geometry_set_height_inc(long self, int heightInc);

    static final double getMinAspect(Geometry self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_min_aspect(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_geometry_get_min_aspect(long self);

    static final void setMinAspect(Geometry self, double minAspect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_min_aspect(pointerOf(self), minAspect);
        }
    }

    private static native final void gdk_geometry_set_min_aspect(long self, double minAspect);

    static final double getMaxAspect(Geometry self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_max_aspect(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_geometry_get_max_aspect(long self);

    static final void setMaxAspect(Geometry self, double maxAspect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_max_aspect(pointerOf(self), maxAspect);
        }
    }

    private static native final void gdk_geometry_set_max_aspect(long self, double maxAspect);

    static final Gravity getWinGravity(Geometry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_geometry_get_win_gravity(pointerOf(self));

            return (Gravity) enumFor(Gravity.class, result);
        }
    }

    private static native final int gdk_geometry_get_win_gravity(long self);

    static final void setWinGravity(Geometry self, Gravity winGravity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (winGravity == null) {
            throw new IllegalArgumentException("winGravity can't be null");
        }

        synchronized (lock) {
            gdk_geometry_set_win_gravity(pointerOf(self), numOf(winGravity));
        }
    }

    private static native final void gdk_geometry_set_win_gravity(long self, int winGravity);
}

