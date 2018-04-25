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
package org.freedesktop.cairo;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.cairo.Antialias;
import org.freedesktop.cairo.Context;
import org.freedesktop.cairo.FillRule;
import org.freedesktop.cairo.Matrix;
import org.freedesktop.cairo.Operator;
import org.freedesktop.cairo.Pattern;
import org.freedesktop.cairo.Plumbing;
import org.freedesktop.cairo.Status;
import org.freedesktop.cairo.Surface;
import org.gnome.pango.Layout;
import org.gnome.pango.LayoutLine;
import org.gnome.rsvg.Handle;

final class CairoContext extends Plumbing
{
    private CairoContext() {}

    static final long createContext(Surface target) {
        long result;

        if (target == null) {
            throw new IllegalArgumentException("target can't be null");
        }

        synchronized (lock) {
            result = cairo_create(pointerOf(target));

            return result;
        }
    }

    private static native final long cairo_create(long target);

    static final void destroy(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_destroy(pointerOf(self));
        }
    }

    private static native final void cairo_destroy(long self);

    static final void save(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_save(pointerOf(self));
        }
    }

    private static native final void cairo_save(long self);

    static final void restore(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_restore(pointerOf(self));
        }
    }

    private static native final void cairo_restore(long self);

    static final void clip(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_clip(pointerOf(self));
        }
    }

    private static native final void cairo_clip(long self);

    static final void clipPreserve(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_clip_preserve(pointerOf(self));
        }
    }

    private static native final void cairo_clip_preserve(long self);

    static final void stroke(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_stroke(pointerOf(self));
        }
    }

    private static native final void cairo_stroke(long self);

    static final void strokePreserve(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_stroke_preserve(pointerOf(self));
        }
    }

    private static native final void cairo_stroke_preserve(long self);

    static final void rotate(Context self, double rad) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_rotate(pointerOf(self), rad);
        }
    }

    private static native final void cairo_rotate(long self, double rad);

    static final void translate(Context self, double tx, double ty) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_translate(pointerOf(self), tx, ty);
        }
    }

    private static native final void cairo_translate(long self, double tx, double ty);

    static final void scale(Context self, double sx, double sy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_scale(pointerOf(self), sx, sy);
        }
    }

    private static native final void cairo_scale(long self, double sx, double sy);

    static final void setSourceRgb(Context self, double red, double green, double blue) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_set_source_rgb(pointerOf(self), red, green, blue);
        }
    }

    private static native final void cairo_set_source_rgb(long self, double red, double green, double blue);

    static final void setSourceRgba(Context self, double red, double green, double blue, double alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_set_source_rgba(pointerOf(self), red, green, blue, alpha);
        }
    }

    private static native final void cairo_set_source_rgba(long self, double red, double green, double blue, double alpha);

    static final void lineTo(Context self, double x, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_line_to(pointerOf(self), x, y);
        }
    }

    private static native final void cairo_line_to(long self, double x, double y);

    static final void relLineTo(Context self, double x, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_rel_line_to(pointerOf(self), x, y);
        }
    }

    private static native final void cairo_rel_line_to(long self, double x, double y);

    static final void setLineWidth(Context self, double width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_set_line_width(pointerOf(self), width);
        }
    }

    private static native final void cairo_set_line_width(long self, double width);

    static final double getLineWidth(Context self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_get_line_width(pointerOf(self));

            return result;
        }
    }

    private static native final double cairo_get_line_width(long self);

    static final void setAntialias(Context self, Antialias antialias) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (antialias == null) {
            throw new IllegalArgumentException("antialias can't be null");
        }

        synchronized (lock) {
            cairo_set_antialias(pointerOf(self), numOf(antialias));
        }
    }

    private static native final void cairo_set_antialias(long self, int antialias);

    static final void moveTo(Context self, double x, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_move_to(pointerOf(self), x, y);
        }
    }

    private static native final void cairo_move_to(long self, double x, double y);

    static final void relMoveTo(Context self, double x, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_rel_move_to(pointerOf(self), x, y);
        }
    }

    private static native final void cairo_rel_move_to(long self, double x, double y);

    static final void rectangle(Context self, double x, double y, double width, double height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_rectangle(pointerOf(self), x, y, width, height);
        }
    }

    private static native final void cairo_rectangle(long self, double x, double y, double width, double height);

    static final void arc(Context self, double xc, double yc, double radius, double angle1, double angle2) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_arc(pointerOf(self), xc, yc, radius, angle1, angle2);
        }
    }

    private static native final void cairo_arc(long self, double xc, double yc, double radius, double angle1, double angle2);

    static final void arcNegative(Context self, double xc, double yc, double radius, double angle1, double angle2) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_arc_negative(pointerOf(self), xc, yc, radius, angle1, angle2);
        }
    }

    private static native final void cairo_arc_negative(long self, double xc, double yc, double radius, double angle1, double angle2);

    static final void fill(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_fill(pointerOf(self));
        }
    }

    private static native final void cairo_fill(long self);

    static final void fillPreserve(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_fill_preserve(pointerOf(self));
        }
    }

    private static native final void cairo_fill_preserve(long self);

    static final void showLayout(Context self, Layout layout) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (layout == null) {
            throw new IllegalArgumentException("layout can't be null");
        }

        synchronized (lock) {
            pango_cairo_show_layout(pointerOf(self), pointerOf(layout));
        }
    }

    private static native final void pango_cairo_show_layout(long self, long layout);

    static final void updateLayout(Context self, Layout layout) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (layout == null) {
            throw new IllegalArgumentException("layout can't be null");
        }

        synchronized (lock) {
            pango_cairo_update_layout(pointerOf(self), pointerOf(layout));
        }
    }

    private static native final void pango_cairo_update_layout(long self, long layout);

    static final void showLayoutLine(Context self, LayoutLine line) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (line == null) {
            throw new IllegalArgumentException("line can't be null");
        }

        synchronized (lock) {
            pango_cairo_show_layout_line(pointerOf(self), pointerOf(line));
        }
    }

    private static native final void pango_cairo_show_layout_line(long self, long line);

    static final Pattern getSource(Context self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_get_source(pointerOf(self));

            return (Pattern) entityFor(Pattern.class,  result);
        }
    }

    private static native final long cairo_get_source(long self);

    static final Status status(Context self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_status(pointerOf(self));

            return (Status) enumFor(Status.class, result);
        }
    }

    private static native final int cairo_status(long self);

    static final Surface getTarget(Context self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_get_target(pointerOf(self));

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long cairo_get_target(long self);

    static final void setOperator(Context self, Operator op) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (op == null) {
            throw new IllegalArgumentException("op can't be null");
        }

        synchronized (lock) {
            cairo_set_operator(pointerOf(self), numOf(op));
        }
    }

    private static native final void cairo_set_operator(long self, int op);

    static final void paint(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_paint(pointerOf(self));
        }
    }

    private static native final void cairo_paint(long self);

    static final void paintWithAlpha(Context self, double alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_paint_with_alpha(pointerOf(self), alpha);
        }
    }

    private static native final void cairo_paint_with_alpha(long self, double alpha);

    static final void setSource(Context self, Pattern pattern) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pattern == null) {
            throw new IllegalArgumentException("pattern can't be null");
        }

        synchronized (lock) {
            cairo_set_source(pointerOf(self), pointerOf(pattern));
        }
    }

    private static native final void cairo_set_source(long self, long pattern);

    static final void mask(Context self, Pattern pattern) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pattern == null) {
            throw new IllegalArgumentException("pattern can't be null");
        }

        synchronized (lock) {
            cairo_mask(pointerOf(self), pointerOf(pattern));
        }
    }

    private static native final void cairo_mask(long self, long pattern);

    static final void maskSurface(Context self, Surface surface, double x, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (surface == null) {
            throw new IllegalArgumentException("surface can't be null");
        }

        synchronized (lock) {
            cairo_mask_surface(pointerOf(self), pointerOf(surface), x, y);
        }
    }

    private static native final void cairo_mask_surface(long self, long surface, double x, double y);

    static final void setSourceSurface(Context self, Surface surface, double x, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (surface == null) {
            throw new IllegalArgumentException("surface can't be null");
        }

        synchronized (lock) {
            cairo_set_source_surface(pointerOf(self), pointerOf(surface), x, y);
        }
    }

    private static native final void cairo_set_source_surface(long self, long surface, double x, double y);

    static final void getCurrentPoint(Context self, double[] x, double[] y) {
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
            cairo_get_current_point(pointerOf(self), x, y);
        }
    }

    private static native final void cairo_get_current_point(long self, double[] x, double[] y);

    static final String statusToString(Status status) {
        String result;

        if (status == null) {
            throw new IllegalArgumentException("status can't be null");
        }

        synchronized (lock) {
            result = cairo_status_to_string(numOf(status));

            return result;
        }
    }

    private static native final String cairo_status_to_string(int status);

    static final void transform(Context self, Matrix matrix) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (matrix == null) {
            throw new IllegalArgumentException("matrix can't be null");
        }

        synchronized (lock) {
            cairo_transform(pointerOf(self), pointerOf(matrix));
        }
    }

    private static native final void cairo_transform(long self, long matrix);

    static final void setDash(Context self, double[] dashes, int numDashes, double offset) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dashes == null) {
            throw new IllegalArgumentException("dashes can't be null");
        }

        synchronized (lock) {
            cairo_set_dash(pointerOf(self), dashes, numDashes, offset);
        }
    }

    private static native final void cairo_set_dash(long self, double[] dashes, int numDashes, double offset);

    static final void showHandle(Handle handle, Context cr) {
        if (handle == null) {
            throw new IllegalArgumentException("handle can't be null");
        }

        if (cr == null) {
            throw new IllegalArgumentException("cr can't be null");
        }

        synchronized (lock) {
            rsvg_handle_render_cairo(pointerOf(handle), pointerOf(cr));
        }
    }

    private static native final void rsvg_handle_render_cairo(long handle, long cr);

    static final void closePath(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_close_path(pointerOf(self));
        }
    }

    private static native final void cairo_close_path(long self);

    static final void newSubPath(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_new_sub_path(pointerOf(self));
        }
    }

    private static native final void cairo_new_sub_path(long self);

    static final boolean inFill(Context self, double x, double y) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_in_fill(pointerOf(self), x, y);

            return result;
        }
    }

    private static native final boolean cairo_in_fill(long self, double x, double y);

    static final boolean inStroke(Context self, double x, double y) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_in_stroke(pointerOf(self), x, y);

            return result;
        }
    }

    private static native final boolean cairo_in_stroke(long self, double x, double y);

    static final void setFillRule(Context self, FillRule fillRule) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fillRule == null) {
            throw new IllegalArgumentException("fillRule can't be null");
        }

        synchronized (lock) {
            cairo_set_fill_rule(pointerOf(self), numOf(fillRule));
        }
    }

    private static native final void cairo_set_fill_rule(long self, int fillRule);
}

