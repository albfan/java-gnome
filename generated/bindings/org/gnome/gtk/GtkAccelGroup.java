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
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.AccelFlags;
import org.gnome.gtk.AccelKey;
import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.Plumbing;

final class GtkAccelGroup extends Plumbing
{
    private GtkAccelGroup() {}

    static final long createAcceleratorGroup() {
        long result;

        synchronized (lock) {
            result = gtk_accel_group_new();

            return result;
        }
    }

    private static native final long gtk_accel_group_new();

    static final boolean activate(AcceleratorGroup self, int accelQuark, Object acceleratable, int accelKey, ModifierType accelMods) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (acceleratable == null) {
            throw new IllegalArgumentException("acceleratable can't be null");
        }

        if (accelMods == null) {
            throw new IllegalArgumentException("accelMods can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_group_activate(pointerOf(self), accelQuark, pointerOf(acceleratable), accelKey, numOf(accelMods));

            return result;
        }
    }

    private static native final boolean gtk_accel_group_activate(long self, int accelQuark, long acceleratable, int accelKey, int accelMods);

    @SuppressWarnings("unused")
    static final void connect(AcceleratorGroup self, int accelKey, ModifierType accelMods, AccelFlags accelFlags, FIXME closure) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GClosure*");
    }

    @SuppressWarnings("unused")
    static final void connectByPath(AcceleratorGroup self, String accelPath, FIXME closure) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GClosure*");
    }

    @SuppressWarnings("unused")
    static final boolean disconnect(AcceleratorGroup self, FIXME closure) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GClosure*");
    }

    static final boolean disconnectKey(AcceleratorGroup self, int accelKey, ModifierType accelMods) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelMods == null) {
            throw new IllegalArgumentException("accelMods can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_group_disconnect_key(pointerOf(self), accelKey, numOf(accelMods));

            return result;
        }
    }

    private static native final boolean gtk_accel_group_disconnect_key(long self, int accelKey, int accelMods);

    @SuppressWarnings("unused")
    static final AccelKey find(AcceleratorGroup self, FIXME findFunc, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkAccelGroupFindFunc");
    }

    static final boolean getIsLocked(AcceleratorGroup self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_group_get_is_locked(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_accel_group_get_is_locked(long self);

    static final ModifierType getModifierMask(AcceleratorGroup self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_group_get_modifier_mask(pointerOf(self));

            return (ModifierType) flagFor(ModifierType.class, result);
        }
    }

    private static native final int gtk_accel_group_get_modifier_mask(long self);

    static final void lock(AcceleratorGroup self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_accel_group_lock(pointerOf(self));
        }
    }

    private static native final void gtk_accel_group_lock(long self);

    @SuppressWarnings("unused")
    static final FIXME query(AcceleratorGroup self, int accelKey, ModifierType accelMods, int[] nEntries) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkAccelGroupEntry*");
    }

    static final void unlock(AcceleratorGroup self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_accel_group_unlock(pointerOf(self));
        }
    }

    private static native final void gtk_accel_group_unlock(long self);

    @SuppressWarnings("unused")
    static final AcceleratorGroup fromAccelClosure(FIXME closure) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GClosure*");
    }

    interface AccelChangedSignal extends Signal
    {
        void onAccelChanged(AcceleratorGroup source, int keyval, ModifierType modifier, FIXME accelClosure);
    }

    static final void connect(AcceleratorGroup self, GtkAccelGroup.AccelChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAccelGroup.class, "accel-changed", after);
    }

    protected static final void receiveAccelChanged(Signal handler, long source, int keyval, int modifier, java.lang.Object accelClosure) {
        ((GtkAccelGroup.AccelChangedSignal) handler).onAccelChanged((AcceleratorGroup) objectFor(source), keyval, (ModifierType) flagFor(ModifierType.class, modifier), (FIXME) accelClosure);
    }

    interface AccelActivateSignal extends Signal
    {
        boolean onAccelActivate(AcceleratorGroup source, Object acceleratable, int keyval, ModifierType[] modifier);
    }

    static final void connect(AcceleratorGroup self, GtkAccelGroup.AccelActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAccelGroup.class, "accel-activate", after);
    }

    protected static final boolean receiveAccelActivate(Signal handler, long source, long acceleratable, int keyval, int[] modifier) {
        boolean result;

        result = ((GtkAccelGroup.AccelActivateSignal) handler).onAccelActivate((AcceleratorGroup) objectFor(source), (Object) objectFor(acceleratable), keyval, null);

        return result;
    }
}

