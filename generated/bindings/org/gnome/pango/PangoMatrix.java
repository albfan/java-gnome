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

import org.gnome.pango.Matrix;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Rectangle;

final class PangoMatrix extends Plumbing
{
    private PangoMatrix() {}

    static final double getXx(Matrix self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_get_xx(pointerOf(self));

            return result;
        }
    }

    private static native final double pango_matrix_get_xx(long self);

    static final void setXx(Matrix self, double xx) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_set_xx(pointerOf(self), xx);
        }
    }

    private static native final void pango_matrix_set_xx(long self, double xx);

    static final double getXy(Matrix self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_get_xy(pointerOf(self));

            return result;
        }
    }

    private static native final double pango_matrix_get_xy(long self);

    static final void setXy(Matrix self, double xy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_set_xy(pointerOf(self), xy);
        }
    }

    private static native final void pango_matrix_set_xy(long self, double xy);

    static final double getYx(Matrix self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_get_yx(pointerOf(self));

            return result;
        }
    }

    private static native final double pango_matrix_get_yx(long self);

    static final void setYx(Matrix self, double yx) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_set_yx(pointerOf(self), yx);
        }
    }

    private static native final void pango_matrix_set_yx(long self, double yx);

    static final double getYy(Matrix self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_get_yy(pointerOf(self));

            return result;
        }
    }

    private static native final double pango_matrix_get_yy(long self);

    static final void setYy(Matrix self, double yy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_set_yy(pointerOf(self), yy);
        }
    }

    private static native final void pango_matrix_set_yy(long self, double yy);

    static final double getX0(Matrix self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_get_x0(pointerOf(self));

            return result;
        }
    }

    private static native final double pango_matrix_get_x0(long self);

    static final void setX0(Matrix self, double x0) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_set_x0(pointerOf(self), x0);
        }
    }

    private static native final void pango_matrix_set_x0(long self, double x0);

    static final double getY0(Matrix self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_get_y0(pointerOf(self));

            return result;
        }
    }

    private static native final double pango_matrix_get_y0(long self);

    static final void setY0(Matrix self, double y0) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_set_y0(pointerOf(self), y0);
        }
    }

    private static native final void pango_matrix_set_y0(long self, double y0);

    static final void concat(Matrix self, org.gnome.pango.Matrix newMatrix) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newMatrix == null) {
            throw new IllegalArgumentException("newMatrix can't be null");
        }

        synchronized (lock) {
            pango_matrix_concat(pointerOf(self), pointerOf(newMatrix));
        }
    }

    private static native final void pango_matrix_concat(long self, long newMatrix);

    static final Matrix copy(Matrix self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_copy(pointerOf(self));

            return (Matrix) boxedFor(Matrix.class, result);
        }
    }

    private static native final long pango_matrix_copy(long self);

    static final void free(Matrix self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_free(pointerOf(self));
        }
    }

    private static native final void pango_matrix_free(long self);

    static final double getFontScaleFactor(Matrix self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_matrix_get_font_scale_factor(pointerOf(self));

            return result;
        }
    }

    private static native final double pango_matrix_get_font_scale_factor(long self);

    static final void getFontScaleFactors(Matrix self, double[] xscale, double[] yscale) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_get_font_scale_factors(pointerOf(self), xscale, yscale);
        }
    }

    private static native final void pango_matrix_get_font_scale_factors(long self, double[] xscale, double[] yscale);

    static final void rotate(Matrix self, double degrees) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_rotate(pointerOf(self), degrees);
        }
    }

    private static native final void pango_matrix_rotate(long self, double degrees);

    static final void scale(Matrix self, double scaleX, double scaleY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_scale(pointerOf(self), scaleX, scaleY);
        }
    }

    private static native final void pango_matrix_scale(long self, double scaleX, double scaleY);

    static final void transformDistance(Matrix self, double[] dx, double[] dy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dx == null) {
            throw new IllegalArgumentException("dx can't be null");
        }

        if (dy == null) {
            throw new IllegalArgumentException("dy can't be null");
        }

        synchronized (lock) {
            pango_matrix_transform_distance(pointerOf(self), dx, dy);
        }
    }

    private static native final void pango_matrix_transform_distance(long self, double[] dx, double[] dy);

    static final void transformPixelRectangle(Matrix self, Rectangle rect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_transform_pixel_rectangle(pointerOf(self), pointerOf(rect));
        }
    }

    private static native final void pango_matrix_transform_pixel_rectangle(long self, long rect);

    static final void transformPoint(Matrix self, double[] x, double[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (x == null) {
            throw new IllegalArgumentException("x can't be null");
        }

        if (y == null) {
            throw new IllegalArgumentException("y can't be null");
        }

        synchronized (lock) {
            pango_matrix_transform_point(pointerOf(self), x, y);
        }
    }

    private static native final void pango_matrix_transform_point(long self, double[] x, double[] y);

    static final void transformRectangle(Matrix self, Rectangle rect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_transform_rectangle(pointerOf(self), pointerOf(rect));
        }
    }

    private static native final void pango_matrix_transform_rectangle(long self, long rect);

    static final void translate(Matrix self, double tx, double ty) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_matrix_translate(pointerOf(self), tx, ty);
        }
    }

    private static native final void pango_matrix_translate(long self, double tx, double ty);
}

