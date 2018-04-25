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
import org.gnome.glib.Signal;
import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.Action;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkAction extends Plumbing
{
    private GtkAction() {}

    static final long createAction(String name, String label, String tooltip, String stockId) {
        long result;

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gtk_action_new(name, label, tooltip, stockId);

            return result;
        }
    }

    private static native final long gtk_action_new(String name, String label, String tooltip, String stockId);

    static final void activate(Action self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_activate(pointerOf(self));
        }
    }

    private static native final void gtk_action_activate(long self);

    static final void blockActivate(Action self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_block_activate(pointerOf(self));
        }
    }

    private static native final void gtk_action_block_activate(long self);

    static final void connectAccelerator(Action self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_connect_accelerator(pointerOf(self));
        }
    }

    private static native final void gtk_action_connect_accelerator(long self);

    static final Widget createIcon(Action self, IconSize iconSize) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconSize == null) {
            throw new IllegalArgumentException("iconSize can't be null");
        }

        synchronized (lock) {
            result = gtk_action_create_icon(pointerOf(self), numOf(iconSize));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_action_create_icon(long self, int iconSize);

    static final Widget createMenu(Action self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_create_menu(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_action_create_menu(long self);

    static final Widget createMenuItem(Action self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_create_menu_item(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_action_create_menu_item(long self);

    static final Widget createToolItem(Action self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_create_tool_item(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_action_create_tool_item(long self);

    static final void disconnectAccelerator(Action self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_disconnect_accelerator(pointerOf(self));
        }
    }

    private static native final void gtk_action_disconnect_accelerator(long self);

    @SuppressWarnings("unused")
    static final FIXME getAccelClosure(Action self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GClosure*");
    }

    static final String getAccelPath(Action self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_accel_path(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_get_accel_path(long self);

    static final boolean getAlwaysShowImage(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_always_show_image(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_get_always_show_image(long self);

    @SuppressWarnings("unused")
    static final FIXME getGicon(Action self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final String getIconName(Action self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_get_icon_name(long self);

    static final boolean getIsImportant(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_is_important(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_get_is_important(long self);

    static final String getLabel(Action self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_get_label(long self);

    static final String getName(Action self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_get_name(long self);

    static final Widget[] getProxies(Action self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_proxies(pointerOf(self));

            return (Widget[]) objectArrayFor(result, new Widget[result.length]);
        }
    }

    private static native final long[] gtk_action_get_proxies(long self);

    static final boolean getSensitive(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_sensitive(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_get_sensitive(long self);

    static final String getShortLabel(Action self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_short_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_get_short_label(long self);

    static final String getStockId(Action self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_stock_id(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_get_stock_id(long self);

    static final String getTooltip(Action self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_tooltip(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_get_tooltip(long self);

    static final boolean getVisible(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_get_visible(long self);

    static final boolean getVisibleHorizontal(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_visible_horizontal(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_get_visible_horizontal(long self);

    static final boolean getVisibleVertical(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_get_visible_vertical(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_get_visible_vertical(long self);

    static final boolean isSensitive(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_is_sensitive(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_is_sensitive(long self);

    static final boolean isVisible(Action self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_is_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_is_visible(long self);

    static final void setAccelGroup(Action self, AcceleratorGroup accelGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_set_accel_group(pointerOf(self), pointerOf(accelGroup));
        }
    }

    private static native final void gtk_action_set_accel_group(long self, long accelGroup);

    static final void setAccelPath(Action self, String accelPath) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelPath == null) {
            throw new IllegalArgumentException("accelPath can't be null");
        }

        synchronized (lock) {
            gtk_action_set_accel_path(pointerOf(self), accelPath);
        }
    }

    private static native final void gtk_action_set_accel_path(long self, String accelPath);

    static final void setAlwaysShowImage(Action self, boolean alwaysShow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_set_always_show_image(pointerOf(self), alwaysShow);
        }
    }

    private static native final void gtk_action_set_always_show_image(long self, boolean alwaysShow);

    @SuppressWarnings("unused")
    static final void setGicon(Action self, FIXME icon) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final void setIconName(Action self, String iconName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        synchronized (lock) {
            gtk_action_set_icon_name(pointerOf(self), iconName);
        }
    }

    private static native final void gtk_action_set_icon_name(long self, String iconName);

    static final void setIsImportant(Action self, boolean isImportant) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_set_is_important(pointerOf(self), isImportant);
        }
    }

    private static native final void gtk_action_set_is_important(long self, boolean isImportant);

    static final void setLabel(Action self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            gtk_action_set_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_action_set_label(long self, String label);

    static final void setSensitive(Action self, boolean sensitive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_set_sensitive(pointerOf(self), sensitive);
        }
    }

    private static native final void gtk_action_set_sensitive(long self, boolean sensitive);

    static final void setShortLabel(Action self, String shortLabel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (shortLabel == null) {
            throw new IllegalArgumentException("shortLabel can't be null");
        }

        synchronized (lock) {
            gtk_action_set_short_label(pointerOf(self), shortLabel);
        }
    }

    private static native final void gtk_action_set_short_label(long self, String shortLabel);

    static final void setStockId(Action self, String stockId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            gtk_action_set_stock_id(pointerOf(self), stockId);
        }
    }

    private static native final void gtk_action_set_stock_id(long self, String stockId);

    static final void setTooltip(Action self, String tooltip) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tooltip == null) {
            throw new IllegalArgumentException("tooltip can't be null");
        }

        synchronized (lock) {
            gtk_action_set_tooltip(pointerOf(self), tooltip);
        }
    }

    private static native final void gtk_action_set_tooltip(long self, String tooltip);

    static final void setVisible(Action self, boolean visible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_set_visible(pointerOf(self), visible);
        }
    }

    private static native final void gtk_action_set_visible(long self, boolean visible);

    static final void setVisibleHorizontal(Action self, boolean visibleHorizontal) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_set_visible_horizontal(pointerOf(self), visibleHorizontal);
        }
    }

    private static native final void gtk_action_set_visible_horizontal(long self, boolean visibleHorizontal);

    static final void setVisibleVertical(Action self, boolean visibleVertical) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_set_visible_vertical(pointerOf(self), visibleVertical);
        }
    }

    private static native final void gtk_action_set_visible_vertical(long self, boolean visibleVertical);

    static final void unblockActivate(Action self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_unblock_activate(pointerOf(self));
        }
    }

    private static native final void gtk_action_unblock_activate(long self);

    interface ActivateSignal extends Signal
    {
        void onActivate(Action source);
    }

    static final void connect(Action self, GtkAction.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAction.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GtkAction.ActivateSignal) handler).onActivate((Action) objectFor(source));
    }

    interface ConnectProxySignal extends Signal
    {
        void onConnectProxy(Action source, Widget proxy);
    }

    static final void connect(Action self, GtkAction.ConnectProxySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAction.class, "connect-proxy", after);
    }

    protected static final void receiveConnectProxy(Signal handler, long source, long proxy) {
        ((GtkAction.ConnectProxySignal) handler).onConnectProxy((Action) objectFor(source), (Widget) objectFor(proxy));
    }

    interface CreateMenuSignal extends Signal
    {
        Widget onCreateMenu(Action source);
    }

    static final void connect(Action self, GtkAction.CreateMenuSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAction.class, "create-menu", after);
    }

    protected static final long receiveCreateMenu(Signal handler, long source) {
        Widget result;

        result = ((GtkAction.CreateMenuSignal) handler).onCreateMenu((Action) objectFor(source));

        return pointerOf(result);
    }

    interface CreateMenuItemSignal extends Signal
    {
        Widget onCreateMenuItem(Action source);
    }

    static final void connect(Action self, GtkAction.CreateMenuItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAction.class, "create-menu-item", after);
    }

    protected static final long receiveCreateMenuItem(Signal handler, long source) {
        Widget result;

        result = ((GtkAction.CreateMenuItemSignal) handler).onCreateMenuItem((Action) objectFor(source));

        return pointerOf(result);
    }

    interface CreateToolItemSignal extends Signal
    {
        Widget onCreateToolItem(Action source);
    }

    static final void connect(Action self, GtkAction.CreateToolItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAction.class, "create-tool-item", after);
    }

    protected static final long receiveCreateToolItem(Signal handler, long source) {
        Widget result;

        result = ((GtkAction.CreateToolItemSignal) handler).onCreateToolItem((Action) objectFor(source));

        return pointerOf(result);
    }

    interface DisconnectProxySignal extends Signal
    {
        void onDisconnectProxy(Action source, Widget proxy);
    }

    static final void connect(Action self, GtkAction.DisconnectProxySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAction.class, "disconnect-proxy", after);
    }

    protected static final void receiveDisconnectProxy(Signal handler, long source, long proxy) {
        ((GtkAction.DisconnectProxySignal) handler).onDisconnectProxy((Action) objectFor(source), (Widget) objectFor(proxy));
    }
}

