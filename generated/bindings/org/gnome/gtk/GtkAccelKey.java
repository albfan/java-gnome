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

import org.gnome.gdk.ModifierType;
import org.gnome.gtk.Plumbing;

final class GtkAccelKey extends Plumbing
{
    private GtkAccelKey() {}

    static final int getAccelKey(AccelKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_key_get_accel_key(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_accel_key_get_accel_key(long self);

    static final void setAccelKey(AccelKey self, int accelKey) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_accel_key_set_accel_key(pointerOf(self), accelKey);
        }
    }

    private static native final void gtk_accel_key_set_accel_key(long self, int accelKey);

    static final ModifierType getAccelMods(AccelKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_key_get_accel_mods(pointerOf(self));

            return (ModifierType) flagFor(ModifierType.class, result);
        }
    }

    private static native final int gtk_accel_key_get_accel_mods(long self);

    static final void setAccelMods(AccelKey self, ModifierType accelMods) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelMods == null) {
            throw new IllegalArgumentException("accelMods can't be null");
        }

        synchronized (lock) {
            gtk_accel_key_set_accel_mods(pointerOf(self), numOf(accelMods));
        }
    }

    private static native final void gtk_accel_key_set_accel_mods(long self, int accelMods);

    static final int getAccelFlags(AccelKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_key_get_accel_flags(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_accel_key_get_accel_flags(long self);

    static final void setAccelFlags(AccelKey self, int accelFlags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_accel_key_set_accel_flags(pointerOf(self), accelFlags);
        }
    }

    private static native final void gtk_accel_key_set_accel_flags(long self, int accelFlags);
}

