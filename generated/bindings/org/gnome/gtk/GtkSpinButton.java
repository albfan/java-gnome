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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ScrollType;
import org.gnome.gtk.SpinButton;
import org.gnome.gtk.SpinButtonUpdatePolicy;
import org.gnome.gtk.SpinType;

final class GtkSpinButton extends Plumbing
{
    private GtkSpinButton() {}

    static final long createSpinButton(Adjustment adjustment, double climbRate, int digits) {
        long result;

        synchronized (lock) {
            result = gtk_spin_button_new(pointerOf(adjustment), climbRate, digits);

            return result;
        }
    }

    private static native final long gtk_spin_button_new(long adjustment, double climbRate, int digits);

    static final long createSpinButtonWithRange(double min, double max, double step) {
        long result;

        synchronized (lock) {
            result = gtk_spin_button_new_with_range(min, max, step);

            return result;
        }
    }

    private static native final long gtk_spin_button_new_with_range(double min, double max, double step);

    static final void configure(SpinButton self, Adjustment adjustment, double climbRate, int digits) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_configure(pointerOf(self), pointerOf(adjustment), climbRate, digits);
        }
    }

    private static native final void gtk_spin_button_configure(long self, long adjustment, double climbRate, int digits);

    static final Adjustment getAdjustment(SpinButton self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_adjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_spin_button_get_adjustment(long self);

    static final int getDigits(SpinButton self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_digits(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_spin_button_get_digits(long self);

    static final void getIncrements(SpinButton self, double[] step, double[] page) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_get_increments(pointerOf(self), step, page);
        }
    }

    private static native final void gtk_spin_button_get_increments(long self, double[] step, double[] page);

    static final boolean getNumeric(SpinButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_numeric(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_spin_button_get_numeric(long self);

    static final void getRange(SpinButton self, double[] min, double[] max) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_get_range(pointerOf(self), min, max);
        }
    }

    private static native final void gtk_spin_button_get_range(long self, double[] min, double[] max);

    static final boolean getSnapToTicks(SpinButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_snap_to_ticks(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_spin_button_get_snap_to_ticks(long self);

    static final SpinButtonUpdatePolicy getUpdatePolicy(SpinButton self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_update_policy(pointerOf(self));

            return (SpinButtonUpdatePolicy) enumFor(SpinButtonUpdatePolicy.class, result);
        }
    }

    private static native final int gtk_spin_button_get_update_policy(long self);

    static final double getValue(SpinButton self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_value(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_spin_button_get_value(long self);

    static final int getValueAsInt(SpinButton self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_value_as_int(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_spin_button_get_value_as_int(long self);

    static final boolean getWrap(SpinButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_spin_button_get_wrap(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_spin_button_get_wrap(long self);

    static final void setAdjustment(SpinButton self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (adjustment == null) {
            throw new IllegalArgumentException("adjustment can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_adjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_spin_button_set_adjustment(long self, long adjustment);

    static final void setDigits(SpinButton self, int digits) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_digits(pointerOf(self), digits);
        }
    }

    private static native final void gtk_spin_button_set_digits(long self, int digits);

    static final void setIncrements(SpinButton self, double step, double page) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_increments(pointerOf(self), step, page);
        }
    }

    private static native final void gtk_spin_button_set_increments(long self, double step, double page);

    static final void setNumeric(SpinButton self, boolean numeric) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_numeric(pointerOf(self), numeric);
        }
    }

    private static native final void gtk_spin_button_set_numeric(long self, boolean numeric);

    static final void setRange(SpinButton self, double min, double max) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_range(pointerOf(self), min, max);
        }
    }

    private static native final void gtk_spin_button_set_range(long self, double min, double max);

    static final void setSnapToTicks(SpinButton self, boolean snapToTicks) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_snap_to_ticks(pointerOf(self), snapToTicks);
        }
    }

    private static native final void gtk_spin_button_set_snap_to_ticks(long self, boolean snapToTicks);

    static final void setUpdatePolicy(SpinButton self, SpinButtonUpdatePolicy policy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (policy == null) {
            throw new IllegalArgumentException("policy can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_update_policy(pointerOf(self), numOf(policy));
        }
    }

    private static native final void gtk_spin_button_set_update_policy(long self, int policy);

    static final void setValue(SpinButton self, double value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_value(pointerOf(self), value);
        }
    }

    private static native final void gtk_spin_button_set_value(long self, double value);

    static final void setWrap(SpinButton self, boolean wrap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_set_wrap(pointerOf(self), wrap);
        }
    }

    private static native final void gtk_spin_button_set_wrap(long self, boolean wrap);

    static final void spin(SpinButton self, SpinType direction, double increment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_spin(pointerOf(self), numOf(direction), increment);
        }
    }

    private static native final void gtk_spin_button_spin(long self, int direction, double increment);

    static final void update(SpinButton self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_spin_button_update(pointerOf(self));
        }
    }

    private static native final void gtk_spin_button_update(long self);

    interface ChangeValueSignal extends Signal
    {
        void onChangeValue(SpinButton source, ScrollType scroll);
    }

    static final void connect(SpinButton self, GtkSpinButton.ChangeValueSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSpinButton.class, "change-value", after);
    }

    protected static final void receiveChangeValue(Signal handler, long source, int scroll) {
        ((GtkSpinButton.ChangeValueSignal) handler).onChangeValue((SpinButton) objectFor(source), (ScrollType) enumFor(ScrollType.class, scroll));
    }

    interface InputSignal extends Signal
    {
        int onInput(SpinButton source, double[] newValue);
    }

    static final void connect(SpinButton self, GtkSpinButton.InputSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSpinButton.class, "input", after);
    }

    protected static final int receiveInput(Signal handler, long source, double[] newValue) {
        int result;

        result = ((GtkSpinButton.InputSignal) handler).onInput((SpinButton) objectFor(source), newValue);

        return result;
    }

    interface OutputSignal extends Signal
    {
        int onOutput(SpinButton source);
    }

    static final void connect(SpinButton self, GtkSpinButton.OutputSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSpinButton.class, "output", after);
    }

    protected static final int receiveOutput(Signal handler, long source) {
        int result;

        result = ((GtkSpinButton.OutputSignal) handler).onOutput((SpinButton) objectFor(source));

        return result;
    }

    interface ValueChangedSignal extends Signal
    {
        void onValueChanged(SpinButton source);
    }

    static final void connect(SpinButton self, GtkSpinButton.ValueChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSpinButton.class, "value-changed", after);
    }

    protected static final void receiveValueChanged(Signal handler, long source) {
        ((GtkSpinButton.ValueChangedSignal) handler).onValueChanged((SpinButton) objectFor(source));
    }

    interface WrappedSignal extends Signal
    {
        void onWrapped(SpinButton source);
    }

    static final void connect(SpinButton self, GtkSpinButton.WrappedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSpinButton.class, "wrapped", after);
    }

    protected static final void receiveWrapped(Signal handler, long source) {
        ((GtkSpinButton.WrappedSignal) handler).onWrapped((SpinButton) objectFor(source));
    }
}

