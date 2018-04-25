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

final class GtkAdjustment extends Plumbing
{
    private GtkAdjustment() {}

    static final long createAdjustment(double value, double lower, double upper, double stepIncrement, double pageIncrement, double pageSize) {
        long result;

        synchronized (lock) {
            result = gtk_adjustment_new(value, lower, upper, stepIncrement, pageIncrement, pageSize);

            return result;
        }
    }

    private static native final long gtk_adjustment_new(double value, double lower, double upper, double stepIncrement, double pageIncrement, double pageSize);

    static final void changed(Adjustment self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_changed(pointerOf(self));
        }
    }

    private static native final void gtk_adjustment_changed(long self);

    static final void clampPage(Adjustment self, double lower, double upper) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_clamp_page(pointerOf(self), lower, upper);
        }
    }

    private static native final void gtk_adjustment_clamp_page(long self, double lower, double upper);

    static final void configure(Adjustment self, double value, double lower, double upper, double stepIncrement, double pageIncrement, double pageSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_configure(pointerOf(self), value, lower, upper, stepIncrement, pageIncrement, pageSize);
        }
    }

    private static native final void gtk_adjustment_configure(long self, double value, double lower, double upper, double stepIncrement, double pageIncrement, double pageSize);

    static final double getLower(Adjustment self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_adjustment_get_lower(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_adjustment_get_lower(long self);

    static final double getMinimumIncrement(Adjustment self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_adjustment_get_minimum_increment(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_adjustment_get_minimum_increment(long self);

    static final double getPageIncrement(Adjustment self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_adjustment_get_page_increment(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_adjustment_get_page_increment(long self);

    static final double getPageSize(Adjustment self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_adjustment_get_page_size(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_adjustment_get_page_size(long self);

    static final double getStepIncrement(Adjustment self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_adjustment_get_step_increment(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_adjustment_get_step_increment(long self);

    static final double getUpper(Adjustment self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_adjustment_get_upper(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_adjustment_get_upper(long self);

    static final double getValue(Adjustment self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_adjustment_get_value(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_adjustment_get_value(long self);

    static final void setLower(Adjustment self, double lower) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_set_lower(pointerOf(self), lower);
        }
    }

    private static native final void gtk_adjustment_set_lower(long self, double lower);

    static final void setPageIncrement(Adjustment self, double pageIncrement) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_set_page_increment(pointerOf(self), pageIncrement);
        }
    }

    private static native final void gtk_adjustment_set_page_increment(long self, double pageIncrement);

    static final void setPageSize(Adjustment self, double pageSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_set_page_size(pointerOf(self), pageSize);
        }
    }

    private static native final void gtk_adjustment_set_page_size(long self, double pageSize);

    static final void setStepIncrement(Adjustment self, double stepIncrement) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_set_step_increment(pointerOf(self), stepIncrement);
        }
    }

    private static native final void gtk_adjustment_set_step_increment(long self, double stepIncrement);

    static final void setUpper(Adjustment self, double upper) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_set_upper(pointerOf(self), upper);
        }
    }

    private static native final void gtk_adjustment_set_upper(long self, double upper);

    static final void setValue(Adjustment self, double value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_set_value(pointerOf(self), value);
        }
    }

    private static native final void gtk_adjustment_set_value(long self, double value);

    static final void valueChanged(Adjustment self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_adjustment_value_changed(pointerOf(self));
        }
    }

    private static native final void gtk_adjustment_value_changed(long self);

    interface ChangedSignal extends Signal
    {
        void onChanged(Adjustment source);
    }

    static final void connect(Adjustment self, GtkAdjustment.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAdjustment.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkAdjustment.ChangedSignal) handler).onChanged((Adjustment) objectFor(source));
    }

    interface ValueChangedSignal extends Signal
    {
        void onValueChanged(Adjustment source);
    }

    static final void connect(Adjustment self, GtkAdjustment.ValueChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAdjustment.class, "value-changed", after);
    }

    protected static final void receiveValueChanged(Signal handler, long source) {
        ((GtkAdjustment.ValueChangedSignal) handler).onValueChanged((Adjustment) objectFor(source));
    }
}

