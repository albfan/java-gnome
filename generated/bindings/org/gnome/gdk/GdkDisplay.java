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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.Device;
import org.gnome.gdk.Display;
import org.gnome.gdk.Event;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;

final class GdkDisplay extends Plumbing
{
    private GdkDisplay() {}

    static final void beep(Display self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_beep(pointerOf(self));
        }
    }

    private static native final void gdk_display_beep(long self);

    static final void close(Display self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_close(pointerOf(self));
        }
    }

    private static native final void gdk_display_close(long self);

    static final boolean deviceIsGrabbed(Display self, Device device) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            result = gdk_display_device_is_grabbed(pointerOf(self), pointerOf(device));

            return result;
        }
    }

    private static native final boolean gdk_display_device_is_grabbed(long self, long device);

    static final void flush(Display self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_flush(pointerOf(self));
        }
    }

    private static native final void gdk_display_flush(long self);

    @SuppressWarnings("unused")
    static final FIXME getAppLaunchContext(Display self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAppLaunchContext*");
    }

    static final int getDefaultCursorSize(Display self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_default_cursor_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_display_get_default_cursor_size(long self);

    static final Window getDefaultGroup(Display self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_default_group(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_display_get_default_group(long self);

    static final Screen getDefaultScreen(Display self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_default_screen(pointerOf(self));

            return (Screen) objectFor(result);
        }
    }

    private static native final long gdk_display_get_default_screen(long self);

    @SuppressWarnings("unused")
    static final FIXME getDefaultSeat(Display self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkSeat*");
    }

    @SuppressWarnings("unused")
    static final FIXME getDeviceManager(Display self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkDeviceManager*");
    }

    static final Event getEvent(Display self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_event(pointerOf(self));

            return (Event) boxedFor(Event.class, result);
        }
    }

    private static native final long gdk_display_get_event(long self);

    static final void getMaximalCursorSize(Display self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_get_maximal_cursor_size(pointerOf(self), width, height);
        }
    }

    private static native final void gdk_display_get_maximal_cursor_size(long self, int[] width, int[] height);

    @SuppressWarnings("unused")
    static final FIXME getMonitor(Display self, int monitorNum) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkMonitor*");
    }

    @SuppressWarnings("unused")
    static final FIXME getMonitorAtPoint(Display self, int x, int y) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkMonitor*");
    }

    @SuppressWarnings("unused")
    static final FIXME getMonitorAtWindow(Display self, Window window) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkMonitor*");
    }

    static final int getNMonitors(Display self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_n_monitors(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_display_get_n_monitors(long self);

    static final int getNScreens(Display self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_n_screens(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_display_get_n_screens(long self);

    static final String getName(Display self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_display_get_name(long self);

    static final void getPointer(Display self, Screen[] screen, int[] x, int[] y, ModifierType[] mask) {
        long[] _screen;
        int[] _mask;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _screen = pointersOf(screen);

        _mask = numsOf(mask);

        synchronized (lock) {
            gdk_display_get_pointer(pointerOf(self), _screen, x, y, _mask);
            fillObjectArray(screen, _screen);
            fillFlagArray(ModifierType.class, mask, _mask);
        }
    }

    private static native final void gdk_display_get_pointer(long self, long[] screen, int[] x, int[] y, int[] mask);

    @SuppressWarnings("unused")
    static final FIXME getPrimaryMonitor(Display self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkMonitor*");
    }

    static final Screen getScreen(Display self, int screenNum) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_screen(pointerOf(self), screenNum);

            return (Screen) objectFor(result);
        }
    }

    private static native final long gdk_display_get_screen(long self, int screenNum);

    static final Window getWindowAtPointer(Display self, int[] winX, int[] winY) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_get_window_at_pointer(pointerOf(self), winX, winY);

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_display_get_window_at_pointer(long self, int[] winX, int[] winY);

    static final boolean hasPending(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_has_pending(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_has_pending(long self);

    static final boolean isClosed(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_is_closed(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_is_closed(long self);

    static final void keyboardUngrab(Display self, int time) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_keyboard_ungrab(pointerOf(self), time);
        }
    }

    private static native final void gdk_display_keyboard_ungrab(long self, int time);

    static final Device[] listDevices(Display self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_list_devices(pointerOf(self));

            return (Device[]) objectArrayFor(result, new Device[result.length]);
        }
    }

    private static native final long[] gdk_display_list_devices(long self);

    @SuppressWarnings("unused")
    static final FIXME listSeats(Display self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkSeat*");
    }

    static final void notifyStartupComplete(Display self, String startupId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (startupId == null) {
            throw new IllegalArgumentException("startupId can't be null");
        }

        synchronized (lock) {
            gdk_display_notify_startup_complete(pointerOf(self), startupId);
        }
    }

    private static native final void gdk_display_notify_startup_complete(long self, String startupId);

    static final Event peekEvent(Display self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_peek_event(pointerOf(self));

            return (Event) boxedFor(Event.class, result);
        }
    }

    private static native final long gdk_display_peek_event(long self);

    static final boolean pointerIsGrabbed(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_pointer_is_grabbed(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_pointer_is_grabbed(long self);

    static final void pointerUngrab(Display self, int time) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_pointer_ungrab(pointerOf(self), time);
        }
    }

    private static native final void gdk_display_pointer_ungrab(long self, int time);

    static final void putEvent(Display self, org.gnome.gdk.Event event) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            gdk_display_put_event(pointerOf(self), pointerOf(event));
        }
    }

    private static native final void gdk_display_put_event(long self, long event);

    @SuppressWarnings("unused")
    static final boolean requestSelectionNotification(Display self, FIXME selection) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final void setDoubleClickDistance(Display self, int distance) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_set_double_click_distance(pointerOf(self), distance);
        }
    }

    private static native final void gdk_display_set_double_click_distance(long self, int distance);

    static final void setDoubleClickTime(Display self, int msec) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_set_double_click_time(pointerOf(self), msec);
        }
    }

    private static native final void gdk_display_set_double_click_time(long self, int msec);

    @SuppressWarnings("unused")
    static final void storeClipboard(Display self, Window clipboardWindow, int time, FIXME targets, int nTargets) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom*");
    }

    static final boolean supportsClipboardPersistence(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_supports_clipboard_persistence(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_supports_clipboard_persistence(long self);

    static final boolean supportsComposite(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_supports_composite(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_supports_composite(long self);

    static final boolean supportsCursorAlpha(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_supports_cursor_alpha(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_supports_cursor_alpha(long self);

    static final boolean supportsCursorColor(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_supports_cursor_color(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_supports_cursor_color(long self);

    static final boolean supportsInputShapes(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_supports_input_shapes(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_supports_input_shapes(long self);

    static final boolean supportsSelectionNotification(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_supports_selection_notification(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_supports_selection_notification(long self);

    static final boolean supportsShapes(Display self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_supports_shapes(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_display_supports_shapes(long self);

    static final void sync(Display self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_display_sync(pointerOf(self));
        }
    }

    private static native final void gdk_display_sync(long self);

    static final void warpPointer(Display self, Screen screen, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gdk_display_warp_pointer(pointerOf(self), pointerOf(screen), x, y);
        }
    }

    private static native final void gdk_display_warp_pointer(long self, long screen, int x, int y);

    static final Display getDefault() {
        long result;

        synchronized (lock) {
            result = gdk_display_get_default();

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_display_get_default();

    static final Display open(String displayName) {
        long result;

        if (displayName == null) {
            throw new IllegalArgumentException("displayName can't be null");
        }

        synchronized (lock) {
            result = gdk_display_open(displayName);

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_display_open(String displayName);

    static final Display openDefaultLibgtkOnly() {
        long result;

        synchronized (lock) {
            result = gdk_display_open_default_libgtk_only();

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_display_open_default_libgtk_only();

    interface ClosedSignal extends Signal
    {
        void onClosed(Display source, boolean isError);
    }

    static final void connect(Display self, GdkDisplay.ClosedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDisplay.class, "closed", after);
    }

    protected static final void receiveClosed(Signal handler, long source, boolean isError) {
        ((GdkDisplay.ClosedSignal) handler).onClosed((Display) objectFor(source), isError);
    }

    interface MonitorAddedSignal extends Signal
    {
        void onMonitorAdded(Display source, FIXME monitor);
    }

    static final void connect(Display self, GdkDisplay.MonitorAddedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDisplay.class, "monitor-added", after);
    }

    protected static final void receiveMonitorAdded(Signal handler, long source, java.lang.Object monitor) {
        ((GdkDisplay.MonitorAddedSignal) handler).onMonitorAdded((Display) objectFor(source), (FIXME) monitor);
    }

    interface MonitorRemovedSignal extends Signal
    {
        void onMonitorRemoved(Display source, FIXME monitor);
    }

    static final void connect(Display self, GdkDisplay.MonitorRemovedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDisplay.class, "monitor-removed", after);
    }

    protected static final void receiveMonitorRemoved(Signal handler, long source, java.lang.Object monitor) {
        ((GdkDisplay.MonitorRemovedSignal) handler).onMonitorRemoved((Display) objectFor(source), (FIXME) monitor);
    }

    interface OpenedSignal extends Signal
    {
        void onOpened(Display source);
    }

    static final void connect(Display self, GdkDisplay.OpenedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDisplay.class, "opened", after);
    }

    protected static final void receiveOpened(Signal handler, long source) {
        ((GdkDisplay.OpenedSignal) handler).onOpened((Display) objectFor(source));
    }

    interface SeatAddedSignal extends Signal
    {
        void onSeatAdded(Display source, FIXME seat);
    }

    static final void connect(Display self, GdkDisplay.SeatAddedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDisplay.class, "seat-added", after);
    }

    protected static final void receiveSeatAdded(Signal handler, long source, java.lang.Object seat) {
        ((GdkDisplay.SeatAddedSignal) handler).onSeatAdded((Display) objectFor(source), (FIXME) seat);
    }

    interface SeatRemovedSignal extends Signal
    {
        void onSeatRemoved(Display source, FIXME seat);
    }

    static final void connect(Display self, GdkDisplay.SeatRemovedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDisplay.class, "seat-removed", after);
    }

    protected static final void receiveSeatRemoved(Signal handler, long source, java.lang.Object seat) {
        ((GdkDisplay.SeatRemovedSignal) handler).onSeatRemoved((Display) objectFor(source), (FIXME) seat);
    }
}

