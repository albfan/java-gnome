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
import org.freedesktop.cairo.Content;
import org.freedesktop.cairo.Context;
import org.freedesktop.cairo.Format;
import org.freedesktop.cairo.Pattern;
import org.freedesktop.cairo.Surface;
import org.gnome.gdk.Cursor;
import org.gnome.gdk.Device;
import org.gnome.gdk.Display;
import org.gnome.gdk.DragProtocol;
import org.gnome.gdk.Event;
import org.gnome.gdk.EventMask;
import org.gnome.gdk.Geometry;
import org.gnome.gdk.InputSource;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.RGBA;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Visual;
import org.gnome.gdk.Window;
import org.gnome.gdk.WindowAttr;
import org.gnome.gdk.WindowEdge;
import org.gnome.gdk.WindowHints;
import org.gnome.gdk.WindowState;
import org.gnome.gdk.WindowType;
import org.gnome.gdk.WindowTypeHint;
import org.gnome.glib.GlibException;
import org.gnome.glib.Signal;

final class GdkWindow extends Plumbing
{
    private GdkWindow() {}

    static final long createWindow(Window parent, WindowAttr attributes, int attributesMask) {
        long result;

        if (attributes == null) {
            throw new IllegalArgumentException("attributes can't be null");
        }

        synchronized (lock) {
            result = gdk_window_new(pointerOf(parent), pointerOf(attributes), attributesMask);

            return result;
        }
    }

    private static native final long gdk_window_new(long parent, long attributes, int attributesMask);

    @SuppressWarnings("unused")
    static final void addFilter(Window self, FIXME function, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFilterFunc");
    }

    static final void beep(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_beep(pointerOf(self));
        }
    }

    private static native final void gdk_window_beep(long self);

    @SuppressWarnings("unused")
    static final FIXME beginDrawFrame(Window self, FIXME region) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkDrawingContext*");
    }

    static final void beginMoveDrag(Window self, int button, int rootX, int rootY, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_begin_move_drag(pointerOf(self), button, rootX, rootY, timestamp);
        }
    }

    private static native final void gdk_window_begin_move_drag(long self, int button, int rootX, int rootY, int timestamp);

    static final void beginMoveDragForDevice(Window self, Device device, int button, int rootX, int rootY, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            gdk_window_begin_move_drag_for_device(pointerOf(self), pointerOf(device), button, rootX, rootY, timestamp);
        }
    }

    private static native final void gdk_window_begin_move_drag_for_device(long self, long device, int button, int rootX, int rootY, int timestamp);

    static final void beginPaintRect(Window self, Rectangle rectangle) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rectangle == null) {
            throw new IllegalArgumentException("rectangle can't be null");
        }

        synchronized (lock) {
            gdk_window_begin_paint_rect(pointerOf(self), pointerOf(rectangle));
        }
    }

    private static native final void gdk_window_begin_paint_rect(long self, long rectangle);

    @SuppressWarnings("unused")
    static final void beginPaintRegion(Window self, FIXME region) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-cairo_region_t*");
    }

    static final void beginResizeDrag(Window self, WindowEdge edge, int button, int rootX, int rootY, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (edge == null) {
            throw new IllegalArgumentException("edge can't be null");
        }

        synchronized (lock) {
            gdk_window_begin_resize_drag(pointerOf(self), numOf(edge), button, rootX, rootY, timestamp);
        }
    }

    private static native final void gdk_window_begin_resize_drag(long self, int edge, int button, int rootX, int rootY, int timestamp);

    static final void beginResizeDragForDevice(Window self, WindowEdge edge, Device device, int button, int rootX, int rootY, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (edge == null) {
            throw new IllegalArgumentException("edge can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            gdk_window_begin_resize_drag_for_device(pointerOf(self), numOf(edge), pointerOf(device), button, rootX, rootY, timestamp);
        }
    }

    private static native final void gdk_window_begin_resize_drag_for_device(long self, int edge, long device, int button, int rootX, int rootY, int timestamp);

    static final void configureFinished(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_configure_finished(pointerOf(self));
        }
    }

    private static native final void gdk_window_configure_finished(long self);

    static final void coordsFromParent(Window self, double parentX, double parentY, double[] x, double[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_coords_from_parent(pointerOf(self), parentX, parentY, x, y);
        }
    }

    private static native final void gdk_window_coords_from_parent(long self, double parentX, double parentY, double[] x, double[] y);

    static final void coordsToParent(Window self, double x, double y, double[] parentX, double[] parentY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_coords_to_parent(pointerOf(self), x, y, parentX, parentY);
        }
    }

    private static native final void gdk_window_coords_to_parent(long self, double x, double y, double[] parentX, double[] parentY);

    @SuppressWarnings("unused")
    static final FIXME createGlContext(Window self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkGLContext*");
    }

    static final Surface createSimilarImageSurface(Window self, Format format, int width, int height, int scale) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (format == null) {
            throw new IllegalArgumentException("format can't be null");
        }

        synchronized (lock) {
            result = gdk_window_create_similar_image_surface(pointerOf(self), numOf(format), width, height, scale);

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gdk_window_create_similar_image_surface(long self, int format, int width, int height, int scale);

    static final Surface createSimilarSurface(Window self, Content content, int width, int height) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (content == null) {
            throw new IllegalArgumentException("content can't be null");
        }

        synchronized (lock) {
            result = gdk_window_create_similar_surface(pointerOf(self), numOf(content), width, height);

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gdk_window_create_similar_surface(long self, int content, int width, int height);

    static final void deiconify(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_deiconify(pointerOf(self));
        }
    }

    private static native final void gdk_window_deiconify(long self);

    static final void destroy(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_destroy(pointerOf(self));
        }
    }

    private static native final void gdk_window_destroy(long self);

    static final void enableSynchronizedConfigure(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_enable_synchronized_configure(pointerOf(self));
        }
    }

    private static native final void gdk_window_enable_synchronized_configure(long self);

    @SuppressWarnings("unused")
    static final void endDrawFrame(Window self, FIXME context) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkDrawingContext*");
    }

    static final void endPaint(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_end_paint(pointerOf(self));
        }
    }

    private static native final void gdk_window_end_paint(long self);

    static final boolean ensureNative(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_ensure_native(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_ensure_native(long self);

    static final void flush(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_flush(pointerOf(self));
        }
    }

    private static native final void gdk_window_flush(long self);

    static final void focus(Window self, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_focus(pointerOf(self), timestamp);
        }
    }

    private static native final void gdk_window_focus(long self, int timestamp);

    static final void freezeToplevelUpdatesLibgtkOnly(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_freeze_toplevel_updates_libgtk_only(pointerOf(self));
        }
    }

    private static native final void gdk_window_freeze_toplevel_updates_libgtk_only(long self);

    static final void freezeUpdates(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_freeze_updates(pointerOf(self));
        }
    }

    private static native final void gdk_window_freeze_updates(long self);

    static final void fullscreen(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_fullscreen(pointerOf(self));
        }
    }

    private static native final void gdk_window_fullscreen(long self);

    static final void fullscreenOnMonitor(Window self, int monitor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_fullscreen_on_monitor(pointerOf(self), monitor);
        }
    }

    private static native final void gdk_window_fullscreen_on_monitor(long self, int monitor);

    static final void geometryChanged(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_geometry_changed(pointerOf(self));
        }
    }

    private static native final void gdk_window_geometry_changed(long self);

    static final boolean getAcceptFocus(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_accept_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_get_accept_focus(long self);

    static final Pattern getBackgroundPattern(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_background_pattern(pointerOf(self));

            return (Pattern) entityFor(Pattern.class,  result);
        }
    }

    private static native final long gdk_window_get_background_pattern(long self);

    static final Window[] getChildren(Window self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_children(pointerOf(self));

            return (Window[]) objectArrayFor(result, new Window[result.length]);
        }
    }

    private static native final long[] gdk_window_get_children(long self);

    @SuppressWarnings("unused")
    static final Window[] getChildrenWithUserData(Window self, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    @SuppressWarnings("unused")
    static final FIXME getClipRegion(Window self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("cairo_region_t*");
    }

    static final boolean getComposited(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_composited(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_get_composited(long self);

    static final Cursor getCursor(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_cursor(pointerOf(self));

            return (Cursor) objectFor(result);
        }
    }

    private static native final long gdk_window_get_cursor(long self);

    @SuppressWarnings("unused")
    static final boolean getDecorations(Window self, FIXME decorations) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkWMDecoration*");
    }

    static final Cursor getDeviceCursor(Window self, Device device) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_device_cursor(pointerOf(self), pointerOf(device));

            return (Cursor) objectFor(result);
        }
    }

    private static native final long gdk_window_get_device_cursor(long self, long device);

    static final EventMask getDeviceEvents(Window self, Device device) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_device_events(pointerOf(self), pointerOf(device));

            return (EventMask) flagFor(EventMask.class, result);
        }
    }

    private static native final int gdk_window_get_device_events(long self, long device);

    static final Window getDevicePosition(Window self, Device device, int[] x, int[] y, ModifierType[] mask) {
        long result;
        int[] _mask;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        _mask = numsOf(mask);

        synchronized (lock) {
            result = gdk_window_get_device_position(pointerOf(self), pointerOf(device), x, y, _mask);
            fillFlagArray(ModifierType.class, mask, _mask);

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_device_position(long self, long device, int[] x, int[] y, int[] mask);

    static final Window getDevicePositionDouble(Window self, Device device, double[] x, double[] y, ModifierType[] mask) {
        long result;
        int[] _mask;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        _mask = numsOf(mask);

        synchronized (lock) {
            result = gdk_window_get_device_position_double(pointerOf(self), pointerOf(device), x, y, _mask);
            fillFlagArray(ModifierType.class, mask, _mask);

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_device_position_double(long self, long device, double[] x, double[] y, int[] mask);

    static final Display getDisplay(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_window_get_display(long self);

    static final DragProtocol getDragProtocol(Window self, Window[] target) {
        int result;
        long[] _target;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _target = pointersOf(target);

        synchronized (lock) {
            result = gdk_window_get_drag_protocol(pointerOf(self), _target);
            fillObjectArray(target, _target);

            return (DragProtocol) enumFor(DragProtocol.class, result);
        }
    }

    private static native final int gdk_window_get_drag_protocol(long self, long[] target);

    static final Window getEffectiveParent(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_effective_parent(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_effective_parent(long self);

    static final Window getEffectiveToplevel(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_effective_toplevel(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_effective_toplevel(long self);

    static final boolean getEventCompression(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_event_compression(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_get_event_compression(long self);

    static final EventMask getEvents(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_events(pointerOf(self));

            return (EventMask) flagFor(EventMask.class, result);
        }
    }

    private static native final int gdk_window_get_events(long self);

    static final boolean getFocusOnMap(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_focus_on_map(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_get_focus_on_map(long self);

    @SuppressWarnings("unused")
    static final FIXME getFrameClock(Window self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFrameClock*");
    }

    static final void getFrameExtents(Window self, org.gnome.gdk.Rectangle rect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_get_frame_extents(pointerOf(self), pointerOf(rect));
        }
    }

    private static native final void gdk_window_get_frame_extents(long self, long rect);

    @SuppressWarnings("unused")
    static final FIXME getFullscreenMode(Window self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFullscreenMode");
    }

    static final void getGeometry(Window self, int[] x, int[] y, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_get_geometry(pointerOf(self), x, y, width, height);
        }
    }

    private static native final void gdk_window_get_geometry(long self, int[] x, int[] y, int[] width, int[] height);

    static final Window getGroup(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_group(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_group(long self);

    static final int getHeight(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_get_height(long self);

    static final boolean getModalHint(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_modal_hint(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_get_modal_hint(long self);

    static final int getOrigin(Window self, int[] x, int[] y) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_origin(pointerOf(self), x, y);

            return result;
        }
    }

    private static native final int gdk_window_get_origin(long self, int[] x, int[] y);

    static final Window getParent(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_parent(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_parent(long self);

    static final boolean getPassThrough(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_pass_through(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_get_pass_through(long self);

    static final Window getPointer(Window self, int[] x, int[] y, ModifierType[] mask) {
        long result;
        int[] _mask;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _mask = numsOf(mask);

        synchronized (lock) {
            result = gdk_window_get_pointer(pointerOf(self), x, y, _mask);
            fillFlagArray(ModifierType.class, mask, _mask);

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_pointer(long self, int[] x, int[] y, int[] mask);

    static final void getPosition(Window self, int[] x, int[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_get_position(pointerOf(self), x, y);
        }
    }

    private static native final void gdk_window_get_position(long self, int[] x, int[] y);

    static final void getRootCoords(Window self, int x, int y, int[] rootX, int[] rootY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_get_root_coords(pointerOf(self), x, y, rootX, rootY);
        }
    }

    private static native final void gdk_window_get_root_coords(long self, int x, int y, int[] rootX, int[] rootY);

    static final void getRootOrigin(Window self, int[] x, int[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_get_root_origin(pointerOf(self), x, y);
        }
    }

    private static native final void gdk_window_get_root_origin(long self, int[] x, int[] y);

    static final int getScaleFactor(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_scale_factor(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_get_scale_factor(long self);

    static final Screen getScreen(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_screen(pointerOf(self));

            return (Screen) objectFor(result);
        }
    }

    private static native final long gdk_window_get_screen(long self);

    static final EventMask getSourceEvents(Window self, InputSource source) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (source == null) {
            throw new IllegalArgumentException("source can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_source_events(pointerOf(self), numOf(source));

            return (EventMask) flagFor(EventMask.class, result);
        }
    }

    private static native final int gdk_window_get_source_events(long self, int source);

    static final WindowState getState(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_state(pointerOf(self));

            return (WindowState) flagFor(WindowState.class, result);
        }
    }

    private static native final int gdk_window_get_state(long self);

    static final boolean getSupportMultidevice(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_support_multidevice(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_get_support_multidevice(long self);

    static final Window getToplevel(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_toplevel(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_get_toplevel(long self);

    static final WindowTypeHint getTypeHint(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_type_hint(pointerOf(self));

            return (WindowTypeHint) enumFor(WindowTypeHint.class, result);
        }
    }

    private static native final int gdk_window_get_type_hint(long self);

    @SuppressWarnings("unused")
    static final FIXME getUpdateArea(Window self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("cairo_region_t*");
    }

    @SuppressWarnings("unused")
    static final void getUserData(Window self, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer*");
    }

    @SuppressWarnings("unused")
    static final FIXME getVisibleRegion(Window self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("cairo_region_t*");
    }

    static final Visual getVisual(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_visual(pointerOf(self));

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_window_get_visual(long self);

    static final int getWidth(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_get_width(long self);

    static final WindowType getWindowType(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_get_window_type(pointerOf(self));

            return (WindowType) enumFor(WindowType.class, result);
        }
    }

    private static native final int gdk_window_get_window_type(long self);

    static final boolean hasNative(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_has_native(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_has_native(long self);

    static final void hide(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_hide(pointerOf(self));
        }
    }

    private static native final void gdk_window_hide(long self);

    static final void iconify(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_iconify(pointerOf(self));
        }
    }

    private static native final void gdk_window_iconify(long self);

    @SuppressWarnings("unused")
    static final void inputShapeCombineRegion(Window self, FIXME shapeRegion, int offsetX, int offsetY) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-cairo_region_t*");
    }

    @SuppressWarnings("unused")
    static final void invalidateMaybeRecurse(Window self, FIXME region, FIXME childFunc, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-cairo_region_t*");
    }

    static final void invalidateRect(Window self, Rectangle rect, boolean invalidateChildren) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_invalidate_rect(pointerOf(self), pointerOf(rect), invalidateChildren);
        }
    }

    private static native final void gdk_window_invalidate_rect(long self, long rect, boolean invalidateChildren);

    @SuppressWarnings("unused")
    static final void invalidateRegion(Window self, FIXME region, boolean invalidateChildren) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-cairo_region_t*");
    }

    static final boolean isDestroyed(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_is_destroyed(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_is_destroyed(long self);

    static final boolean isInputOnly(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_is_input_only(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_is_input_only(long self);

    static final boolean isShaped(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_is_shaped(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_is_shaped(long self);

    static final boolean isViewable(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_is_viewable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_is_viewable(long self);

    static final boolean isVisible(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_is_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_is_visible(long self);

    static final void lower(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_lower(pointerOf(self));
        }
    }

    private static native final void gdk_window_lower(long self);

    static final void markPaintFromClip(Window self, Context cr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cr == null) {
            throw new IllegalArgumentException("cr can't be null");
        }

        synchronized (lock) {
            gdk_window_mark_paint_from_clip(pointerOf(self), pointerOf(cr));
        }
    }

    private static native final void gdk_window_mark_paint_from_clip(long self, long cr);

    static final void maximize(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_maximize(pointerOf(self));
        }
    }

    private static native final void gdk_window_maximize(long self);

    static final void mergeChildInputShapes(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_merge_child_input_shapes(pointerOf(self));
        }
    }

    private static native final void gdk_window_merge_child_input_shapes(long self);

    static final void mergeChildShapes(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_merge_child_shapes(pointerOf(self));
        }
    }

    private static native final void gdk_window_merge_child_shapes(long self);

    static final void move(Window self, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_move(pointerOf(self), x, y);
        }
    }

    private static native final void gdk_window_move(long self, int x, int y);

    @SuppressWarnings("unused")
    static final void moveRegion(Window self, FIXME region, int dx, int dy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-cairo_region_t*");
    }

    static final void moveResize(Window self, int x, int y, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_move_resize(pointerOf(self), x, y, width, height);
        }
    }

    private static native final void gdk_window_move_resize(long self, int x, int y, int width, int height);

    static final Window[] peekChildren(Window self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_peek_children(pointerOf(self));

            return (Window[]) objectArrayFor(result, new Window[result.length]);
        }
    }

    private static native final long[] gdk_window_peek_children(long self);

    static final void processUpdates(Window self, boolean updateChildren) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_process_updates(pointerOf(self), updateChildren);
        }
    }

    private static native final void gdk_window_process_updates(long self, boolean updateChildren);

    static final void raise(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_raise(pointerOf(self));
        }
    }

    private static native final void gdk_window_raise(long self);

    static final void registerDnd(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_register_dnd(pointerOf(self));
        }
    }

    private static native final void gdk_window_register_dnd(long self);

    @SuppressWarnings("unused")
    static final void removeFilter(Window self, FIXME function, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFilterFunc");
    }

    static final void reparent(Window self, Window newParent, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newParent == null) {
            throw new IllegalArgumentException("newParent can't be null");
        }

        synchronized (lock) {
            gdk_window_reparent(pointerOf(self), pointerOf(newParent), x, y);
        }
    }

    private static native final void gdk_window_reparent(long self, long newParent, int x, int y);

    static final void resize(Window self, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_resize(pointerOf(self), width, height);
        }
    }

    private static native final void gdk_window_resize(long self, int width, int height);

    static final void restack(Window self, Window sibling, boolean above) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_restack(pointerOf(self), pointerOf(sibling), above);
        }
    }

    private static native final void gdk_window_restack(long self, long sibling, boolean above);

    static final void scroll(Window self, int dx, int dy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_scroll(pointerOf(self), dx, dy);
        }
    }

    private static native final void gdk_window_scroll(long self, int dx, int dy);

    static final void setAcceptFocus(Window self, boolean acceptFocus) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_accept_focus(pointerOf(self), acceptFocus);
        }
    }

    private static native final void gdk_window_set_accept_focus(long self, boolean acceptFocus);

    @SuppressWarnings("unused")
    static final void setBackground(Window self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkColor*");
    }

    static final void setBackgroundPattern(Window self, Pattern pattern) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_background_pattern(pointerOf(self), pointerOf(pattern));
        }
    }

    private static native final void gdk_window_set_background_pattern(long self, long pattern);

    static final void setBackgroundRgba(Window self, RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rgba == null) {
            throw new IllegalArgumentException("rgba can't be null");
        }

        synchronized (lock) {
            gdk_window_set_background_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gdk_window_set_background_rgba(long self, long rgba);

    static final void setChildInputShapes(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_child_input_shapes(pointerOf(self));
        }
    }

    private static native final void gdk_window_set_child_input_shapes(long self);

    static final void setChildShapes(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_child_shapes(pointerOf(self));
        }
    }

    private static native final void gdk_window_set_child_shapes(long self);

    static final void setComposited(Window self, boolean composited) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_composited(pointerOf(self), composited);
        }
    }

    private static native final void gdk_window_set_composited(long self, boolean composited);

    static final void setCursor(Window self, Cursor cursor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_cursor(pointerOf(self), pointerOf(cursor));
        }
    }

    private static native final void gdk_window_set_cursor(long self, long cursor);

    @SuppressWarnings("unused")
    static final void setDecorations(Window self, FIXME decorations) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkWMDecoration");
    }

    static final void setDeviceCursor(Window self, Device device, Cursor cursor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        if (cursor == null) {
            throw new IllegalArgumentException("cursor can't be null");
        }

        synchronized (lock) {
            gdk_window_set_device_cursor(pointerOf(self), pointerOf(device), pointerOf(cursor));
        }
    }

    private static native final void gdk_window_set_device_cursor(long self, long device, long cursor);

    static final void setDeviceEvents(Window self, Device device, EventMask eventMask) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        if (eventMask == null) {
            throw new IllegalArgumentException("eventMask can't be null");
        }

        synchronized (lock) {
            gdk_window_set_device_events(pointerOf(self), pointerOf(device), numOf(eventMask));
        }
    }

    private static native final void gdk_window_set_device_events(long self, long device, int eventMask);

    static final void setEventCompression(Window self, boolean eventCompression) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_event_compression(pointerOf(self), eventCompression);
        }
    }

    private static native final void gdk_window_set_event_compression(long self, boolean eventCompression);

    static final void setEvents(Window self, EventMask eventMask) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (eventMask == null) {
            throw new IllegalArgumentException("eventMask can't be null");
        }

        synchronized (lock) {
            gdk_window_set_events(pointerOf(self), numOf(eventMask));
        }
    }

    private static native final void gdk_window_set_events(long self, int eventMask);

    static final void setFocusOnMap(Window self, boolean focusOnMap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_focus_on_map(pointerOf(self), focusOnMap);
        }
    }

    private static native final void gdk_window_set_focus_on_map(long self, boolean focusOnMap);

    @SuppressWarnings("unused")
    static final void setFullscreenMode(Window self, FIXME mode) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFullscreenMode");
    }

    @SuppressWarnings("unused")
    static final void setFunctions(Window self, FIXME functions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkWMFunction");
    }

    static final void setGeometryHints(Window self, Geometry geometry, WindowHints geomMask) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (geometry == null) {
            throw new IllegalArgumentException("geometry can't be null");
        }

        if (geomMask == null) {
            throw new IllegalArgumentException("geomMask can't be null");
        }

        synchronized (lock) {
            gdk_window_set_geometry_hints(pointerOf(self), pointerOf(geometry), numOf(geomMask));
        }
    }

    private static native final void gdk_window_set_geometry_hints(long self, long geometry, int geomMask);

    static final void setGroup(Window self, Window leader) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_group(pointerOf(self), pointerOf(leader));
        }
    }

    private static native final void gdk_window_set_group(long self, long leader);

    @SuppressWarnings("unused")
    static final void setIconList(Window self, FIXME pixbufs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkPixbufPixbuf*");
    }

    static final void setIconName(Window self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_icon_name(pointerOf(self), name);
        }
    }

    private static native final void gdk_window_set_icon_name(long self, String name);

    @SuppressWarnings("unused")
    static final void setInvalidateHandler(Window self, FIXME handler) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkWindowInvalidateHandlerFunc");
    }

    static final void setKeepAbove(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_keep_above(pointerOf(self), setting);
        }
    }

    private static native final void gdk_window_set_keep_above(long self, boolean setting);

    static final void setKeepBelow(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_keep_below(pointerOf(self), setting);
        }
    }

    private static native final void gdk_window_set_keep_below(long self, boolean setting);

    static final void setModalHint(Window self, boolean modal) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_modal_hint(pointerOf(self), modal);
        }
    }

    private static native final void gdk_window_set_modal_hint(long self, boolean modal);

    static final void setOpacity(Window self, double opacity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_opacity(pointerOf(self), opacity);
        }
    }

    private static native final void gdk_window_set_opacity(long self, double opacity);

    @SuppressWarnings("unused")
    static final void setOpaqueRegion(Window self, FIXME region) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("cairo_region_t*");
    }

    static final void setOverrideRedirect(Window self, boolean overrideRedirect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_override_redirect(pointerOf(self), overrideRedirect);
        }
    }

    private static native final void gdk_window_set_override_redirect(long self, boolean overrideRedirect);

    static final void setPassThrough(Window self, boolean passThrough) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_pass_through(pointerOf(self), passThrough);
        }
    }

    private static native final void gdk_window_set_pass_through(long self, boolean passThrough);

    static final void setRole(Window self, String role) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (role == null) {
            throw new IllegalArgumentException("role can't be null");
        }

        synchronized (lock) {
            gdk_window_set_role(pointerOf(self), role);
        }
    }

    private static native final void gdk_window_set_role(long self, String role);

    static final void setShadowWidth(Window self, int left, int right, int top, int bottom) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_shadow_width(pointerOf(self), left, right, top, bottom);
        }
    }

    private static native final void gdk_window_set_shadow_width(long self, int left, int right, int top, int bottom);

    static final void setSkipPagerHint(Window self, boolean skipsPager) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_skip_pager_hint(pointerOf(self), skipsPager);
        }
    }

    private static native final void gdk_window_set_skip_pager_hint(long self, boolean skipsPager);

    static final void setSkipTaskbarHint(Window self, boolean skipsTaskbar) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_skip_taskbar_hint(pointerOf(self), skipsTaskbar);
        }
    }

    private static native final void gdk_window_set_skip_taskbar_hint(long self, boolean skipsTaskbar);

    static final void setSourceEvents(Window self, InputSource source, EventMask eventMask) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (source == null) {
            throw new IllegalArgumentException("source can't be null");
        }

        if (eventMask == null) {
            throw new IllegalArgumentException("eventMask can't be null");
        }

        synchronized (lock) {
            gdk_window_set_source_events(pointerOf(self), numOf(source), numOf(eventMask));
        }
    }

    private static native final void gdk_window_set_source_events(long self, int source, int eventMask);

    static final void setStartupId(Window self, String startupId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (startupId == null) {
            throw new IllegalArgumentException("startupId can't be null");
        }

        synchronized (lock) {
            gdk_window_set_startup_id(pointerOf(self), startupId);
        }
    }

    private static native final void gdk_window_set_startup_id(long self, String startupId);

    static final boolean setStaticGravities(Window self, boolean useStatic) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_set_static_gravities(pointerOf(self), useStatic);

            return result;
        }
    }

    private static native final boolean gdk_window_set_static_gravities(long self, boolean useStatic);

    static final void setSupportMultidevice(Window self, boolean supportMultidevice) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_support_multidevice(pointerOf(self), supportMultidevice);
        }
    }

    private static native final void gdk_window_set_support_multidevice(long self, boolean supportMultidevice);

    static final void setTitle(Window self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gdk_window_set_title(pointerOf(self), title);
        }
    }

    private static native final void gdk_window_set_title(long self, String title);

    static final void setTransientFor(Window self, Window parent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (parent == null) {
            throw new IllegalArgumentException("parent can't be null");
        }

        synchronized (lock) {
            gdk_window_set_transient_for(pointerOf(self), pointerOf(parent));
        }
    }

    private static native final void gdk_window_set_transient_for(long self, long parent);

    static final void setTypeHint(Window self, WindowTypeHint hint) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (hint == null) {
            throw new IllegalArgumentException("hint can't be null");
        }

        synchronized (lock) {
            gdk_window_set_type_hint(pointerOf(self), numOf(hint));
        }
    }

    private static native final void gdk_window_set_type_hint(long self, int hint);

    static final void setUrgencyHint(Window self, boolean urgent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_set_urgency_hint(pointerOf(self), urgent);
        }
    }

    private static native final void gdk_window_set_urgency_hint(long self, boolean urgent);

    @SuppressWarnings("unused")
    static final void setUserData(Window self, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    @SuppressWarnings("unused")
    static final void shapeCombineRegion(Window self, FIXME shapeRegion, int offsetX, int offsetY) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-cairo_region_t*");
    }

    static final void show(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_show(pointerOf(self));
        }
    }

    private static native final void gdk_window_show(long self);

    static final void showUnraised(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_show_unraised(pointerOf(self));
        }
    }

    private static native final void gdk_window_show_unraised(long self);

    static final boolean showWindowMenu(Window self, Event event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gdk_window_show_window_menu(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gdk_window_show_window_menu(long self, long event);

    static final void stick(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_stick(pointerOf(self));
        }
    }

    private static native final void gdk_window_stick(long self);

    static final void thawToplevelUpdatesLibgtkOnly(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_thaw_toplevel_updates_libgtk_only(pointerOf(self));
        }
    }

    private static native final void gdk_window_thaw_toplevel_updates_libgtk_only(long self);

    static final void thawUpdates(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_thaw_updates(pointerOf(self));
        }
    }

    private static native final void gdk_window_thaw_updates(long self);

    static final void unfullscreen(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_unfullscreen(pointerOf(self));
        }
    }

    private static native final void gdk_window_unfullscreen(long self);

    static final void unmaximize(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_unmaximize(pointerOf(self));
        }
    }

    private static native final void gdk_window_unmaximize(long self);

    static final void unstick(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_unstick(pointerOf(self));
        }
    }

    private static native final void gdk_window_unstick(long self);

    static final void withdraw(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_withdraw(pointerOf(self));
        }
    }

    private static native final void gdk_window_withdraw(long self);

    static final Window atPointer(int[] winX, int[] winY) {
        long result;

        synchronized (lock) {
            result = gdk_window_at_pointer(winX, winY);

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_window_at_pointer(int[] winX, int[] winY);

    static final void constrainSize(org.gnome.gdk.Geometry geometry, WindowHints flags, int width, int height, int[] newWidth, int[] newHeight) {
        if (geometry == null) {
            throw new IllegalArgumentException("geometry can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            gdk_window_constrain_size(pointerOf(geometry), numOf(flags), width, height, newWidth, newHeight);
        }
    }

    private static native final void gdk_window_constrain_size(long geometry, int flags, int width, int height, int[] newWidth, int[] newHeight);

    static final void processAllUpdates() {
        synchronized (lock) {
            gdk_window_process_all_updates();
        }
    }

    private static native final void gdk_window_process_all_updates();

    static final void setDebugUpdates(boolean setting) {
        synchronized (lock) {
            gdk_window_set_debug_updates(setting);
        }
    }

    private static native final void gdk_window_set_debug_updates(boolean setting);

    interface CreateSurfaceSignal extends Signal
    {
        Surface onCreateSurface(Window source, int width, int height);
    }

    static final void connect(Window self, GdkWindow.CreateSurfaceSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkWindow.class, "create-surface", after);
    }

    protected static final long receiveCreateSurface(Signal handler, long source, int width, int height) {
        Surface result;

        result = ((GdkWindow.CreateSurfaceSignal) handler).onCreateSurface((Window) objectFor(source), width, height);

        return pointerOf(result);
    }

    interface FromEmbedderSignal extends Signal
    {
        void onFromEmbedder(Window source, double embedderX, double embedderY, double[] offscreenX, double[] offscreenY);
    }

    static final void connect(Window self, GdkWindow.FromEmbedderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkWindow.class, "from-embedder", after);
    }

    protected static final void receiveFromEmbedder(Signal handler, long source, double embedderX, double embedderY, double[] offscreenX, double[] offscreenY) {
        ((GdkWindow.FromEmbedderSignal) handler).onFromEmbedder((Window) objectFor(source), embedderX, embedderY, offscreenX, offscreenY);
    }

    interface PickEmbeddedChildSignal extends Signal
    {
        Window onPickEmbeddedChild(Window source, double x, double y);
    }

    static final void connect(Window self, GdkWindow.PickEmbeddedChildSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkWindow.class, "pick-embedded-child", after);
    }

    protected static final long receivePickEmbeddedChild(Signal handler, long source, double x, double y) {
        Window result;

        result = ((GdkWindow.PickEmbeddedChildSignal) handler).onPickEmbeddedChild((Window) objectFor(source), x, y);

        return pointerOf(result);
    }

    interface ToEmbedderSignal extends Signal
    {
        void onToEmbedder(Window source, double offscreenX, double offscreenY, double[] embedderX, double[] embedderY);
    }

    static final void connect(Window self, GdkWindow.ToEmbedderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkWindow.class, "to-embedder", after);
    }

    protected static final void receiveToEmbedder(Signal handler, long source, double offscreenX, double offscreenY, double[] embedderX, double[] embedderY) {
        ((GdkWindow.ToEmbedderSignal) handler).onToEmbedder((Window) objectFor(source), offscreenX, offscreenY, embedderX, embedderY);
    }

    interface MovedToRectSignal extends Signal
    {
        void onMovedToRect(Window source, FIXME flippedRect, FIXME finalRect, boolean flippedX, boolean flippedY);
    }

    static final void connect(Window self, GdkWindow.MovedToRectSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkWindow.class, "moved-to-rect", after);
    }

    protected static final void receiveMovedToRect(Signal handler, long source, java.lang.Object flippedRect, java.lang.Object finalRect, boolean flippedX, boolean flippedY) {
        ((GdkWindow.MovedToRectSignal) handler).onMovedToRect((Window) objectFor(source), (FIXME) flippedRect, (FIXME) finalRect, flippedX, flippedY);
    }
}

