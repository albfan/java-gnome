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
import org.freedesktop.cairo.Surface;
import org.gnome.gdk.DragAction;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Rectangle;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.CellRenderer;
import org.gnome.gtk.IconView;
import org.gnome.gtk.IconViewDropPosition;
import org.gnome.gtk.MovementStep;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SelectionMode;
import org.gnome.gtk.Tooltip;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.TreePath;

final class GtkIconView extends Plumbing
{
    private GtkIconView() {}

    static final long createIconView() {
        long result;

        synchronized (lock) {
            result = gtk_icon_view_new();

            return result;
        }
    }

    private static native final long gtk_icon_view_new();

    @SuppressWarnings("unused")
    static final long createIconViewWithArea(FIXME area) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellArea*");
    }

    static final long createIconViewWithModel(TreeModel model) {
        long result;

        if (model == null) {
            throw new IllegalArgumentException("model can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_new_with_model(pointerOf((Object) model));

            return result;
        }
    }

    private static native final long gtk_icon_view_new_with_model(long model);

    static final void convertWidgetToBinWindowCoords(IconView self, int wx, int wy, int[] bx, int[] by) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_convert_widget_to_bin_window_coords(pointerOf(self), wx, wy, bx, by);
        }
    }

    private static native final void gtk_icon_view_convert_widget_to_bin_window_coords(long self, int wx, int wy, int[] bx, int[] by);

    static final Surface createDragIcon(IconView self, TreePath path) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_create_drag_icon(pointerOf(self), pointerOf(path));

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gtk_icon_view_create_drag_icon(long self, long path);

    @SuppressWarnings("unused")
    static final void enableModelDragDest(IconView self, FIXME targets, int nTargets, DragAction actions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    @SuppressWarnings("unused")
    static final void enableModelDragSource(IconView self, ModifierType startButtonMask, FIXME targets, int nTargets, DragAction actions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    static final boolean getActivateOnSingleClick(IconView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_activate_on_single_click(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_activate_on_single_click(long self);

    static final boolean getCellRect(IconView self, TreePath path, CellRenderer cell, Rectangle rect) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_cell_rect(pointerOf(self), pointerOf(path), pointerOf(cell), pointerOf(rect));

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_cell_rect(long self, long path, long cell, long rect);

    static final int getColumnSpacing(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_column_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_column_spacing(long self);

    static final int getColumns(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_columns(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_columns(long self);

    static final boolean getCursor(IconView self, TreePath[] path, CellRenderer[] cell) {
        boolean result;
        long[] _path;
        long[] _cell;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _cell = pointersOf(cell);

        synchronized (lock) {
            result = gtk_icon_view_get_cursor(pointerOf(self), _path, _cell);
            fillBoxedArray(TreePath.class, path, _path);
            fillObjectArray(cell, _cell);

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_cursor(long self, long[] path, long[] cell);

    static final boolean getDestItemAtPos(IconView self, int dragX, int dragY, TreePath[] path, IconViewDropPosition[] pos) {
        boolean result;
        long[] _path;
        int[] _pos;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _pos = numsOf(pos);

        synchronized (lock) {
            result = gtk_icon_view_get_dest_item_at_pos(pointerOf(self), dragX, dragY, _path, _pos);
            fillBoxedArray(TreePath.class, path, _path);
            fillEnumArray(IconViewDropPosition.class, pos, _pos);

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_dest_item_at_pos(long self, int dragX, int dragY, long[] path, int[] pos);

    static final void getDragDestItem(IconView self, TreePath[] path, IconViewDropPosition[] pos) {
        long[] _path;
        int[] _pos;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _pos = numsOf(pos);

        synchronized (lock) {
            gtk_icon_view_get_drag_dest_item(pointerOf(self), _path, _pos);
            fillBoxedArray(TreePath.class, path, _path);
            fillEnumArray(IconViewDropPosition.class, pos, _pos);
        }
    }

    private static native final void gtk_icon_view_get_drag_dest_item(long self, long[] path, int[] pos);

    static final boolean getItemAtPos(IconView self, int x, int y, TreePath[] path, CellRenderer[] cell) {
        boolean result;
        long[] _path;
        long[] _cell;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _cell = pointersOf(cell);

        synchronized (lock) {
            result = gtk_icon_view_get_item_at_pos(pointerOf(self), x, y, _path, _cell);
            fillBoxedArray(TreePath.class, path, _path);
            fillObjectArray(cell, _cell);

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_item_at_pos(long self, int x, int y, long[] path, long[] cell);

    static final int getItemColumn(IconView self, TreePath path) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_item_column(pointerOf(self), pointerOf(path));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_item_column(long self, long path);

    static final Orientation getItemOrientation(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_item_orientation(pointerOf(self));

            return (Orientation) enumFor(Orientation.class, result);
        }
    }

    private static native final int gtk_icon_view_get_item_orientation(long self);

    static final int getItemPadding(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_item_padding(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_item_padding(long self);

    static final int getItemRow(IconView self, TreePath path) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_item_row(pointerOf(self), pointerOf(path));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_item_row(long self, long path);

    static final int getItemWidth(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_item_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_item_width(long self);

    static final int getMargin(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_margin(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_margin(long self);

    static final int getMarkupColumn(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_markup_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_markup_column(long self);

    static final TreeModel getModel(IconView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_model(pointerOf(self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_icon_view_get_model(long self);

    static final TreePath getPathAtPos(IconView self, int x, int y) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_path_at_pos(pointerOf(self), x, y);

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_icon_view_get_path_at_pos(long self, int x, int y);

    static final int getPixbufColumn(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_pixbuf_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_pixbuf_column(long self);

    static final boolean getReorderable(IconView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_reorderable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_reorderable(long self);

    static final int getRowSpacing(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_row_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_row_spacing(long self);

    static final TreePath[] getSelectedItems(IconView self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_selected_items(pointerOf(self));

            return (TreePath[]) boxedArrayFor(TreePath.class, result, new TreePath[result.length]);
        }
    }

    private static native final long[] gtk_icon_view_get_selected_items(long self);

    static final SelectionMode getSelectionMode(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_selection_mode(pointerOf(self));

            return (SelectionMode) enumFor(SelectionMode.class, result);
        }
    }

    private static native final int gtk_icon_view_get_selection_mode(long self);

    static final int getSpacing(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_spacing(long self);

    static final int getTextColumn(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_text_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_text_column(long self);

    static final int getTooltipColumn(IconView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_get_tooltip_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_view_get_tooltip_column(long self);

    static final boolean getTooltipContext(IconView self, int[] x, int[] y, boolean keyboardTip, TreeModel[] model, TreePath[] path, TreeIter iter) {
        boolean result;
        long[] _model;
        long[] _path;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (x == null) {
            throw new IllegalArgumentException("x can't be null");
        }

        if (y == null) {
            throw new IllegalArgumentException("y can't be null");
        }

        _model = pointersOf((Object[])model);

        _path = pointersOf(path);

        synchronized (lock) {
            result = gtk_icon_view_get_tooltip_context(pointerOf(self), x, y, keyboardTip, _model, _path, pointerOf(iter));
            fillObjectArray((Object[])model, _model);
            fillBoxedArray(TreePath.class, path, _path);

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_tooltip_context(long self, int[] x, int[] y, boolean keyboardTip, long[] model, long[] path, long iter);

    static final boolean getVisibleRange(IconView self, TreePath[] startPath, TreePath[] endPath) {
        boolean result;
        long[] _startPath;
        long[] _endPath;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _startPath = pointersOf(startPath);

        _endPath = pointersOf(endPath);

        synchronized (lock) {
            result = gtk_icon_view_get_visible_range(pointerOf(self), _startPath, _endPath);
            fillBoxedArray(TreePath.class, startPath, _startPath);
            fillBoxedArray(TreePath.class, endPath, _endPath);

            return result;
        }
    }

    private static native final boolean gtk_icon_view_get_visible_range(long self, long[] startPath, long[] endPath);

    static final void itemActivated(IconView self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_item_activated(pointerOf(self), pointerOf(path));
        }
    }

    private static native final void gtk_icon_view_item_activated(long self, long path);

    static final boolean pathIsSelected(IconView self, TreePath path) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_view_path_is_selected(pointerOf(self), pointerOf(path));

            return result;
        }
    }

    private static native final boolean gtk_icon_view_path_is_selected(long self, long path);

    static final void scrollToPath(IconView self, TreePath path, boolean useAlign, float rowAlign, float colAlign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_scroll_to_path(pointerOf(self), pointerOf(path), useAlign, rowAlign, colAlign);
        }
    }

    private static native final void gtk_icon_view_scroll_to_path(long self, long path, boolean useAlign, float rowAlign, float colAlign);

    static final void selectAll(IconView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_select_all(pointerOf(self));
        }
    }

    private static native final void gtk_icon_view_select_all(long self);

    static final void selectPath(IconView self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_select_path(pointerOf(self), pointerOf(path));
        }
    }

    private static native final void gtk_icon_view_select_path(long self, long path);

    @SuppressWarnings("unused")
    static final void selectedForeach(IconView self, FIXME func, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkIconViewForeachFunc");
    }

    static final void setActivateOnSingleClick(IconView self, boolean single) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_activate_on_single_click(pointerOf(self), single);
        }
    }

    private static native final void gtk_icon_view_set_activate_on_single_click(long self, boolean single);

    static final void setColumnSpacing(IconView self, int columnSpacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_column_spacing(pointerOf(self), columnSpacing);
        }
    }

    private static native final void gtk_icon_view_set_column_spacing(long self, int columnSpacing);

    static final void setColumns(IconView self, int columns) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_columns(pointerOf(self), columns);
        }
    }

    private static native final void gtk_icon_view_set_columns(long self, int columns);

    static final void setCursor(IconView self, TreePath path, CellRenderer cell, boolean startEditing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_cursor(pointerOf(self), pointerOf(path), pointerOf(cell), startEditing);
        }
    }

    private static native final void gtk_icon_view_set_cursor(long self, long path, long cell, boolean startEditing);

    static final void setDragDestItem(IconView self, TreePath path, IconViewDropPosition pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pos == null) {
            throw new IllegalArgumentException("pos can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_drag_dest_item(pointerOf(self), pointerOf(path), numOf(pos));
        }
    }

    private static native final void gtk_icon_view_set_drag_dest_item(long self, long path, int pos);

    static final void setItemOrientation(IconView self, Orientation orientation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_item_orientation(pointerOf(self), numOf(orientation));
        }
    }

    private static native final void gtk_icon_view_set_item_orientation(long self, int orientation);

    static final void setItemPadding(IconView self, int itemPadding) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_item_padding(pointerOf(self), itemPadding);
        }
    }

    private static native final void gtk_icon_view_set_item_padding(long self, int itemPadding);

    static final void setItemWidth(IconView self, int itemWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_item_width(pointerOf(self), itemWidth);
        }
    }

    private static native final void gtk_icon_view_set_item_width(long self, int itemWidth);

    static final void setMargin(IconView self, int margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_margin(pointerOf(self), margin);
        }
    }

    private static native final void gtk_icon_view_set_margin(long self, int margin);

    static final void setMarkupColumn(IconView self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_markup_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_icon_view_set_markup_column(long self, int column);

    static final void setModel(IconView self, TreeModel model) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_model(pointerOf(self), pointerOf((Object) model));
        }
    }

    private static native final void gtk_icon_view_set_model(long self, long model);

    static final void setPixbufColumn(IconView self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_pixbuf_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_icon_view_set_pixbuf_column(long self, int column);

    static final void setReorderable(IconView self, boolean reorderable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_reorderable(pointerOf(self), reorderable);
        }
    }

    private static native final void gtk_icon_view_set_reorderable(long self, boolean reorderable);

    static final void setRowSpacing(IconView self, int rowSpacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_row_spacing(pointerOf(self), rowSpacing);
        }
    }

    private static native final void gtk_icon_view_set_row_spacing(long self, int rowSpacing);

    static final void setSelectionMode(IconView self, SelectionMode mode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mode == null) {
            throw new IllegalArgumentException("mode can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_selection_mode(pointerOf(self), numOf(mode));
        }
    }

    private static native final void gtk_icon_view_set_selection_mode(long self, int mode);

    static final void setSpacing(IconView self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_spacing(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_icon_view_set_spacing(long self, int spacing);

    static final void setTextColumn(IconView self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_text_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_icon_view_set_text_column(long self, int column);

    static final void setTooltipCell(IconView self, Tooltip tooltip, TreePath path, CellRenderer cell) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tooltip == null) {
            throw new IllegalArgumentException("tooltip can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_tooltip_cell(pointerOf(self), pointerOf(tooltip), pointerOf(path), pointerOf(cell));
        }
    }

    private static native final void gtk_icon_view_set_tooltip_cell(long self, long tooltip, long path, long cell);

    static final void setTooltipColumn(IconView self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_tooltip_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_icon_view_set_tooltip_column(long self, int column);

    static final void setTooltipItem(IconView self, Tooltip tooltip, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tooltip == null) {
            throw new IllegalArgumentException("tooltip can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_set_tooltip_item(pointerOf(self), pointerOf(tooltip), pointerOf(path));
        }
    }

    private static native final void gtk_icon_view_set_tooltip_item(long self, long tooltip, long path);

    static final void unselectAll(IconView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_unselect_all(pointerOf(self));
        }
    }

    private static native final void gtk_icon_view_unselect_all(long self);

    static final void unselectPath(IconView self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_unselect_path(pointerOf(self), pointerOf(path));
        }
    }

    private static native final void gtk_icon_view_unselect_path(long self, long path);

    static final void unsetModelDragDest(IconView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_unset_model_drag_dest(pointerOf(self));
        }
    }

    private static native final void gtk_icon_view_unset_model_drag_dest(long self);

    static final void unsetModelDragSource(IconView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_view_unset_model_drag_source(pointerOf(self));
        }
    }

    private static native final void gtk_icon_view_unset_model_drag_source(long self);

    interface ActivateCursorItemSignal extends Signal
    {
        boolean onActivateCursorItem(IconView source);
    }

    static final void connect(IconView self, GtkIconView.ActivateCursorItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "activate-cursor-item", after);
    }

    protected static final boolean receiveActivateCursorItem(Signal handler, long source) {
        boolean result;

        result = ((GtkIconView.ActivateCursorItemSignal) handler).onActivateCursorItem((IconView) objectFor(source));

        return result;
    }

    interface ItemActivatedSignal extends Signal
    {
        void onItemActivated(IconView source, TreePath path);
    }

    static final void connect(IconView self, GtkIconView.ItemActivatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "item-activated", after);
    }

    protected static final void receiveItemActivated(Signal handler, long source, long path) {
        ((GtkIconView.ItemActivatedSignal) handler).onItemActivated((IconView) objectFor(source), (TreePath) boxedFor(TreePath.class, path));
    }

    interface MoveCursorSignal extends Signal
    {
        boolean onMoveCursor(IconView source, MovementStep step, int count);
    }

    static final void connect(IconView self, GtkIconView.MoveCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "move-cursor", after);
    }

    protected static final boolean receiveMoveCursor(Signal handler, long source, int step, int count) {
        boolean result;

        result = ((GtkIconView.MoveCursorSignal) handler).onMoveCursor((IconView) objectFor(source), (MovementStep) enumFor(MovementStep.class, step), count);

        return result;
    }

    interface SelectAllSignal extends Signal
    {
        void onSelectAll(IconView source);
    }

    static final void connect(IconView self, GtkIconView.SelectAllSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "select-all", after);
    }

    protected static final void receiveSelectAll(Signal handler, long source) {
        ((GtkIconView.SelectAllSignal) handler).onSelectAll((IconView) objectFor(source));
    }

    interface SelectCursorItemSignal extends Signal
    {
        void onSelectCursorItem(IconView source);
    }

    static final void connect(IconView self, GtkIconView.SelectCursorItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "select-cursor-item", after);
    }

    protected static final void receiveSelectCursorItem(Signal handler, long source) {
        ((GtkIconView.SelectCursorItemSignal) handler).onSelectCursorItem((IconView) objectFor(source));
    }

    interface SelectionChangedSignal extends Signal
    {
        void onSelectionChanged(IconView source);
    }

    static final void connect(IconView self, GtkIconView.SelectionChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "selection-changed", after);
    }

    protected static final void receiveSelectionChanged(Signal handler, long source) {
        ((GtkIconView.SelectionChangedSignal) handler).onSelectionChanged((IconView) objectFor(source));
    }

    interface ToggleCursorItemSignal extends Signal
    {
        void onToggleCursorItem(IconView source);
    }

    static final void connect(IconView self, GtkIconView.ToggleCursorItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "toggle-cursor-item", after);
    }

    protected static final void receiveToggleCursorItem(Signal handler, long source) {
        ((GtkIconView.ToggleCursorItemSignal) handler).onToggleCursorItem((IconView) objectFor(source));
    }

    interface UnselectAllSignal extends Signal
    {
        void onUnselectAll(IconView source);
    }

    static final void connect(IconView self, GtkIconView.UnselectAllSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconView.class, "unselect-all", after);
    }

    protected static final void receiveUnselectAll(Signal handler, long source) {
        ((GtkIconView.UnselectAllSignal) handler).onUnselectAll((IconView) objectFor(source));
    }
}

