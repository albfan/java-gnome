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
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.atk.Plumbing;
import org.gnome.atk.Value;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkValue extends Plumbing
{
    private AtkValue() {}

    static final void getCurrentValue(Value self, org.gnome.glib.Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_value_get_current_value(pointerOf((Object) self), pointerOf(value));
        }
    }

    private static native final void atk_value_get_current_value(long self, long value);

    static final double getIncrement(Value self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_value_get_increment(pointerOf((Object) self));

            return result;
        }
    }

    private static native final double atk_value_get_increment(long self);

    static final void getMaximumValue(Value self, org.gnome.glib.Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_value_get_maximum_value(pointerOf((Object) self), pointerOf(value));
        }
    }

    private static native final void atk_value_get_maximum_value(long self, long value);

    static final void getMinimumIncrement(Value self, org.gnome.glib.Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_value_get_minimum_increment(pointerOf((Object) self), pointerOf(value));
        }
    }

    private static native final void atk_value_get_minimum_increment(long self, long value);

    static final void getMinimumValue(Value self, org.gnome.glib.Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_value_get_minimum_value(pointerOf((Object) self), pointerOf(value));
        }
    }

    private static native final void atk_value_get_minimum_value(long self, long value);

    @SuppressWarnings("unused")
    static final FIXME getRange(Value self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkRange*");
    }

    @SuppressWarnings("unused")
    static final FIXME getSubRanges(Value self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList-AtkRange*");
    }

    static final void getValueAndText(Value self, double[] value, String[] text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_value_get_value_and_text(pointerOf((Object) self), value, text);
        }
    }

    private static native final void atk_value_get_value_and_text(long self, double[] value, String[] text);

    static final boolean setCurrentValue(Value self, org.gnome.glib.Value value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            result = atk_value_set_current_value(pointerOf((Object) self), pointerOf(value));

            return result;
        }
    }

    private static native final boolean atk_value_set_current_value(long self, long value);

    static final void setValue(Value self, double newValue) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_value_set_value(pointerOf((Object) self), newValue);
        }
    }

    private static native final void atk_value_set_value(long self, double newValue);

    interface GetCurrentValueSignal extends Signal
    {
        void onGetCurrentValue(Value source, org.gnome.glib.Value value);
    }

    static final void connect(Value self, AtkValue.GetCurrentValueSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-current-value", after);
    }

    protected static final void receiveGetCurrentValue(Signal handler, long source, long value) {
        ((AtkValue.GetCurrentValueSignal) handler).onGetCurrentValue((Value) objectFor(source), valueFor(value));
    }

    interface GetIncrementSignal extends Signal
    {
        double onGetIncrement(Value source);
    }

    static final void connect(Value self, AtkValue.GetIncrementSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-increment", after);
    }

    protected static final double receiveGetIncrement(Signal handler, long source) {
        double result;

        result = ((AtkValue.GetIncrementSignal) handler).onGetIncrement((Value) objectFor(source));

        return result;
    }

    interface GetMaximumValueSignal extends Signal
    {
        void onGetMaximumValue(Value source, org.gnome.glib.Value value);
    }

    static final void connect(Value self, AtkValue.GetMaximumValueSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-maximum-value", after);
    }

    protected static final void receiveGetMaximumValue(Signal handler, long source, long value) {
        ((AtkValue.GetMaximumValueSignal) handler).onGetMaximumValue((Value) objectFor(source), valueFor(value));
    }

    interface GetMinimumIncrementSignal extends Signal
    {
        void onGetMinimumIncrement(Value source, org.gnome.glib.Value value);
    }

    static final void connect(Value self, AtkValue.GetMinimumIncrementSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-minimum-increment", after);
    }

    protected static final void receiveGetMinimumIncrement(Signal handler, long source, long value) {
        ((AtkValue.GetMinimumIncrementSignal) handler).onGetMinimumIncrement((Value) objectFor(source), valueFor(value));
    }

    interface GetMinimumValueSignal extends Signal
    {
        void onGetMinimumValue(Value source, org.gnome.glib.Value value);
    }

    static final void connect(Value self, AtkValue.GetMinimumValueSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-minimum-value", after);
    }

    protected static final void receiveGetMinimumValue(Signal handler, long source, long value) {
        ((AtkValue.GetMinimumValueSignal) handler).onGetMinimumValue((Value) objectFor(source), valueFor(value));
    }

    interface GetRangeSignal extends Signal
    {
        FIXME onGetRange(Value source);
    }

    static final void connect(Value self, AtkValue.GetRangeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-range", after);
    }

    protected static final java.lang.Object receiveGetRange(Signal handler, long source) {
        FIXME result;

        result = ((AtkValue.GetRangeSignal) handler).onGetRange((Value) objectFor(source));

        return result;
    }

    interface GetSubRangesSignal extends Signal
    {
        FIXME onGetSubRanges(Value source);
    }

    static final void connect(Value self, AtkValue.GetSubRangesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-sub-ranges", after);
    }

    protected static final java.lang.Object receiveGetSubRanges(Signal handler, long source) {
        FIXME result;

        result = ((AtkValue.GetSubRangesSignal) handler).onGetSubRanges((Value) objectFor(source));

        return result;
    }

    interface GetValueAndTextSignal extends Signal
    {
        void onGetValueAndText(Value source, double[] value, String[] text);
    }

    static final void connect(Value self, AtkValue.GetValueAndTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "get-value-and-text", after);
    }

    protected static final void receiveGetValueAndText(Signal handler, long source, double[] value, String[] text) {
        ((AtkValue.GetValueAndTextSignal) handler).onGetValueAndText((Value) objectFor(source), value, text);
    }

    interface SetCurrentValueSignal extends Signal
    {
        boolean onSetCurrentValue(Value source, org.gnome.glib.Value value);
    }

    static final void connect(Value self, AtkValue.SetCurrentValueSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "set-current-value", after);
    }

    protected static final boolean receiveSetCurrentValue(Signal handler, long source, long value) {
        boolean result;

        result = ((AtkValue.SetCurrentValueSignal) handler).onSetCurrentValue((Value) objectFor(source), valueFor(value));

        return result;
    }

    interface SetValueSignal extends Signal
    {
        void onSetValue(Value source, double newValue);
    }

    static final void connect(Value self, AtkValue.SetValueSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "set-value", after);
    }

    protected static final void receiveSetValue(Signal handler, long source, double newValue) {
        ((AtkValue.SetValueSignal) handler).onSetValue((Value) objectFor(source), newValue);
    }

    interface ValueChangedSignal extends Signal
    {
        void onValueChanged(Value source, double value, String text);
    }

    static final void connect(Value self, AtkValue.ValueChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkValue.class, "value-changed", after);
    }

    protected static final void receiveValueChanged(Signal handler, long source, double value, String text) {
        ((AtkValue.ValueChangedSignal) handler).onValueChanged((Value) objectFor(source), value, text);
    }
}

