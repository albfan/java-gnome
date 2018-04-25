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
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Window;

final class GdkEventFocus extends Plumbing
{
    private GdkEventFocus() {}

    static final EventType getType(EventFocus self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_focus_get_type(pointerOf(self));

            return (EventType) enumFor(EventType.class, result);
        }
    }

    private static native final int gdk_event_focus_get_type(long self);

    static final void setType(EventFocus self, EventType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gdk_event_focus_set_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gdk_event_focus_set_type(long self, int type);

    static final Window getWindow(EventFocus self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_focus_get_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_event_focus_get_window(long self);

    static final void setWindow(EventFocus self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gdk_event_focus_set_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gdk_event_focus_set_window(long self, long window);

    static final byte getSendEvent(EventFocus self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_focus_get_send_event(pointerOf(self));

            return result;
        }
    }

    private static native final byte gdk_event_focus_get_send_event(long self);

    static final void setSendEvent(EventFocus self, byte sendEvent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_focus_set_send_event(pointerOf(self), sendEvent);
        }
    }

    private static native final void gdk_event_focus_set_send_event(long self, byte sendEvent);

    static final short getIn(EventFocus self) {
        short result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_focus_get_in(pointerOf(self));

            return result;
        }
    }

    private static native final short gdk_event_focus_get_in(long self);

    static final void setIn(EventFocus self, short in) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_focus_set_in(pointerOf(self), in);
        }
    }

    private static native final void gdk_event_focus_set_in(long self, short in);
}

