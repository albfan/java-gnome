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

import org.gnome.gdk.CrossingMode;
import org.gnome.gdk.EventType;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.NotifyType;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Window;

final class GdkEventCrossing extends Plumbing
{
    private GdkEventCrossing() {}

    static final EventType getType(EventCrossing self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_type(pointerOf(self));

            return (EventType) enumFor(EventType.class, result);
        }
    }

    private static native final int gdk_event_crossing_get_type(long self);

    static final void setType(EventCrossing self, EventType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gdk_event_crossing_set_type(long self, int type);

    static final Window getWindow(EventCrossing self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_event_crossing_get_window(long self);

    static final void setWindow(EventCrossing self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gdk_event_crossing_set_window(long self, long window);

    static final byte getSendEvent(EventCrossing self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_send_event(pointerOf(self));

            return result;
        }
    }

    private static native final byte gdk_event_crossing_get_send_event(long self);

    static final void setSendEvent(EventCrossing self, byte sendEvent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_send_event(pointerOf(self), sendEvent);
        }
    }

    private static native final void gdk_event_crossing_set_send_event(long self, byte sendEvent);

    static final Window getSubwindow(EventCrossing self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_subwindow(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_event_crossing_get_subwindow(long self);

    static final void setSubwindow(EventCrossing self, Window subwindow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (subwindow == null) {
            throw new IllegalArgumentException("subwindow can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_subwindow(pointerOf(self), pointerOf(subwindow));
        }
    }

    private static native final void gdk_event_crossing_set_subwindow(long self, long subwindow);

    static final int getTime(EventCrossing self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_time(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_event_crossing_get_time(long self);

    static final void setTime(EventCrossing self, int time) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_time(pointerOf(self), time);
        }
    }

    private static native final void gdk_event_crossing_set_time(long self, int time);

    static final double getX(EventCrossing self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_x(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_crossing_get_x(long self);

    static final void setX(EventCrossing self, double x) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_x(pointerOf(self), x);
        }
    }

    private static native final void gdk_event_crossing_set_x(long self, double x);

    static final double getY(EventCrossing self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_y(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_crossing_get_y(long self);

    static final void setY(EventCrossing self, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_y(pointerOf(self), y);
        }
    }

    private static native final void gdk_event_crossing_set_y(long self, double y);

    static final double getXRoot(EventCrossing self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_x_root(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_crossing_get_x_root(long self);

    static final void setXRoot(EventCrossing self, double xRoot) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_x_root(pointerOf(self), xRoot);
        }
    }

    private static native final void gdk_event_crossing_set_x_root(long self, double xRoot);

    static final double getYRoot(EventCrossing self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_y_root(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_crossing_get_y_root(long self);

    static final void setYRoot(EventCrossing self, double yRoot) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_y_root(pointerOf(self), yRoot);
        }
    }

    private static native final void gdk_event_crossing_set_y_root(long self, double yRoot);

    static final CrossingMode getMode(EventCrossing self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_mode(pointerOf(self));

            return (CrossingMode) enumFor(CrossingMode.class, result);
        }
    }

    private static native final int gdk_event_crossing_get_mode(long self);

    static final void setMode(EventCrossing self, CrossingMode mode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mode == null) {
            throw new IllegalArgumentException("mode can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_mode(pointerOf(self), numOf(mode));
        }
    }

    private static native final void gdk_event_crossing_set_mode(long self, int mode);

    static final NotifyType getDetail(EventCrossing self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_detail(pointerOf(self));

            return (NotifyType) enumFor(NotifyType.class, result);
        }
    }

    private static native final int gdk_event_crossing_get_detail(long self);

    static final void setDetail(EventCrossing self, NotifyType detail) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (detail == null) {
            throw new IllegalArgumentException("detail can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_detail(pointerOf(self), numOf(detail));
        }
    }

    private static native final void gdk_event_crossing_set_detail(long self, int detail);

    static final boolean getFocus(EventCrossing self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_event_crossing_get_focus(long self);

    static final void setFocus(EventCrossing self, boolean focus) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_focus(pointerOf(self), focus);
        }
    }

    private static native final void gdk_event_crossing_set_focus(long self, boolean focus);

    static final ModifierType getState(EventCrossing self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_crossing_get_state(pointerOf(self));

            return (ModifierType) flagFor(ModifierType.class, result);
        }
    }

    private static native final int gdk_event_crossing_get_state(long self);

    static final void setState(EventCrossing self, ModifierType state) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gdk_event_crossing_set_state(pointerOf(self), numOf(state));
        }
    }

    private static native final void gdk_event_crossing_set_state(long self, int state);
}

