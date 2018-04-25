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

import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ReliefStyle;
import org.gnome.gtk.ToolItem;
import org.gnome.gtk.ToolItemGroup;
import org.gnome.gtk.Widget;
import org.gnome.pango.EllipsizeMode;

final class GtkToolItemGroup extends Plumbing
{
    private GtkToolItemGroup() {}

    static final long createToolItemGroup(String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_new(label);

            return result;
        }
    }

    private static native final long gtk_tool_item_group_new(String label);

    static final boolean getCollapsed(ToolItemGroup self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_collapsed(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_item_group_get_collapsed(long self);

    static final ToolItem getDropItem(ToolItemGroup self, int x, int y) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_drop_item(pointerOf(self), x, y);

            return (ToolItem) objectFor(result);
        }
    }

    private static native final long gtk_tool_item_group_get_drop_item(long self, int x, int y);

    static final EllipsizeMode getEllipsize(ToolItemGroup self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_ellipsize(pointerOf(self));

            return (EllipsizeMode) enumFor(EllipsizeMode.class, result);
        }
    }

    private static native final int gtk_tool_item_group_get_ellipsize(long self);

    static final ReliefStyle getHeaderRelief(ToolItemGroup self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_header_relief(pointerOf(self));

            return (ReliefStyle) enumFor(ReliefStyle.class, result);
        }
    }

    private static native final int gtk_tool_item_group_get_header_relief(long self);

    static final int getItemPosition(ToolItemGroup self, ToolItem item) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (item == null) {
            throw new IllegalArgumentException("item can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_item_position(pointerOf(self), pointerOf(item));

            return result;
        }
    }

    private static native final int gtk_tool_item_group_get_item_position(long self, long item);

    static final String getLabel(ToolItemGroup self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_tool_item_group_get_label(long self);

    static final Widget getLabelWidget(ToolItemGroup self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_label_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tool_item_group_get_label_widget(long self);

    static final int getNItems(ToolItemGroup self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_n_items(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tool_item_group_get_n_items(long self);

    static final ToolItem getNthItem(ToolItemGroup self, int index) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_item_group_get_nth_item(pointerOf(self), index);

            return (ToolItem) objectFor(result);
        }
    }

    private static native final long gtk_tool_item_group_get_nth_item(long self, int index);

    static final void insert(ToolItemGroup self, ToolItem item, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (item == null) {
            throw new IllegalArgumentException("item can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_group_insert(pointerOf(self), pointerOf(item), position);
        }
    }

    private static native final void gtk_tool_item_group_insert(long self, long item, int position);

    static final void setCollapsed(ToolItemGroup self, boolean collapsed) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_group_set_collapsed(pointerOf(self), collapsed);
        }
    }

    private static native final void gtk_tool_item_group_set_collapsed(long self, boolean collapsed);

    static final void setEllipsize(ToolItemGroup self, EllipsizeMode ellipsize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (ellipsize == null) {
            throw new IllegalArgumentException("ellipsize can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_group_set_ellipsize(pointerOf(self), numOf(ellipsize));
        }
    }

    private static native final void gtk_tool_item_group_set_ellipsize(long self, int ellipsize);

    static final void setHeaderRelief(ToolItemGroup self, ReliefStyle style) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (style == null) {
            throw new IllegalArgumentException("style can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_group_set_header_relief(pointerOf(self), numOf(style));
        }
    }

    private static native final void gtk_tool_item_group_set_header_relief(long self, int style);

    static final void setItemPosition(ToolItemGroup self, ToolItem item, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (item == null) {
            throw new IllegalArgumentException("item can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_group_set_item_position(pointerOf(self), pointerOf(item), position);
        }
    }

    private static native final void gtk_tool_item_group_set_item_position(long self, long item, int position);

    static final void setLabel(ToolItemGroup self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_group_set_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_tool_item_group_set_label(long self, String label);

    static final void setLabelWidget(ToolItemGroup self, Widget labelWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (labelWidget == null) {
            throw new IllegalArgumentException("labelWidget can't be null");
        }

        synchronized (lock) {
            gtk_tool_item_group_set_label_widget(pointerOf(self), pointerOf(labelWidget));
        }
    }

    private static native final void gtk_tool_item_group_set_label_widget(long self, long labelWidget);
}

