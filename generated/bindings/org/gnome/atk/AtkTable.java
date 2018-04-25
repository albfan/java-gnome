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
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.atk.Plumbing;
import org.gnome.atk.Table;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkTable extends Plumbing
{
    private AtkTable() {}

    static final boolean addColumnSelection(Table self, int column) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_add_column_selection(pointerOf((Object) self), column);

            return result;
        }
    }

    private static native final boolean atk_table_add_column_selection(long self, int column);

    static final boolean addRowSelection(Table self, int row) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_add_row_selection(pointerOf((Object) self), row);

            return result;
        }
    }

    private static native final boolean atk_table_add_row_selection(long self, int row);

    static final org.gnome.atk.Object getCaption(Table self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_caption(pointerOf((Object) self));

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long atk_table_get_caption(long self);

    static final int getColumnAtIndex(Table self, int index) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_column_at_index(pointerOf((Object) self), index);

            return result;
        }
    }

    private static native final int atk_table_get_column_at_index(long self, int index);

    static final String getColumnDescription(Table self, int column) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_column_description(pointerOf((Object) self), column);

            return result;
        }
    }

    private static native final String atk_table_get_column_description(long self, int column);

    static final int getColumnExtentAt(Table self, int row, int column) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_column_extent_at(pointerOf((Object) self), row, column);

            return result;
        }
    }

    private static native final int atk_table_get_column_extent_at(long self, int row, int column);

    static final org.gnome.atk.Object getColumnHeader(Table self, int column) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_column_header(pointerOf((Object) self), column);

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long atk_table_get_column_header(long self, int column);

    static final int getIndexAt(Table self, int row, int column) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_index_at(pointerOf((Object) self), row, column);

            return result;
        }
    }

    private static native final int atk_table_get_index_at(long self, int row, int column);

    static final int getNColumns(Table self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_n_columns(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_table_get_n_columns(long self);

    static final int getNRows(Table self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_n_rows(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_table_get_n_rows(long self);

    static final int getRowAtIndex(Table self, int index) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_row_at_index(pointerOf((Object) self), index);

            return result;
        }
    }

    private static native final int atk_table_get_row_at_index(long self, int index);

    static final String getRowDescription(Table self, int row) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_row_description(pointerOf((Object) self), row);

            return result;
        }
    }

    private static native final String atk_table_get_row_description(long self, int row);

    static final int getRowExtentAt(Table self, int row, int column) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_row_extent_at(pointerOf((Object) self), row, column);

            return result;
        }
    }

    private static native final int atk_table_get_row_extent_at(long self, int row, int column);

    static final org.gnome.atk.Object getRowHeader(Table self, int row) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_row_header(pointerOf((Object) self), row);

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long atk_table_get_row_header(long self, int row);

    @SuppressWarnings("unused")
    static final int getSelectedColumns(Table self, FIXME selected) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gint**");
    }

    @SuppressWarnings("unused")
    static final int getSelectedRows(Table self, FIXME selected) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gint**");
    }

    static final org.gnome.atk.Object getSummary(Table self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_get_summary(pointerOf((Object) self));

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long atk_table_get_summary(long self);

    static final boolean isColumnSelected(Table self, int column) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_is_column_selected(pointerOf((Object) self), column);

            return result;
        }
    }

    private static native final boolean atk_table_is_column_selected(long self, int column);

    static final boolean isRowSelected(Table self, int row) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_is_row_selected(pointerOf((Object) self), row);

            return result;
        }
    }

    private static native final boolean atk_table_is_row_selected(long self, int row);

    static final boolean isSelected(Table self, int row, int column) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_is_selected(pointerOf((Object) self), row, column);

            return result;
        }
    }

    private static native final boolean atk_table_is_selected(long self, int row, int column);

    static final org.gnome.atk.Object refAt(Table self, int row, int column) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_ref_at(pointerOf((Object) self), row, column);

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long atk_table_ref_at(long self, int row, int column);

    static final boolean removeColumnSelection(Table self, int column) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_remove_column_selection(pointerOf((Object) self), column);

            return result;
        }
    }

    private static native final boolean atk_table_remove_column_selection(long self, int column);

    static final boolean removeRowSelection(Table self, int row) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_table_remove_row_selection(pointerOf((Object) self), row);

            return result;
        }
    }

    private static native final boolean atk_table_remove_row_selection(long self, int row);

    static final void setCaption(Table self, org.gnome.atk.Object caption) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (caption == null) {
            throw new IllegalArgumentException("caption can't be null");
        }

        synchronized (lock) {
            atk_table_set_caption(pointerOf((Object) self), pointerOf(caption));
        }
    }

    private static native final void atk_table_set_caption(long self, long caption);

    static final void setColumnDescription(Table self, int column, String description) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (description == null) {
            throw new IllegalArgumentException("description can't be null");
        }

        synchronized (lock) {
            atk_table_set_column_description(pointerOf((Object) self), column, description);
        }
    }

    private static native final void atk_table_set_column_description(long self, int column, String description);

    static final void setColumnHeader(Table self, int column, org.gnome.atk.Object header) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (header == null) {
            throw new IllegalArgumentException("header can't be null");
        }

        synchronized (lock) {
            atk_table_set_column_header(pointerOf((Object) self), column, pointerOf(header));
        }
    }

    private static native final void atk_table_set_column_header(long self, int column, long header);

    static final void setRowDescription(Table self, int row, String description) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (description == null) {
            throw new IllegalArgumentException("description can't be null");
        }

        synchronized (lock) {
            atk_table_set_row_description(pointerOf((Object) self), row, description);
        }
    }

    private static native final void atk_table_set_row_description(long self, int row, String description);

    static final void setRowHeader(Table self, int row, org.gnome.atk.Object header) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (header == null) {
            throw new IllegalArgumentException("header can't be null");
        }

        synchronized (lock) {
            atk_table_set_row_header(pointerOf((Object) self), row, pointerOf(header));
        }
    }

    private static native final void atk_table_set_row_header(long self, int row, long header);

    static final void setSummary(Table self, org.gnome.atk.Object accessible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accessible == null) {
            throw new IllegalArgumentException("accessible can't be null");
        }

        synchronized (lock) {
            atk_table_set_summary(pointerOf((Object) self), pointerOf(accessible));
        }
    }

    private static native final void atk_table_set_summary(long self, long accessible);

    interface AddColumnSelectionSignal extends Signal
    {
        boolean onAddColumnSelection(Table source, int column);
    }

    static final void connect(Table self, AtkTable.AddColumnSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "add-column-selection", after);
    }

    protected static final boolean receiveAddColumnSelection(Signal handler, long source, int column) {
        boolean result;

        result = ((AtkTable.AddColumnSelectionSignal) handler).onAddColumnSelection((Table) objectFor(source), column);

        return result;
    }

    interface AddRowSelectionSignal extends Signal
    {
        boolean onAddRowSelection(Table source, int row);
    }

    static final void connect(Table self, AtkTable.AddRowSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "add-row-selection", after);
    }

    protected static final boolean receiveAddRowSelection(Signal handler, long source, int row) {
        boolean result;

        result = ((AtkTable.AddRowSelectionSignal) handler).onAddRowSelection((Table) objectFor(source), row);

        return result;
    }

    interface ColumnDeletedSignal extends Signal
    {
        void onColumnDeleted(Table source, int column, int numDeleted);
    }

    static final void connect(Table self, AtkTable.ColumnDeletedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "column-deleted", after);
    }

    protected static final void receiveColumnDeleted(Signal handler, long source, int column, int numDeleted) {
        ((AtkTable.ColumnDeletedSignal) handler).onColumnDeleted((Table) objectFor(source), column, numDeleted);
    }

    interface ColumnInsertedSignal extends Signal
    {
        void onColumnInserted(Table source, int column, int numInserted);
    }

    static final void connect(Table self, AtkTable.ColumnInsertedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "column-inserted", after);
    }

    protected static final void receiveColumnInserted(Signal handler, long source, int column, int numInserted) {
        ((AtkTable.ColumnInsertedSignal) handler).onColumnInserted((Table) objectFor(source), column, numInserted);
    }

    interface ColumnReorderedSignal extends Signal
    {
        void onColumnReordered(Table source);
    }

    static final void connect(Table self, AtkTable.ColumnReorderedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "column-reordered", after);
    }

    protected static final void receiveColumnReordered(Signal handler, long source) {
        ((AtkTable.ColumnReorderedSignal) handler).onColumnReordered((Table) objectFor(source));
    }

    interface GetCaptionSignal extends Signal
    {
        org.gnome.atk.Object onGetCaption(Table source);
    }

    static final void connect(Table self, AtkTable.GetCaptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-caption", after);
    }

    protected static final long receiveGetCaption(Signal handler, long source) {
        org.gnome.atk.Object result;

        result = ((AtkTable.GetCaptionSignal) handler).onGetCaption((Table) objectFor(source));

        return pointerOf(result);
    }

    interface GetColumnAtIndexSignal extends Signal
    {
        int onGetColumnAtIndex(Table source, int index);
    }

    static final void connect(Table self, AtkTable.GetColumnAtIndexSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-column-at-index", after);
    }

    protected static final int receiveGetColumnAtIndex(Signal handler, long source, int index) {
        int result;

        result = ((AtkTable.GetColumnAtIndexSignal) handler).onGetColumnAtIndex((Table) objectFor(source), index);

        return result;
    }

    interface GetColumnDescriptionSignal extends Signal
    {
        String onGetColumnDescription(Table source, int column);
    }

    static final void connect(Table self, AtkTable.GetColumnDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-column-description", after);
    }

    protected static final String receiveGetColumnDescription(Signal handler, long source, int column) {
        String result;

        result = ((AtkTable.GetColumnDescriptionSignal) handler).onGetColumnDescription((Table) objectFor(source), column);

        return result;
    }

    interface GetColumnExtentAtSignal extends Signal
    {
        int onGetColumnExtentAt(Table source, int row, int column);
    }

    static final void connect(Table self, AtkTable.GetColumnExtentAtSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-column-extent-at", after);
    }

    protected static final int receiveGetColumnExtentAt(Signal handler, long source, int row, int column) {
        int result;

        result = ((AtkTable.GetColumnExtentAtSignal) handler).onGetColumnExtentAt((Table) objectFor(source), row, column);

        return result;
    }

    interface GetColumnHeaderSignal extends Signal
    {
        org.gnome.atk.Object onGetColumnHeader(Table source, int column);
    }

    static final void connect(Table self, AtkTable.GetColumnHeaderSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-column-header", after);
    }

    protected static final long receiveGetColumnHeader(Signal handler, long source, int column) {
        org.gnome.atk.Object result;

        result = ((AtkTable.GetColumnHeaderSignal) handler).onGetColumnHeader((Table) objectFor(source), column);

        return pointerOf(result);
    }

    interface GetIndexAtSignal extends Signal
    {
        int onGetIndexAt(Table source, int row, int column);
    }

    static final void connect(Table self, AtkTable.GetIndexAtSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-index-at", after);
    }

    protected static final int receiveGetIndexAt(Signal handler, long source, int row, int column) {
        int result;

        result = ((AtkTable.GetIndexAtSignal) handler).onGetIndexAt((Table) objectFor(source), row, column);

        return result;
    }

    interface GetNColumnsSignal extends Signal
    {
        int onGetNColumns(Table source);
    }

    static final void connect(Table self, AtkTable.GetNColumnsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-n-columns", after);
    }

    protected static final int receiveGetNColumns(Signal handler, long source) {
        int result;

        result = ((AtkTable.GetNColumnsSignal) handler).onGetNColumns((Table) objectFor(source));

        return result;
    }

    interface GetNRowsSignal extends Signal
    {
        int onGetNRows(Table source);
    }

    static final void connect(Table self, AtkTable.GetNRowsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-n-rows", after);
    }

    protected static final int receiveGetNRows(Signal handler, long source) {
        int result;

        result = ((AtkTable.GetNRowsSignal) handler).onGetNRows((Table) objectFor(source));

        return result;
    }

    interface GetRowAtIndexSignal extends Signal
    {
        int onGetRowAtIndex(Table source, int index);
    }

    static final void connect(Table self, AtkTable.GetRowAtIndexSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-row-at-index", after);
    }

    protected static final int receiveGetRowAtIndex(Signal handler, long source, int index) {
        int result;

        result = ((AtkTable.GetRowAtIndexSignal) handler).onGetRowAtIndex((Table) objectFor(source), index);

        return result;
    }

    interface GetRowDescriptionSignal extends Signal
    {
        String onGetRowDescription(Table source, int row);
    }

    static final void connect(Table self, AtkTable.GetRowDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-row-description", after);
    }

    protected static final String receiveGetRowDescription(Signal handler, long source, int row) {
        String result;

        result = ((AtkTable.GetRowDescriptionSignal) handler).onGetRowDescription((Table) objectFor(source), row);

        return result;
    }

    interface GetRowExtentAtSignal extends Signal
    {
        int onGetRowExtentAt(Table source, int row, int column);
    }

    static final void connect(Table self, AtkTable.GetRowExtentAtSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-row-extent-at", after);
    }

    protected static final int receiveGetRowExtentAt(Signal handler, long source, int row, int column) {
        int result;

        result = ((AtkTable.GetRowExtentAtSignal) handler).onGetRowExtentAt((Table) objectFor(source), row, column);

        return result;
    }

    interface GetRowHeaderSignal extends Signal
    {
        org.gnome.atk.Object onGetRowHeader(Table source, int row);
    }

    static final void connect(Table self, AtkTable.GetRowHeaderSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-row-header", after);
    }

    protected static final long receiveGetRowHeader(Signal handler, long source, int row) {
        org.gnome.atk.Object result;

        result = ((AtkTable.GetRowHeaderSignal) handler).onGetRowHeader((Table) objectFor(source), row);

        return pointerOf(result);
    }

    interface GetSelectedColumnsSignal extends Signal
    {
        int onGetSelectedColumns(Table source, FIXME selected);
    }

    static final void connect(Table self, AtkTable.GetSelectedColumnsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-selected-columns", after);
    }

    protected static final int receiveGetSelectedColumns(Signal handler, long source, java.lang.Object selected) {
        int result;

        result = ((AtkTable.GetSelectedColumnsSignal) handler).onGetSelectedColumns((Table) objectFor(source), (FIXME) selected);

        return result;
    }

    interface GetSelectedRowsSignal extends Signal
    {
        int onGetSelectedRows(Table source, FIXME selected);
    }

    static final void connect(Table self, AtkTable.GetSelectedRowsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-selected-rows", after);
    }

    protected static final int receiveGetSelectedRows(Signal handler, long source, java.lang.Object selected) {
        int result;

        result = ((AtkTable.GetSelectedRowsSignal) handler).onGetSelectedRows((Table) objectFor(source), (FIXME) selected);

        return result;
    }

    interface GetSummarySignal extends Signal
    {
        org.gnome.atk.Object onGetSummary(Table source);
    }

    static final void connect(Table self, AtkTable.GetSummarySignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "get-summary", after);
    }

    protected static final long receiveGetSummary(Signal handler, long source) {
        org.gnome.atk.Object result;

        result = ((AtkTable.GetSummarySignal) handler).onGetSummary((Table) objectFor(source));

        return pointerOf(result);
    }

    interface IsColumnSelectedSignal extends Signal
    {
        boolean onIsColumnSelected(Table source, int column);
    }

    static final void connect(Table self, AtkTable.IsColumnSelectedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "is-column-selected", after);
    }

    protected static final boolean receiveIsColumnSelected(Signal handler, long source, int column) {
        boolean result;

        result = ((AtkTable.IsColumnSelectedSignal) handler).onIsColumnSelected((Table) objectFor(source), column);

        return result;
    }

    interface IsRowSelectedSignal extends Signal
    {
        boolean onIsRowSelected(Table source, int row);
    }

    static final void connect(Table self, AtkTable.IsRowSelectedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "is-row-selected", after);
    }

    protected static final boolean receiveIsRowSelected(Signal handler, long source, int row) {
        boolean result;

        result = ((AtkTable.IsRowSelectedSignal) handler).onIsRowSelected((Table) objectFor(source), row);

        return result;
    }

    interface IsSelectedSignal extends Signal
    {
        boolean onIsSelected(Table source, int row, int column);
    }

    static final void connect(Table self, AtkTable.IsSelectedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "is-selected", after);
    }

    protected static final boolean receiveIsSelected(Signal handler, long source, int row, int column) {
        boolean result;

        result = ((AtkTable.IsSelectedSignal) handler).onIsSelected((Table) objectFor(source), row, column);

        return result;
    }

    interface ModelChangedSignal extends Signal
    {
        void onModelChanged(Table source);
    }

    static final void connect(Table self, AtkTable.ModelChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "model-changed", after);
    }

    protected static final void receiveModelChanged(Signal handler, long source) {
        ((AtkTable.ModelChangedSignal) handler).onModelChanged((Table) objectFor(source));
    }

    interface RefAtSignal extends Signal
    {
        org.gnome.atk.Object onRefAt(Table source, int row, int column);
    }

    static final void connect(Table self, AtkTable.RefAtSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "ref-at", after);
    }

    protected static final long receiveRefAt(Signal handler, long source, int row, int column) {
        org.gnome.atk.Object result;

        result = ((AtkTable.RefAtSignal) handler).onRefAt((Table) objectFor(source), row, column);

        return pointerOf(result);
    }

    interface RemoveColumnSelectionSignal extends Signal
    {
        boolean onRemoveColumnSelection(Table source, int column);
    }

    static final void connect(Table self, AtkTable.RemoveColumnSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "remove-column-selection", after);
    }

    protected static final boolean receiveRemoveColumnSelection(Signal handler, long source, int column) {
        boolean result;

        result = ((AtkTable.RemoveColumnSelectionSignal) handler).onRemoveColumnSelection((Table) objectFor(source), column);

        return result;
    }

    interface RemoveRowSelectionSignal extends Signal
    {
        boolean onRemoveRowSelection(Table source, int row);
    }

    static final void connect(Table self, AtkTable.RemoveRowSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "remove-row-selection", after);
    }

    protected static final boolean receiveRemoveRowSelection(Signal handler, long source, int row) {
        boolean result;

        result = ((AtkTable.RemoveRowSelectionSignal) handler).onRemoveRowSelection((Table) objectFor(source), row);

        return result;
    }

    interface RowDeletedSignal extends Signal
    {
        void onRowDeleted(Table source, int row, int numDeleted);
    }

    static final void connect(Table self, AtkTable.RowDeletedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "row-deleted", after);
    }

    protected static final void receiveRowDeleted(Signal handler, long source, int row, int numDeleted) {
        ((AtkTable.RowDeletedSignal) handler).onRowDeleted((Table) objectFor(source), row, numDeleted);
    }

    interface RowInsertedSignal extends Signal
    {
        void onRowInserted(Table source, int row, int numInserted);
    }

    static final void connect(Table self, AtkTable.RowInsertedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "row-inserted", after);
    }

    protected static final void receiveRowInserted(Signal handler, long source, int row, int numInserted) {
        ((AtkTable.RowInsertedSignal) handler).onRowInserted((Table) objectFor(source), row, numInserted);
    }

    interface RowReorderedSignal extends Signal
    {
        void onRowReordered(Table source);
    }

    static final void connect(Table self, AtkTable.RowReorderedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "row-reordered", after);
    }

    protected static final void receiveRowReordered(Signal handler, long source) {
        ((AtkTable.RowReorderedSignal) handler).onRowReordered((Table) objectFor(source));
    }

    interface SetCaptionSignal extends Signal
    {
        void onSetCaption(Table source, org.gnome.atk.Object caption);
    }

    static final void connect(Table self, AtkTable.SetCaptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "set-caption", after);
    }

    protected static final void receiveSetCaption(Signal handler, long source, long caption) {
        ((AtkTable.SetCaptionSignal) handler).onSetCaption((Table) objectFor(source), (org.gnome.atk.Object) objectFor(caption));
    }

    interface SetColumnDescriptionSignal extends Signal
    {
        void onSetColumnDescription(Table source, int column, String description);
    }

    static final void connect(Table self, AtkTable.SetColumnDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "set-column-description", after);
    }

    protected static final void receiveSetColumnDescription(Signal handler, long source, int column, String description) {
        ((AtkTable.SetColumnDescriptionSignal) handler).onSetColumnDescription((Table) objectFor(source), column, description);
    }

    interface SetColumnHeaderSignal extends Signal
    {
        void onSetColumnHeader(Table source, int column, org.gnome.atk.Object header);
    }

    static final void connect(Table self, AtkTable.SetColumnHeaderSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "set-column-header", after);
    }

    protected static final void receiveSetColumnHeader(Signal handler, long source, int column, long header) {
        ((AtkTable.SetColumnHeaderSignal) handler).onSetColumnHeader((Table) objectFor(source), column, (org.gnome.atk.Object) objectFor(header));
    }

    interface SetRowDescriptionSignal extends Signal
    {
        void onSetRowDescription(Table source, int row, String description);
    }

    static final void connect(Table self, AtkTable.SetRowDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "set-row-description", after);
    }

    protected static final void receiveSetRowDescription(Signal handler, long source, int row, String description) {
        ((AtkTable.SetRowDescriptionSignal) handler).onSetRowDescription((Table) objectFor(source), row, description);
    }

    interface SetRowHeaderSignal extends Signal
    {
        void onSetRowHeader(Table source, int row, org.gnome.atk.Object header);
    }

    static final void connect(Table self, AtkTable.SetRowHeaderSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "set-row-header", after);
    }

    protected static final void receiveSetRowHeader(Signal handler, long source, int row, long header) {
        ((AtkTable.SetRowHeaderSignal) handler).onSetRowHeader((Table) objectFor(source), row, (org.gnome.atk.Object) objectFor(header));
    }

    interface SetSummarySignal extends Signal
    {
        void onSetSummary(Table source, org.gnome.atk.Object accessible);
    }

    static final void connect(Table self, AtkTable.SetSummarySignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkTable.class, "set-summary", after);
    }

    protected static final void receiveSetSummary(Signal handler, long source, long accessible) {
        ((AtkTable.SetSummarySignal) handler).onSetSummary((Table) objectFor(source), (org.gnome.atk.Object) objectFor(accessible));
    }
}

