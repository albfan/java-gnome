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

import org.gnome.glib.Signal;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PositionType;
import org.gnome.gtk.Scale;
import org.gnome.pango.Layout;

final class GtkScale extends Plumbing
{
    private GtkScale() {}

    static final long createScale(Orientation orientation, Adjustment adjustment) {
        long result;

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_new(numOf(orientation), pointerOf(adjustment));

            return result;
        }
    }

    private static native final long gtk_scale_new(int orientation, long adjustment);

    static final long createScaleWithRange(Orientation orientation, double min, double max, double step) {
        long result;

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_new_with_range(numOf(orientation), min, max, step);

            return result;
        }
    }

    private static native final long gtk_scale_new_with_range(int orientation, double min, double max, double step);

    static final void addMark(Scale self, double value, PositionType position, String markup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (position == null) {
            throw new IllegalArgumentException("position can't be null");
        }

        synchronized (lock) {
            gtk_scale_add_mark(pointerOf(self), value, numOf(position), markup);
        }
    }

    private static native final void gtk_scale_add_mark(long self, double value, int position, String markup);

    static final void clearMarks(Scale self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scale_clear_marks(pointerOf(self));
        }
    }

    private static native final void gtk_scale_clear_marks(long self);

    static final int getDigits(Scale self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_get_digits(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_scale_get_digits(long self);

    static final boolean getDrawValue(Scale self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_get_draw_value(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_scale_get_draw_value(long self);

    static final boolean getHasOrigin(Scale self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_get_has_origin(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_scale_get_has_origin(long self);

    static final Layout getLayout(Scale self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_get_layout(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long gtk_scale_get_layout(long self);

    static final void getLayoutOffsets(Scale self, int[] x, int[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scale_get_layout_offsets(pointerOf(self), x, y);
        }
    }

    private static native final void gtk_scale_get_layout_offsets(long self, int[] x, int[] y);

    static final PositionType getValuePos(Scale self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_get_value_pos(pointerOf(self));

            return (PositionType) enumFor(PositionType.class, result);
        }
    }

    private static native final int gtk_scale_get_value_pos(long self);

    static final void setDigits(Scale self, int digits) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scale_set_digits(pointerOf(self), digits);
        }
    }

    private static native final void gtk_scale_set_digits(long self, int digits);

    static final void setDrawValue(Scale self, boolean drawValue) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scale_set_draw_value(pointerOf(self), drawValue);
        }
    }

    private static native final void gtk_scale_set_draw_value(long self, boolean drawValue);

    static final void setHasOrigin(Scale self, boolean hasOrigin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scale_set_has_origin(pointerOf(self), hasOrigin);
        }
    }

    private static native final void gtk_scale_set_has_origin(long self, boolean hasOrigin);

    static final void setValuePos(Scale self, PositionType pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pos == null) {
            throw new IllegalArgumentException("pos can't be null");
        }

        synchronized (lock) {
            gtk_scale_set_value_pos(pointerOf(self), numOf(pos));
        }
    }

    private static native final void gtk_scale_set_value_pos(long self, int pos);

    interface DrawValueSignal extends Signal
    {
        void onDrawValue(Scale source);
    }

    static final void connect(Scale self, GtkScale.DrawValueSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScale.class, "draw-value", after);
    }

    protected static final void receiveDrawValue(Signal handler, long source) {
        ((GtkScale.DrawValueSignal) handler).onDrawValue((Scale) objectFor(source));
    }

    interface FormatValueSignal extends Signal
    {
        String onFormatValue(Scale source, double value);
    }

    static final void connect(Scale self, GtkScale.FormatValueSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScale.class, "format-value", after);
    }

    protected static final String receiveFormatValue(Signal handler, long source, double value) {
        String result;

        result = ((GtkScale.FormatValueSignal) handler).onFormatValue((Scale) objectFor(source), value);

        return result;
    }

    interface GetLayoutOffsetsSignal extends Signal
    {
        void onGetLayoutOffsets(Scale source, int[] x, int[] y);
    }

    static final void connect(Scale self, GtkScale.GetLayoutOffsetsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScale.class, "get-layout-offsets", after);
    }

    protected static final void receiveGetLayoutOffsets(Signal handler, long source, int[] x, int[] y) {
        ((GtkScale.GetLayoutOffsetsSignal) handler).onGetLayoutOffsets((Scale) objectFor(source), x, y);
    }
}

