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
import org.freedesktop.cairo.FontOptions;
import org.gnome.atk.Object;
import org.gnome.gdk.Device;
import org.gnome.gdk.Display;
import org.gnome.gdk.DragAction;
import org.gnome.gdk.DragContext;
import org.gnome.gdk.DragProtocol;
import org.gnome.gdk.Event;
import org.gnome.gdk.EventButton;
import org.gnome.gdk.EventConfigure;
import org.gnome.gdk.EventCrossing;
import org.gnome.gdk.EventFocus;
import org.gnome.gdk.EventKey;
import org.gnome.gdk.EventMask;
import org.gnome.gdk.EventMotion;
import org.gnome.gdk.EventScroll;
import org.gnome.gdk.EventVisibility;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.RGBA;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Visual;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.glib.Value;
import org.gnome.gtk.AccelFlags;
import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.Align;
import org.gnome.gtk.Allocation;
import org.gnome.gtk.Clipboard;
import org.gnome.gtk.DestDefaults;
import org.gnome.gtk.DirectionType;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Requisition;
import org.gnome.gtk.SelectionData;
import org.gnome.gtk.Settings;
import org.gnome.gtk.SizeRequestMode;
import org.gnome.gtk.StateFlags;
import org.gnome.gtk.StyleContext;
import org.gnome.gtk.TextDirection;
import org.gnome.gtk.Tooltip;
import org.gnome.gtk.Widget;
import org.gnome.gtk.WidgetHelpType;
import org.gnome.pango.Context;
import org.gnome.pango.FontDescription;
import org.gnome.pango.FontMap;
import org.gnome.pango.Layout;

final class GtkWidget extends Plumbing
{
    private GtkWidget() {}

    @SuppressWarnings("unused")
    static final long createWidget(FIXME type, String firstPropertyName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    static final boolean activate(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_activate(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_activate(long self);

    static final void addAccelerator(Widget self, String accelSignal, AcceleratorGroup accelGroup, int accelKey, ModifierType accelMods, AccelFlags accelFlags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelSignal == null) {
            throw new IllegalArgumentException("accelSignal can't be null");
        }

        if (accelGroup == null) {
            throw new IllegalArgumentException("accelGroup can't be null");
        }

        if (accelMods == null) {
            throw new IllegalArgumentException("accelMods can't be null");
        }

        if (accelFlags == null) {
            throw new IllegalArgumentException("accelFlags can't be null");
        }

        synchronized (lock) {
            gtk_widget_add_accelerator(pointerOf(self), accelSignal, pointerOf(accelGroup), accelKey, numOf(accelMods), numOf(accelFlags));
        }
    }

    private static native final void gtk_widget_add_accelerator(long self, String accelSignal, long accelGroup, int accelKey, int accelMods, int accelFlags);

    static final void addDeviceEvents(Widget self, Device device, EventMask events) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        if (events == null) {
            throw new IllegalArgumentException("events can't be null");
        }

        synchronized (lock) {
            gtk_widget_add_device_events(pointerOf(self), pointerOf(device), numOf(events));
        }
    }

    private static native final void gtk_widget_add_device_events(long self, long device, int events);

    static final void addEvents(Widget self, int events) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_add_events(pointerOf(self), events);
        }
    }

    private static native final void gtk_widget_add_events(long self, int events);

    static final void addMnemonicLabel(Widget self, Widget label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            gtk_widget_add_mnemonic_label(pointerOf(self), pointerOf(label));
        }
    }

    private static native final void gtk_widget_add_mnemonic_label(long self, long label);

    @SuppressWarnings("unused")
    static final int addTickCallback(Widget self, FIXME callback, FIXME userData, FIXME notify) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTickCallback");
    }

    static final boolean canActivateAccel(Widget self, int signalId) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_can_activate_accel(pointerOf(self), signalId);

            return result;
        }
    }

    private static native final boolean gtk_widget_can_activate_accel(long self, int signalId);

    static final boolean childFocus(Widget self, DirectionType direction) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_child_focus(pointerOf(self), numOf(direction));

            return result;
        }
    }

    private static native final boolean gtk_widget_child_focus(long self, int direction);

    static final void childNotify(Widget self, String childProperty) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (childProperty == null) {
            throw new IllegalArgumentException("childProperty can't be null");
        }

        synchronized (lock) {
            gtk_widget_child_notify(pointerOf(self), childProperty);
        }
    }

    private static native final void gtk_widget_child_notify(long self, String childProperty);

    static final void classPath(Widget self, int[] pathLength, String[] path, String[] pathReversed) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_class_path(pointerOf(self), pathLength, path, pathReversed);
        }
    }

    private static native final void gtk_widget_class_path(long self, int[] pathLength, String[] path, String[] pathReversed);

    static final boolean computeExpand(Widget self, Orientation orientation) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_compute_expand(pointerOf(self), numOf(orientation));

            return result;
        }
    }

    private static native final boolean gtk_widget_compute_expand(long self, int orientation);

    static final Context createPangoContext(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_create_pango_context(pointerOf(self));

            return (Context) objectFor(result);
        }
    }

    private static native final long gtk_widget_create_pango_context(long self);

    static final Layout createPangoLayout(Widget self, String text) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_create_pango_layout(pointerOf(self), text);

            return (Layout) objectFor(result);
        }
    }

    private static native final long gtk_widget_create_pango_layout(long self, String text);

    static final void destroy(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_destroy(pointerOf(self));
        }
    }

    private static native final void gtk_widget_destroy(long self);

    static final void destroyed(Widget self, Widget[] widgetPointer) {
        long[] _widgetPointer;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widgetPointer == null) {
            throw new IllegalArgumentException("widgetPointer can't be null");
        }

        _widgetPointer = pointersOf(widgetPointer);

        synchronized (lock) {
            gtk_widget_destroyed(pointerOf(self), _widgetPointer);
            fillObjectArray(widgetPointer, _widgetPointer);
        }
    }

    private static native final void gtk_widget_destroyed(long self, long[] widgetPointer);

    static final boolean deviceIsShadowed(Widget self, Device device) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_device_is_shadowed(pointerOf(self), pointerOf(device));

            return result;
        }
    }

    private static native final boolean gtk_widget_device_is_shadowed(long self, long device);

    @SuppressWarnings("unused")
    static final DragContext dragBegin(Widget self, FIXME targets, DragAction actions, int button, Event event) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    @SuppressWarnings("unused")
    static final DragContext dragBeginWithCoordinates(Widget self, FIXME targets, DragAction actions, int button, Event event, int x, int y) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    static final boolean dragCheckThreshold(Widget self, int startX, int startY, int currentX, int currentY) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_drag_check_threshold(pointerOf(self), startX, startY, currentX, currentY);

            return result;
        }
    }

    private static native final boolean gtk_drag_check_threshold(long self, int startX, int startY, int currentX, int currentY);

    static final void dragDestAddImageTargets(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_dest_add_image_targets(pointerOf(self));
        }
    }

    private static native final void gtk_drag_dest_add_image_targets(long self);

    static final void dragDestAddTextTargets(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_dest_add_text_targets(pointerOf(self));
        }
    }

    private static native final void gtk_drag_dest_add_text_targets(long self);

    static final void dragDestAddUriTargets(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_dest_add_uri_targets(pointerOf(self));
        }
    }

    private static native final void gtk_drag_dest_add_uri_targets(long self);

    @SuppressWarnings("unused")
    static final FIXME dragDestFindTarget(Widget self, DragContext context, FIXME targetList) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final FIXME dragDestGetTargetList(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    static final boolean dragDestGetTrackMotion(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_drag_dest_get_track_motion(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_drag_dest_get_track_motion(long self);

    @SuppressWarnings("unused")
    static final void dragDestSet(Widget self, DestDefaults flags, FIXME targets, int nTargets, DragAction actions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    static final void dragDestSetProxy(Widget self, Window proxyWindow, DragProtocol protocol, boolean useCoordinates) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (proxyWindow == null) {
            throw new IllegalArgumentException("proxyWindow can't be null");
        }

        if (protocol == null) {
            throw new IllegalArgumentException("protocol can't be null");
        }

        synchronized (lock) {
            gtk_drag_dest_set_proxy(pointerOf(self), pointerOf(proxyWindow), numOf(protocol), useCoordinates);
        }
    }

    private static native final void gtk_drag_dest_set_proxy(long self, long proxyWindow, int protocol, boolean useCoordinates);

    @SuppressWarnings("unused")
    static final void dragDestSetTargetList(Widget self, FIXME targetList) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    static final void dragDestSetTrackMotion(Widget self, boolean trackMotion) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_dest_set_track_motion(pointerOf(self), trackMotion);
        }
    }

    private static native final void gtk_drag_dest_set_track_motion(long self, boolean trackMotion);

    static final void dragDestUnset(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_dest_unset(pointerOf(self));
        }
    }

    private static native final void gtk_drag_dest_unset(long self);

    @SuppressWarnings("unused")
    static final void dragGetData(Widget self, DragContext context, FIXME target, int time) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final void dragHighlight(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_highlight(pointerOf(self));
        }
    }

    private static native final void gtk_drag_highlight(long self);

    static final void dragSourceAddImageTargets(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_source_add_image_targets(pointerOf(self));
        }
    }

    private static native final void gtk_drag_source_add_image_targets(long self);

    static final void dragSourceAddTextTargets(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_source_add_text_targets(pointerOf(self));
        }
    }

    private static native final void gtk_drag_source_add_text_targets(long self);

    static final void dragSourceAddUriTargets(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_source_add_uri_targets(pointerOf(self));
        }
    }

    private static native final void gtk_drag_source_add_uri_targets(long self);

    @SuppressWarnings("unused")
    static final FIXME dragSourceGetTargetList(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    @SuppressWarnings("unused")
    static final void dragSourceSet(Widget self, ModifierType startButtonMask, FIXME targets, int nTargets, DragAction actions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    @SuppressWarnings("unused")
    static final void dragSourceSetIconGicon(Widget self, FIXME icon) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final void dragSourceSetIconName(Widget self, String iconName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        synchronized (lock) {
            gtk_drag_source_set_icon_name(pointerOf(self), iconName);
        }
    }

    private static native final void gtk_drag_source_set_icon_name(long self, String iconName);

    static final void dragSourceSetIconPixbuf(Widget self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            gtk_drag_source_set_icon_pixbuf(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_drag_source_set_icon_pixbuf(long self, long pixbuf);

    static final void dragSourceSetIconStock(Widget self, String stockId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            gtk_drag_source_set_icon_stock(pointerOf(self), stockId);
        }
    }

    private static native final void gtk_drag_source_set_icon_stock(long self, String stockId);

    @SuppressWarnings("unused")
    static final void dragSourceSetTargetList(Widget self, FIXME targetList) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    static final void dragSourceUnset(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_source_unset(pointerOf(self));
        }
    }

    private static native final void gtk_drag_source_unset(long self);

    static final void dragUnhighlight(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_drag_unhighlight(pointerOf(self));
        }
    }

    private static native final void gtk_drag_unhighlight(long self);

    static final void draw(Widget self, org.freedesktop.cairo.Context cr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cr == null) {
            throw new IllegalArgumentException("cr can't be null");
        }

        synchronized (lock) {
            gtk_widget_draw(pointerOf(self), pointerOf(cr));
        }
    }

    private static native final void gtk_widget_draw(long self, long cr);

    static final void ensureStyle(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_ensure_style(pointerOf(self));
        }
    }

    private static native final void gtk_widget_ensure_style(long self);

    static final void errorBell(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_error_bell(pointerOf(self));
        }
    }

    private static native final void gtk_widget_error_bell(long self);

    static final boolean event(Widget self, Event event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_event(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gtk_widget_event(long self, long event);

    static final void freezeChildNotify(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_freeze_child_notify(pointerOf(self));
        }
    }

    private static native final void gtk_widget_freeze_child_notify(long self);

    static final Object getAccessible(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_accessible(pointerOf(self));

            return (Object) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_accessible(long self);

    @SuppressWarnings("unused")
    static final FIXME getActionGroup(Widget self, String prefix) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GActionGroup*");
    }

    static final int getAllocatedBaseline(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_allocated_baseline(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_allocated_baseline(long self);

    static final int getAllocatedHeight(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_allocated_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_allocated_height(long self);

    static final void getAllocatedSize(Widget self, Allocation allocation, int[] baseline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_allocated_size(pointerOf(self), pointerOf(allocation), baseline);
        }
    }

    private static native final void gtk_widget_get_allocated_size(long self, long allocation, int[] baseline);

    static final int getAllocatedWidth(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_allocated_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_allocated_width(long self);

    static final void getAllocation(Widget self, Allocation allocation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_allocation(pointerOf(self), pointerOf(allocation));
        }
    }

    private static native final void gtk_widget_get_allocation(long self, long allocation);

    @SuppressWarnings("unused")
    static final Widget getAncestor(Widget self, FIXME widgetType) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    static final boolean getAppPaintable(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_app_paintable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_app_paintable(long self);

    static final boolean getCanDefault(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_can_default(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_can_default(long self);

    static final boolean getCanFocus(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_can_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_can_focus(long self);

    static final void getChildRequisition(Widget self, Requisition requisition) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_child_requisition(pointerOf(self), pointerOf(requisition));
        }
    }

    private static native final void gtk_widget_get_child_requisition(long self, long requisition);

    static final boolean getChildVisible(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_child_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_child_visible(long self);

    static final void getClip(Widget self, Allocation clip) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_clip(pointerOf(self), pointerOf(clip));
        }
    }

    private static native final void gtk_widget_get_clip(long self, long clip);

    @SuppressWarnings("unused")
    static final Clipboard getClipboard(Widget self, FIXME selection) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final String getCompositeName(Widget self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_composite_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_widget_get_composite_name(long self);

    static final boolean getDeviceEnabled(Widget self, Device device) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_device_enabled(pointerOf(self), pointerOf(device));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_device_enabled(long self, long device);

    static final EventMask getDeviceEvents(Widget self, Device device) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_device_events(pointerOf(self), pointerOf(device));

            return (EventMask) flagFor(EventMask.class, result);
        }
    }

    private static native final int gtk_widget_get_device_events(long self, long device);

    static final TextDirection getDirection(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_direction(pointerOf(self));

            return (TextDirection) enumFor(TextDirection.class, result);
        }
    }

    private static native final int gtk_widget_get_direction(long self);

    static final Display getDisplay(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_display(long self);

    static final boolean getDoubleBuffered(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_double_buffered(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_double_buffered(long self);

    static final int getEvents(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_events(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_events(long self);

    static final boolean getFocusOnClick(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_focus_on_click(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_focus_on_click(long self);

    static final FontMap getFontMap(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_font_map(pointerOf(self));

            return (FontMap) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_font_map(long self);

    static final FontOptions getFontOptions(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_font_options(pointerOf(self));

            return (FontOptions) entityFor(FontOptions.class,  result);
        }
    }

    private static native final long gtk_widget_get_font_options(long self);

    @SuppressWarnings("unused")
    static final FIXME getFrameClock(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFrameClock*");
    }

    static final Align getHalign(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_halign(pointerOf(self));

            return (Align) enumFor(Align.class, result);
        }
    }

    private static native final int gtk_widget_get_halign(long self);

    static final boolean getHasTooltip(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_has_tooltip(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_has_tooltip(long self);

    static final boolean getHasWindow(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_has_window(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_has_window(long self);

    static final boolean getHexpand(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_hexpand(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_hexpand(long self);

    static final boolean getHexpandSet(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_hexpand_set(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_hexpand_set(long self);

    static final boolean getMapped(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_mapped(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_mapped(long self);

    static final int getMarginBottom(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_margin_bottom(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_margin_bottom(long self);

    static final int getMarginEnd(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_margin_end(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_margin_end(long self);

    static final int getMarginLeft(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_margin_left(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_margin_left(long self);

    static final int getMarginRight(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_margin_right(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_margin_right(long self);

    static final int getMarginStart(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_margin_start(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_margin_start(long self);

    static final int getMarginTop(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_margin_top(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_margin_top(long self);

    @SuppressWarnings("unused")
    static final ModifierType getModifierMask(Widget self, FIXME intent) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkModifierIntent");
    }

    @SuppressWarnings("unused")
    static final FIXME getModifierStyle(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkRcStyle*");
    }

    static final String getName(Widget self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_widget_get_name(long self);

    static final boolean getNoShowAll(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_no_show_all(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_no_show_all(long self);

    static final double getOpacity(Widget self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_opacity(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_widget_get_opacity(long self);

    static final Context getPangoContext(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_pango_context(pointerOf(self));

            return (Context) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_pango_context(long self);

    static final Widget getParent(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_parent(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_parent(long self);

    static final Window getParentWindow(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_parent_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_parent_window(long self);

    @SuppressWarnings("unused")
    static final FIXME getPath(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWidgetPath*");
    }

    static final void getPointer(Widget self, int[] x, int[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_pointer(pointerOf(self), x, y);
        }
    }

    private static native final void gtk_widget_get_pointer(long self, int[] x, int[] y);

    static final void getPreferredHeight(Widget self, int[] minimumHeight, int[] naturalHeight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_preferred_height(pointerOf(self), minimumHeight, naturalHeight);
        }
    }

    private static native final void gtk_widget_get_preferred_height(long self, int[] minimumHeight, int[] naturalHeight);

    static final void getPreferredHeightAndBaselineForWidth(Widget self, int width, int[] minimumHeight, int[] naturalHeight, int[] minimumBaseline, int[] naturalBaseline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_preferred_height_and_baseline_for_width(pointerOf(self), width, minimumHeight, naturalHeight, minimumBaseline, naturalBaseline);
        }
    }

    private static native final void gtk_widget_get_preferred_height_and_baseline_for_width(long self, int width, int[] minimumHeight, int[] naturalHeight, int[] minimumBaseline, int[] naturalBaseline);

    static final void getPreferredHeightForWidth(Widget self, int width, int[] minimumHeight, int[] naturalHeight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_preferred_height_for_width(pointerOf(self), width, minimumHeight, naturalHeight);
        }
    }

    private static native final void gtk_widget_get_preferred_height_for_width(long self, int width, int[] minimumHeight, int[] naturalHeight);

    static final void getPreferredSize(Widget self, Requisition minimumSize, Requisition naturalSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_preferred_size(pointerOf(self), pointerOf(minimumSize), pointerOf(naturalSize));
        }
    }

    private static native final void gtk_widget_get_preferred_size(long self, long minimumSize, long naturalSize);

    static final void getPreferredWidth(Widget self, int[] minimumWidth, int[] naturalWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_preferred_width(pointerOf(self), minimumWidth, naturalWidth);
        }
    }

    private static native final void gtk_widget_get_preferred_width(long self, int[] minimumWidth, int[] naturalWidth);

    static final void getPreferredWidthForHeight(Widget self, int height, int[] minimumWidth, int[] naturalWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_preferred_width_for_height(pointerOf(self), height, minimumWidth, naturalWidth);
        }
    }

    private static native final void gtk_widget_get_preferred_width_for_height(long self, int height, int[] minimumWidth, int[] naturalWidth);

    static final boolean getRealized(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_realized(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_realized(long self);

    static final boolean getReceivesDefault(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_receives_default(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_receives_default(long self);

    static final SizeRequestMode getRequestMode(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_request_mode(pointerOf(self));

            return (SizeRequestMode) enumFor(SizeRequestMode.class, result);
        }
    }

    private static native final int gtk_widget_get_request_mode(long self);

    static final void getRequisition(Widget self, Requisition requisition) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_requisition(pointerOf(self), pointerOf(requisition));
        }
    }

    private static native final void gtk_widget_get_requisition(long self, long requisition);

    static final Window getRootWindow(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_root_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_root_window(long self);

    static final int getScaleFactor(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_scale_factor(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_widget_get_scale_factor(long self);

    static final Screen getScreen(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_screen(pointerOf(self));

            return (Screen) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_screen(long self);

    static final boolean getSensitive(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_sensitive(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_sensitive(long self);

    static final Settings getSettings(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_settings(pointerOf(self));

            return (Settings) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_settings(long self);

    static final void getSizeRequest(Widget self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_get_size_request(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_widget_get_size_request(long self, int[] width, int[] height);

    @SuppressWarnings("unused")
    static final FIXME getState(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    static final StateFlags getStateFlags(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_state_flags(pointerOf(self));

            return (StateFlags) flagFor(StateFlags.class, result);
        }
    }

    private static native final int gtk_widget_get_state_flags(long self);

    @SuppressWarnings("unused")
    static final FIXME getStyle(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyle*");
    }

    static final StyleContext getStyleContext(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_style_context(pointerOf(self));

            return (StyleContext) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_style_context(long self);

    static final boolean getSupportMultidevice(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_support_multidevice(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_support_multidevice(long self);

    @SuppressWarnings("unused")
    static final org.gnome.glib.Object getTemplateChild(Widget self, FIXME widgetType, String name) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    static final String getTooltipMarkup(Widget self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_tooltip_markup(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_widget_get_tooltip_markup(long self);

    static final String getTooltipText(Widget self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_tooltip_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_widget_get_tooltip_text(long self);

    static final org.gnome.gtk.Window getTooltipWindow(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_tooltip_window(pointerOf(self));

            return (org.gnome.gtk.Window) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_tooltip_window(long self);

    static final Widget getToplevel(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_toplevel(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_toplevel(long self);

    static final Align getValign(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_valign(pointerOf(self));

            return (Align) enumFor(Align.class, result);
        }
    }

    private static native final int gtk_widget_get_valign(long self);

    static final Align getValignWithBaseline(Widget self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_valign_with_baseline(pointerOf(self));

            return (Align) enumFor(Align.class, result);
        }
    }

    private static native final int gtk_widget_get_valign_with_baseline(long self);

    static final boolean getVexpand(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_vexpand(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_vexpand(long self);

    static final boolean getVexpandSet(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_vexpand_set(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_vexpand_set(long self);

    static final boolean getVisible(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_get_visible(long self);

    static final Visual getVisual(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_visual(pointerOf(self));

            return (Visual) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_visual(long self);

    static final Window getWindow(Widget self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_get_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_widget_get_window(long self);

    static final void grabAdd(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grab_add(pointerOf(self));
        }
    }

    private static native final void gtk_grab_add(long self);

    static final void grabDefault(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_grab_default(pointerOf(self));
        }
    }

    private static native final void gtk_widget_grab_default(long self);

    static final void grabFocus(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_grab_focus(pointerOf(self));
        }
    }

    private static native final void gtk_widget_grab_focus(long self);

    static final void grabRemove(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grab_remove(pointerOf(self));
        }
    }

    private static native final void gtk_grab_remove(long self);

    static final boolean hasDefault(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_has_default(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_has_default(long self);

    static final boolean hasFocus(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_has_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_has_focus(long self);

    static final boolean hasGrab(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_has_grab(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_has_grab(long self);

    static final boolean hasRcStyle(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_has_rc_style(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_has_rc_style(long self);

    static final boolean hasScreen(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_has_screen(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_has_screen(long self);

    static final boolean hasVisibleFocus(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_has_visible_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_has_visible_focus(long self);

    static final void hide(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_hide(pointerOf(self));
        }
    }

    private static native final void gtk_widget_hide(long self);

    static final boolean hideOnDelete(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_hide_on_delete(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_hide_on_delete(long self);

    static final boolean inDestruction(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_in_destruction(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_in_destruction(long self);

    static final void initTemplate(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_init_template(pointerOf(self));
        }
    }

    private static native final void gtk_widget_init_template(long self);

    @SuppressWarnings("unused")
    static final void inputShapeCombineRegion(Widget self, FIXME region) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("cairo_region_t*");
    }

    @SuppressWarnings("unused")
    static final void insertActionGroup(Widget self, String name, FIXME group) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GActionGroup*");
    }

    static final boolean intersect(Widget self, Rectangle area, org.gnome.gdk.Rectangle intersection) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (area == null) {
            throw new IllegalArgumentException("area can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_intersect(pointerOf(self), pointerOf(area), pointerOf(intersection));

            return result;
        }
    }

    private static native final boolean gtk_widget_intersect(long self, long area, long intersection);

    static final boolean isAncestor(Widget self, Widget ancestor) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (ancestor == null) {
            throw new IllegalArgumentException("ancestor can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_is_ancestor(pointerOf(self), pointerOf(ancestor));

            return result;
        }
    }

    private static native final boolean gtk_widget_is_ancestor(long self, long ancestor);

    static final boolean isComposited(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_is_composited(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_is_composited(long self);

    static final boolean isDrawable(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_is_drawable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_is_drawable(long self);

    static final boolean isFocus(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_is_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_is_focus(long self);

    static final boolean isSensitive(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_is_sensitive(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_is_sensitive(long self);

    static final boolean isToplevel(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_is_toplevel(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_is_toplevel(long self);

    static final boolean isVisible(Widget self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_is_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_widget_is_visible(long self);

    static final boolean keynavFailed(Widget self, DirectionType direction) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_keynav_failed(pointerOf(self), numOf(direction));

            return result;
        }
    }

    private static native final boolean gtk_widget_keynav_failed(long self, int direction);

    @SuppressWarnings("unused")
    static final FIXME listAccelClosures(Widget self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GClosure*");
    }

    static final String[] listActionPrefixes(Widget self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_list_action_prefixes(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_widget_list_action_prefixes(long self);

    static final Widget[] listMnemonicLabels(Widget self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_list_mnemonic_labels(pointerOf(self));

            return (Widget[]) objectArrayFor(result, new Widget[result.length]);
        }
    }

    private static native final long[] gtk_widget_list_mnemonic_labels(long self);

    static final void map(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_map(pointerOf(self));
        }
    }

    private static native final void gtk_widget_map(long self);

    static final boolean mnemonicActivate(Widget self, boolean groupCycling) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_mnemonic_activate(pointerOf(self), groupCycling);

            return result;
        }
    }

    private static native final boolean gtk_widget_mnemonic_activate(long self, boolean groupCycling);

    @SuppressWarnings("unused")
    static final void modifyBase(Widget self, FIXME state, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    @SuppressWarnings("unused")
    static final void modifyBg(Widget self, FIXME state, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    @SuppressWarnings("unused")
    static final void modifyCursor(Widget self, FIXME primary, FIXME secondary) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkColor*");
    }

    @SuppressWarnings("unused")
    static final void modifyFg(Widget self, FIXME state, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    static final void modifyFont(Widget self, FontDescription fontDesc) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_modify_font(pointerOf(self), pointerOf(fontDesc));
        }
    }

    private static native final void gtk_widget_modify_font(long self, long fontDesc);

    @SuppressWarnings("unused")
    static final void modifyStyle(Widget self, FIXME style) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkRcStyle*");
    }

    @SuppressWarnings("unused")
    static final void modifyText(Widget self, FIXME state, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    static final void overrideBackgroundColor(Widget self, StateFlags state, RGBA color) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_widget_override_background_color(pointerOf(self), numOf(state), pointerOf(color));
        }
    }

    private static native final void gtk_widget_override_background_color(long self, int state, long color);

    static final void overrideColor(Widget self, StateFlags state, RGBA color) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_widget_override_color(pointerOf(self), numOf(state), pointerOf(color));
        }
    }

    private static native final void gtk_widget_override_color(long self, int state, long color);

    static final void overrideCursor(Widget self, RGBA cursor, RGBA secondaryCursor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_override_cursor(pointerOf(self), pointerOf(cursor), pointerOf(secondaryCursor));
        }
    }

    private static native final void gtk_widget_override_cursor(long self, long cursor, long secondaryCursor);

    static final void overrideFont(Widget self, org.gnome.pango.FontDescription fontDesc) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_override_font(pointerOf(self), pointerOf(fontDesc));
        }
    }

    private static native final void gtk_widget_override_font(long self, long fontDesc);

    static final void overrideSymbolicColor(Widget self, String name, RGBA color) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_widget_override_symbolic_color(pointerOf(self), name, pointerOf(color));
        }
    }

    private static native final void gtk_widget_override_symbolic_color(long self, String name, long color);

    static final void path(Widget self, int[] pathLength, String[] path, String[] pathReversed) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_path(pointerOf(self), pathLength, path, pathReversed);
        }
    }

    private static native final void gtk_widget_path(long self, int[] pathLength, String[] path, String[] pathReversed);

    static final void queueAllocate(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_queue_allocate(pointerOf(self));
        }
    }

    private static native final void gtk_widget_queue_allocate(long self);

    static final void queueComputeExpand(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_queue_compute_expand(pointerOf(self));
        }
    }

    private static native final void gtk_widget_queue_compute_expand(long self);

    static final void queueDraw(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_queue_draw(pointerOf(self));
        }
    }

    private static native final void gtk_widget_queue_draw(long self);

    static final void queueDrawArea(Widget self, int x, int y, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_queue_draw_area(pointerOf(self), x, y, width, height);
        }
    }

    private static native final void gtk_widget_queue_draw_area(long self, int x, int y, int width, int height);

    @SuppressWarnings("unused")
    static final void queueDrawRegion(Widget self, FIXME region) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-cairo_region_t*");
    }

    static final void queueResize(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_queue_resize(pointerOf(self));
        }
    }

    private static native final void gtk_widget_queue_resize(long self);

    static final void queueResizeNoRedraw(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_queue_resize_no_redraw(pointerOf(self));
        }
    }

    private static native final void gtk_widget_queue_resize_no_redraw(long self);

    static final void realize(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_realize(pointerOf(self));
        }
    }

    private static native final void gtk_widget_realize(long self);

    @SuppressWarnings("unused")
    static final FIXME regionIntersect(Widget self, FIXME region) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("cairo_region_t*");
    }

    static final void registerWindow(Widget self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gtk_widget_register_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gtk_widget_register_window(long self, long window);

    static final boolean removeAccelerator(Widget self, AcceleratorGroup accelGroup, int accelKey, ModifierType accelMods) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelGroup == null) {
            throw new IllegalArgumentException("accelGroup can't be null");
        }

        if (accelMods == null) {
            throw new IllegalArgumentException("accelMods can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_remove_accelerator(pointerOf(self), pointerOf(accelGroup), accelKey, numOf(accelMods));

            return result;
        }
    }

    private static native final boolean gtk_widget_remove_accelerator(long self, long accelGroup, int accelKey, int accelMods);

    static final void removeMnemonicLabel(Widget self, Widget label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            gtk_widget_remove_mnemonic_label(pointerOf(self), pointerOf(label));
        }
    }

    private static native final void gtk_widget_remove_mnemonic_label(long self, long label);

    static final void removeTickCallback(Widget self, int id) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_remove_tick_callback(pointerOf(self), id);
        }
    }

    private static native final void gtk_widget_remove_tick_callback(long self, int id);

    static final Pixbuf renderIcon(Widget self, String stockId, IconSize size, String detail) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_render_icon(pointerOf(self), stockId, numOf(size), detail);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_widget_render_icon(long self, String stockId, int size, String detail);

    static final Pixbuf renderIconPixbuf(Widget self, String stockId, IconSize size) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_render_icon_pixbuf(pointerOf(self), stockId, numOf(size));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_widget_render_icon_pixbuf(long self, String stockId, int size);

    static final void reparent(Widget self, Widget newParent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newParent == null) {
            throw new IllegalArgumentException("newParent can't be null");
        }

        synchronized (lock) {
            gtk_widget_reparent(pointerOf(self), pointerOf(newParent));
        }
    }

    private static native final void gtk_widget_reparent(long self, long newParent);

    static final void resetRcStyles(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_reset_rc_styles(pointerOf(self));
        }
    }

    private static native final void gtk_widget_reset_rc_styles(long self);

    static final void resetStyle(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_reset_style(pointerOf(self));
        }
    }

    private static native final void gtk_widget_reset_style(long self);

    static final int sendExpose(Widget self, Event event) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_send_expose(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final int gtk_widget_send_expose(long self, long event);

    static final boolean sendFocusChange(Widget self, Event event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_send_focus_change(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gtk_widget_send_focus_change(long self, long event);

    static final void setAccelPath(Widget self, String accelPath, AcceleratorGroup accelGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_accel_path(pointerOf(self), accelPath, pointerOf(accelGroup));
        }
    }

    private static native final void gtk_widget_set_accel_path(long self, String accelPath, long accelGroup);

    static final void setAllocation(Widget self, org.gnome.gtk.Allocation allocation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (allocation == null) {
            throw new IllegalArgumentException("allocation can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_allocation(pointerOf(self), pointerOf(allocation));
        }
    }

    private static native final void gtk_widget_set_allocation(long self, long allocation);

    static final void setAppPaintable(Widget self, boolean appPaintable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_app_paintable(pointerOf(self), appPaintable);
        }
    }

    private static native final void gtk_widget_set_app_paintable(long self, boolean appPaintable);

    static final void setCanDefault(Widget self, boolean canDefault) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_can_default(pointerOf(self), canDefault);
        }
    }

    private static native final void gtk_widget_set_can_default(long self, boolean canDefault);

    static final void setCanFocus(Widget self, boolean canFocus) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_can_focus(pointerOf(self), canFocus);
        }
    }

    private static native final void gtk_widget_set_can_focus(long self, boolean canFocus);

    static final void setChildVisible(Widget self, boolean isVisible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_child_visible(pointerOf(self), isVisible);
        }
    }

    private static native final void gtk_widget_set_child_visible(long self, boolean isVisible);

    static final void setClip(Widget self, org.gnome.gtk.Allocation clip) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (clip == null) {
            throw new IllegalArgumentException("clip can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_clip(pointerOf(self), pointerOf(clip));
        }
    }

    private static native final void gtk_widget_set_clip(long self, long clip);

    static final void setCompositeName(Widget self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_composite_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_widget_set_composite_name(long self, String name);

    static final void setDeviceEnabled(Widget self, Device device, boolean enabled) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_device_enabled(pointerOf(self), pointerOf(device), enabled);
        }
    }

    private static native final void gtk_widget_set_device_enabled(long self, long device, boolean enabled);

    static final void setDeviceEvents(Widget self, Device device, EventMask events) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        if (events == null) {
            throw new IllegalArgumentException("events can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_device_events(pointerOf(self), pointerOf(device), numOf(events));
        }
    }

    private static native final void gtk_widget_set_device_events(long self, long device, int events);

    static final void setDirection(Widget self, TextDirection dir) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dir == null) {
            throw new IllegalArgumentException("dir can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_direction(pointerOf(self), numOf(dir));
        }
    }

    private static native final void gtk_widget_set_direction(long self, int dir);

    static final void setDoubleBuffered(Widget self, boolean doubleBuffered) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_double_buffered(pointerOf(self), doubleBuffered);
        }
    }

    private static native final void gtk_widget_set_double_buffered(long self, boolean doubleBuffered);

    static final void setEvents(Widget self, int events) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_events(pointerOf(self), events);
        }
    }

    private static native final void gtk_widget_set_events(long self, int events);

    static final void setFocusOnClick(Widget self, boolean focusOnClick) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_focus_on_click(pointerOf(self), focusOnClick);
        }
    }

    private static native final void gtk_widget_set_focus_on_click(long self, boolean focusOnClick);

    static final void setFontMap(Widget self, FontMap fontMap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_font_map(pointerOf(self), pointerOf(fontMap));
        }
    }

    private static native final void gtk_widget_set_font_map(long self, long fontMap);

    static final void setFontOptions(Widget self, FontOptions options) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_font_options(pointerOf(self), pointerOf(options));
        }
    }

    private static native final void gtk_widget_set_font_options(long self, long options);

    static final void setHalign(Widget self, Align align) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (align == null) {
            throw new IllegalArgumentException("align can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_halign(pointerOf(self), numOf(align));
        }
    }

    private static native final void gtk_widget_set_halign(long self, int align);

    static final void setHasTooltip(Widget self, boolean hasTooltip) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_has_tooltip(pointerOf(self), hasTooltip);
        }
    }

    private static native final void gtk_widget_set_has_tooltip(long self, boolean hasTooltip);

    static final void setHasWindow(Widget self, boolean hasWindow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_has_window(pointerOf(self), hasWindow);
        }
    }

    private static native final void gtk_widget_set_has_window(long self, boolean hasWindow);

    static final void setHexpand(Widget self, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_hexpand(pointerOf(self), expand);
        }
    }

    private static native final void gtk_widget_set_hexpand(long self, boolean expand);

    static final void setHexpandSet(Widget self, boolean set) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_hexpand_set(pointerOf(self), set);
        }
    }

    private static native final void gtk_widget_set_hexpand_set(long self, boolean set);

    static final void setMapped(Widget self, boolean mapped) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_mapped(pointerOf(self), mapped);
        }
    }

    private static native final void gtk_widget_set_mapped(long self, boolean mapped);

    static final void setMarginBottom(Widget self, int margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_margin_bottom(pointerOf(self), margin);
        }
    }

    private static native final void gtk_widget_set_margin_bottom(long self, int margin);

    static final void setMarginEnd(Widget self, int margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_margin_end(pointerOf(self), margin);
        }
    }

    private static native final void gtk_widget_set_margin_end(long self, int margin);

    static final void setMarginLeft(Widget self, int margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_margin_left(pointerOf(self), margin);
        }
    }

    private static native final void gtk_widget_set_margin_left(long self, int margin);

    static final void setMarginRight(Widget self, int margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_margin_right(pointerOf(self), margin);
        }
    }

    private static native final void gtk_widget_set_margin_right(long self, int margin);

    static final void setMarginStart(Widget self, int margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_margin_start(pointerOf(self), margin);
        }
    }

    private static native final void gtk_widget_set_margin_start(long self, int margin);

    static final void setMarginTop(Widget self, int margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_margin_top(pointerOf(self), margin);
        }
    }

    private static native final void gtk_widget_set_margin_top(long self, int margin);

    static final void setName(Widget self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_widget_set_name(long self, String name);

    static final void setNoShowAll(Widget self, boolean noShowAll) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_no_show_all(pointerOf(self), noShowAll);
        }
    }

    private static native final void gtk_widget_set_no_show_all(long self, boolean noShowAll);

    static final void setOpacity(Widget self, double opacity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_opacity(pointerOf(self), opacity);
        }
    }

    private static native final void gtk_widget_set_opacity(long self, double opacity);

    static final void setParent(Widget self, Widget parent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (parent == null) {
            throw new IllegalArgumentException("parent can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_parent(pointerOf(self), pointerOf(parent));
        }
    }

    private static native final void gtk_widget_set_parent(long self, long parent);

    static final void setParentWindow(Widget self, Window parentWindow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (parentWindow == null) {
            throw new IllegalArgumentException("parentWindow can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_parent_window(pointerOf(self), pointerOf(parentWindow));
        }
    }

    private static native final void gtk_widget_set_parent_window(long self, long parentWindow);

    static final void setRealized(Widget self, boolean realized) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_realized(pointerOf(self), realized);
        }
    }

    private static native final void gtk_widget_set_realized(long self, boolean realized);

    static final void setReceivesDefault(Widget self, boolean receivesDefault) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_receives_default(pointerOf(self), receivesDefault);
        }
    }

    private static native final void gtk_widget_set_receives_default(long self, boolean receivesDefault);

    static final void setRedrawOnAllocate(Widget self, boolean redrawOnAllocate) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_redraw_on_allocate(pointerOf(self), redrawOnAllocate);
        }
    }

    private static native final void gtk_widget_set_redraw_on_allocate(long self, boolean redrawOnAllocate);

    static final void setSensitive(Widget self, boolean sensitive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_sensitive(pointerOf(self), sensitive);
        }
    }

    private static native final void gtk_widget_set_sensitive(long self, boolean sensitive);

    static final void setSizeRequest(Widget self, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_size_request(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_widget_set_size_request(long self, int width, int height);

    @SuppressWarnings("unused")
    static final void setState(Widget self, FIXME state) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    static final void setStateFlags(Widget self, StateFlags flags, boolean clear) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_state_flags(pointerOf(self), numOf(flags), clear);
        }
    }

    private static native final void gtk_widget_set_state_flags(long self, int flags, boolean clear);

    @SuppressWarnings("unused")
    static final void setStyle(Widget self, FIXME style) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyle*");
    }

    static final void setSupportMultidevice(Widget self, boolean supportMultidevice) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_support_multidevice(pointerOf(self), supportMultidevice);
        }
    }

    private static native final void gtk_widget_set_support_multidevice(long self, boolean supportMultidevice);

    static final void setTooltipMarkup(Widget self, String markup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_tooltip_markup(pointerOf(self), markup);
        }
    }

    private static native final void gtk_widget_set_tooltip_markup(long self, String markup);

    static final void setTooltipText(Widget self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_tooltip_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_widget_set_tooltip_text(long self, String text);

    static final void setTooltipWindow(Widget self, org.gnome.gtk.Window customWindow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_tooltip_window(pointerOf(self), pointerOf(customWindow));
        }
    }

    private static native final void gtk_widget_set_tooltip_window(long self, long customWindow);

    static final void setValign(Widget self, Align align) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (align == null) {
            throw new IllegalArgumentException("align can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_valign(pointerOf(self), numOf(align));
        }
    }

    private static native final void gtk_widget_set_valign(long self, int align);

    static final void setVexpand(Widget self, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_vexpand(pointerOf(self), expand);
        }
    }

    private static native final void gtk_widget_set_vexpand(long self, boolean expand);

    static final void setVexpandSet(Widget self, boolean set) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_vexpand_set(pointerOf(self), set);
        }
    }

    private static native final void gtk_widget_set_vexpand_set(long self, boolean set);

    static final void setVisible(Widget self, boolean visible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_visible(pointerOf(self), visible);
        }
    }

    private static native final void gtk_widget_set_visible(long self, boolean visible);

    static final void setVisual(Widget self, Visual visual) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_visual(pointerOf(self), pointerOf(visual));
        }
    }

    private static native final void gtk_widget_set_visual(long self, long visual);

    static final void setWindow(Widget self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gtk_widget_set_window(long self, long window);

    @SuppressWarnings("unused")
    static final void shapeCombineRegion(Widget self, FIXME region) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("cairo_region_t*");
    }

    static final void show(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_show(pointerOf(self));
        }
    }

    private static native final void gtk_widget_show(long self);

    static final void showAll(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_show_all(pointerOf(self));
        }
    }

    private static native final void gtk_widget_show_all(long self);

    static final void showNow(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_show_now(pointerOf(self));
        }
    }

    private static native final void gtk_widget_show_now(long self);

    static final void sizeAllocate(Widget self, Allocation allocation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (allocation == null) {
            throw new IllegalArgumentException("allocation can't be null");
        }

        synchronized (lock) {
            gtk_widget_size_allocate(pointerOf(self), pointerOf(allocation));
        }
    }

    private static native final void gtk_widget_size_allocate(long self, long allocation);

    static final void sizeAllocateWithBaseline(Widget self, Allocation allocation, int baseline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (allocation == null) {
            throw new IllegalArgumentException("allocation can't be null");
        }

        synchronized (lock) {
            gtk_widget_size_allocate_with_baseline(pointerOf(self), pointerOf(allocation), baseline);
        }
    }

    private static native final void gtk_widget_size_allocate_with_baseline(long self, long allocation, int baseline);

    static final void sizeRequest(Widget self, Requisition requisition) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_size_request(pointerOf(self), pointerOf(requisition));
        }
    }

    private static native final void gtk_widget_size_request(long self, long requisition);

    static final void styleAttach(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_style_attach(pointerOf(self));
        }
    }

    private static native final void gtk_widget_style_attach(long self);

    static final void styleGet(Widget self, String firstPropertyName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (firstPropertyName == null) {
            throw new IllegalArgumentException("firstPropertyName can't be null");
        }

        synchronized (lock) {
            gtk_widget_style_get(pointerOf(self), firstPropertyName);
        }
    }

    private static native final void gtk_widget_style_get(long self, String firstPropertyName);

    static final void styleGetProperty(Widget self, String propertyName, Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (propertyName == null) {
            throw new IllegalArgumentException("propertyName can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            gtk_widget_style_get_property(pointerOf(self), propertyName, pointerOf(value));
        }
    }

    private static native final void gtk_widget_style_get_property(long self, String propertyName, long value);

    @SuppressWarnings("unused")
    static final void styleGetValist(Widget self, String firstPropertyName, FIXME varArgs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    static final void thawChildNotify(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_thaw_child_notify(pointerOf(self));
        }
    }

    private static native final void gtk_widget_thaw_child_notify(long self);

    static final boolean translateCoordinates(Widget self, Widget destWidget, int srcX, int srcY, int[] destX, int[] destY) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (destWidget == null) {
            throw new IllegalArgumentException("destWidget can't be null");
        }

        synchronized (lock) {
            result = gtk_widget_translate_coordinates(pointerOf(self), pointerOf(destWidget), srcX, srcY, destX, destY);

            return result;
        }
    }

    private static native final boolean gtk_widget_translate_coordinates(long self, long destWidget, int srcX, int srcY, int[] destX, int[] destY);

    static final void triggerTooltipQuery(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_trigger_tooltip_query(pointerOf(self));
        }
    }

    private static native final void gtk_widget_trigger_tooltip_query(long self);

    static final void unmap(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_unmap(pointerOf(self));
        }
    }

    private static native final void gtk_widget_unmap(long self);

    static final void unparent(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_unparent(pointerOf(self));
        }
    }

    private static native final void gtk_widget_unparent(long self);

    static final void unrealize(Widget self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_widget_unrealize(pointerOf(self));
        }
    }

    private static native final void gtk_widget_unrealize(long self);

    static final void unregisterWindow(Widget self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gtk_widget_unregister_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gtk_widget_unregister_window(long self, long window);

    static final void unsetStateFlags(Widget self, StateFlags flags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            gtk_widget_unset_state_flags(pointerOf(self), numOf(flags));
        }
    }

    private static native final void gtk_widget_unset_state_flags(long self, int flags);

    static final TextDirection getDefaultDirection() {
        int result;

        synchronized (lock) {
            result = gtk_widget_get_default_direction();

            return (TextDirection) enumFor(TextDirection.class, result);
        }
    }

    private static native final int gtk_widget_get_default_direction();

    @SuppressWarnings("unused")
    static final FIXME getDefaultStyle() throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyle*");
    }

    static final void popCompositeChild() {
        synchronized (lock) {
            gtk_widget_pop_composite_child();
        }
    }

    private static native final void gtk_widget_pop_composite_child();

    static final void pushCompositeChild() {
        synchronized (lock) {
            gtk_widget_push_composite_child();
        }
    }

    private static native final void gtk_widget_push_composite_child();

    static final void setDefaultDirection(TextDirection dir) {
        if (dir == null) {
            throw new IllegalArgumentException("dir can't be null");
        }

        synchronized (lock) {
            gtk_widget_set_default_direction(numOf(dir));
        }
    }

    private static native final void gtk_widget_set_default_direction(int dir);

    interface AdjustBaselineAllocationSignal extends Signal
    {
        void onAdjustBaselineAllocation(Widget source, int[] baseline);
    }

    static final void connect(Widget self, GtkWidget.AdjustBaselineAllocationSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "adjust-baseline-allocation", after);
    }

    protected static final void receiveAdjustBaselineAllocation(Signal handler, long source, int[] baseline) {
        ((GtkWidget.AdjustBaselineAllocationSignal) handler).onAdjustBaselineAllocation((Widget) objectFor(source), baseline);
    }

    interface AdjustBaselineRequestSignal extends Signal
    {
        void onAdjustBaselineRequest(Widget source, int[] minimumBaseline, int[] naturalBaseline);
    }

    static final void connect(Widget self, GtkWidget.AdjustBaselineRequestSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "adjust-baseline-request", after);
    }

    protected static final void receiveAdjustBaselineRequest(Signal handler, long source, int[] minimumBaseline, int[] naturalBaseline) {
        ((GtkWidget.AdjustBaselineRequestSignal) handler).onAdjustBaselineRequest((Widget) objectFor(source), minimumBaseline, naturalBaseline);
    }

    interface AdjustSizeAllocationSignal extends Signal
    {
        void onAdjustSizeAllocation(Widget source, Orientation orientation, int[] minimumSize, int[] naturalSize, int[] allocatedPos, int[] allocatedSize);
    }

    static final void connect(Widget self, GtkWidget.AdjustSizeAllocationSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "adjust-size-allocation", after);
    }

    protected static final void receiveAdjustSizeAllocation(Signal handler, long source, int orientation, int[] minimumSize, int[] naturalSize, int[] allocatedPos, int[] allocatedSize) {
        ((GtkWidget.AdjustSizeAllocationSignal) handler).onAdjustSizeAllocation((Widget) objectFor(source), (Orientation) enumFor(Orientation.class, orientation), minimumSize, naturalSize, allocatedPos, allocatedSize);
    }

    interface AdjustSizeRequestSignal extends Signal
    {
        void onAdjustSizeRequest(Widget source, Orientation orientation, int[] minimumSize, int[] naturalSize);
    }

    static final void connect(Widget self, GtkWidget.AdjustSizeRequestSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "adjust-size-request", after);
    }

    protected static final void receiveAdjustSizeRequest(Signal handler, long source, int orientation, int[] minimumSize, int[] naturalSize) {
        ((GtkWidget.AdjustSizeRequestSignal) handler).onAdjustSizeRequest((Widget) objectFor(source), (Orientation) enumFor(Orientation.class, orientation), minimumSize, naturalSize);
    }

    interface ButtonPressEventSignal extends Signal
    {
        boolean onButtonPressEvent(Widget source, EventButton event);
    }

    static final void connect(Widget self, GtkWidget.ButtonPressEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "button-press-event", after);
    }

    protected static final boolean receiveButtonPressEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.ButtonPressEventSignal) handler).onButtonPressEvent((Widget) objectFor(source), (EventButton) boxedFor(EventButton.class, event));

        return result;
    }

    interface ButtonReleaseEventSignal extends Signal
    {
        boolean onButtonReleaseEvent(Widget source, EventButton event);
    }

    static final void connect(Widget self, GtkWidget.ButtonReleaseEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "button-release-event", after);
    }

    protected static final boolean receiveButtonReleaseEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.ButtonReleaseEventSignal) handler).onButtonReleaseEvent((Widget) objectFor(source), (EventButton) boxedFor(EventButton.class, event));

        return result;
    }

    interface CanActivateAccelSignal extends Signal
    {
        boolean onCanActivateAccel(Widget source, int signalId);
    }

    static final void connect(Widget self, GtkWidget.CanActivateAccelSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "can-activate-accel", after);
    }

    protected static final boolean receiveCanActivateAccel(Signal handler, long source, int signalId) {
        boolean result;

        result = ((GtkWidget.CanActivateAccelSignal) handler).onCanActivateAccel((Widget) objectFor(source), signalId);

        return result;
    }

    interface ChildNotifySignal extends Signal
    {
        void onChildNotify(Widget source, FIXME childProperty);
    }

    static final void connect(Widget self, GtkWidget.ChildNotifySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "child-notify", after);
    }

    protected static final void receiveChildNotify(Signal handler, long source, java.lang.Object childProperty) {
        ((GtkWidget.ChildNotifySignal) handler).onChildNotify((Widget) objectFor(source), (FIXME) childProperty);
    }

    interface CompositedChangedSignal extends Signal
    {
        void onCompositedChanged(Widget source);
    }

    static final void connect(Widget self, GtkWidget.CompositedChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "composited-changed", after);
    }

    protected static final void receiveCompositedChanged(Signal handler, long source) {
        ((GtkWidget.CompositedChangedSignal) handler).onCompositedChanged((Widget) objectFor(source));
    }

    interface ComputeExpandSignal extends Signal
    {
        void onComputeExpand(Widget source, boolean[] hexpandP, boolean[] vexpandP);
    }

    static final void connect(Widget self, GtkWidget.ComputeExpandSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "compute-expand", after);
    }

    protected static final void receiveComputeExpand(Signal handler, long source, boolean[] hexpandP, boolean[] vexpandP) {
        ((GtkWidget.ComputeExpandSignal) handler).onComputeExpand((Widget) objectFor(source), hexpandP, vexpandP);
    }

    interface ConfigureEventSignal extends Signal
    {
        boolean onConfigureEvent(Widget source, EventConfigure event);
    }

    static final void connect(Widget self, GtkWidget.ConfigureEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "configure-event", after);
    }

    protected static final boolean receiveConfigureEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.ConfigureEventSignal) handler).onConfigureEvent((Widget) objectFor(source), (EventConfigure) boxedFor(EventConfigure.class, event));

        return result;
    }

    interface DamageEventSignal extends Signal
    {
        boolean onDamageEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.DamageEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "damage-event", after);
    }

    protected static final boolean receiveDamageEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.DamageEventSignal) handler).onDamageEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface DeleteEventSignal extends Signal
    {
        boolean onDeleteEvent(Widget source, org.gnome.gdk.Event event);
    }

    static final void connect(Widget self, GtkWidget.DeleteEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "delete-event", after);
    }

    protected static final boolean receiveDeleteEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.DeleteEventSignal) handler).onDeleteEvent((Widget) objectFor(source), (org.gnome.gdk.Event) boxedFor(org.gnome.gdk.Event.class, event));

        return result;
    }

    interface DestroySignal extends Signal
    {
        void onDestroy(Widget source);
    }

    static final void connect(Widget self, GtkWidget.DestroySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "destroy", after);
    }

    protected static final void receiveDestroy(Signal handler, long source) {
        ((GtkWidget.DestroySignal) handler).onDestroy((Widget) objectFor(source));
    }

    interface DestroyEventSignal extends Signal
    {
        boolean onDestroyEvent(Widget source, org.gnome.gdk.Event event);
    }

    static final void connect(Widget self, GtkWidget.DestroyEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "destroy-event", after);
    }

    protected static final boolean receiveDestroyEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.DestroyEventSignal) handler).onDestroyEvent((Widget) objectFor(source), (org.gnome.gdk.Event) boxedFor(org.gnome.gdk.Event.class, event));

        return result;
    }

    interface DirectionChangedSignal extends Signal
    {
        void onDirectionChanged(Widget source, TextDirection previousDirection);
    }

    static final void connect(Widget self, GtkWidget.DirectionChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "direction-changed", after);
    }

    protected static final void receiveDirectionChanged(Signal handler, long source, int previousDirection) {
        ((GtkWidget.DirectionChangedSignal) handler).onDirectionChanged((Widget) objectFor(source), (TextDirection) enumFor(TextDirection.class, previousDirection));
    }

    interface DispatchChildPropertiesChangedSignal extends Signal
    {
        void onDispatchChildPropertiesChanged(Widget source, int nPspecs, FIXME pspecs);
    }

    static final void connect(Widget self, GtkWidget.DispatchChildPropertiesChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "dispatch-child-properties-changed", after);
    }

    protected static final void receiveDispatchChildPropertiesChanged(Signal handler, long source, int nPspecs, java.lang.Object pspecs) {
        ((GtkWidget.DispatchChildPropertiesChangedSignal) handler).onDispatchChildPropertiesChanged((Widget) objectFor(source), nPspecs, (FIXME) pspecs);
    }

    interface DragBeginSignal extends Signal
    {
        void onDragBegin(Widget source, DragContext context);
    }

    static final void connect(Widget self, GtkWidget.DragBeginSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-begin", after);
    }

    protected static final void receiveDragBegin(Signal handler, long source, long context) {
        ((GtkWidget.DragBeginSignal) handler).onDragBegin((Widget) objectFor(source), (DragContext) objectFor(context));
    }

    interface DragDataDeleteSignal extends Signal
    {
        void onDragDataDelete(Widget source, DragContext context);
    }

    static final void connect(Widget self, GtkWidget.DragDataDeleteSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-data-delete", after);
    }

    protected static final void receiveDragDataDelete(Signal handler, long source, long context) {
        ((GtkWidget.DragDataDeleteSignal) handler).onDragDataDelete((Widget) objectFor(source), (DragContext) objectFor(context));
    }

    interface DragDataGetSignal extends Signal
    {
        void onDragDataGet(Widget source, DragContext context, SelectionData selectionData, int info, int time);
    }

    static final void connect(Widget self, GtkWidget.DragDataGetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-data-get", after);
    }

    protected static final void receiveDragDataGet(Signal handler, long source, long context, long selectionData, int info, int time) {
        ((GtkWidget.DragDataGetSignal) handler).onDragDataGet((Widget) objectFor(source), (DragContext) objectFor(context), (SelectionData) boxedFor(SelectionData.class, selectionData), info, time);
    }

    interface DragDataReceivedSignal extends Signal
    {
        void onDragDataReceived(Widget source, DragContext context, int x, int y, SelectionData selectionData, int info, int time);
    }

    static final void connect(Widget self, GtkWidget.DragDataReceivedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-data-received", after);
    }

    protected static final void receiveDragDataReceived(Signal handler, long source, long context, int x, int y, long selectionData, int info, int time) {
        ((GtkWidget.DragDataReceivedSignal) handler).onDragDataReceived((Widget) objectFor(source), (DragContext) objectFor(context), x, y, (SelectionData) boxedFor(SelectionData.class, selectionData), info, time);
    }

    interface DragDropSignal extends Signal
    {
        boolean onDragDrop(Widget source, DragContext context, int x, int y, int time);
    }

    static final void connect(Widget self, GtkWidget.DragDropSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-drop", after);
    }

    protected static final boolean receiveDragDrop(Signal handler, long source, long context, int x, int y, int time) {
        boolean result;

        result = ((GtkWidget.DragDropSignal) handler).onDragDrop((Widget) objectFor(source), (DragContext) objectFor(context), x, y, time);

        return result;
    }

    interface DragEndSignal extends Signal
    {
        void onDragEnd(Widget source, DragContext context);
    }

    static final void connect(Widget self, GtkWidget.DragEndSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-end", after);
    }

    protected static final void receiveDragEnd(Signal handler, long source, long context) {
        ((GtkWidget.DragEndSignal) handler).onDragEnd((Widget) objectFor(source), (DragContext) objectFor(context));
    }

    interface DragFailedSignal extends Signal
    {
        boolean onDragFailed(Widget source, DragContext context, FIXME result1);
    }

    static final void connect(Widget self, GtkWidget.DragFailedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-failed", after);
    }

    protected static final boolean receiveDragFailed(Signal handler, long source, long context, java.lang.Object result1) {
        boolean result;

        result = ((GtkWidget.DragFailedSignal) handler).onDragFailed((Widget) objectFor(source), (DragContext) objectFor(context), (FIXME) result1);

        return result;
    }

    interface DragLeaveSignal extends Signal
    {
        void onDragLeave(Widget source, DragContext context, int time);
    }

    static final void connect(Widget self, GtkWidget.DragLeaveSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-leave", after);
    }

    protected static final void receiveDragLeave(Signal handler, long source, long context, int time) {
        ((GtkWidget.DragLeaveSignal) handler).onDragLeave((Widget) objectFor(source), (DragContext) objectFor(context), time);
    }

    interface DragMotionSignal extends Signal
    {
        boolean onDragMotion(Widget source, DragContext context, int x, int y, int time);
    }

    static final void connect(Widget self, GtkWidget.DragMotionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "drag-motion", after);
    }

    protected static final boolean receiveDragMotion(Signal handler, long source, long context, int x, int y, int time) {
        boolean result;

        result = ((GtkWidget.DragMotionSignal) handler).onDragMotion((Widget) objectFor(source), (DragContext) objectFor(context), x, y, time);

        return result;
    }

    interface DrawSignal extends Signal
    {
        boolean onDraw(Widget source, org.freedesktop.cairo.Context cr);
    }

    static final void connect(Widget self, GtkWidget.DrawSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "draw", after);
    }

    protected static final boolean receiveDraw(Signal handler, long source, long cr) {
        boolean result;

        result = ((GtkWidget.DrawSignal) handler).onDraw((Widget) objectFor(source), (org.freedesktop.cairo.Context) entityFor(org.freedesktop.cairo.Context.class,  cr));

        return result;
    }

    interface EnterNotifyEventSignal extends Signal
    {
        boolean onEnterNotifyEvent(Widget source, EventCrossing event);
    }

    static final void connect(Widget self, GtkWidget.EnterNotifyEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "enter-notify-event", after);
    }

    protected static final boolean receiveEnterNotifyEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.EnterNotifyEventSignal) handler).onEnterNotifyEvent((Widget) objectFor(source), (EventCrossing) boxedFor(EventCrossing.class, event));

        return result;
    }

    interface EventSignal extends Signal
    {
        boolean onEvent(Widget source, Event event);
    }

    static final void connect(Widget self, GtkWidget.EventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "event", after);
    }

    protected static final boolean receiveEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.EventSignal) handler).onEvent((Widget) objectFor(source), (Event) boxedFor(Event.class, event));

        return result;
    }

    interface FocusSignal extends Signal
    {
        boolean onFocus(Widget source, DirectionType direction);
    }

    static final void connect(Widget self, GtkWidget.FocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "focus", after);
    }

    protected static final boolean receiveFocus(Signal handler, long source, int direction) {
        boolean result;

        result = ((GtkWidget.FocusSignal) handler).onFocus((Widget) objectFor(source), (DirectionType) enumFor(DirectionType.class, direction));

        return result;
    }

    interface FocusInEventSignal extends Signal
    {
        boolean onFocusInEvent(Widget source, EventFocus event);
    }

    static final void connect(Widget self, GtkWidget.FocusInEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "focus-in-event", after);
    }

    protected static final boolean receiveFocusInEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.FocusInEventSignal) handler).onFocusInEvent((Widget) objectFor(source), (EventFocus) boxedFor(EventFocus.class, event));

        return result;
    }

    interface FocusOutEventSignal extends Signal
    {
        boolean onFocusOutEvent(Widget source, EventFocus event);
    }

    static final void connect(Widget self, GtkWidget.FocusOutEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "focus-out-event", after);
    }

    protected static final boolean receiveFocusOutEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.FocusOutEventSignal) handler).onFocusOutEvent((Widget) objectFor(source), (EventFocus) boxedFor(EventFocus.class, event));

        return result;
    }

    interface GetAccessibleSignal extends Signal
    {
        Object onGetAccessible(Widget source);
    }

    static final void connect(Widget self, GtkWidget.GetAccessibleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "get-accessible", after);
    }

    protected static final long receiveGetAccessible(Signal handler, long source) {
        Object result;

        result = ((GtkWidget.GetAccessibleSignal) handler).onGetAccessible((Widget) objectFor(source));

        return pointerOf(result);
    }

    interface GetPreferredHeightSignal extends Signal
    {
        void onGetPreferredHeight(Widget source, int[] minimumHeight, int[] naturalHeight);
    }

    static final void connect(Widget self, GtkWidget.GetPreferredHeightSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "get-preferred-height", after);
    }

    protected static final void receiveGetPreferredHeight(Signal handler, long source, int[] minimumHeight, int[] naturalHeight) {
        ((GtkWidget.GetPreferredHeightSignal) handler).onGetPreferredHeight((Widget) objectFor(source), minimumHeight, naturalHeight);
    }

    interface GetPreferredHeightAndBaselineForWidthSignal extends Signal
    {
        void onGetPreferredHeightAndBaselineForWidth(Widget source, int width, int[] minimumHeight, int[] naturalHeight, int[] minimumBaseline, int[] naturalBaseline);
    }

    static final void connect(Widget self, GtkWidget.GetPreferredHeightAndBaselineForWidthSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "get-preferred-height-and-baseline-for-width", after);
    }

    protected static final void receiveGetPreferredHeightAndBaselineForWidth(Signal handler, long source, int width, int[] minimumHeight, int[] naturalHeight, int[] minimumBaseline, int[] naturalBaseline) {
        ((GtkWidget.GetPreferredHeightAndBaselineForWidthSignal) handler).onGetPreferredHeightAndBaselineForWidth((Widget) objectFor(source), width, minimumHeight, naturalHeight, minimumBaseline, naturalBaseline);
    }

    interface GetPreferredHeightForWidthSignal extends Signal
    {
        void onGetPreferredHeightForWidth(Widget source, int width, int[] minimumHeight, int[] naturalHeight);
    }

    static final void connect(Widget self, GtkWidget.GetPreferredHeightForWidthSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "get-preferred-height-for-width", after);
    }

    protected static final void receiveGetPreferredHeightForWidth(Signal handler, long source, int width, int[] minimumHeight, int[] naturalHeight) {
        ((GtkWidget.GetPreferredHeightForWidthSignal) handler).onGetPreferredHeightForWidth((Widget) objectFor(source), width, minimumHeight, naturalHeight);
    }

    interface GetPreferredWidthSignal extends Signal
    {
        void onGetPreferredWidth(Widget source, int[] minimumWidth, int[] naturalWidth);
    }

    static final void connect(Widget self, GtkWidget.GetPreferredWidthSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "get-preferred-width", after);
    }

    protected static final void receiveGetPreferredWidth(Signal handler, long source, int[] minimumWidth, int[] naturalWidth) {
        ((GtkWidget.GetPreferredWidthSignal) handler).onGetPreferredWidth((Widget) objectFor(source), minimumWidth, naturalWidth);
    }

    interface GetPreferredWidthForHeightSignal extends Signal
    {
        void onGetPreferredWidthForHeight(Widget source, int height, int[] minimumWidth, int[] naturalWidth);
    }

    static final void connect(Widget self, GtkWidget.GetPreferredWidthForHeightSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "get-preferred-width-for-height", after);
    }

    protected static final void receiveGetPreferredWidthForHeight(Signal handler, long source, int height, int[] minimumWidth, int[] naturalWidth) {
        ((GtkWidget.GetPreferredWidthForHeightSignal) handler).onGetPreferredWidthForHeight((Widget) objectFor(source), height, minimumWidth, naturalWidth);
    }

    interface GetRequestModeSignal extends Signal
    {
        SizeRequestMode onGetRequestMode(Widget source);
    }

    static final void connect(Widget self, GtkWidget.GetRequestModeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "get-request-mode", after);
    }

    protected static final int receiveGetRequestMode(Signal handler, long source) {
        SizeRequestMode result;

        result = ((GtkWidget.GetRequestModeSignal) handler).onGetRequestMode((Widget) objectFor(source));

        return numOf(result);
    }

    interface GrabBrokenEventSignal extends Signal
    {
        boolean onGrabBrokenEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.GrabBrokenEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "grab-broken-event", after);
    }

    protected static final boolean receiveGrabBrokenEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.GrabBrokenEventSignal) handler).onGrabBrokenEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface GrabFocusSignal extends Signal
    {
        void onGrabFocus(Widget source);
    }

    static final void connect(Widget self, GtkWidget.GrabFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "grab-focus", after);
    }

    protected static final void receiveGrabFocus(Signal handler, long source) {
        ((GtkWidget.GrabFocusSignal) handler).onGrabFocus((Widget) objectFor(source));
    }

    interface GrabNotifySignal extends Signal
    {
        void onGrabNotify(Widget source, boolean wasGrabbed);
    }

    static final void connect(Widget self, GtkWidget.GrabNotifySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "grab-notify", after);
    }

    protected static final void receiveGrabNotify(Signal handler, long source, boolean wasGrabbed) {
        ((GtkWidget.GrabNotifySignal) handler).onGrabNotify((Widget) objectFor(source), wasGrabbed);
    }

    interface HideSignal extends Signal
    {
        void onHide(Widget source);
    }

    static final void connect(Widget self, GtkWidget.HideSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "hide", after);
    }

    protected static final void receiveHide(Signal handler, long source) {
        ((GtkWidget.HideSignal) handler).onHide((Widget) objectFor(source));
    }

    interface HierarchyChangedSignal extends Signal
    {
        void onHierarchyChanged(Widget source, Widget previousToplevel);
    }

    static final void connect(Widget self, GtkWidget.HierarchyChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "hierarchy-changed", after);
    }

    protected static final void receiveHierarchyChanged(Signal handler, long source, long previousToplevel) {
        ((GtkWidget.HierarchyChangedSignal) handler).onHierarchyChanged((Widget) objectFor(source), (Widget) objectFor(previousToplevel));
    }

    interface KeyPressEventSignal extends Signal
    {
        boolean onKeyPressEvent(Widget source, EventKey event);
    }

    static final void connect(Widget self, GtkWidget.KeyPressEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "key-press-event", after);
    }

    protected static final boolean receiveKeyPressEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.KeyPressEventSignal) handler).onKeyPressEvent((Widget) objectFor(source), (EventKey) boxedFor(EventKey.class, event));

        return result;
    }

    interface KeyReleaseEventSignal extends Signal
    {
        boolean onKeyReleaseEvent(Widget source, EventKey event);
    }

    static final void connect(Widget self, GtkWidget.KeyReleaseEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "key-release-event", after);
    }

    protected static final boolean receiveKeyReleaseEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.KeyReleaseEventSignal) handler).onKeyReleaseEvent((Widget) objectFor(source), (EventKey) boxedFor(EventKey.class, event));

        return result;
    }

    interface KeynavFailedSignal extends Signal
    {
        boolean onKeynavFailed(Widget source, DirectionType direction);
    }

    static final void connect(Widget self, GtkWidget.KeynavFailedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "keynav-failed", after);
    }

    protected static final boolean receiveKeynavFailed(Signal handler, long source, int direction) {
        boolean result;

        result = ((GtkWidget.KeynavFailedSignal) handler).onKeynavFailed((Widget) objectFor(source), (DirectionType) enumFor(DirectionType.class, direction));

        return result;
    }

    interface LeaveNotifyEventSignal extends Signal
    {
        boolean onLeaveNotifyEvent(Widget source, EventCrossing event);
    }

    static final void connect(Widget self, GtkWidget.LeaveNotifyEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "leave-notify-event", after);
    }

    protected static final boolean receiveLeaveNotifyEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.LeaveNotifyEventSignal) handler).onLeaveNotifyEvent((Widget) objectFor(source), (EventCrossing) boxedFor(EventCrossing.class, event));

        return result;
    }

    interface MapSignal extends Signal
    {
        void onMap(Widget source);
    }

    static final void connect(Widget self, GtkWidget.MapSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "map", after);
    }

    protected static final void receiveMap(Signal handler, long source) {
        ((GtkWidget.MapSignal) handler).onMap((Widget) objectFor(source));
    }

    interface MapEventSignal extends Signal
    {
        boolean onMapEvent(Widget source, org.gnome.gdk.Event event);
    }

    static final void connect(Widget self, GtkWidget.MapEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "map-event", after);
    }

    protected static final boolean receiveMapEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.MapEventSignal) handler).onMapEvent((Widget) objectFor(source), (org.gnome.gdk.Event) boxedFor(org.gnome.gdk.Event.class, event));

        return result;
    }

    interface MnemonicActivateSignal extends Signal
    {
        boolean onMnemonicActivate(Widget source, boolean groupCycling);
    }

    static final void connect(Widget self, GtkWidget.MnemonicActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "mnemonic-activate", after);
    }

    protected static final boolean receiveMnemonicActivate(Signal handler, long source, boolean groupCycling) {
        boolean result;

        result = ((GtkWidget.MnemonicActivateSignal) handler).onMnemonicActivate((Widget) objectFor(source), groupCycling);

        return result;
    }

    interface MotionNotifyEventSignal extends Signal
    {
        boolean onMotionNotifyEvent(Widget source, EventMotion event);
    }

    static final void connect(Widget self, GtkWidget.MotionNotifyEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "motion-notify-event", after);
    }

    protected static final boolean receiveMotionNotifyEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.MotionNotifyEventSignal) handler).onMotionNotifyEvent((Widget) objectFor(source), (EventMotion) boxedFor(EventMotion.class, event));

        return result;
    }

    interface MoveFocusSignal extends Signal
    {
        void onMoveFocus(Widget source, DirectionType direction);
    }

    static final void connect(Widget self, GtkWidget.MoveFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "move-focus", after);
    }

    protected static final void receiveMoveFocus(Signal handler, long source, int direction) {
        ((GtkWidget.MoveFocusSignal) handler).onMoveFocus((Widget) objectFor(source), (DirectionType) enumFor(DirectionType.class, direction));
    }

    interface ParentSetSignal extends Signal
    {
        void onParentSet(Widget source, Widget previousParent);
    }

    static final void connect(Widget self, GtkWidget.ParentSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "parent-set", after);
    }

    protected static final void receiveParentSet(Signal handler, long source, long previousParent) {
        ((GtkWidget.ParentSetSignal) handler).onParentSet((Widget) objectFor(source), (Widget) objectFor(previousParent));
    }

    interface PopupMenuSignal extends Signal
    {
        boolean onPopupMenu(Widget source);
    }

    static final void connect(Widget self, GtkWidget.PopupMenuSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "popup-menu", after);
    }

    protected static final boolean receivePopupMenu(Signal handler, long source) {
        boolean result;

        result = ((GtkWidget.PopupMenuSignal) handler).onPopupMenu((Widget) objectFor(source));

        return result;
    }

    interface PropertyNotifyEventSignal extends Signal
    {
        boolean onPropertyNotifyEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.PropertyNotifyEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "property-notify-event", after);
    }

    protected static final boolean receivePropertyNotifyEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.PropertyNotifyEventSignal) handler).onPropertyNotifyEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface ProximityInEventSignal extends Signal
    {
        boolean onProximityInEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.ProximityInEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "proximity-in-event", after);
    }

    protected static final boolean receiveProximityInEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.ProximityInEventSignal) handler).onProximityInEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface ProximityOutEventSignal extends Signal
    {
        boolean onProximityOutEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.ProximityOutEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "proximity-out-event", after);
    }

    protected static final boolean receiveProximityOutEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.ProximityOutEventSignal) handler).onProximityOutEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface QueryTooltipSignal extends Signal
    {
        boolean onQueryTooltip(Widget source, int x, int y, boolean keyboardTooltip, Tooltip tooltip);
    }

    static final void connect(Widget self, GtkWidget.QueryTooltipSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "query-tooltip", after);
    }

    protected static final boolean receiveQueryTooltip(Signal handler, long source, int x, int y, boolean keyboardTooltip, long tooltip) {
        boolean result;

        result = ((GtkWidget.QueryTooltipSignal) handler).onQueryTooltip((Widget) objectFor(source), x, y, keyboardTooltip, (Tooltip) objectFor(tooltip));

        return result;
    }

    interface QueueDrawRegionSignal extends Signal
    {
        void onQueueDrawRegion(Widget source, FIXME region);
    }

    static final void connect(Widget self, GtkWidget.QueueDrawRegionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "queue-draw-region", after);
    }

    protected static final void receiveQueueDrawRegion(Signal handler, long source, java.lang.Object region) {
        ((GtkWidget.QueueDrawRegionSignal) handler).onQueueDrawRegion((Widget) objectFor(source), (FIXME) region);
    }

    interface RealizeSignal extends Signal
    {
        void onRealize(Widget source);
    }

    static final void connect(Widget self, GtkWidget.RealizeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "realize", after);
    }

    protected static final void receiveRealize(Signal handler, long source) {
        ((GtkWidget.RealizeSignal) handler).onRealize((Widget) objectFor(source));
    }

    interface ScreenChangedSignal extends Signal
    {
        void onScreenChanged(Widget source, Screen previousScreen);
    }

    static final void connect(Widget self, GtkWidget.ScreenChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "screen-changed", after);
    }

    protected static final void receiveScreenChanged(Signal handler, long source, long previousScreen) {
        ((GtkWidget.ScreenChangedSignal) handler).onScreenChanged((Widget) objectFor(source), (Screen) objectFor(previousScreen));
    }

    interface ScrollEventSignal extends Signal
    {
        boolean onScrollEvent(Widget source, EventScroll event);
    }

    static final void connect(Widget self, GtkWidget.ScrollEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "scroll-event", after);
    }

    protected static final boolean receiveScrollEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.ScrollEventSignal) handler).onScrollEvent((Widget) objectFor(source), (EventScroll) boxedFor(EventScroll.class, event));

        return result;
    }

    interface SelectionClearEventSignal extends Signal
    {
        boolean onSelectionClearEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.SelectionClearEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "selection-clear-event", after);
    }

    protected static final boolean receiveSelectionClearEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.SelectionClearEventSignal) handler).onSelectionClearEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface SelectionGetSignal extends Signal
    {
        void onSelectionGet(Widget source, SelectionData selectionData, int info, int time);
    }

    static final void connect(Widget self, GtkWidget.SelectionGetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "selection-get", after);
    }

    protected static final void receiveSelectionGet(Signal handler, long source, long selectionData, int info, int time) {
        ((GtkWidget.SelectionGetSignal) handler).onSelectionGet((Widget) objectFor(source), (SelectionData) boxedFor(SelectionData.class, selectionData), info, time);
    }

    interface SelectionNotifyEventSignal extends Signal
    {
        boolean onSelectionNotifyEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.SelectionNotifyEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "selection-notify-event", after);
    }

    protected static final boolean receiveSelectionNotifyEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.SelectionNotifyEventSignal) handler).onSelectionNotifyEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface SelectionReceivedSignal extends Signal
    {
        void onSelectionReceived(Widget source, SelectionData selectionData, int time);
    }

    static final void connect(Widget self, GtkWidget.SelectionReceivedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "selection-received", after);
    }

    protected static final void receiveSelectionReceived(Signal handler, long source, long selectionData, int time) {
        ((GtkWidget.SelectionReceivedSignal) handler).onSelectionReceived((Widget) objectFor(source), (SelectionData) boxedFor(SelectionData.class, selectionData), time);
    }

    interface SelectionRequestEventSignal extends Signal
    {
        boolean onSelectionRequestEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.SelectionRequestEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "selection-request-event", after);
    }

    protected static final boolean receiveSelectionRequestEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.SelectionRequestEventSignal) handler).onSelectionRequestEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface ShowSignal extends Signal
    {
        void onShow(Widget source);
    }

    static final void connect(Widget self, GtkWidget.ShowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "show", after);
    }

    protected static final void receiveShow(Signal handler, long source) {
        ((GtkWidget.ShowSignal) handler).onShow((Widget) objectFor(source));
    }

    interface ShowAllSignal extends Signal
    {
        void onShowAll(Widget source);
    }

    static final void connect(Widget self, GtkWidget.ShowAllSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "show-all", after);
    }

    protected static final void receiveShowAll(Signal handler, long source) {
        ((GtkWidget.ShowAllSignal) handler).onShowAll((Widget) objectFor(source));
    }

    interface ShowHelpSignal extends Signal
    {
        boolean onShowHelp(Widget source, WidgetHelpType helpType);
    }

    static final void connect(Widget self, GtkWidget.ShowHelpSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "show-help", after);
    }

    protected static final boolean receiveShowHelp(Signal handler, long source, int helpType) {
        boolean result;

        result = ((GtkWidget.ShowHelpSignal) handler).onShowHelp((Widget) objectFor(source), (WidgetHelpType) enumFor(WidgetHelpType.class, helpType));

        return result;
    }

    interface SizeAllocateSignal extends Signal
    {
        void onSizeAllocate(Widget source, Allocation allocation);
    }

    static final void connect(Widget self, GtkWidget.SizeAllocateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "size-allocate", after);
    }

    protected static final void receiveSizeAllocate(Signal handler, long source, long allocation) {
        ((GtkWidget.SizeAllocateSignal) handler).onSizeAllocate((Widget) objectFor(source), (Allocation) boxedFor(Allocation.class, allocation));
    }

    interface StateChangedSignal extends Signal
    {
        void onStateChanged(Widget source, FIXME previousState);
    }

    static final void connect(Widget self, GtkWidget.StateChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "state-changed", after);
    }

    protected static final void receiveStateChanged(Signal handler, long source, java.lang.Object previousState) {
        ((GtkWidget.StateChangedSignal) handler).onStateChanged((Widget) objectFor(source), (FIXME) previousState);
    }

    interface StateFlagsChangedSignal extends Signal
    {
        void onStateFlagsChanged(Widget source, StateFlags previousStateFlags);
    }

    static final void connect(Widget self, GtkWidget.StateFlagsChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "state-flags-changed", after);
    }

    protected static final void receiveStateFlagsChanged(Signal handler, long source, int previousStateFlags) {
        ((GtkWidget.StateFlagsChangedSignal) handler).onStateFlagsChanged((Widget) objectFor(source), (StateFlags) flagFor(StateFlags.class, previousStateFlags));
    }

    interface StyleSetSignal extends Signal
    {
        void onStyleSet(Widget source, FIXME previousStyle);
    }

    static final void connect(Widget self, GtkWidget.StyleSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "style-set", after);
    }

    protected static final void receiveStyleSet(Signal handler, long source, java.lang.Object previousStyle) {
        ((GtkWidget.StyleSetSignal) handler).onStyleSet((Widget) objectFor(source), (FIXME) previousStyle);
    }

    interface StyleUpdatedSignal extends Signal
    {
        void onStyleUpdated(Widget source);
    }

    static final void connect(Widget self, GtkWidget.StyleUpdatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "style-updated", after);
    }

    protected static final void receiveStyleUpdated(Signal handler, long source) {
        ((GtkWidget.StyleUpdatedSignal) handler).onStyleUpdated((Widget) objectFor(source));
    }

    interface TouchEventSignal extends Signal
    {
        boolean onTouchEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.TouchEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "touch-event", after);
    }

    protected static final boolean receiveTouchEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.TouchEventSignal) handler).onTouchEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface UnmapSignal extends Signal
    {
        void onUnmap(Widget source);
    }

    static final void connect(Widget self, GtkWidget.UnmapSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "unmap", after);
    }

    protected static final void receiveUnmap(Signal handler, long source) {
        ((GtkWidget.UnmapSignal) handler).onUnmap((Widget) objectFor(source));
    }

    interface UnmapEventSignal extends Signal
    {
        boolean onUnmapEvent(Widget source, org.gnome.gdk.Event event);
    }

    static final void connect(Widget self, GtkWidget.UnmapEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "unmap-event", after);
    }

    protected static final boolean receiveUnmapEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.UnmapEventSignal) handler).onUnmapEvent((Widget) objectFor(source), (org.gnome.gdk.Event) boxedFor(org.gnome.gdk.Event.class, event));

        return result;
    }

    interface UnrealizeSignal extends Signal
    {
        void onUnrealize(Widget source);
    }

    static final void connect(Widget self, GtkWidget.UnrealizeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "unrealize", after);
    }

    protected static final void receiveUnrealize(Signal handler, long source) {
        ((GtkWidget.UnrealizeSignal) handler).onUnrealize((Widget) objectFor(source));
    }

    interface VisibilityNotifyEventSignal extends Signal
    {
        boolean onVisibilityNotifyEvent(Widget source, EventVisibility event);
    }

    static final void connect(Widget self, GtkWidget.VisibilityNotifyEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "visibility-notify-event", after);
    }

    protected static final boolean receiveVisibilityNotifyEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkWidget.VisibilityNotifyEventSignal) handler).onVisibilityNotifyEvent((Widget) objectFor(source), (EventVisibility) boxedFor(EventVisibility.class, event));

        return result;
    }

    interface WindowStateEventSignal extends Signal
    {
        boolean onWindowStateEvent(Widget source, FIXME event);
    }

    static final void connect(Widget self, GtkWidget.WindowStateEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "window-state-event", after);
    }

    protected static final boolean receiveWindowStateEvent(Signal handler, long source, java.lang.Object event) {
        boolean result;

        result = ((GtkWidget.WindowStateEventSignal) handler).onWindowStateEvent((Widget) objectFor(source), (FIXME) event);

        return result;
    }

    interface AccelClosuresChangedSignal extends Signal
    {
        void onAccelClosuresChanged(Widget source);
    }

    static final void connect(Widget self, GtkWidget.AccelClosuresChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "accel-closures-changed", after);
    }

    protected static final void receiveAccelClosuresChanged(Signal handler, long source) {
        ((GtkWidget.AccelClosuresChangedSignal) handler).onAccelClosuresChanged((Widget) objectFor(source));
    }

    interface EventAfterSignal extends Signal
    {
        void onEventAfter(Widget source, Event event);
    }

    static final void connect(Widget self, GtkWidget.EventAfterSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWidget.class, "event-after", after);
    }

    protected static final void receiveEventAfter(Signal handler, long source, long event) {
        ((GtkWidget.EventAfterSignal) handler).onEventAfter((Widget) objectFor(source), (Event) boxedFor(Event.class, event));
    }
}

