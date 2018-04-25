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
package org.gnome.rsvg;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.rsvg.Plumbing;

final class RsvgDimensionData extends Plumbing
{
    private RsvgDimensionData() {}

    static final int getWidth(DimensionData self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_dimension_data_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int rsvg_dimension_data_get_width(long self);

    static final void setWidth(DimensionData self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_dimension_data_set_width(pointerOf(self), width);
        }
    }

    private static native final void rsvg_dimension_data_set_width(long self, int width);

    static final int getHeight(DimensionData self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_dimension_data_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int rsvg_dimension_data_get_height(long self);

    static final void setHeight(DimensionData self, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_dimension_data_set_height(pointerOf(self), height);
        }
    }

    private static native final void rsvg_dimension_data_set_height(long self, int height);

    static final double getEm(DimensionData self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_dimension_data_get_em(pointerOf(self));

            return result;
        }
    }

    private static native final double rsvg_dimension_data_get_em(long self);

    static final void setEm(DimensionData self, double em) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_dimension_data_set_em(pointerOf(self), em);
        }
    }

    private static native final void rsvg_dimension_data_set_em(long self, double em);

    static final double getEx(DimensionData self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_dimension_data_get_ex(pointerOf(self));

            return result;
        }
    }

    private static native final double rsvg_dimension_data_get_ex(long self);

    static final void setEx(DimensionData self, double ex) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_dimension_data_set_ex(pointerOf(self), ex);
        }
    }

    private static native final void rsvg_dimension_data_set_ex(long self, double ex);
}

