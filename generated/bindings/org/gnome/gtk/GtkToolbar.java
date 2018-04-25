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
import org.gnome.gtk.ToolItem;
import org.gnome.gtk.Toolbar;
import org.gnome.gtk.ToolbarStyle;

final class GtkToolbar extends Plumbing
{
    private GtkToolbar() {}

    static final long createToolbar() {
        long result;

        synchronized (lock) {
            result = gtk_toolbar_new();

            return result;
        }
    }

    private static native final long gtk_toolbar_new();

    static final int getDropIndex(Toolbar self, int x, int y) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_drop_index(pointerOf(self), x, y);

            return result;
        }
    }

    private static native final int gtk_toolbar_get_drop_index(long self, int x, int y);

    static final IconSize getIconSize(Toolbar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_icon_size(pointerOf(self));

            return (IconSize) enumFor(IconSize.class, result);
        }
    }

    private static native final int gtk_toolbar_get_icon_size(long self);

    static final int getItemIndex(Toolbar self, ToolItem item) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (item == null) {
            throw new IllegalArgumentException("item can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_item_index(pointerOf(self), pointerOf(item));

            return result;
        }
    }

    private static native final int gtk_toolbar_get_item_index(long self, long item);

    static final int getNItems(Toolbar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_n_items(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_toolbar_get_n_items(long self);

    static final ToolItem getNthItem(Toolbar self, int n) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_nth_item(pointerOf(self), n);

            return (ToolItem) objectFor(result);
        }
    }

    private static native final long gtk_toolbar_get_nth_item(long self, int n);

    static final ReliefStyle getReliefStyle(Toolbar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_relief_style(pointerOf(self));

            return (ReliefStyle) enumFor(ReliefStyle.class, result);
        }
    }

    private static native final int gtk_toolbar_get_relief_style(long self);

    static final boolean getShowArrow(Toolbar self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_show_arrow(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_toolbar_get_show_arrow(long self);

    static final ToolbarStyle getStyle(Toolbar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_toolbar_get_style(pointerOf(self));

            return (ToolbarStyle) enumFor(ToolbarStyle.class, result);
        }
    }

    private static native final int gtk_toolbar_get_style(long self);

    static final void insert(Toolbar self, ToolItem item, int pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (item == null) {
            throw new IllegalArgumentException("item can't be null");
        }

        synchronized (lock) {
            gtk_toolbar_insert(pointerOf(self), pointerOf(item), pos);
        }
    }

    private static native final void gtk_toolbar_insert(long self, long item, int pos);

    static final void setDropHighlightItem(Toolbar self, ToolItem toolItem, int index) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_toolbar_set_drop_highlight_item(pointerOf(self), pointerOf(toolItem), index);
        }
    }

    private static native final void gtk_toolbar_set_drop_highlight_item(long self, long toolItem, int index);

    static final void setIconSize(Toolbar self, IconSize iconSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconSize == null) {
            throw new IllegalArgumentException("iconSize can't be null");
        }

        synchronized (lock) {
            gtk_toolbar_set_icon_size(pointerOf(self), numOf(iconSize));
        }
    }

    private static native final void gtk_toolbar_set_icon_size(long self, int iconSize);

    static final void setShowArrow(Toolbar self, boolean showArrow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_toolbar_set_show_arrow(pointerOf(self), showArrow);
        }
    }

    private static native final void gtk_toolbar_set_show_arrow(long self, boolean showArrow);

    static final void setStyle(Toolbar self, ToolbarStyle style) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (style == null) {
            throw new IllegalArgumentException("style can't be null");
        }

        synchronized (lock) {
            gtk_toolbar_set_style(pointerOf(self), numOf(style));
        }
    }

    private static native final void gtk_toolbar_set_style(long self, int style);

    static final void unsetIconSize(Toolbar self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_toolbar_unset_icon_size(pointerOf(self));
        }
    }

    private static native final void gtk_toolbar_unset_icon_size(long self);

    static final void unsetStyle(Toolbar self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_toolbar_unset_style(pointerOf(self));
        }
    }

    private static native final void gtk_toolbar_unset_style(long self);

    interface OrientationChangedSignal extends Signal
    {
        void onOrientationChanged(Toolbar source, Orientation orientation);
    }

    static final void connect(Toolbar self, GtkToolbar.OrientationChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkToolbar.class, "orientation-changed", after);
    }

    protected static final void receiveOrientationChanged(Signal handler, long source, int orientation) {
        ((GtkToolbar.OrientationChangedSignal) handler).onOrientationChanged((Toolbar) objectFor(source), (Orientation) enumFor(Orientation.class, orientation));
    }

    interface PopupContextMenuSignal extends Signal
    {
        boolean onPopupContextMenu(Toolbar source, int x, int y, int buttonNumber);
    }

    static final void connect(Toolbar self, GtkToolbar.PopupContextMenuSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkToolbar.class, "popup-context-menu", after);
    }

    protected static final boolean receivePopupContextMenu(Signal handler, long source, int x, int y, int buttonNumber) {
        boolean result;

        result = ((GtkToolbar.PopupContextMenuSignal) handler).onPopupContextMenu((Toolbar) objectFor(source), x, y, buttonNumber);

        return result;
    }

    interface StyleChangedSignal extends Signal
    {
        void onStyleChanged(Toolbar source, ToolbarStyle style);
    }

    static final void connect(Toolbar self, GtkToolbar.StyleChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkToolbar.class, "style-changed", after);
    }

    protected static final void receiveStyleChanged(Signal handler, long source, int style) {
        ((GtkToolbar.StyleChangedSignal) handler).onStyleChanged((Toolbar) objectFor(source), (ToolbarStyle) enumFor(ToolbarStyle.class, style));
    }

    interface FocusHomeOrEndSignal extends Signal
    {
        boolean onFocusHomeOrEnd(Toolbar source, boolean focusHome);
    }

    static final void connect(Toolbar self, GtkToolbar.FocusHomeOrEndSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkToolbar.class, "focus-home-or-end", after);
    }

    protected static final boolean receiveFocusHomeOrEnd(Signal handler, long source, boolean focusHome) {
        boolean result;

        result = ((GtkToolbar.FocusHomeOrEndSignal) handler).onFocusHomeOrEnd((Toolbar) objectFor(source), focusHome);

        return result;
    }
}

