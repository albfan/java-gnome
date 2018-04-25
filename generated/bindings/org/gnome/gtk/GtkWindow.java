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
import org.gnome.gdk.EventKey;
import org.gnome.gdk.Geometry;
import org.gnome.gdk.Gravity;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Screen;
import org.gnome.gdk.WindowEdge;
import org.gnome.gdk.WindowHints;
import org.gnome.gdk.WindowTypeHint;
import org.gnome.glib.GlibException;
import org.gnome.glib.Signal;
import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.Application;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;
import org.gnome.gtk.Window;
import org.gnome.gtk.WindowGroup;
import org.gnome.gtk.WindowPosition;
import org.gnome.gtk.WindowType;

final class GtkWindow extends Plumbing
{
    private GtkWindow() {}

    static final long createWindow(WindowType type) {
        long result;

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            result = gtk_window_new(numOf(type));

            return result;
        }
    }

    private static native final long gtk_window_new(int type);

    static final boolean activateDefault(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_activate_default(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_activate_default(long self);

    static final boolean activateFocus(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_activate_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_activate_focus(long self);

    static final boolean activateKey(Window self, EventKey event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_window_activate_key(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gtk_window_activate_key(long self, long event);

    static final void addAccelGroup(Window self, AcceleratorGroup accelGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelGroup == null) {
            throw new IllegalArgumentException("accelGroup can't be null");
        }

        synchronized (lock) {
            gtk_window_add_accel_group(pointerOf(self), pointerOf(accelGroup));
        }
    }

    private static native final void gtk_window_add_accel_group(long self, long accelGroup);

    static final void addMnemonic(Window self, int keyval, Widget target) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (target == null) {
            throw new IllegalArgumentException("target can't be null");
        }

        synchronized (lock) {
            gtk_window_add_mnemonic(pointerOf(self), keyval, pointerOf(target));
        }
    }

    private static native final void gtk_window_add_mnemonic(long self, int keyval, long target);

    static final void beginMoveDrag(Window self, int button, int rootX, int rootY, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_begin_move_drag(pointerOf(self), button, rootX, rootY, timestamp);
        }
    }

    private static native final void gtk_window_begin_move_drag(long self, int button, int rootX, int rootY, int timestamp);

    static final void beginResizeDrag(Window self, WindowEdge edge, int button, int rootX, int rootY, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (edge == null) {
            throw new IllegalArgumentException("edge can't be null");
        }

        synchronized (lock) {
            gtk_window_begin_resize_drag(pointerOf(self), numOf(edge), button, rootX, rootY, timestamp);
        }
    }

    private static native final void gtk_window_begin_resize_drag(long self, int edge, int button, int rootX, int rootY, int timestamp);

    static final void close(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_close(pointerOf(self));
        }
    }

    private static native final void gtk_window_close(long self);

    static final void deiconify(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_deiconify(pointerOf(self));
        }
    }

    private static native final void gtk_window_deiconify(long self);

    static final void fullscreen(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_fullscreen(pointerOf(self));
        }
    }

    private static native final void gtk_window_fullscreen(long self);

    static final void fullscreenOnMonitor(Window self, Screen screen, int monitor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gtk_window_fullscreen_on_monitor(pointerOf(self), pointerOf(screen), monitor);
        }
    }

    private static native final void gtk_window_fullscreen_on_monitor(long self, long screen, int monitor);

    static final boolean getAcceptFocus(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_accept_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_accept_focus(long self);

    static final Application getApplication(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_application(pointerOf(self));

            return (Application) objectFor(result);
        }
    }

    private static native final long gtk_window_get_application(long self);

    static final Widget getAttachedTo(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_attached_to(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_window_get_attached_to(long self);

    static final boolean getDecorated(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_decorated(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_decorated(long self);

    static final void getDefaultSize(Window self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_get_default_size(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_window_get_default_size(long self, int[] width, int[] height);

    static final Widget getDefaultWidget(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_default_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_window_get_default_widget(long self);

    static final boolean getDeletable(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_deletable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_deletable(long self);

    static final boolean getDestroyWithParent(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_destroy_with_parent(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_destroy_with_parent(long self);

    static final Widget getFocus(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_focus(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_window_get_focus(long self);

    static final boolean getFocusOnMap(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_focus_on_map(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_focus_on_map(long self);

    static final boolean getFocusVisible(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_focus_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_focus_visible(long self);

    static final Gravity getGravity(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_gravity(pointerOf(self));

            return (Gravity) enumFor(Gravity.class, result);
        }
    }

    private static native final int gtk_window_get_gravity(long self);

    static final WindowGroup getGroup(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_group(pointerOf(self));

            return (WindowGroup) objectFor(result);
        }
    }

    private static native final long gtk_window_get_group(long self);

    static final boolean getHasResizeGrip(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_has_resize_grip(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_has_resize_grip(long self);

    static final boolean getHideTitlebarWhenMaximized(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_hide_titlebar_when_maximized(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_hide_titlebar_when_maximized(long self);

    static final Pixbuf getIcon(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_icon(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_window_get_icon(long self);

    @SuppressWarnings("unused")
    static final FIXME getIconList(Window self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkPixbufPixbuf*");
    }

    static final String getIconName(Window self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_window_get_icon_name(long self);

    static final ModifierType getMnemonicModifier(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_mnemonic_modifier(pointerOf(self));

            return (ModifierType) flagFor(ModifierType.class, result);
        }
    }

    private static native final int gtk_window_get_mnemonic_modifier(long self);

    static final boolean getMnemonicsVisible(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_mnemonics_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_mnemonics_visible(long self);

    static final boolean getModal(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_modal(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_modal(long self);

    static final double getOpacity(Window self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_opacity(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_window_get_opacity(long self);

    static final void getPosition(Window self, int[] rootX, int[] rootY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_get_position(pointerOf(self), rootX, rootY);
        }
    }

    private static native final void gtk_window_get_position(long self, int[] rootX, int[] rootY);

    static final boolean getResizable(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_resizable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_resizable(long self);

    static final boolean getResizeGripArea(Window self, Rectangle rect) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_resize_grip_area(pointerOf(self), pointerOf(rect));

            return result;
        }
    }

    private static native final boolean gtk_window_get_resize_grip_area(long self, long rect);

    static final String getRole(Window self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_role(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_window_get_role(long self);

    static final Screen getScreen(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_screen(pointerOf(self));

            return (Screen) objectFor(result);
        }
    }

    private static native final long gtk_window_get_screen(long self);

    static final void getSize(Window self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_get_size(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_window_get_size(long self, int[] width, int[] height);

    static final boolean getSkipPagerHint(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_skip_pager_hint(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_skip_pager_hint(long self);

    static final boolean getSkipTaskbarHint(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_skip_taskbar_hint(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_skip_taskbar_hint(long self);

    static final String getTitle(Window self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_window_get_title(long self);

    static final Widget getTitlebar(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_titlebar(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_window_get_titlebar(long self);

    static final Window getTransientFor(Window self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_transient_for(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_window_get_transient_for(long self);

    static final WindowTypeHint getTypeHint(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_type_hint(pointerOf(self));

            return (WindowTypeHint) enumFor(WindowTypeHint.class, result);
        }
    }

    private static native final int gtk_window_get_type_hint(long self);

    static final boolean getUrgencyHint(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_urgency_hint(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_get_urgency_hint(long self);

    static final WindowType getWindowType(Window self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_get_window_type(pointerOf(self));

            return (WindowType) enumFor(WindowType.class, result);
        }
    }

    private static native final int gtk_window_get_window_type(long self);

    static final boolean hasGroup(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_has_group(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_has_group(long self);

    static final boolean hasToplevelFocus(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_has_toplevel_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_has_toplevel_focus(long self);

    static final void iconify(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_iconify(pointerOf(self));
        }
    }

    private static native final void gtk_window_iconify(long self);

    static final boolean isActive(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_is_active(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_is_active(long self);

    static final boolean isMaximized(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_is_maximized(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_is_maximized(long self);

    static final void maximize(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_maximize(pointerOf(self));
        }
    }

    private static native final void gtk_window_maximize(long self);

    static final boolean mnemonicActivate(Window self, int keyval, ModifierType modifier) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (modifier == null) {
            throw new IllegalArgumentException("modifier can't be null");
        }

        synchronized (lock) {
            result = gtk_window_mnemonic_activate(pointerOf(self), keyval, numOf(modifier));

            return result;
        }
    }

    private static native final boolean gtk_window_mnemonic_activate(long self, int keyval, int modifier);

    static final void move(Window self, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_move(pointerOf(self), x, y);
        }
    }

    private static native final void gtk_window_move(long self, int x, int y);

    static final boolean parseGeometry(Window self, String geometry) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (geometry == null) {
            throw new IllegalArgumentException("geometry can't be null");
        }

        synchronized (lock) {
            result = gtk_window_parse_geometry(pointerOf(self), geometry);

            return result;
        }
    }

    private static native final boolean gtk_window_parse_geometry(long self, String geometry);

    static final void present(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_present(pointerOf(self));
        }
    }

    private static native final void gtk_window_present(long self);

    static final void presentWithTime(Window self, int timestamp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_present_with_time(pointerOf(self), timestamp);
        }
    }

    private static native final void gtk_window_present_with_time(long self, int timestamp);

    static final boolean propagateKeyEvent(Window self, EventKey event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_window_propagate_key_event(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gtk_window_propagate_key_event(long self, long event);

    static final void removeAccelGroup(Window self, AcceleratorGroup accelGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelGroup == null) {
            throw new IllegalArgumentException("accelGroup can't be null");
        }

        synchronized (lock) {
            gtk_window_remove_accel_group(pointerOf(self), pointerOf(accelGroup));
        }
    }

    private static native final void gtk_window_remove_accel_group(long self, long accelGroup);

    static final void removeMnemonic(Window self, int keyval, Widget target) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (target == null) {
            throw new IllegalArgumentException("target can't be null");
        }

        synchronized (lock) {
            gtk_window_remove_mnemonic(pointerOf(self), keyval, pointerOf(target));
        }
    }

    private static native final void gtk_window_remove_mnemonic(long self, int keyval, long target);

    static final void reshowWithInitialSize(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_reshow_with_initial_size(pointerOf(self));
        }
    }

    private static native final void gtk_window_reshow_with_initial_size(long self);

    static final void resize(Window self, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_resize(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_window_resize(long self, int width, int height);

    static final boolean resizeGripIsVisible(Window self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_window_resize_grip_is_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_window_resize_grip_is_visible(long self);

    static final void resizeToGeometry(Window self, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_resize_to_geometry(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_window_resize_to_geometry(long self, int width, int height);

    static final void setAcceptFocus(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_accept_focus(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_accept_focus(long self, boolean setting);

    static final void setApplication(Window self, Application application) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_application(pointerOf(self), pointerOf(application));
        }
    }

    private static native final void gtk_window_set_application(long self, long application);

    static final void setAttachedTo(Window self, Widget attachWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_attached_to(pointerOf(self), pointerOf(attachWidget));
        }
    }

    private static native final void gtk_window_set_attached_to(long self, long attachWidget);

    static final void setDecorated(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_decorated(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_decorated(long self, boolean setting);

    static final void setDefault(Window self, Widget defaultWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_default(pointerOf(self), pointerOf(defaultWidget));
        }
    }

    private static native final void gtk_window_set_default(long self, long defaultWidget);

    static final void setDefaultGeometry(Window self, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_default_geometry(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_window_set_default_geometry(long self, int width, int height);

    static final void setDefaultSize(Window self, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_default_size(pointerOf(self), width, height);
        }
    }

    private static native final void gtk_window_set_default_size(long self, int width, int height);

    static final void setDeletable(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_deletable(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_deletable(long self, boolean setting);

    static final void setDestroyWithParent(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_destroy_with_parent(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_destroy_with_parent(long self, boolean setting);

    static final void setFocus(Window self, Widget focus) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_focus(pointerOf(self), pointerOf(focus));
        }
    }

    private static native final void gtk_window_set_focus(long self, long focus);

    static final void setFocusOnMap(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_focus_on_map(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_focus_on_map(long self, boolean setting);

    static final void setFocusVisible(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_focus_visible(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_focus_visible(long self, boolean setting);

    static final void setGeometryHints(Window self, Widget geometryWidget, Geometry geometry, WindowHints geomMask) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (geomMask == null) {
            throw new IllegalArgumentException("geomMask can't be null");
        }

        synchronized (lock) {
            gtk_window_set_geometry_hints(pointerOf(self), pointerOf(geometryWidget), pointerOf(geometry), numOf(geomMask));
        }
    }

    private static native final void gtk_window_set_geometry_hints(long self, long geometryWidget, long geometry, int geomMask);

    static final void setGravity(Window self, Gravity gravity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (gravity == null) {
            throw new IllegalArgumentException("gravity can't be null");
        }

        synchronized (lock) {
            gtk_window_set_gravity(pointerOf(self), numOf(gravity));
        }
    }

    private static native final void gtk_window_set_gravity(long self, int gravity);

    static final void setHasResizeGrip(Window self, boolean value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_has_resize_grip(pointerOf(self), value);
        }
    }

    private static native final void gtk_window_set_has_resize_grip(long self, boolean value);

    static final void setHasUserRefCount(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_has_user_ref_count(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_has_user_ref_count(long self, boolean setting);

    static final void setHideTitlebarWhenMaximized(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_hide_titlebar_when_maximized(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_hide_titlebar_when_maximized(long self, boolean setting);

    static final void setIcon(Window self, Pixbuf icon) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_icon(pointerOf(self), pointerOf(icon));
        }
    }

    private static native final void gtk_window_set_icon(long self, long icon);

    static final boolean setIconFromFile(Window self, String filename) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_window_set_icon_from_file(pointerOf(self), filename);

            return result;
        }
    }

    private static native final boolean gtk_window_set_icon_from_file(long self, String filename) throws GlibException;

    @SuppressWarnings("unused")
    static final void setIconList(Window self, FIXME list) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkPixbufPixbuf*");
    }

    static final void setIconName(Window self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_icon_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_window_set_icon_name(long self, String name);

    static final void setKeepAbove(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_keep_above(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_keep_above(long self, boolean setting);

    static final void setKeepBelow(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_keep_below(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_keep_below(long self, boolean setting);

    static final void setMnemonicModifier(Window self, ModifierType modifier) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (modifier == null) {
            throw new IllegalArgumentException("modifier can't be null");
        }

        synchronized (lock) {
            gtk_window_set_mnemonic_modifier(pointerOf(self), numOf(modifier));
        }
    }

    private static native final void gtk_window_set_mnemonic_modifier(long self, int modifier);

    static final void setMnemonicsVisible(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_mnemonics_visible(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_mnemonics_visible(long self, boolean setting);

    static final void setModal(Window self, boolean modal) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_modal(pointerOf(self), modal);
        }
    }

    private static native final void gtk_window_set_modal(long self, boolean modal);

    static final void setOpacity(Window self, double opacity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_opacity(pointerOf(self), opacity);
        }
    }

    private static native final void gtk_window_set_opacity(long self, double opacity);

    static final void setPosition(Window self, WindowPosition position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (position == null) {
            throw new IllegalArgumentException("position can't be null");
        }

        synchronized (lock) {
            gtk_window_set_position(pointerOf(self), numOf(position));
        }
    }

    private static native final void gtk_window_set_position(long self, int position);

    static final void setResizable(Window self, boolean resizable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_resizable(pointerOf(self), resizable);
        }
    }

    private static native final void gtk_window_set_resizable(long self, boolean resizable);

    static final void setRole(Window self, String role) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (role == null) {
            throw new IllegalArgumentException("role can't be null");
        }

        synchronized (lock) {
            gtk_window_set_role(pointerOf(self), role);
        }
    }

    private static native final void gtk_window_set_role(long self, String role);

    static final void setScreen(Window self, Screen screen) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gtk_window_set_screen(pointerOf(self), pointerOf(screen));
        }
    }

    private static native final void gtk_window_set_screen(long self, long screen);

    static final void setSkipPagerHint(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_skip_pager_hint(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_skip_pager_hint(long self, boolean setting);

    static final void setSkipTaskbarHint(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_skip_taskbar_hint(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_skip_taskbar_hint(long self, boolean setting);

    static final void setStartupId(Window self, String startupId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (startupId == null) {
            throw new IllegalArgumentException("startupId can't be null");
        }

        synchronized (lock) {
            gtk_window_set_startup_id(pointerOf(self), startupId);
        }
    }

    private static native final void gtk_window_set_startup_id(long self, String startupId);

    static final void setTitle(Window self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_window_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_window_set_title(long self, String title);

    static final void setTitlebar(Window self, Widget titlebar) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_titlebar(pointerOf(self), pointerOf(titlebar));
        }
    }

    private static native final void gtk_window_set_titlebar(long self, long titlebar);

    static final void setTransientFor(Window self, Window parent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_transient_for(pointerOf(self), pointerOf(parent));
        }
    }

    private static native final void gtk_window_set_transient_for(long self, long parent);

    static final void setTypeHint(Window self, WindowTypeHint hint) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (hint == null) {
            throw new IllegalArgumentException("hint can't be null");
        }

        synchronized (lock) {
            gtk_window_set_type_hint(pointerOf(self), numOf(hint));
        }
    }

    private static native final void gtk_window_set_type_hint(long self, int hint);

    static final void setUrgencyHint(Window self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_set_urgency_hint(pointerOf(self), setting);
        }
    }

    private static native final void gtk_window_set_urgency_hint(long self, boolean setting);

    static final void setWmclass(Window self, String wmclassName, String wmclassClass) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wmclassName == null) {
            throw new IllegalArgumentException("wmclassName can't be null");
        }

        if (wmclassClass == null) {
            throw new IllegalArgumentException("wmclassClass can't be null");
        }

        synchronized (lock) {
            gtk_window_set_wmclass(pointerOf(self), wmclassName, wmclassClass);
        }
    }

    private static native final void gtk_window_set_wmclass(long self, String wmclassName, String wmclassClass);

    static final void stick(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_stick(pointerOf(self));
        }
    }

    private static native final void gtk_window_stick(long self);

    static final void unfullscreen(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_unfullscreen(pointerOf(self));
        }
    }

    private static native final void gtk_window_unfullscreen(long self);

    static final void unmaximize(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_unmaximize(pointerOf(self));
        }
    }

    private static native final void gtk_window_unmaximize(long self);

    static final void unstick(Window self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_window_unstick(pointerOf(self));
        }
    }

    private static native final void gtk_window_unstick(long self);

    @SuppressWarnings("unused")
    static final FIXME getDefaultIconList() throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkPixbufPixbuf*");
    }

    static final String getDefaultIconName() {
        String result;

        synchronized (lock) {
            result = gtk_window_get_default_icon_name();

            return result;
        }
    }

    private static native final String gtk_window_get_default_icon_name();

    static final Widget[] listToplevels() {
        long[] result;

        synchronized (lock) {
            result = gtk_window_list_toplevels();

            return (Widget[]) objectArrayFor(result, new Widget[result.length]);
        }
    }

    private static native final long[] gtk_window_list_toplevels();

    static final void setAutoStartupNotification(boolean setting) {
        synchronized (lock) {
            gtk_window_set_auto_startup_notification(setting);
        }
    }

    private static native final void gtk_window_set_auto_startup_notification(boolean setting);

    static final void setDefaultIcon(Pixbuf icon) {
        if (icon == null) {
            throw new IllegalArgumentException("icon can't be null");
        }

        synchronized (lock) {
            gtk_window_set_default_icon(pointerOf(icon));
        }
    }

    private static native final void gtk_window_set_default_icon(long icon);

    static final boolean setDefaultIconFromFile(String filename) throws GlibException {
        boolean result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_window_set_default_icon_from_file(filename);

            return result;
        }
    }

    private static native final boolean gtk_window_set_default_icon_from_file(String filename) throws GlibException;

    @SuppressWarnings("unused")
    static final void setDefaultIconList(FIXME list) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkPixbufPixbuf*");
    }

    static final void setDefaultIconName(String name) {
        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_window_set_default_icon_name(name);
        }
    }

    private static native final void gtk_window_set_default_icon_name(String name);

    static final void setInteractiveDebugging(boolean enable) {
        synchronized (lock) {
            gtk_window_set_interactive_debugging(enable);
        }
    }

    private static native final void gtk_window_set_interactive_debugging(boolean enable);

    interface ActivateDefaultSignal extends Signal
    {
        void onActivateDefault(Window source);
    }

    static final void connect(Window self, GtkWindow.ActivateDefaultSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWindow.class, "activate-default", after);
    }

    protected static final void receiveActivateDefault(Signal handler, long source) {
        ((GtkWindow.ActivateDefaultSignal) handler).onActivateDefault((Window) objectFor(source));
    }

    interface ActivateFocusSignal extends Signal
    {
        void onActivateFocus(Window source);
    }

    static final void connect(Window self, GtkWindow.ActivateFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWindow.class, "activate-focus", after);
    }

    protected static final void receiveActivateFocus(Signal handler, long source) {
        ((GtkWindow.ActivateFocusSignal) handler).onActivateFocus((Window) objectFor(source));
    }

    interface EnableDebuggingSignal extends Signal
    {
        boolean onEnableDebugging(Window source, boolean toggle);
    }

    static final void connect(Window self, GtkWindow.EnableDebuggingSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWindow.class, "enable-debugging", after);
    }

    protected static final boolean receiveEnableDebugging(Signal handler, long source, boolean toggle) {
        boolean result;

        result = ((GtkWindow.EnableDebuggingSignal) handler).onEnableDebugging((Window) objectFor(source), toggle);

        return result;
    }

    interface KeysChangedSignal extends Signal
    {
        void onKeysChanged(Window source);
    }

    static final void connect(Window self, GtkWindow.KeysChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWindow.class, "keys-changed", after);
    }

    protected static final void receiveKeysChanged(Signal handler, long source) {
        ((GtkWindow.KeysChangedSignal) handler).onKeysChanged((Window) objectFor(source));
    }

    interface SetFocusSignal extends Signal
    {
        void onSetFocus(Window source, Widget focus);
    }

    static final void connect(Window self, GtkWindow.SetFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkWindow.class, "set-focus", after);
    }

    protected static final void receiveSetFocus(Signal handler, long source, long focus) {
        ((GtkWindow.SetFocusSignal) handler).onSetFocus((Window) objectFor(source), (Widget) objectFor(focus));
    }
}

