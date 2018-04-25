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
import org.gnome.gdk.Window;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.CellRenderer;
import org.gnome.gtk.Entry;
import org.gnome.gtk.MovementStep;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Tooltip;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.TreePath;
import org.gnome.gtk.TreeSelection;
import org.gnome.gtk.TreeView;
import org.gnome.gtk.TreeViewColumn;
import org.gnome.gtk.TreeViewDropPosition;
import org.gnome.gtk.TreeViewGridLines;

final class GtkTreeView extends Plumbing
{
    private GtkTreeView() {}

    static final long createTreeView() {
        long result;

        synchronized (lock) {
            result = gtk_tree_view_new();

            return result;
        }
    }

    private static native final long gtk_tree_view_new();

    static final long createTreeViewWithModel(TreeModel model) {
        long result;

        if (model == null) {
            throw new IllegalArgumentException("model can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_new_with_model(pointerOf((Object) model));

            return result;
        }
    }

    private static native final long gtk_tree_view_new_with_model(long model);

    static final int appendColumn(TreeView self, TreeViewColumn column) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (column == null) {
            throw new IllegalArgumentException("column can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_append_column(pointerOf(self), pointerOf(column));

            return result;
        }
    }

    private static native final int gtk_tree_view_append_column(long self, long column);

    static final void collapseAll(TreeView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_collapse_all(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_collapse_all(long self);

    static final boolean collapseRow(TreeView self, TreePath path) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_collapse_row(pointerOf(self), pointerOf(path));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_collapse_row(long self, long path);

    static final void columnsAutosize(TreeView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_columns_autosize(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_columns_autosize(long self);

    static final void convertBinWindowToTreeCoords(TreeView self, int bx, int by, int[] tx, int[] ty) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_convert_bin_window_to_tree_coords(pointerOf(self), bx, by, tx, ty);
        }
    }

    private static native final void gtk_tree_view_convert_bin_window_to_tree_coords(long self, int bx, int by, int[] tx, int[] ty);

    static final void convertBinWindowToWidgetCoords(TreeView self, int bx, int by, int[] wx, int[] wy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_convert_bin_window_to_widget_coords(pointerOf(self), bx, by, wx, wy);
        }
    }

    private static native final void gtk_tree_view_convert_bin_window_to_widget_coords(long self, int bx, int by, int[] wx, int[] wy);

    static final void convertTreeToBinWindowCoords(TreeView self, int tx, int ty, int[] bx, int[] by) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_convert_tree_to_bin_window_coords(pointerOf(self), tx, ty, bx, by);
        }
    }

    private static native final void gtk_tree_view_convert_tree_to_bin_window_coords(long self, int tx, int ty, int[] bx, int[] by);

    static final void convertTreeToWidgetCoords(TreeView self, int tx, int ty, int[] wx, int[] wy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_convert_tree_to_widget_coords(pointerOf(self), tx, ty, wx, wy);
        }
    }

    private static native final void gtk_tree_view_convert_tree_to_widget_coords(long self, int tx, int ty, int[] wx, int[] wy);

    static final void convertWidgetToBinWindowCoords(TreeView self, int wx, int wy, int[] bx, int[] by) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_convert_widget_to_bin_window_coords(pointerOf(self), wx, wy, bx, by);
        }
    }

    private static native final void gtk_tree_view_convert_widget_to_bin_window_coords(long self, int wx, int wy, int[] bx, int[] by);

    static final void convertWidgetToTreeCoords(TreeView self, int wx, int wy, int[] tx, int[] ty) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_convert_widget_to_tree_coords(pointerOf(self), wx, wy, tx, ty);
        }
    }

    private static native final void gtk_tree_view_convert_widget_to_tree_coords(long self, int wx, int wy, int[] tx, int[] ty);

    static final Surface createRowDragIcon(TreeView self, TreePath path) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_create_row_drag_icon(pointerOf(self), pointerOf(path));

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gtk_tree_view_create_row_drag_icon(long self, long path);

    @SuppressWarnings("unused")
    static final void enableModelDragDest(TreeView self, FIXME targets, int nTargets, DragAction actions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    @SuppressWarnings("unused")
    static final void enableModelDragSource(TreeView self, ModifierType startButtonMask, FIXME targets, int nTargets, DragAction actions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    static final void expandAll(TreeView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_expand_all(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_expand_all(long self);

    static final boolean expandRow(TreeView self, TreePath path, boolean openAll) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_expand_row(pointerOf(self), pointerOf(path), openAll);

            return result;
        }
    }

    private static native final boolean gtk_tree_view_expand_row(long self, long path, boolean openAll);

    static final void expandToPath(TreeView self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_expand_to_path(pointerOf(self), pointerOf(path));
        }
    }

    private static native final void gtk_tree_view_expand_to_path(long self, long path);

    static final boolean getActivateOnSingleClick(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_activate_on_single_click(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_activate_on_single_click(long self);

    static final void getBackgroundArea(TreeView self, TreePath path, TreeViewColumn column, Rectangle rect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_get_background_area(pointerOf(self), pointerOf(path), pointerOf(column), pointerOf(rect));
        }
    }

    private static native final void gtk_tree_view_get_background_area(long self, long path, long column, long rect);

    static final Window getBinWindow(TreeView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_bin_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_bin_window(long self);

    static final void getCellArea(TreeView self, TreePath path, TreeViewColumn column, Rectangle rect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_get_cell_area(pointerOf(self), pointerOf(path), pointerOf(column), pointerOf(rect));
        }
    }

    private static native final void gtk_tree_view_get_cell_area(long self, long path, long column, long rect);

    static final TreeViewColumn getColumn(TreeView self, int n) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_column(pointerOf(self), n);

            return (TreeViewColumn) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_column(long self, int n);

    static final TreeViewColumn[] getColumns(TreeView self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_columns(pointerOf(self));

            return (TreeViewColumn[]) objectArrayFor(result, new TreeViewColumn[result.length]);
        }
    }

    private static native final long[] gtk_tree_view_get_columns(long self);

    static final void getCursor(TreeView self, TreePath[] path, TreeViewColumn[] focusColumn) {
        long[] _path;
        long[] _focusColumn;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _focusColumn = pointersOf(focusColumn);

        synchronized (lock) {
            gtk_tree_view_get_cursor(pointerOf(self), _path, _focusColumn);
            fillBoxedArray(TreePath.class, path, _path);
            fillObjectArray(focusColumn, _focusColumn);
        }
    }

    private static native final void gtk_tree_view_get_cursor(long self, long[] path, long[] focusColumn);

    static final boolean getDestRowAtPos(TreeView self, int dragX, int dragY, TreePath[] path, TreeViewDropPosition[] pos) {
        boolean result;
        long[] _path;
        int[] _pos;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _pos = numsOf(pos);

        synchronized (lock) {
            result = gtk_tree_view_get_dest_row_at_pos(pointerOf(self), dragX, dragY, _path, _pos);
            fillBoxedArray(TreePath.class, path, _path);
            fillEnumArray(TreeViewDropPosition.class, pos, _pos);

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_dest_row_at_pos(long self, int dragX, int dragY, long[] path, int[] pos);

    static final void getDragDestRow(TreeView self, TreePath[] path, TreeViewDropPosition[] pos) {
        long[] _path;
        int[] _pos;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _pos = numsOf(pos);

        synchronized (lock) {
            gtk_tree_view_get_drag_dest_row(pointerOf(self), _path, _pos);
            fillBoxedArray(TreePath.class, path, _path);
            fillEnumArray(TreeViewDropPosition.class, pos, _pos);
        }
    }

    private static native final void gtk_tree_view_get_drag_dest_row(long self, long[] path, int[] pos);

    static final boolean getEnableSearch(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_enable_search(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_enable_search(long self);

    static final boolean getEnableTreeLines(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_enable_tree_lines(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_enable_tree_lines(long self);

    static final TreeViewColumn getExpanderColumn(TreeView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_expander_column(pointerOf(self));

            return (TreeViewColumn) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_expander_column(long self);

    static final boolean getFixedHeightMode(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_fixed_height_mode(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_fixed_height_mode(long self);

    static final TreeViewGridLines getGridLines(TreeView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_grid_lines(pointerOf(self));

            return (TreeViewGridLines) enumFor(TreeViewGridLines.class, result);
        }
    }

    private static native final int gtk_tree_view_get_grid_lines(long self);

    static final Adjustment getHadjustment(TreeView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_hadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_hadjustment(long self);

    static final boolean getHeadersClickable(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_headers_clickable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_headers_clickable(long self);

    static final boolean getHeadersVisible(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_headers_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_headers_visible(long self);

    static final boolean getHoverExpand(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_hover_expand(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_hover_expand(long self);

    static final boolean getHoverSelection(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_hover_selection(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_hover_selection(long self);

    static final int getLevelIndentation(TreeView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_level_indentation(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_get_level_indentation(long self);

    static final TreeModel getModel(TreeView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_model(pointerOf(self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_model(long self);

    static final int getNColumns(TreeView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_n_columns(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_get_n_columns(long self);

    static final boolean getPathAtPos(TreeView self, int x, int y, TreePath[] path, TreeViewColumn[] column, int[] cellX, int[] cellY) {
        boolean result;
        long[] _path;
        long[] _column;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _column = pointersOf(column);

        synchronized (lock) {
            result = gtk_tree_view_get_path_at_pos(pointerOf(self), x, y, _path, _column, cellX, cellY);
            fillBoxedArray(TreePath.class, path, _path);
            fillObjectArray(column, _column);

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_path_at_pos(long self, int x, int y, long[] path, long[] column, int[] cellX, int[] cellY);

    static final boolean getReorderable(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_reorderable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_reorderable(long self);

    @SuppressWarnings("unused")
    static final FIXME getRowSeparatorFunc(TreeView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewRowSeparatorFunc");
    }

    static final boolean getRubberBanding(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_rubber_banding(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_rubber_banding(long self);

    static final boolean getRulesHint(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_rules_hint(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_rules_hint(long self);

    static final int getSearchColumn(TreeView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_search_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_get_search_column(long self);

    static final Entry getSearchEntry(TreeView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_search_entry(pointerOf(self));

            return (Entry) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_search_entry(long self);

    @SuppressWarnings("unused")
    static final FIXME getSearchEqualFunc(TreeView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewSearchEqualFunc");
    }

    @SuppressWarnings("unused")
    static final FIXME getSearchPositionFunc(TreeView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewSearchPositionFunc");
    }

    static final TreeSelection getSelection(TreeView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_selection(pointerOf(self));

            return (TreeSelection) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_selection(long self);

    static final boolean getShowExpanders(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_show_expanders(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_show_expanders(long self);

    static final int getTooltipColumn(TreeView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_tooltip_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_view_get_tooltip_column(long self);

    static final boolean getTooltipContext(TreeView self, int[] x, int[] y, boolean keyboardTip, TreeModel[] model, TreePath[] path, TreeIter iter) {
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
            result = gtk_tree_view_get_tooltip_context(pointerOf(self), x, y, keyboardTip, _model, _path, pointerOf(iter));
            fillObjectArray((Object[])model, _model);
            fillBoxedArray(TreePath.class, path, _path);

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_tooltip_context(long self, int[] x, int[] y, boolean keyboardTip, long[] model, long[] path, long iter);

    static final Adjustment getVadjustment(TreeView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_get_vadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_tree_view_get_vadjustment(long self);

    static final boolean getVisibleRange(TreeView self, TreePath[] startPath, TreePath[] endPath) {
        boolean result;
        long[] _startPath;
        long[] _endPath;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _startPath = pointersOf(startPath);

        _endPath = pointersOf(endPath);

        synchronized (lock) {
            result = gtk_tree_view_get_visible_range(pointerOf(self), _startPath, _endPath);
            fillBoxedArray(TreePath.class, startPath, _startPath);
            fillBoxedArray(TreePath.class, endPath, _endPath);

            return result;
        }
    }

    private static native final boolean gtk_tree_view_get_visible_range(long self, long[] startPath, long[] endPath);

    static final void getVisibleRect(TreeView self, Rectangle visibleRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_get_visible_rect(pointerOf(self), pointerOf(visibleRect));
        }
    }

    private static native final void gtk_tree_view_get_visible_rect(long self, long visibleRect);

    static final int insertColumn(TreeView self, TreeViewColumn column, int position) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (column == null) {
            throw new IllegalArgumentException("column can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_insert_column(pointerOf(self), pointerOf(column), position);

            return result;
        }
    }

    private static native final int gtk_tree_view_insert_column(long self, long column, int position);

    static final int insertColumnWithAttributes(TreeView self, int position, String title, CellRenderer cell) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_insert_column_with_attributes(pointerOf(self), position, title, pointerOf(cell));

            return result;
        }
    }

    private static native final int gtk_tree_view_insert_column_with_attributes(long self, int position, String title, long cell);

    @SuppressWarnings("unused")
    static final int insertColumnWithDataFunc(TreeView self, int position, String title, CellRenderer cell, FIXME func, FIXME data, FIXME dnotify) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeCellDataFunc");
    }

    static final boolean isBlankAtPos(TreeView self, int x, int y, TreePath[] path, TreeViewColumn[] column, int[] cellX, int[] cellY) {
        boolean result;
        long[] _path;
        long[] _column;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _path = pointersOf(path);

        _column = pointersOf(column);

        synchronized (lock) {
            result = gtk_tree_view_is_blank_at_pos(pointerOf(self), x, y, _path, _column, cellX, cellY);
            fillBoxedArray(TreePath.class, path, _path);
            fillObjectArray(column, _column);

            return result;
        }
    }

    private static native final boolean gtk_tree_view_is_blank_at_pos(long self, int x, int y, long[] path, long[] column, int[] cellX, int[] cellY);

    static final boolean isRubberBandingActive(TreeView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_is_rubber_banding_active(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_is_rubber_banding_active(long self);

    @SuppressWarnings("unused")
    static final void mapExpandedRows(TreeView self, FIXME func, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewMappingFunc");
    }

    static final void moveColumnAfter(TreeView self, TreeViewColumn column, TreeViewColumn baseColumn) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (column == null) {
            throw new IllegalArgumentException("column can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_move_column_after(pointerOf(self), pointerOf(column), pointerOf(baseColumn));
        }
    }

    private static native final void gtk_tree_view_move_column_after(long self, long column, long baseColumn);

    static final int removeColumn(TreeView self, TreeViewColumn column) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (column == null) {
            throw new IllegalArgumentException("column can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_remove_column(pointerOf(self), pointerOf(column));

            return result;
        }
    }

    private static native final int gtk_tree_view_remove_column(long self, long column);

    static final void rowActivated(TreeView self, TreePath path, TreeViewColumn column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (column == null) {
            throw new IllegalArgumentException("column can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_row_activated(pointerOf(self), pointerOf(path), pointerOf(column));
        }
    }

    private static native final void gtk_tree_view_row_activated(long self, long path, long column);

    static final boolean rowExpanded(TreeView self, TreePath path) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_view_row_expanded(pointerOf(self), pointerOf(path));

            return result;
        }
    }

    private static native final boolean gtk_tree_view_row_expanded(long self, long path);

    static final void scrollToCell(TreeView self, TreePath path, TreeViewColumn column, boolean useAlign, float rowAlign, float colAlign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_scroll_to_cell(pointerOf(self), pointerOf(path), pointerOf(column), useAlign, rowAlign, colAlign);
        }
    }

    private static native final void gtk_tree_view_scroll_to_cell(long self, long path, long column, boolean useAlign, float rowAlign, float colAlign);

    static final void scrollToPoint(TreeView self, int treeX, int treeY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_scroll_to_point(pointerOf(self), treeX, treeY);
        }
    }

    private static native final void gtk_tree_view_scroll_to_point(long self, int treeX, int treeY);

    static final void setActivateOnSingleClick(TreeView self, boolean single) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_activate_on_single_click(pointerOf(self), single);
        }
    }

    private static native final void gtk_tree_view_set_activate_on_single_click(long self, boolean single);

    @SuppressWarnings("unused")
    static final void setColumnDragFunction(TreeView self, FIXME func, FIXME userData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewColumnDropFunc");
    }

    static final void setCursor(TreeView self, TreePath path, TreeViewColumn focusColumn, boolean startEditing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_cursor(pointerOf(self), pointerOf(path), pointerOf(focusColumn), startEditing);
        }
    }

    private static native final void gtk_tree_view_set_cursor(long self, long path, long focusColumn, boolean startEditing);

    static final void setCursorOnCell(TreeView self, TreePath path, TreeViewColumn focusColumn, CellRenderer focusCell, boolean startEditing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_cursor_on_cell(pointerOf(self), pointerOf(path), pointerOf(focusColumn), pointerOf(focusCell), startEditing);
        }
    }

    private static native final void gtk_tree_view_set_cursor_on_cell(long self, long path, long focusColumn, long focusCell, boolean startEditing);

    @SuppressWarnings("unused")
    static final void setDestroyCountFunc(TreeView self, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeDestroyCountFunc");
    }

    static final void setDragDestRow(TreeView self, TreePath path, TreeViewDropPosition pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pos == null) {
            throw new IllegalArgumentException("pos can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_drag_dest_row(pointerOf(self), pointerOf(path), numOf(pos));
        }
    }

    private static native final void gtk_tree_view_set_drag_dest_row(long self, long path, int pos);

    static final void setEnableSearch(TreeView self, boolean enableSearch) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_enable_search(pointerOf(self), enableSearch);
        }
    }

    private static native final void gtk_tree_view_set_enable_search(long self, boolean enableSearch);

    static final void setEnableTreeLines(TreeView self, boolean enabled) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_enable_tree_lines(pointerOf(self), enabled);
        }
    }

    private static native final void gtk_tree_view_set_enable_tree_lines(long self, boolean enabled);

    static final void setExpanderColumn(TreeView self, TreeViewColumn column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (column == null) {
            throw new IllegalArgumentException("column can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_expander_column(pointerOf(self), pointerOf(column));
        }
    }

    private static native final void gtk_tree_view_set_expander_column(long self, long column);

    static final void setFixedHeightMode(TreeView self, boolean enable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_fixed_height_mode(pointerOf(self), enable);
        }
    }

    private static native final void gtk_tree_view_set_fixed_height_mode(long self, boolean enable);

    static final void setGridLines(TreeView self, TreeViewGridLines gridLines) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (gridLines == null) {
            throw new IllegalArgumentException("gridLines can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_grid_lines(pointerOf(self), numOf(gridLines));
        }
    }

    private static native final void gtk_tree_view_set_grid_lines(long self, int gridLines);

    static final void setHadjustment(TreeView self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_hadjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_tree_view_set_hadjustment(long self, long adjustment);

    static final void setHeadersClickable(TreeView self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_headers_clickable(pointerOf(self), setting);
        }
    }

    private static native final void gtk_tree_view_set_headers_clickable(long self, boolean setting);

    static final void setHeadersVisible(TreeView self, boolean headersVisible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_headers_visible(pointerOf(self), headersVisible);
        }
    }

    private static native final void gtk_tree_view_set_headers_visible(long self, boolean headersVisible);

    static final void setHoverExpand(TreeView self, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_hover_expand(pointerOf(self), expand);
        }
    }

    private static native final void gtk_tree_view_set_hover_expand(long self, boolean expand);

    static final void setHoverSelection(TreeView self, boolean hover) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_hover_selection(pointerOf(self), hover);
        }
    }

    private static native final void gtk_tree_view_set_hover_selection(long self, boolean hover);

    static final void setLevelIndentation(TreeView self, int indentation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_level_indentation(pointerOf(self), indentation);
        }
    }

    private static native final void gtk_tree_view_set_level_indentation(long self, int indentation);

    static final void setModel(TreeView self, TreeModel model) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_model(pointerOf(self), pointerOf((Object) model));
        }
    }

    private static native final void gtk_tree_view_set_model(long self, long model);

    static final void setReorderable(TreeView self, boolean reorderable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_reorderable(pointerOf(self), reorderable);
        }
    }

    private static native final void gtk_tree_view_set_reorderable(long self, boolean reorderable);

    @SuppressWarnings("unused")
    static final void setRowSeparatorFunc(TreeView self, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewRowSeparatorFunc");
    }

    static final void setRubberBanding(TreeView self, boolean enable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_rubber_banding(pointerOf(self), enable);
        }
    }

    private static native final void gtk_tree_view_set_rubber_banding(long self, boolean enable);

    static final void setRulesHint(TreeView self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_rules_hint(pointerOf(self), setting);
        }
    }

    private static native final void gtk_tree_view_set_rules_hint(long self, boolean setting);

    static final void setSearchColumn(TreeView self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_search_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_tree_view_set_search_column(long self, int column);

    static final void setSearchEntry(TreeView self, Entry entry) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_search_entry(pointerOf(self), pointerOf(entry));
        }
    }

    private static native final void gtk_tree_view_set_search_entry(long self, long entry);

    @SuppressWarnings("unused")
    static final void setSearchEqualFunc(TreeView self, FIXME searchEqualFunc, FIXME searchUserData, FIXME searchDestroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewSearchEqualFunc");
    }

    @SuppressWarnings("unused")
    static final void setSearchPositionFunc(TreeView self, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewSearchPositionFunc");
    }

    static final void setShowExpanders(TreeView self, boolean enabled) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_show_expanders(pointerOf(self), enabled);
        }
    }

    private static native final void gtk_tree_view_set_show_expanders(long self, boolean enabled);

    static final void setTooltipCell(TreeView self, Tooltip tooltip, TreePath path, TreeViewColumn column, CellRenderer cell) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tooltip == null) {
            throw new IllegalArgumentException("tooltip can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_tooltip_cell(pointerOf(self), pointerOf(tooltip), pointerOf(path), pointerOf(column), pointerOf(cell));
        }
    }

    private static native final void gtk_tree_view_set_tooltip_cell(long self, long tooltip, long path, long column, long cell);

    static final void setTooltipColumn(TreeView self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_tooltip_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_tree_view_set_tooltip_column(long self, int column);

    static final void setTooltipRow(TreeView self, Tooltip tooltip, TreePath path) {
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
            gtk_tree_view_set_tooltip_row(pointerOf(self), pointerOf(tooltip), pointerOf(path));
        }
    }

    private static native final void gtk_tree_view_set_tooltip_row(long self, long tooltip, long path);

    static final void setVadjustment(TreeView self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_set_vadjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_tree_view_set_vadjustment(long self, long adjustment);

    static final void unsetRowsDragDest(TreeView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_unset_rows_drag_dest(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_unset_rows_drag_dest(long self);

    static final void unsetRowsDragSource(TreeView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_view_unset_rows_drag_source(pointerOf(self));
        }
    }

    private static native final void gtk_tree_view_unset_rows_drag_source(long self);

    interface ColumnsChangedSignal extends Signal
    {
        void onColumnsChanged(TreeView source);
    }

    static final void connect(TreeView self, GtkTreeView.ColumnsChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "columns-changed", after);
    }

    protected static final void receiveColumnsChanged(Signal handler, long source) {
        ((GtkTreeView.ColumnsChangedSignal) handler).onColumnsChanged((TreeView) objectFor(source));
    }

    interface CursorChangedSignal extends Signal
    {
        void onCursorChanged(TreeView source);
    }

    static final void connect(TreeView self, GtkTreeView.CursorChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "cursor-changed", after);
    }

    protected static final void receiveCursorChanged(Signal handler, long source) {
        ((GtkTreeView.CursorChangedSignal) handler).onCursorChanged((TreeView) objectFor(source));
    }

    interface ExpandCollapseCursorRowSignal extends Signal
    {
        boolean onExpandCollapseCursorRow(TreeView source, boolean logical, boolean expand, boolean openAll);
    }

    static final void connect(TreeView self, GtkTreeView.ExpandCollapseCursorRowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "expand-collapse-cursor-row", after);
    }

    protected static final boolean receiveExpandCollapseCursorRow(Signal handler, long source, boolean logical, boolean expand, boolean openAll) {
        boolean result;

        result = ((GtkTreeView.ExpandCollapseCursorRowSignal) handler).onExpandCollapseCursorRow((TreeView) objectFor(source), logical, expand, openAll);

        return result;
    }

    interface MoveCursorSignal extends Signal
    {
        boolean onMoveCursor(TreeView source, MovementStep step, int count);
    }

    static final void connect(TreeView self, GtkTreeView.MoveCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "move-cursor", after);
    }

    protected static final boolean receiveMoveCursor(Signal handler, long source, int step, int count) {
        boolean result;

        result = ((GtkTreeView.MoveCursorSignal) handler).onMoveCursor((TreeView) objectFor(source), (MovementStep) enumFor(MovementStep.class, step), count);

        return result;
    }

    interface RowActivatedSignal extends Signal
    {
        void onRowActivated(TreeView source, TreePath path, TreeViewColumn column);
    }

    static final void connect(TreeView self, GtkTreeView.RowActivatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "row-activated", after);
    }

    protected static final void receiveRowActivated(Signal handler, long source, long path, long column) {
        ((GtkTreeView.RowActivatedSignal) handler).onRowActivated((TreeView) objectFor(source), (TreePath) boxedFor(TreePath.class, path), (TreeViewColumn) objectFor(column));
    }

    interface RowCollapsedSignal extends Signal
    {
        void onRowCollapsed(TreeView source, TreeIter iter, TreePath path);
    }

    static final void connect(TreeView self, GtkTreeView.RowCollapsedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "row-collapsed", after);
    }

    protected static final void receiveRowCollapsed(Signal handler, long source, long iter, long path) {
        ((GtkTreeView.RowCollapsedSignal) handler).onRowCollapsed((TreeView) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreePath) boxedFor(TreePath.class, path));
    }

    interface RowExpandedSignal extends Signal
    {
        void onRowExpanded(TreeView source, TreeIter iter, TreePath path);
    }

    static final void connect(TreeView self, GtkTreeView.RowExpandedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "row-expanded", after);
    }

    protected static final void receiveRowExpanded(Signal handler, long source, long iter, long path) {
        ((GtkTreeView.RowExpandedSignal) handler).onRowExpanded((TreeView) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreePath) boxedFor(TreePath.class, path));
    }

    interface SelectAllSignal extends Signal
    {
        boolean onSelectAll(TreeView source);
    }

    static final void connect(TreeView self, GtkTreeView.SelectAllSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "select-all", after);
    }

    protected static final boolean receiveSelectAll(Signal handler, long source) {
        boolean result;

        result = ((GtkTreeView.SelectAllSignal) handler).onSelectAll((TreeView) objectFor(source));

        return result;
    }

    interface SelectCursorParentSignal extends Signal
    {
        boolean onSelectCursorParent(TreeView source);
    }

    static final void connect(TreeView self, GtkTreeView.SelectCursorParentSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "select-cursor-parent", after);
    }

    protected static final boolean receiveSelectCursorParent(Signal handler, long source) {
        boolean result;

        result = ((GtkTreeView.SelectCursorParentSignal) handler).onSelectCursorParent((TreeView) objectFor(source));

        return result;
    }

    interface SelectCursorRowSignal extends Signal
    {
        boolean onSelectCursorRow(TreeView source, boolean startEditing);
    }

    static final void connect(TreeView self, GtkTreeView.SelectCursorRowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "select-cursor-row", after);
    }

    protected static final boolean receiveSelectCursorRow(Signal handler, long source, boolean startEditing) {
        boolean result;

        result = ((GtkTreeView.SelectCursorRowSignal) handler).onSelectCursorRow((TreeView) objectFor(source), startEditing);

        return result;
    }

    interface StartInteractiveSearchSignal extends Signal
    {
        boolean onStartInteractiveSearch(TreeView source);
    }

    static final void connect(TreeView self, GtkTreeView.StartInteractiveSearchSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "start-interactive-search", after);
    }

    protected static final boolean receiveStartInteractiveSearch(Signal handler, long source) {
        boolean result;

        result = ((GtkTreeView.StartInteractiveSearchSignal) handler).onStartInteractiveSearch((TreeView) objectFor(source));

        return result;
    }

    interface TestCollapseRowSignal extends Signal
    {
        boolean onTestCollapseRow(TreeView source, TreeIter iter, TreePath path);
    }

    static final void connect(TreeView self, GtkTreeView.TestCollapseRowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "test-collapse-row", after);
    }

    protected static final boolean receiveTestCollapseRow(Signal handler, long source, long iter, long path) {
        boolean result;

        result = ((GtkTreeView.TestCollapseRowSignal) handler).onTestCollapseRow((TreeView) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreePath) boxedFor(TreePath.class, path));

        return result;
    }

    interface TestExpandRowSignal extends Signal
    {
        boolean onTestExpandRow(TreeView source, TreeIter iter, TreePath path);
    }

    static final void connect(TreeView self, GtkTreeView.TestExpandRowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "test-expand-row", after);
    }

    protected static final boolean receiveTestExpandRow(Signal handler, long source, long iter, long path) {
        boolean result;

        result = ((GtkTreeView.TestExpandRowSignal) handler).onTestExpandRow((TreeView) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreePath) boxedFor(TreePath.class, path));

        return result;
    }

    interface ToggleCursorRowSignal extends Signal
    {
        boolean onToggleCursorRow(TreeView source);
    }

    static final void connect(TreeView self, GtkTreeView.ToggleCursorRowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "toggle-cursor-row", after);
    }

    protected static final boolean receiveToggleCursorRow(Signal handler, long source) {
        boolean result;

        result = ((GtkTreeView.ToggleCursorRowSignal) handler).onToggleCursorRow((TreeView) objectFor(source));

        return result;
    }

    interface UnselectAllSignal extends Signal
    {
        boolean onUnselectAll(TreeView source);
    }

    static final void connect(TreeView self, GtkTreeView.UnselectAllSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeView.class, "unselect-all", after);
    }

    protected static final boolean receiveUnselectAll(Signal handler, long source) {
        boolean result;

        result = ((GtkTreeView.UnselectAllSignal) handler).onUnselectAll((TreeView) objectFor(source));

        return result;
    }
}

