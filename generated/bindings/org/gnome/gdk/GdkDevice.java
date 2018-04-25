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
import org.gnome.gdk.AxisUse;
import org.gnome.gdk.Cursor;
import org.gnome.gdk.Device;
import org.gnome.gdk.Display;
import org.gnome.gdk.EventMask;
import org.gnome.gdk.GrabStatus;
import org.gnome.gdk.InputMode;
import org.gnome.gdk.InputSource;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;

final class GdkDevice extends Plumbing
{
    private GdkDevice() {}

    static final Device getAssociatedDevice(Device self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_associated_device(pointerOf(self));

            return (Device) objectFor(result);
        }
    }

    private static native final long gdk_device_get_associated_device(long self);

    @SuppressWarnings("unused")
    static final FIXME getAxes(Device self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAxisFlags");
    }

    static final boolean getAxis(Device self, double[] axes, AxisUse use, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (axes == null) {
            throw new IllegalArgumentException("axes can't be null");
        }

        if (use == null) {
            throw new IllegalArgumentException("use can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_axis(pointerOf(self), axes, numOf(use), value);

            return result;
        }
    }

    private static native final boolean gdk_device_get_axis(long self, double[] axes, int use, double[] value);

    static final AxisUse getAxisUse(Device self, int index) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_axis_use(pointerOf(self), index);

            return (AxisUse) enumFor(AxisUse.class, result);
        }
    }

    private static native final int gdk_device_get_axis_use(long self, int index);

    @SuppressWarnings("unused")
    static final boolean getAxisValue(Device self, double[] axes, FIXME axisLabel, double[] value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final FIXME getDeviceType(Device self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkDeviceType");
    }

    static final Display getDisplay(Device self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_device_get_display(long self);

    static final boolean getHasCursor(Device self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_has_cursor(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_device_get_has_cursor(long self);

    @SuppressWarnings("unused")
    static final boolean getHistory(Device self, Window window, int start, int stop, FIXME events, int[] nEvents) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkTimeCoord***");
    }

    static final boolean getKey(Device self, int index, int[] keyval, ModifierType[] modifiers) {
        boolean result;
        int[] _modifiers;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _modifiers = numsOf(modifiers);

        synchronized (lock) {
            result = gdk_device_get_key(pointerOf(self), index, keyval, _modifiers);
            fillFlagArray(ModifierType.class, modifiers, _modifiers);

            return result;
        }
    }

    private static native final boolean gdk_device_get_key(long self, int index, int[] keyval, int[] modifiers);

    static final Window getLastEventWindow(Device self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_last_event_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_device_get_last_event_window(long self);

    static final InputMode getMode(Device self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_mode(pointerOf(self));

            return (InputMode) enumFor(InputMode.class, result);
        }
    }

    private static native final int gdk_device_get_mode(long self);

    static final int getNAxes(Device self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_n_axes(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_device_get_n_axes(long self);

    static final int getNKeys(Device self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_n_keys(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_device_get_n_keys(long self);

    static final String getName(Device self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_device_get_name(long self);

    static final void getPosition(Device self, Screen[] screen, int[] x, int[] y) {
        long[] _screen;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _screen = pointersOf(screen);

        synchronized (lock) {
            gdk_device_get_position(pointerOf(self), _screen, x, y);
            fillObjectArray(screen, _screen);
        }
    }

    private static native final void gdk_device_get_position(long self, long[] screen, int[] x, int[] y);

    static final void getPositionDouble(Device self, Screen[] screen, double[] x, double[] y) {
        long[] _screen;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _screen = pointersOf(screen);

        synchronized (lock) {
            gdk_device_get_position_double(pointerOf(self), _screen, x, y);
            fillObjectArray(screen, _screen);
        }
    }

    private static native final void gdk_device_get_position_double(long self, long[] screen, double[] x, double[] y);

    static final String getProductId(Device self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_product_id(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_device_get_product_id(long self);

    @SuppressWarnings("unused")
    static final FIXME getSeat(Device self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkSeat*");
    }

    static final InputSource getSource(Device self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_source(pointerOf(self));

            return (InputSource) enumFor(InputSource.class, result);
        }
    }

    private static native final int gdk_device_get_source(long self);

    static final void getState(Device self, Window window, double[] axes, ModifierType[] mask) {
        int[] _mask;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        _mask = numsOf(mask);

        synchronized (lock) {
            gdk_device_get_state(pointerOf(self), pointerOf(window), axes, _mask);
            fillFlagArray(ModifierType.class, mask, _mask);
        }
    }

    private static native final void gdk_device_get_state(long self, long window, double[] axes, int[] mask);

    static final String getVendorId(Device self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_vendor_id(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_device_get_vendor_id(long self);

    static final Window getWindowAtPosition(Device self, int[] winX, int[] winY) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_window_at_position(pointerOf(self), winX, winY);

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_device_get_window_at_position(long self, int[] winX, int[] winY);

    static final Window getWindowAtPositionDouble(Device self, double[] winX, double[] winY) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_get_window_at_position_double(pointerOf(self), winX, winY);

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_device_get_window_at_position_double(long self, double[] winX, double[] winY);

    @SuppressWarnings("unused")
    static final GrabStatus grab(Device self, Window window, FIXME grabOwnership, boolean ownerEvents, EventMask eventMask, Cursor cursor, int time) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkGrabOwnership");
    }

    @SuppressWarnings("unused")
    static final FIXME listAxes(Device self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkAtom*");
    }

    static final Device[] listSlaveDevices(Device self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_device_list_slave_devices(pointerOf(self));

            return (Device[]) objectArrayFor(result, new Device[result.length]);
        }
    }

    private static native final long[] gdk_device_list_slave_devices(long self);

    static final void setAxisUse(Device self, int index, AxisUse use) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (use == null) {
            throw new IllegalArgumentException("use can't be null");
        }

        synchronized (lock) {
            gdk_device_set_axis_use(pointerOf(self), index, numOf(use));
        }
    }

    private static native final void gdk_device_set_axis_use(long self, int index, int use);

    static final void setKey(Device self, int index, int keyval, ModifierType modifiers) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (modifiers == null) {
            throw new IllegalArgumentException("modifiers can't be null");
        }

        synchronized (lock) {
            gdk_device_set_key(pointerOf(self), index, keyval, numOf(modifiers));
        }
    }

    private static native final void gdk_device_set_key(long self, int index, int keyval, int modifiers);

    static final boolean setMode(Device self, InputMode mode) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mode == null) {
            throw new IllegalArgumentException("mode can't be null");
        }

        synchronized (lock) {
            result = gdk_device_set_mode(pointerOf(self), numOf(mode));

            return result;
        }
    }

    private static native final boolean gdk_device_set_mode(long self, int mode);

    static final void ungrab(Device self, int time) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_device_ungrab(pointerOf(self), time);
        }
    }

    private static native final void gdk_device_ungrab(long self, int time);

    static final void warp(Device self, Screen screen, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gdk_device_warp(pointerOf(self), pointerOf(screen), x, y);
        }
    }

    private static native final void gdk_device_warp(long self, long screen, int x, int y);

    @SuppressWarnings("unused")
    static final void freeHistory(FIXME events, int nEvents) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkTimeCoord**");
    }

    static final boolean grabInfoLibgtkOnly(Display display, Device device, Window[] grabWindow, boolean[] ownerEvents) {
        boolean result;
        long[] _grabWindow;

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        _grabWindow = pointersOf(grabWindow);

        synchronized (lock) {
            result = gdk_device_grab_info_libgtk_only(pointerOf(display), pointerOf(device), _grabWindow, ownerEvents);
            fillObjectArray(grabWindow, _grabWindow);

            return result;
        }
    }

    private static native final boolean gdk_device_grab_info_libgtk_only(long display, long device, long[] grabWindow, boolean[] ownerEvents);

    interface ChangedSignal extends Signal
    {
        void onChanged(Device source);
    }

    static final void connect(Device self, GdkDevice.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDevice.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GdkDevice.ChangedSignal) handler).onChanged((Device) objectFor(source));
    }

    interface ToolChangedSignal extends Signal
    {
        void onToolChanged(Device source, FIXME tool);
    }

    static final void connect(Device self, GdkDevice.ToolChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDevice.class, "tool-changed", after);
    }

    protected static final void receiveToolChanged(Signal handler, long source, java.lang.Object tool) {
        ((GdkDevice.ToolChangedSignal) handler).onToolChanged((Device) objectFor(source), (FIXME) tool);
    }
}

