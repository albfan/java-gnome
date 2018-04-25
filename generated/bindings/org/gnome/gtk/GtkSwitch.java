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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Switch;

final class GtkSwitch extends Plumbing
{
    private GtkSwitch() {}

    static final long createSwitch() {
        long result;

        synchronized (lock) {
            result = gtk_switch_new();

            return result;
        }
    }

    private static native final long gtk_switch_new();

    static final boolean getActive(Switch self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_switch_get_active(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_switch_get_active(long self);

    static final boolean getState(Switch self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_switch_get_state(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_switch_get_state(long self);

    static final void setActive(Switch self, boolean isActive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_switch_set_active(pointerOf(self), isActive);
        }
    }

    private static native final void gtk_switch_set_active(long self, boolean isActive);

    static final void setState(Switch self, boolean state) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_switch_set_state(pointerOf(self), state);
        }
    }

    private static native final void gtk_switch_set_state(long self, boolean state);

    interface ActivateSignal extends Signal
    {
        void onActivate(Switch source);
    }

    static final void connect(Switch self, GtkSwitch.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSwitch.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GtkSwitch.ActivateSignal) handler).onActivate((Switch) objectFor(source));
    }

    interface StateSetSignal extends Signal
    {
        boolean onStateSet(Switch source, boolean state);
    }

    static final void connect(Switch self, GtkSwitch.StateSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSwitch.class, "state-set", after);
    }

    protected static final boolean receiveStateSet(Signal handler, long source, boolean state) {
        boolean result;

        result = ((GtkSwitch.StateSetSignal) handler).onStateSet((Switch) objectFor(source), state);

        return result;
    }
}

