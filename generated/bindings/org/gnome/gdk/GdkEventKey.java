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
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.gdk.EventType;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Window;

final class GdkEventKey extends Plumbing
{
    private GdkEventKey() {}

    static final EventType getType(EventKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_type(pointerOf(self));

            return (EventType) enumFor(EventType.class, result);
        }
    }

    private static native final int gdk_event_key_get_type(long self);

    static final void setType(EventKey self, EventType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gdk_event_key_set_type(long self, int type);

    static final Window getWindow(EventKey self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_event_key_get_window(long self);

    static final void setWindow(EventKey self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gdk_event_key_set_window(long self, long window);

    static final byte getSendEvent(EventKey self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_send_event(pointerOf(self));

            return result;
        }
    }

    private static native final byte gdk_event_key_get_send_event(long self);

    static final void setSendEvent(EventKey self, byte sendEvent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_send_event(pointerOf(self), sendEvent);
        }
    }

    private static native final void gdk_event_key_set_send_event(long self, byte sendEvent);

    static final int getTime(EventKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_time(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_event_key_get_time(long self);

    static final void setTime(EventKey self, int time) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_time(pointerOf(self), time);
        }
    }

    private static native final void gdk_event_key_set_time(long self, int time);

    static final ModifierType getState(EventKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_state(pointerOf(self));

            return (ModifierType) flagFor(ModifierType.class, result);
        }
    }

    private static native final int gdk_event_key_get_state(long self);

    static final void setState(EventKey self, ModifierType state) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_state(pointerOf(self), numOf(state));
        }
    }

    private static native final void gdk_event_key_set_state(long self, int state);

    static final int getKeyval(EventKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_keyval(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_event_key_get_keyval(long self);

    static final void setKeyval(EventKey self, int keyval) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_keyval(pointerOf(self), keyval);
        }
    }

    private static native final void gdk_event_key_set_keyval(long self, int keyval);

    static final int getLength(EventKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_length(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_event_key_get_length(long self);

    static final void setLength(EventKey self, int length) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_length(pointerOf(self), length);
        }
    }

    private static native final void gdk_event_key_set_length(long self, int length);

    static final String getString(EventKey self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_string(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_event_key_get_string(long self);

    static final void setString(EventKey self, String string) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (string == null) {
            throw new IllegalArgumentException("string can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_string(pointerOf(self), string);
        }
    }

    private static native final void gdk_event_key_set_string(long self, String string);

    static final char getHardwareKeycode(EventKey self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_hardware_keycode(pointerOf(self));

            return result;
        }
    }

    private static native final char gdk_event_key_get_hardware_keycode(long self);

    static final void setHardwareKeycode(EventKey self, char hardwareKeycode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_hardware_keycode(pointerOf(self), hardwareKeycode);
        }
    }

    private static native final void gdk_event_key_set_hardware_keycode(long self, char hardwareKeycode);

    static final byte getGroup(EventKey self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_group(pointerOf(self));

            return result;
        }
    }

    private static native final byte gdk_event_key_get_group(long self);

    static final void setGroup(EventKey self, byte group) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_group(pointerOf(self), group);
        }
    }

    private static native final void gdk_event_key_set_group(long self, byte group);

    static final int getIsModifier(EventKey self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_key_get_is_modifier(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_event_key_get_is_modifier(long self);

    static final void setIsModifier(EventKey self, int isModifier) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_key_set_is_modifier(pointerOf(self), isModifier);
        }
    }

    private static native final void gdk_event_key_set_is_modifier(long self, int isModifier);
}

