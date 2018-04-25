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

import org.gnome.glib.Signal;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ReliefStyle;
import org.gnome.gtk.SizeGroup;
import org.gnome.gtk.ToolItem;
import org.gnome.gtk.ToolbarStyle;
import org.gnome.gtk.Widget;
import org.gnome.pango.EllipsizeMode;

final class GtkToolItem extends Plumbing
{
    private GtkToolItem() {}

    static final long createToolItem() {
        long result;

        synchronized (lock) {
            result = gtk_tool_item_new();

            return result;
        }
    }

    private static native final long gtk_tool_item_new();

    static final EllipsizeMode getEllipsizeMode(ToolItem self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_ellipsize_mode(pointerOf(self));

            return (EllipsizeMode) enumFor(EllipsizeMode.class, result);
        }
    }

    private static native final int gtk_tool_item_get_ellipsize_mode(long self);

    static final boolean getExpand(ToolItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_expand(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_item_get_expand(long self);

    static final boolean getHomogeneous(ToolItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_homogeneous(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_item_get_homogeneous(long self);

    static final IconSize getIconSize(ToolItem self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_icon_size(pointerOf(self));

            return (IconSize) enumFor(IconSize.class, result);
        }
    }

    private static native final int gtk_tool_item_get_icon_size(long self);

    static final boolean getIsImportant(ToolItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_is_important(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_item_get_is_important(long self);

    static final Orientation getOrientation(ToolItem self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_orientation(pointerOf(self));

            return (Orientation) enumFor(Orientation.class, result);
        }
    }

    private static native final int gtk_tool_item_get_orientation(long self);

    static final Widget getProxyMenuItem(ToolItem self, String menuItemId) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (menuItemId == null) {
            throw new IllegalArgumentException("menuItemId can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_proxy_menu_item(pointerOf(self), menuItemId);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tool_item_get_proxy_menu_item(long self, String menuItemId);

    static final ReliefStyle getReliefStyle(ToolItem self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_relief_style(pointerOf(self));

            return (ReliefStyle) enumFor(ReliefStyle.class, result);
        }
    }

    private static native final int gtk_tool_item_get_relief_style(long self);

    static final float getTextAlignment(ToolItem self) {
        float result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_text_alignment(pointerOf(self));

            return result;
        }
    }

    private static native final float gtk_tool_item_get_text_alignment(long self);

    static final Orientation getTextOrientation(ToolItem self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_text_orientation(pointerOf(self));

            return (Orientation) enumFor(Orientation.class, result);
        }
    }

    private static native final int gtk_tool_item_get_text_orientation(long self);

    static final SizeGroup getTextSizeGroup(ToolItem self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_text_size_group(pointerOf(self));

            return (SizeGroup) objectFor(result);
        }
    }

    private static native final long gtk_tool_item_get_text_size_group(long self);

    static final ToolbarStyle getToolbarStyle(ToolItem self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_toolbar_style(pointerOf(self));

            return (ToolbarStyle) enumFor(ToolbarStyle.class, result);
        }
    }

    private static native final int gtk_tool_item_get_toolbar_style(long self);

    static final boolean getUseDragWindow(ToolItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_use_drag_window(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_item_get_use_drag_window(long self);

    static final boolean getVisibleHorizontal(ToolItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_visible_horizontal(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_item_get_visible_horizontal(long self);

    static final boolean getVisibleVertical(ToolItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_get_visible_vertical(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_item_get_visible_vertical(long self);

    static final void rebuildMenu(ToolItem self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_rebuild_menu(pointerOf(self));
        }
    }

    private static native final void gtk_tool_item_rebuild_menu(long self);

    static final Widget retrieveProxyMenuItem(ToolItem self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_retrieve_proxy_menu_item(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tool_item_retrieve_proxy_menu_item(long self);

    static final void setExpand(ToolItem self, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_expand(pointerOf(self), expand);
        }
    }

    private static native final void gtk_tool_item_set_expand(long self, boolean expand);

    static final void setHomogeneous(ToolItem self, boolean homogeneous) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_homogeneous(pointerOf(self), homogeneous);
        }
    }

    private static native final void gtk_tool_item_set_homogeneous(long self, boolean homogeneous);

    static final void setIsImportant(ToolItem self, boolean isImportant) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_is_important(pointerOf(self), isImportant);
        }
    }

    private static native final void gtk_tool_item_set_is_important(long self, boolean isImportant);

    static final void setProxyMenuItem(ToolItem self, String menuItemId, Widget menuItem) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (menuItemId == null) {
            throw new IllegalArgumentException("menuItemId can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_proxy_menu_item(pointerOf(self), menuItemId, pointerOf(menuItem));
        }
    }

    private static native final void gtk_tool_item_set_proxy_menu_item(long self, String menuItemId, long menuItem);

    static final void setTooltipMarkup(ToolItem self, String markup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (markup == null) {
            throw new IllegalArgumentException("markup can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_tooltip_markup(pointerOf(self), markup);
        }
    }

    private static native final void gtk_tool_item_set_tooltip_markup(long self, String markup);

    static final void setTooltipText(ToolItem self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_tooltip_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_tool_item_set_tooltip_text(long self, String text);

    static final void setUseDragWindow(ToolItem self, boolean useDragWindow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_use_drag_window(pointerOf(self), useDragWindow);
        }
    }

    private static native final void gtk_tool_item_set_use_drag_window(long self, boolean useDragWindow);

    static final void setVisibleHorizontal(ToolItem self, boolean visibleHorizontal) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_visible_horizontal(pointerOf(self), visibleHorizontal);
        }
    }

    private static native final void gtk_tool_item_set_visible_horizontal(long self, boolean visibleHorizontal);

    static final void setVisibleVertical(ToolItem self, boolean visibleVertical) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_set_visible_vertical(pointerOf(self), visibleVertical);
        }
    }

    private static native final void gtk_tool_item_set_visible_vertical(long self, boolean visibleVertical);

    static final void toolbarReconfigured(ToolItem self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_toolbar_reconfigured(pointerOf(self));
        }
    }

    private static native final void gtk_tool_item_toolbar_reconfigured(long self);

    interface CreateMenuProxySignal extends Signal
    {
        boolean onCreateMenuProxy(ToolItem source);
    }

    static final void connect(ToolItem self, GtkToolItem.CreateMenuProxySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkToolItem.class, "create-menu-proxy", after);
    }

    protected static final boolean receiveCreateMenuProxy(Signal handler, long source) {
        boolean result;

        result = ((GtkToolItem.CreateMenuProxySignal) handler).onCreateMenuProxy((ToolItem) objectFor(source));

        return result;
    }

    interface ToolbarReconfiguredSignal extends Signal
    {
        void onToolbarReconfigured(ToolItem source);
    }

    static final void connect(ToolItem self, GtkToolItem.ToolbarReconfiguredSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkToolItem.class, "toolbar-reconfigured", after);
    }

    protected static final void receiveToolbarReconfigured(Signal handler, long source) {
        ((GtkToolItem.ToolbarReconfiguredSignal) handler).onToolbarReconfigured((ToolItem) objectFor(source));
    }
}

