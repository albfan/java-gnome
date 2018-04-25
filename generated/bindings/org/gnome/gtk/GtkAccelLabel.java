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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.ModifierType;
import org.gnome.gtk.AccelLabel;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkAccelLabel extends Plumbing
{
    private GtkAccelLabel() {}

    static final long createAccelLabel(String string) {
        long result;

        if (string == null) {
            throw new IllegalArgumentException("string can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_label_new(string);

            return result;
        }
    }

    private static native final long gtk_accel_label_new(String string);

    static final void getAccel(AccelLabel self, int[] acceleratorKey, ModifierType[] acceleratorMods) {
        int[] _acceleratorMods;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _acceleratorMods = numsOf(acceleratorMods);

        synchronized (lock) {
            gtk_accel_label_get_accel(pointerOf(self), acceleratorKey, _acceleratorMods);
            fillFlagArray(ModifierType.class, acceleratorMods, _acceleratorMods);
        }
    }

    private static native final void gtk_accel_label_get_accel(long self, int[] acceleratorKey, int[] acceleratorMods);

    static final Widget getAccelWidget(AccelLabel self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_label_get_accel_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_accel_label_get_accel_widget(long self);

    static final int getAccelWidth(AccelLabel self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_label_get_accel_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_accel_label_get_accel_width(long self);

    static final boolean refetch(AccelLabel self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_label_refetch(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_accel_label_refetch(long self);

    static final void setAccel(AccelLabel self, int acceleratorKey, ModifierType acceleratorMods) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (acceleratorMods == null) {
            throw new IllegalArgumentException("acceleratorMods can't be null");
        }

        synchronized (lock) {
            gtk_accel_label_set_accel(pointerOf(self), acceleratorKey, numOf(acceleratorMods));
        }
    }

    private static native final void gtk_accel_label_set_accel(long self, int acceleratorKey, int acceleratorMods);

    @SuppressWarnings("unused")
    static final void setAccelClosure(AccelLabel self, FIXME accelClosure) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GClosure*");
    }

    static final void setAccelWidget(AccelLabel self, Widget accelWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_accel_label_set_accel_widget(pointerOf(self), pointerOf(accelWidget));
        }
    }

    private static native final void gtk_accel_label_set_accel_widget(long self, long accelWidget);
}

