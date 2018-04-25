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
import org.gnome.gdk.Device;
import org.gnome.gdk.Event;
import org.gnome.gdk.Gravity;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.Menu;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ScrollType;
import org.gnome.gtk.Widget;

final class GtkMenu extends Plumbing
{
    private GtkMenu() {}

    static final long createMenu() {
        long result;

        synchronized (lock) {
            result = gtk_menu_new();

            return result;
        }
    }

    private static native final long gtk_menu_new();

    @SuppressWarnings("unused")
    static final long createMenuFromModel(FIXME model) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMenuModel*");
    }

    static final void attach(Menu self, Widget child, int leftAttach, int rightAttach, int topAttach, int bottomAttach) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_menu_attach(pointerOf(self), pointerOf(child), leftAttach, rightAttach, topAttach, bottomAttach);
        }
    }

    private static native final void gtk_menu_attach(long self, long child, int leftAttach, int rightAttach, int topAttach, int bottomAttach);

    @SuppressWarnings("unused")
    static final void attachToWidget(Menu self, Widget attachWidget, FIXME detacher) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkMenuDetachFunc");
    }

    static final void detach(Menu self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_detach(pointerOf(self));
        }
    }

    private static native final void gtk_menu_detach(long self);

    static final AcceleratorGroup getAccelGroup(Menu self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_accel_group(pointerOf(self));

            return (AcceleratorGroup) objectFor(result);
        }
    }

    private static native final long gtk_menu_get_accel_group(long self);

    static final String getAccelPath(Menu self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_accel_path(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_menu_get_accel_path(long self);

    static final Widget getActive(Menu self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_active(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_menu_get_active(long self);

    static final Widget getAttachWidget(Menu self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_attach_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_menu_get_attach_widget(long self);

    static final int getMonitor(Menu self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_monitor(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_menu_get_monitor(long self);

    static final boolean getReserveToggleSize(Menu self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_reserve_toggle_size(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_menu_get_reserve_toggle_size(long self);

    static final boolean getTearoffState(Menu self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_tearoff_state(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_menu_get_tearoff_state(long self);

    static final String getTitle(Menu self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_menu_get_title(long self);

    @SuppressWarnings("unused")
    static final void placeOnMonitor(Menu self, FIXME monitor) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkMonitor*");
    }

    static final void popdown(Menu self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_popdown(pointerOf(self));
        }
    }

    private static native final void gtk_menu_popdown(long self);

    @SuppressWarnings("unused")
    static final void popup(Menu self, Widget parentMenuShell, Widget parentMenuItem, FIXME func, FIXME data, int button, int activateTime) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkMenuPositionFunc");
    }

    static final void popupAtPointer(Menu self, Event triggerEvent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_popup_at_pointer(pointerOf(self), pointerOf(triggerEvent));
        }
    }

    private static native final void gtk_menu_popup_at_pointer(long self, long triggerEvent);

    static final void popupAtRect(Menu self, Window rectWindow, Rectangle rect, Gravity rectAnchor, Gravity menuAnchor, Event triggerEvent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rectWindow == null) {
            throw new IllegalArgumentException("rectWindow can't be null");
        }

        if (rect == null) {
            throw new IllegalArgumentException("rect can't be null");
        }

        if (rectAnchor == null) {
            throw new IllegalArgumentException("rectAnchor can't be null");
        }

        if (menuAnchor == null) {
            throw new IllegalArgumentException("menuAnchor can't be null");
        }

        synchronized (lock) {
            gtk_menu_popup_at_rect(pointerOf(self), pointerOf(rectWindow), pointerOf(rect), numOf(rectAnchor), numOf(menuAnchor), pointerOf(triggerEvent));
        }
    }

    private static native final void gtk_menu_popup_at_rect(long self, long rectWindow, long rect, int rectAnchor, int menuAnchor, long triggerEvent);

    static final void popupAtWidget(Menu self, Widget widget, Gravity widgetAnchor, Gravity menuAnchor, Event triggerEvent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        if (widgetAnchor == null) {
            throw new IllegalArgumentException("widgetAnchor can't be null");
        }

        if (menuAnchor == null) {
            throw new IllegalArgumentException("menuAnchor can't be null");
        }

        synchronized (lock) {
            gtk_menu_popup_at_widget(pointerOf(self), pointerOf(widget), numOf(widgetAnchor), numOf(menuAnchor), pointerOf(triggerEvent));
        }
    }

    private static native final void gtk_menu_popup_at_widget(long self, long widget, int widgetAnchor, int menuAnchor, long triggerEvent);

    @SuppressWarnings("unused")
    static final void popupForDevice(Menu self, Device device, Widget parentMenuShell, Widget parentMenuItem, FIXME func, FIXME data, FIXME destroy, int button, int activateTime) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkMenuPositionFunc");
    }

    static final void reorderChild(Menu self, Widget child, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_menu_reorder_child(pointerOf(self), pointerOf(child), position);
        }
    }

    private static native final void gtk_menu_reorder_child(long self, long child, int position);

    static final void reposition(Menu self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_reposition(pointerOf(self));
        }
    }

    private static native final void gtk_menu_reposition(long self);

    static final void setAccelGroup(Menu self, AcceleratorGroup accelGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_accel_group(pointerOf(self), pointerOf(accelGroup));
        }
    }

    private static native final void gtk_menu_set_accel_group(long self, long accelGroup);

    static final void setAccelPath(Menu self, String accelPath) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_accel_path(pointerOf(self), accelPath);
        }
    }

    private static native final void gtk_menu_set_accel_path(long self, String accelPath);

    static final void setActive(Menu self, int index) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_active(pointerOf(self), index);
        }
    }

    private static native final void gtk_menu_set_active(long self, int index);

    static final void setMonitor(Menu self, int monitorNum) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_monitor(pointerOf(self), monitorNum);
        }
    }

    private static native final void gtk_menu_set_monitor(long self, int monitorNum);

    static final void setReserveToggleSize(Menu self, boolean reserveToggleSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_reserve_toggle_size(pointerOf(self), reserveToggleSize);
        }
    }

    private static native final void gtk_menu_set_reserve_toggle_size(long self, boolean reserveToggleSize);

    static final void setScreen(Menu self, Screen screen) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_screen(pointerOf(self), pointerOf(screen));
        }
    }

    private static native final void gtk_menu_set_screen(long self, long screen);

    static final void setTearoffState(Menu self, boolean tornOff) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_tearoff_state(pointerOf(self), tornOff);
        }
    }

    private static native final void gtk_menu_set_tearoff_state(long self, boolean tornOff);

    static final void setTitle(Menu self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_menu_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_menu_set_title(long self, String title);

    static final Widget[] getForAttachWidget(Widget widget) {
        long[] result;

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_get_for_attach_widget(pointerOf(widget));

            return (Widget[]) objectArrayFor(result, new Widget[result.length]);
        }
    }

    private static native final long[] gtk_menu_get_for_attach_widget(long widget);

    interface MoveScrollSignal extends Signal
    {
        void onMoveScroll(Menu source, ScrollType scrollType);
    }

    static final void connect(Menu self, GtkMenu.MoveScrollSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenu.class, "move-scroll", after);
    }

    protected static final void receiveMoveScroll(Signal handler, long source, int scrollType) {
        ((GtkMenu.MoveScrollSignal) handler).onMoveScroll((Menu) objectFor(source), (ScrollType) enumFor(ScrollType.class, scrollType));
    }

    interface PoppedUpSignal extends Signal
    {
        void onPoppedUp(Menu source, FIXME flippedRect, FIXME finalRect, boolean flippedX, boolean flippedY);
    }

    static final void connect(Menu self, GtkMenu.PoppedUpSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenu.class, "popped-up", after);
    }

    protected static final void receivePoppedUp(Signal handler, long source, java.lang.Object flippedRect, java.lang.Object finalRect, boolean flippedX, boolean flippedY) {
        ((GtkMenu.PoppedUpSignal) handler).onPoppedUp((Menu) objectFor(source), (FIXME) flippedRect, (FIXME) finalRect, flippedX, flippedY);
    }
}

