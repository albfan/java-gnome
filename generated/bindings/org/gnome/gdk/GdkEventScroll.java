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

import org.gnome.gdk.Device;
import org.gnome.gdk.EventType;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.ScrollDirection;
import org.gnome.gdk.Window;

final class GdkEventScroll extends Plumbing
{
    private GdkEventScroll() {}

    static final EventType getType(EventScroll self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_type(pointerOf(self));

            return (EventType) enumFor(EventType.class, result);
        }
    }

    private static native final int gdk_event_scroll_get_type(long self);

    static final void setType(EventScroll self, EventType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gdk_event_scroll_set_type(long self, int type);

    static final Window getWindow(EventScroll self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_event_scroll_get_window(long self);

    static final void setWindow(EventScroll self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gdk_event_scroll_set_window(long self, long window);

    static final byte getSendEvent(EventScroll self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_send_event(pointerOf(self));

            return result;
        }
    }

    private static native final byte gdk_event_scroll_get_send_event(long self);

    static final void setSendEvent(EventScroll self, byte sendEvent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_send_event(pointerOf(self), sendEvent);
        }
    }

    private static native final void gdk_event_scroll_set_send_event(long self, byte sendEvent);

    static final int getTime(EventScroll self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_time(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_event_scroll_get_time(long self);

    static final void setTime(EventScroll self, int time) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_time(pointerOf(self), time);
        }
    }

    private static native final void gdk_event_scroll_set_time(long self, int time);

    static final double getX(EventScroll self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_x(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_scroll_get_x(long self);

    static final void setX(EventScroll self, double x) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_x(pointerOf(self), x);
        }
    }

    private static native final void gdk_event_scroll_set_x(long self, double x);

    static final double getY(EventScroll self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_y(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_scroll_get_y(long self);

    static final void setY(EventScroll self, double y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_y(pointerOf(self), y);
        }
    }

    private static native final void gdk_event_scroll_set_y(long self, double y);

    static final ModifierType getState(EventScroll self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_state(pointerOf(self));

            return (ModifierType) flagFor(ModifierType.class, result);
        }
    }

    private static native final int gdk_event_scroll_get_state(long self);

    static final void setState(EventScroll self, ModifierType state) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_state(pointerOf(self), numOf(state));
        }
    }

    private static native final void gdk_event_scroll_set_state(long self, int state);

    static final ScrollDirection getDirection(EventScroll self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_direction(pointerOf(self));

            return (ScrollDirection) enumFor(ScrollDirection.class, result);
        }
    }

    private static native final int gdk_event_scroll_get_direction(long self);

    static final void setDirection(EventScroll self, ScrollDirection direction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_direction(pointerOf(self), numOf(direction));
        }
    }

    private static native final void gdk_event_scroll_set_direction(long self, int direction);

    static final Device getDevice(EventScroll self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_device(pointerOf(self));

            return (Device) objectFor(result);
        }
    }

    private static native final long gdk_event_scroll_get_device(long self);

    static final void setDevice(EventScroll self, Device device) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_device(pointerOf(self), pointerOf(device));
        }
    }

    private static native final void gdk_event_scroll_set_device(long self, long device);

    static final double getXRoot(EventScroll self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_x_root(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_scroll_get_x_root(long self);

    static final void setXRoot(EventScroll self, double xRoot) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_x_root(pointerOf(self), xRoot);
        }
    }

    private static native final void gdk_event_scroll_set_x_root(long self, double xRoot);

    static final double getYRoot(EventScroll self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_y_root(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_scroll_get_y_root(long self);

    static final void setYRoot(EventScroll self, double yRoot) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_y_root(pointerOf(self), yRoot);
        }
    }

    private static native final void gdk_event_scroll_set_y_root(long self, double yRoot);

    static final double getDeltaX(EventScroll self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_delta_x(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_scroll_get_delta_x(long self);

    static final void setDeltaX(EventScroll self, double deltaX) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_delta_x(pointerOf(self), deltaX);
        }
    }

    private static native final void gdk_event_scroll_set_delta_x(long self, double deltaX);

    static final double getDeltaY(EventScroll self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_delta_y(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_event_scroll_get_delta_y(long self);

    static final void setDeltaY(EventScroll self, double deltaY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_delta_y(pointerOf(self), deltaY);
        }
    }

    private static native final void gdk_event_scroll_set_delta_y(long self, double deltaY);

    static final int getIsStop(EventScroll self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_event_scroll_get_is_stop(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_event_scroll_get_is_stop(long self);

    static final void setIsStop(EventScroll self, int isStop) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_event_scroll_set_is_stop(pointerOf(self), isStop);
        }
    }

    private static native final void gdk_event_scroll_set_is_stop(long self, int isStop);
}

