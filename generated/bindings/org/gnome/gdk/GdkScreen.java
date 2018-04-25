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

import org.freedesktop.cairo.FontOptions;
import org.gnome.gdk.Display;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Visual;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.glib.Value;

final class GdkScreen extends Plumbing
{
    private GdkScreen() {}

    static final Window getActiveWindow(Screen self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_active_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_screen_get_active_window(long self);

    static final Display getDisplay(Screen self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_screen_get_display(long self);

    static final FontOptions getFontOptions(Screen self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_font_options(pointerOf(self));

            return (FontOptions) entityFor(FontOptions.class,  result);
        }
    }

    private static native final long gdk_screen_get_font_options(long self);

    static final int getHeight(Screen self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_screen_get_height(long self);

    static final int getHeightMm(Screen self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_height_mm(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_screen_get_height_mm(long self);

    static final int getMonitorAtPoint(Screen self, int x, int y) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_monitor_at_point(pointerOf(self), x, y);

            return result;
        }
    }

    private static native final int gdk_screen_get_monitor_at_point(long self, int x, int y);

    static final int getMonitorAtWindow(Screen self, Window window) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_monitor_at_window(pointerOf(self), pointerOf(window));

            return result;
        }
    }

    private static native final int gdk_screen_get_monitor_at_window(long self, long window);

    static final void getMonitorGeometry(Screen self, int monitorNum, Rectangle dest) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_screen_get_monitor_geometry(pointerOf(self), monitorNum, pointerOf(dest));
        }
    }

    private static native final void gdk_screen_get_monitor_geometry(long self, int monitorNum, long dest);

    static final int getMonitorHeightMm(Screen self, int monitorNum) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_monitor_height_mm(pointerOf(self), monitorNum);

            return result;
        }
    }

    private static native final int gdk_screen_get_monitor_height_mm(long self, int monitorNum);

    static final String getMonitorPlugName(Screen self, int monitorNum) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_monitor_plug_name(pointerOf(self), monitorNum);

            return result;
        }
    }

    private static native final String gdk_screen_get_monitor_plug_name(long self, int monitorNum);

    static final int getMonitorScaleFactor(Screen self, int monitorNum) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_monitor_scale_factor(pointerOf(self), monitorNum);

            return result;
        }
    }

    private static native final int gdk_screen_get_monitor_scale_factor(long self, int monitorNum);

    static final int getMonitorWidthMm(Screen self, int monitorNum) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_monitor_width_mm(pointerOf(self), monitorNum);

            return result;
        }
    }

    private static native final int gdk_screen_get_monitor_width_mm(long self, int monitorNum);

    static final void getMonitorWorkarea(Screen self, int monitorNum, Rectangle dest) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_screen_get_monitor_workarea(pointerOf(self), monitorNum, pointerOf(dest));
        }
    }

    private static native final void gdk_screen_get_monitor_workarea(long self, int monitorNum, long dest);

    static final int getNMonitors(Screen self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_n_monitors(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_screen_get_n_monitors(long self);

    static final int getNumber(Screen self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_number(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_screen_get_number(long self);

    static final int getPrimaryMonitor(Screen self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_primary_monitor(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_screen_get_primary_monitor(long self);

    static final double getResolution(Screen self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_resolution(pointerOf(self));

            return result;
        }
    }

    private static native final double gdk_screen_get_resolution(long self);

    static final Visual getRgbaVisual(Screen self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_rgba_visual(pointerOf(self));

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_screen_get_rgba_visual(long self);

    static final Window getRootWindow(Screen self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_root_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_screen_get_root_window(long self);

    static final boolean getSetting(Screen self, String name, Value value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_setting(pointerOf(self), name, pointerOf(value));

            return result;
        }
    }

    private static native final boolean gdk_screen_get_setting(long self, String name, long value);

    static final Visual getSystemVisual(Screen self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_system_visual(pointerOf(self));

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_screen_get_system_visual(long self);

    static final Window[] getToplevelWindows(Screen self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_toplevel_windows(pointerOf(self));

            return (Window[]) objectArrayFor(result, new Window[result.length]);
        }
    }

    private static native final long[] gdk_screen_get_toplevel_windows(long self);

    static final int getWidth(Screen self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_screen_get_width(long self);

    static final int getWidthMm(Screen self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_width_mm(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_screen_get_width_mm(long self);

    static final Window[] getWindowStack(Screen self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_get_window_stack(pointerOf(self));

            return (Window[]) objectArrayFor(result, new Window[result.length]);
        }
    }

    private static native final long[] gdk_screen_get_window_stack(long self);

    static final boolean isComposited(Screen self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_is_composited(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_screen_is_composited(long self);

    static final Visual[] listVisuals(Screen self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_list_visuals(pointerOf(self));

            return (Visual[]) objectArrayFor(result, new Visual[result.length]);
        }
    }

    private static native final long[] gdk_screen_list_visuals(long self);

    static final String makeDisplayName(Screen self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_screen_make_display_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_screen_make_display_name(long self);

    static final void setFontOptions(Screen self, FontOptions options) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_screen_set_font_options(pointerOf(self), pointerOf(options));
        }
    }

    private static native final void gdk_screen_set_font_options(long self, long options);

    static final void setResolution(Screen self, double dpi) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_screen_set_resolution(pointerOf(self), dpi);
        }
    }

    private static native final void gdk_screen_set_resolution(long self, double dpi);

    static final Screen getDefault() {
        long result;

        synchronized (lock) {
            result = gdk_screen_get_default();

            return (Screen) objectFor(result);
        }
    }

    private static native final long gdk_screen_get_default();

    static final int height() {
        int result;

        synchronized (lock) {
            result = gdk_screen_height();

            return result;
        }
    }

    private static native final int gdk_screen_height();

    static final int heightMm() {
        int result;

        synchronized (lock) {
            result = gdk_screen_height_mm();

            return result;
        }
    }

    private static native final int gdk_screen_height_mm();

    static final int width() {
        int result;

        synchronized (lock) {
            result = gdk_screen_width();

            return result;
        }
    }

    private static native final int gdk_screen_width();

    static final int widthMm() {
        int result;

        synchronized (lock) {
            result = gdk_screen_width_mm();

            return result;
        }
    }

    private static native final int gdk_screen_width_mm();

    interface CompositedChangedSignal extends Signal
    {
        void onCompositedChanged(Screen source);
    }

    static final void connect(Screen self, GdkScreen.CompositedChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkScreen.class, "composited-changed", after);
    }

    protected static final void receiveCompositedChanged(Signal handler, long source) {
        ((GdkScreen.CompositedChangedSignal) handler).onCompositedChanged((Screen) objectFor(source));
    }

    interface MonitorsChangedSignal extends Signal
    {
        void onMonitorsChanged(Screen source);
    }

    static final void connect(Screen self, GdkScreen.MonitorsChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkScreen.class, "monitors-changed", after);
    }

    protected static final void receiveMonitorsChanged(Signal handler, long source) {
        ((GdkScreen.MonitorsChangedSignal) handler).onMonitorsChanged((Screen) objectFor(source));
    }

    interface SizeChangedSignal extends Signal
    {
        void onSizeChanged(Screen source);
    }

    static final void connect(Screen self, GdkScreen.SizeChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkScreen.class, "size-changed", after);
    }

    protected static final void receiveSizeChanged(Signal handler, long source) {
        ((GdkScreen.SizeChangedSignal) handler).onSizeChanged((Screen) objectFor(source));
    }
}

