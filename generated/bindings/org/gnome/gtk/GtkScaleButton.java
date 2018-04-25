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
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ScaleButton;
import org.gnome.gtk.Widget;

final class GtkScaleButton extends Plumbing
{
    private GtkScaleButton() {}

    static final long createScaleButton(IconSize size, double min, double max, double step, String[] icons) {
        long result;

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_button_new(numOf(size), min, max, step, icons);

            return result;
        }
    }

    private static native final long gtk_scale_button_new(int size, double min, double max, double step, String[] icons);

    static final Adjustment getAdjustment(ScaleButton self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_button_get_adjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_scale_button_get_adjustment(long self);

    static final Widget getMinusButton(ScaleButton self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_button_get_minus_button(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_scale_button_get_minus_button(long self);

    static final Widget getPlusButton(ScaleButton self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_button_get_plus_button(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_scale_button_get_plus_button(long self);

    static final Widget getPopup(ScaleButton self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_button_get_popup(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_scale_button_get_popup(long self);

    static final double getValue(ScaleButton self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scale_button_get_value(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_scale_button_get_value(long self);

    static final void setAdjustment(ScaleButton self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (adjustment == null) {
            throw new IllegalArgumentException("adjustment can't be null");
        }

        synchronized (lock) {
            gtk_scale_button_set_adjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_scale_button_set_adjustment(long self, long adjustment);

    static final void setIcons(ScaleButton self, String[] icons) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (icons == null) {
            throw new IllegalArgumentException("icons can't be null");
        }

        synchronized (lock) {
            gtk_scale_button_set_icons(pointerOf(self), icons);
        }
    }

    private static native final void gtk_scale_button_set_icons(long self, String[] icons);

    static final void setValue(ScaleButton self, double value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scale_button_set_value(pointerOf(self), value);
        }
    }

    private static native final void gtk_scale_button_set_value(long self, double value);

    interface ValueChangedSignal extends Signal
    {
        void onValueChanged(ScaleButton source, double value);
    }

    static final void connect(ScaleButton self, GtkScaleButton.ValueChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScaleButton.class, "value-changed", after);
    }

    protected static final void receiveValueChanged(Signal handler, long source, double value) {
        ((GtkScaleButton.ValueChangedSignal) handler).onValueChanged((ScaleButton) objectFor(source), value);
    }

    interface PopdownSignal extends Signal
    {
        void onPopdown(ScaleButton source);
    }

    static final void connect(ScaleButton self, GtkScaleButton.PopdownSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScaleButton.class, "popdown", after);
    }

    protected static final void receivePopdown(Signal handler, long source) {
        ((GtkScaleButton.PopdownSignal) handler).onPopdown((ScaleButton) objectFor(source));
    }

    interface PopupSignal extends Signal
    {
        void onPopup(ScaleButton source);
    }

    static final void connect(ScaleButton self, GtkScaleButton.PopupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScaleButton.class, "popup", after);
    }

    protected static final void receivePopup(Signal handler, long source) {
        ((GtkScaleButton.PopupSignal) handler).onPopup((ScaleButton) objectFor(source));
    }
}

