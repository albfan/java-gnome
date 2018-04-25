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
import org.gnome.gdk.Rectangle;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.CellRenderer;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SortType;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.TreeViewColumn;
import org.gnome.gtk.TreeViewColumnSizing;
import org.gnome.gtk.Widget;

final class GtkTreeViewColumn extends Plumbing
{
    private GtkTreeViewColumn() {}

    static final long createTreeViewColumn() {
        long result;

        synchronized (lock) {
            result = gtk_tree_view_column_new();

            return result;
        }
    }

    private static native final long gtk_tree_view_column_new();

    @SuppressWarnings("unused")
    static final long createTreeViewColumnWithArea(FIXME area) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellArea*");
    }

    static final long createTreeViewColumnWithAttributes(String title, CellRenderer cell) {
        long result;

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_new_with_attributes(title, pointerOf(cell));

            return result;
        }
    }

    private static native final long gtk_tree_view_column_new_with_attributes(String title, long cell);

    static final void addAttribute(TreeViewColumn self, CellRenderer cellRenderer, String attribute, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cellRenderer == null) {
            throw new IllegalArgumentException("cellRenderer can't be null");
        }

        if (attribute == null) {
            throw new IllegalArgumentException("attribute can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_add_attribute(pointerOf(self), pointerOf(cellRenderer), attribute, column);
        }
    }

    private static native final void gtk_tree_view_column_add_attribute(long self, long cellRenderer, String attribute, int column);

    static final boolean cellGetPosition(TreeViewColumn self, CellRenderer cellRenderer, int[] xOffset, int[] width) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cellRenderer == null) {
            throw new IllegalArgumentException("cellRenderer can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_cell_get_position(pointerOf(self), pointerOf(cellRenderer), xOffset, width);

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_cell_get_position(long self, long cellRenderer, int[] xOffset, int[] width);

    static final void cellGetSize(TreeViewColumn self, Rectangle cellArea, int[] xOffset, int[] yOffset, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_cell_get_size(pointerOf(self), pointerOf(cellArea), xOffset, yOffset, width, height);
        }
    }

    private static native final void gtk_tree_view_column_cell_get_size(long self, long cellArea, int[] xOffset, int[] yOffset, int[] width, int[] height);

    static final boolean cellIsVisible(TreeViewColumn self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_cell_is_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_cell_is_visible(long self);

    static final void cellSetCellData(TreeViewColumn self, TreeModel treeModel, TreeIter iter, boolean isExpander, boolean isExpanded) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (treeModel == null) {
            throw new IllegalArgumentException("treeModel can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_cell_set_cell_data(pointerOf(self), pointerOf((Object) treeModel), pointerOf(iter), isExpander, isExpanded);
        }
    }

    private static native final void gtk_tree_view_column_cell_set_cell_data(long self, long treeModel, long iter, boolean isExpander, boolean isExpanded);

    static final void clear(TreeViewColumn self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_clear(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_column_clear(long self);

    static final void clearAttributes(TreeViewColumn self, CellRenderer cellRenderer) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cellRenderer == null) {
            throw new IllegalArgumentException("cellRenderer can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_clear_attributes(pointerOf(self), pointerOf(cellRenderer));
        }
    }

    private static native final void gtk_tree_view_column_clear_attributes(long self, long cellRenderer);

    static final void clicked(TreeViewColumn self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_clicked(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_column_clicked(long self);

    static final void focusCell(TreeViewColumn self, CellRenderer cell) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_focus_cell(pointerOf(self), pointerOf(cell));
        }
    }

    private static native final void gtk_tree_view_column_focus_cell(long self, long cell);

    static final float getAlignment(TreeViewColumn self) {
        float result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_alignment(pointerOf(self));

            return result;
        }
    }

    private static native final float gtk_tree_view_column_get_alignment(long self);

    static final Widget getButton(TreeViewColumn self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_button(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_column_get_button(long self);

    static final boolean getClickable(TreeViewColumn self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_clickable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_get_clickable(long self);

    static final boolean getExpand(TreeViewColumn self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_expand(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_get_expand(long self);

    static final int getFixedWidth(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_fixed_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_column_get_fixed_width(long self);

    static final int getMaxWidth(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_max_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_column_get_max_width(long self);

    static final int getMinWidth(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_min_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_column_get_min_width(long self);

    static final boolean getReorderable(TreeViewColumn self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_reorderable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_get_reorderable(long self);

    static final boolean getResizable(TreeViewColumn self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_resizable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_get_resizable(long self);

    static final TreeViewColumnSizing getSizing(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_sizing(pointerOf(self));

            return (TreeViewColumnSizing) enumFor(TreeViewColumnSizing.class, result);
        }
    }

    private static native final int gtk_tree_view_column_get_sizing(long self);

    static final int getSortColumnId(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_sort_column_id(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_column_get_sort_column_id(long self);

    static final boolean getSortIndicator(TreeViewColumn self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_sort_indicator(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_get_sort_indicator(long self);

    static final SortType getSortOrder(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_sort_order(pointerOf(self));

            return (SortType) enumFor(SortType.class, result);
        }
    }

    private static native final int gtk_tree_view_column_get_sort_order(long self);

    static final int getSpacing(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_column_get_spacing(long self);

    static final String getTitle(TreeViewColumn self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_tree_view_column_get_title(long self);

    static final Widget getTreeView(TreeViewColumn self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_tree_view(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_column_get_tree_view(long self);

    static final boolean getVisible(TreeViewColumn self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_column_get_visible(long self);

    static final Widget getWidget(TreeViewColumn self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_column_get_widget(long self);

    static final int getWidth(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_column_get_width(long self);

    static final int getXOffset(TreeViewColumn self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_column_get_x_offset(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_column_get_x_offset(long self);

    static final void packEnd(TreeViewColumn self, CellRenderer cell, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_pack_end(pointerOf(self), pointerOf(cell), expand);
        }
    }

    private static native final void gtk_tree_view_column_pack_end(long self, long cell, boolean expand);

    static final void packStart(TreeViewColumn self, CellRenderer cell, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_pack_start(pointerOf(self), pointerOf(cell), expand);
        }
    }

    private static native final void gtk_tree_view_column_pack_start(long self, long cell, boolean expand);

    static final void queueResize(TreeViewColumn self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_queue_resize(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_column_queue_resize(long self);

    static final void setAlignment(TreeViewColumn self, float xalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_alignment(pointerOf(self), xalign);
        }
    }

    private static native final void gtk_tree_view_column_set_alignment(long self, float xalign);

    static final void setAttributes(TreeViewColumn self, CellRenderer cellRenderer) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cellRenderer == null) {
            throw new IllegalArgumentException("cellRenderer can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_attributes(pointerOf(self), pointerOf(cellRenderer));
        }
    }

    private static native final void gtk_tree_view_column_set_attributes(long self, long cellRenderer);

    @SuppressWarnings("unused")
    static final void setCellDataFunc(TreeViewColumn self, CellRenderer cellRenderer, FIXME func, FIXME funcData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeCellDataFunc");
    }

    static final void setClickable(TreeViewColumn self, boolean clickable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_clickable(pointerOf(self), clickable);
        }
    }

    private static native final void gtk_tree_view_column_set_clickable(long self, boolean clickable);

    static final void setExpand(TreeViewColumn self, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_expand(pointerOf(self), expand);
        }
    }

    private static native final void gtk_tree_view_column_set_expand(long self, boolean expand);

    static final void setFixedWidth(TreeViewColumn self, int fixedWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_fixed_width(pointerOf(self), fixedWidth);
        }
    }

    private static native final void gtk_tree_view_column_set_fixed_width(long self, int fixedWidth);

    static final void setMaxWidth(TreeViewColumn self, int maxWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_max_width(pointerOf(self), maxWidth);
        }
    }

    private static native final void gtk_tree_view_column_set_max_width(long self, int maxWidth);

    static final void setMinWidth(TreeViewColumn self, int minWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_min_width(pointerOf(self), minWidth);
        }
    }

    private static native final void gtk_tree_view_column_set_min_width(long self, int minWidth);

    static final void setReorderable(TreeViewColumn self, boolean reorderable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_reorderable(pointerOf(self), reorderable);
        }
    }

    private static native final void gtk_tree_view_column_set_reorderable(long self, boolean reorderable);

    static final void setResizable(TreeViewColumn self, boolean resizable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_resizable(pointerOf(self), resizable);
        }
    }

    private static native final void gtk_tree_view_column_set_resizable(long self, boolean resizable);

    static final void setSizing(TreeViewColumn self, TreeViewColumnSizing type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_sizing(pointerOf(self), numOf(type));
        }
    }

    private static native final void gtk_tree_view_column_set_sizing(long self, int type);

    static final void setSortColumnId(TreeViewColumn self, int sortColumnId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_sort_column_id(pointerOf(self), sortColumnId);
        }
    }

    private static native final void gtk_tree_view_column_set_sort_column_id(long self, int sortColumnId);

    static final void setSortIndicator(TreeViewColumn self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_sort_indicator(pointerOf(self), setting);
        }
    }

    private static native final void gtk_tree_view_column_set_sort_indicator(long self, boolean setting);

    static final void setSortOrder(TreeViewColumn self, SortType order) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (order == null) {
            throw new IllegalArgumentException("order can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_sort_order(pointerOf(self), numOf(order));
        }
    }

    private static native final void gtk_tree_view_column_set_sort_order(long self, int order);

    static final void setSpacing(TreeViewColumn self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_spacing(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_tree_view_column_set_spacing(long self, int spacing);

    static final void setTitle(TreeViewColumn self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_tree_view_column_set_title(long self, String title);

    static final void setVisible(TreeViewColumn self, boolean visible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_visible(pointerOf(self), visible);
        }
    }

    private static native final void gtk_tree_view_column_set_visible(long self, boolean visible);

    static final void setWidget(TreeViewColumn self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_column_set_widget(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_tree_view_column_set_widget(long self, long widget);

    interface ClickedSignal extends Signal
    {
        void onClicked(TreeViewColumn source);
    }

    static final void connect(TreeViewColumn self, GtkTreeViewColumn.ClickedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeViewColumn.class, "clicked", after);
    }

    protected static final void receiveClicked(Signal handler, long source) {
        ((GtkTreeViewColumn.ClickedSignal) handler).onClicked((TreeViewColumn) objectFor(source));
    }
}

