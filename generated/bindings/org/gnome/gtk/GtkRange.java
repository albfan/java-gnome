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

import org.gnome.gdk.Rectangle;
import org.gnome.glib.Signal;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.Border;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Range;
import org.gnome.gtk.ScrollType;
import org.gnome.gtk.SensitivityType;

final class GtkRange extends Plumbing
{
    private GtkRange() {}

    static final Adjustment getAdjustment(Range self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_adjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_range_get_adjustment(long self);

    static final double getFillLevel(Range self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_fill_level(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_range_get_fill_level(long self);

    static final boolean getFlippable(Range self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_flippable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_range_get_flippable(long self);

    static final boolean getInverted(Range self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_inverted(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_range_get_inverted(long self);

    static final SensitivityType getLowerStepperSensitivity(Range self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_lower_stepper_sensitivity(pointerOf(self));

            return (SensitivityType) enumFor(SensitivityType.class, result);
        }
    }

    private static native final int gtk_range_get_lower_stepper_sensitivity(long self);

    static final int getMinSliderSize(Range self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_min_slider_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_range_get_min_slider_size(long self);

    static final void getRangeRect(Range self, Rectangle rangeRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_get_range_rect(pointerOf(self), pointerOf(rangeRect));
        }
    }

    private static native final void gtk_range_get_range_rect(long self, long rangeRect);

    static final boolean getRestrictToFillLevel(Range self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_restrict_to_fill_level(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_range_get_restrict_to_fill_level(long self);

    static final int getRoundDigits(Range self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_round_digits(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_range_get_round_digits(long self);

    static final boolean getShowFillLevel(Range self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_show_fill_level(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_range_get_show_fill_level(long self);

    static final void getSliderRange(Range self, int[] sliderStart, int[] sliderEnd) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_get_slider_range(pointerOf(self), sliderStart, sliderEnd);
        }
    }

    private static native final void gtk_range_get_slider_range(long self, int[] sliderStart, int[] sliderEnd);

    static final boolean getSliderSizeFixed(Range self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_slider_size_fixed(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_range_get_slider_size_fixed(long self);

    static final SensitivityType getUpperStepperSensitivity(Range self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_upper_stepper_sensitivity(pointerOf(self));

            return (SensitivityType) enumFor(SensitivityType.class, result);
        }
    }

    private static native final int gtk_range_get_upper_stepper_sensitivity(long self);

    static final double getValue(Range self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_range_get_value(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_range_get_value(long self);

    static final void setAdjustment(Range self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (adjustment == null) {
            throw new IllegalArgumentException("adjustment can't be null");
        }

        synchronized (lock) {
            gtk_range_set_adjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_range_set_adjustment(long self, long adjustment);

    static final void setFillLevel(Range self, double fillLevel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_fill_level(pointerOf(self), fillLevel);
        }
    }

    private static native final void gtk_range_set_fill_level(long self, double fillLevel);

    static final void setFlippable(Range self, boolean flippable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_flippable(pointerOf(self), flippable);
        }
    }

    private static native final void gtk_range_set_flippable(long self, boolean flippable);

    static final void setIncrements(Range self, double step, double page) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_increments(pointerOf(self), step, page);
        }
    }

    private static native final void gtk_range_set_increments(long self, double step, double page);

    static final void setInverted(Range self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_inverted(pointerOf(self), setting);
        }
    }

    private static native final void gtk_range_set_inverted(long self, boolean setting);

    static final void setLowerStepperSensitivity(Range self, SensitivityType sensitivity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sensitivity == null) {
            throw new IllegalArgumentException("sensitivity can't be null");
        }

        synchronized (lock) {
            gtk_range_set_lower_stepper_sensitivity(pointerOf(self), numOf(sensitivity));
        }
    }

    private static native final void gtk_range_set_lower_stepper_sensitivity(long self, int sensitivity);

    static final void setMinSliderSize(Range self, int minSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_min_slider_size(pointerOf(self), minSize);
        }
    }

    private static native final void gtk_range_set_min_slider_size(long self, int minSize);

    static final void setRange(Range self, double min, double max) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_range(pointerOf(self), min, max);
        }
    }

    private static native final void gtk_range_set_range(long self, double min, double max);

    static final void setRestrictToFillLevel(Range self, boolean restrictToFillLevel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_restrict_to_fill_level(pointerOf(self), restrictToFillLevel);
        }
    }

    private static native final void gtk_range_set_restrict_to_fill_level(long self, boolean restrictToFillLevel);

    static final void setRoundDigits(Range self, int roundDigits) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_round_digits(pointerOf(self), roundDigits);
        }
    }

    private static native final void gtk_range_set_round_digits(long self, int roundDigits);

    static final void setShowFillLevel(Range self, boolean showFillLevel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_show_fill_level(pointerOf(self), showFillLevel);
        }
    }

    private static native final void gtk_range_set_show_fill_level(long self, boolean showFillLevel);

    static final void setSliderSizeFixed(Range self, boolean sizeFixed) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_slider_size_fixed(pointerOf(self), sizeFixed);
        }
    }

    private static native final void gtk_range_set_slider_size_fixed(long self, boolean sizeFixed);

    static final void setUpperStepperSensitivity(Range self, SensitivityType sensitivity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sensitivity == null) {
            throw new IllegalArgumentException("sensitivity can't be null");
        }

        synchronized (lock) {
            gtk_range_set_upper_stepper_sensitivity(pointerOf(self), numOf(sensitivity));
        }
    }

    private static native final void gtk_range_set_upper_stepper_sensitivity(long self, int sensitivity);

    static final void setValue(Range self, double value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_range_set_value(pointerOf(self), value);
        }
    }

    private static native final void gtk_range_set_value(long self, double value);

    interface AdjustBoundsSignal extends Signal
    {
        void onAdjustBounds(Range source, double newValue);
    }

    static final void connect(Range self, GtkRange.AdjustBoundsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRange.class, "adjust-bounds", after);
    }

    protected static final void receiveAdjustBounds(Signal handler, long source, double newValue) {
        ((GtkRange.AdjustBoundsSignal) handler).onAdjustBounds((Range) objectFor(source), newValue);
    }

    interface ChangeValueSignal extends Signal
    {
        boolean onChangeValue(Range source, ScrollType scroll, double newValue);
    }

    static final void connect(Range self, GtkRange.ChangeValueSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRange.class, "change-value", after);
    }

    protected static final boolean receiveChangeValue(Signal handler, long source, int scroll, double newValue) {
        boolean result;

        result = ((GtkRange.ChangeValueSignal) handler).onChangeValue((Range) objectFor(source), (ScrollType) enumFor(ScrollType.class, scroll), newValue);

        return result;
    }

    interface GetRangeBorderSignal extends Signal
    {
        void onGetRangeBorder(Range source, Border border);
    }

    static final void connect(Range self, GtkRange.GetRangeBorderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRange.class, "get-range-border", after);
    }

    protected static final void receiveGetRangeBorder(Signal handler, long source, long border) {
        ((GtkRange.GetRangeBorderSignal) handler).onGetRangeBorder((Range) objectFor(source), (Border) boxedFor(Border.class, border));
    }

    interface GetRangeSizeRequestSignal extends Signal
    {
        void onGetRangeSizeRequest(Range source, Orientation orientation, int[] minimum, int[] natural);
    }

    static final void connect(Range self, GtkRange.GetRangeSizeRequestSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRange.class, "get-range-size-request", after);
    }

    protected static final void receiveGetRangeSizeRequest(Signal handler, long source, int orientation, int[] minimum, int[] natural) {
        ((GtkRange.GetRangeSizeRequestSignal) handler).onGetRangeSizeRequest((Range) objectFor(source), (Orientation) enumFor(Orientation.class, orientation), minimum, natural);
    }

    interface MoveSliderSignal extends Signal
    {
        void onMoveSlider(Range source, ScrollType scroll);
    }

    static final void connect(Range self, GtkRange.MoveSliderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRange.class, "move-slider", after);
    }

    protected static final void receiveMoveSlider(Signal handler, long source, int scroll) {
        ((GtkRange.MoveSliderSignal) handler).onMoveSlider((Range) objectFor(source), (ScrollType) enumFor(ScrollType.class, scroll));
    }

    interface ValueChangedSignal extends Signal
    {
        void onValueChanged(Range source);
    }

    static final void connect(Range self, GtkRange.ValueChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRange.class, "value-changed", after);
    }

    protected static final void receiveValueChanged(Signal handler, long source) {
        ((GtkRange.ValueChangedSignal) handler).onValueChanged((Range) objectFor(source));
    }
}

