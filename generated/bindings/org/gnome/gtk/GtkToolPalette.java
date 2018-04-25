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
import org.gnome.gdk.DragAction;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.DestDefaults;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SelectionData;
import org.gnome.gtk.ToolItem;
import org.gnome.gtk.ToolItemGroup;
import org.gnome.gtk.ToolPalette;
import org.gnome.gtk.ToolPaletteDragTargets;
import org.gnome.gtk.ToolbarStyle;
import org.gnome.gtk.Widget;

final class GtkToolPalette extends Plumbing
{
    private GtkToolPalette() {}

    static final long createToolPalette() {
        long result;

        synchronized (lock) {
            result = gtk_tool_palette_new();

            return result;
        }
    }

    private static native final long gtk_tool_palette_new();

    static final void addDragDest(ToolPalette self, Widget widget, DestDefaults flags, ToolPaletteDragTargets targets, DragAction actions) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        if (targets == null) {
            throw new IllegalArgumentException("targets can't be null");
        }

        if (actions == null) {
            throw new IllegalArgumentException("actions can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_add_drag_dest(pointerOf(self), pointerOf(widget), numOf(flags), numOf(targets), numOf(actions));
        }
    }

    private static native final void gtk_tool_palette_add_drag_dest(long self, long widget, int flags, int targets, int actions);

    static final Widget getDragItem(ToolPalette self, SelectionData selection) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (selection == null) {
            throw new IllegalArgumentException("selection can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_drag_item(pointerOf(self), pointerOf(selection));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tool_palette_get_drag_item(long self, long selection);

    static final ToolItemGroup getDropGroup(ToolPalette self, int x, int y) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_drop_group(pointerOf(self), x, y);

            return (ToolItemGroup) objectFor(result);
        }
    }

    private static native final long gtk_tool_palette_get_drop_group(long self, int x, int y);

    static final ToolItem getDropItem(ToolPalette self, int x, int y) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_drop_item(pointerOf(self), x, y);

            return (ToolItem) objectFor(result);
        }
    }

    private static native final long gtk_tool_palette_get_drop_item(long self, int x, int y);

    static final boolean getExclusive(ToolPalette self, ToolItemGroup group) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (group == null) {
            throw new IllegalArgumentException("group can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_exclusive(pointerOf(self), pointerOf(group));

            return result;
        }
    }

    private static native final boolean gtk_tool_palette_get_exclusive(long self, long group);

    static final boolean getExpand(ToolPalette self, ToolItemGroup group) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (group == null) {
            throw new IllegalArgumentException("group can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_expand(pointerOf(self), pointerOf(group));

            return result;
        }
    }

    private static native final boolean gtk_tool_palette_get_expand(long self, long group);

    static final int getGroupPosition(ToolPalette self, ToolItemGroup group) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (group == null) {
            throw new IllegalArgumentException("group can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_group_position(pointerOf(self), pointerOf(group));

            return result;
        }
    }

    private static native final int gtk_tool_palette_get_group_position(long self, long group);

    static final Adjustment getHadjustment(ToolPalette self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_hadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_tool_palette_get_hadjustment(long self);

    static final IconSize getIconSize(ToolPalette self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_icon_size(pointerOf(self));

            return (IconSize) enumFor(IconSize.class, result);
        }
    }

    private static native final int gtk_tool_palette_get_icon_size(long self);

    static final ToolbarStyle getStyle(ToolPalette self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_style(pointerOf(self));

            return (ToolbarStyle) enumFor(ToolbarStyle.class, result);
        }
    }

    private static native final int gtk_tool_palette_get_style(long self);

    static final Adjustment getVadjustment(ToolPalette self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_palette_get_vadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_tool_palette_get_vadjustment(long self);

    static final void setDragSource(ToolPalette self, ToolPaletteDragTargets targets) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (targets == null) {
            throw new IllegalArgumentException("targets can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_set_drag_source(pointerOf(self), numOf(targets));
        }
    }

    private static native final void gtk_tool_palette_set_drag_source(long self, int targets);

    static final void setExclusive(ToolPalette self, ToolItemGroup group, boolean exclusive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (group == null) {
            throw new IllegalArgumentException("group can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_set_exclusive(pointerOf(self), pointerOf(group), exclusive);
        }
    }

    private static native final void gtk_tool_palette_set_exclusive(long self, long group, boolean exclusive);

    static final void setExpand(ToolPalette self, ToolItemGroup group, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (group == null) {
            throw new IllegalArgumentException("group can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_set_expand(pointerOf(self), pointerOf(group), expand);
        }
    }

    private static native final void gtk_tool_palette_set_expand(long self, long group, boolean expand);

    static final void setGroupPosition(ToolPalette self, ToolItemGroup group, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (group == null) {
            throw new IllegalArgumentException("group can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_set_group_position(pointerOf(self), pointerOf(group), position);
        }
    }

    private static native final void gtk_tool_palette_set_group_position(long self, long group, int position);

    static final void setIconSize(ToolPalette self, IconSize iconSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconSize == null) {
            throw new IllegalArgumentException("iconSize can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_set_icon_size(pointerOf(self), numOf(iconSize));
        }
    }

    private static native final void gtk_tool_palette_set_icon_size(long self, int iconSize);

    static final void setStyle(ToolPalette self, ToolbarStyle style) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (style == null) {
            throw new IllegalArgumentException("style can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_set_style(pointerOf(self), numOf(style));
        }
    }

    private static native final void gtk_tool_palette_set_style(long self, int style);

    static final void unsetIconSize(ToolPalette self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_unset_icon_size(pointerOf(self));
        }
    }

    private static native final void gtk_tool_palette_unset_icon_size(long self);

    static final void unsetStyle(ToolPalette self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_palette_unset_style(pointerOf(self));
        }
    }

    private static native final void gtk_tool_palette_unset_style(long self);

    @SuppressWarnings("unused")
    static final FIXME getDragTargetGroup() throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GtkTargetEntry*");
    }

    @SuppressWarnings("unused")
    static final FIXME getDragTargetItem() throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GtkTargetEntry*");
    }
}

