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
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.glib.Value;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.TreeModelFlags;
import org.gnome.gtk.TreePath;

final class GtkTreeModel extends Plumbing
{
    private GtkTreeModel() {}

    static final TreeModel filterNew(TreeModel self, TreePath root) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_filter_new(pointerOf((Object) self), pointerOf(root));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_tree_model_filter_new(long self, long root);

    @SuppressWarnings("unused")
    static final void foreach(TreeModel self, FIXME func, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeModelForeachFunc");
    }

    static final void get(TreeModel self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_get(pointerOf((Object) self), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_model_get(long self, long iter);

    @SuppressWarnings("unused")
    static final FIXME getColumnType(TreeModel self, int index) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    static final TreeModelFlags getFlags(TreeModel self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_get_flags(pointerOf((Object) self));

            return (TreeModelFlags) flagFor(TreeModelFlags.class, result);
        }
    }

    private static native final int gtk_tree_model_get_flags(long self);

    static final boolean getIter(TreeModel self, TreeIter iter, TreePath path) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_get_iter(pointerOf((Object) self), pointerOf(iter), pointerOf(path));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_get_iter(long self, long iter, long path);

    static final boolean getIterFirst(TreeModel self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_get_iter_first(pointerOf((Object) self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_get_iter_first(long self, long iter);

    static final boolean getIterFromString(TreeModel self, TreeIter iter, String pathString) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pathString == null) {
            throw new IllegalArgumentException("pathString can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_get_iter_from_string(pointerOf((Object) self), pointerOf(iter), pathString);

            return result;
        }
    }

    private static native final boolean gtk_tree_model_get_iter_from_string(long self, long iter, String pathString);

    static final int getNColumns(TreeModel self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_get_n_columns(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int gtk_tree_model_get_n_columns(long self);

    static final TreePath getPath(TreeModel self, TreeIter iter) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_get_path(pointerOf((Object) self), pointerOf(iter));

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_tree_model_get_path(long self, long iter);

    static final String getStringFromIter(TreeModel self, TreeIter iter) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_get_string_from_iter(pointerOf((Object) self), pointerOf(iter));

            return result;
        }
    }

    private static native final String gtk_tree_model_get_string_from_iter(long self, long iter);

    @SuppressWarnings("unused")
    static final void getValist(TreeModel self, TreeIter iter, FIXME varArgs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    static final void getValue(TreeModel self, TreeIter iter, int column, Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_get_value(pointerOf((Object) self), pointerOf(iter), column, pointerOf(value));
        }
    }

    private static native final void gtk_tree_model_get_value(long self, long iter, int column, long value);

    static final boolean iterChildren(TreeModel self, TreeIter iter, TreeIter parent) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_iter_children(pointerOf((Object) self), pointerOf(iter), pointerOf(parent));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_iter_children(long self, long iter, long parent);

    static final boolean iterHasChild(TreeModel self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_iter_has_child(pointerOf((Object) self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_iter_has_child(long self, long iter);

    static final int iterNChildren(TreeModel self, TreeIter iter) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_iter_n_children(pointerOf((Object) self), pointerOf(iter));

            return result;
        }
    }

    private static native final int gtk_tree_model_iter_n_children(long self, long iter);

    static final boolean iterNext(TreeModel self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_iter_next(pointerOf((Object) self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_iter_next(long self, long iter);

    static final boolean iterNthChild(TreeModel self, TreeIter iter, TreeIter parent, int n) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_iter_nth_child(pointerOf((Object) self), pointerOf(iter), pointerOf(parent), n);

            return result;
        }
    }

    private static native final boolean gtk_tree_model_iter_nth_child(long self, long iter, long parent, int n);

    static final boolean iterParent(TreeModel self, TreeIter iter, TreeIter child) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_iter_parent(pointerOf((Object) self), pointerOf(iter), pointerOf(child));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_iter_parent(long self, long iter, long child);

    static final boolean iterPrevious(TreeModel self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_iter_previous(pointerOf((Object) self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_iter_previous(long self, long iter);

    static final void refNode(TreeModel self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_ref_node(pointerOf((Object) self), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_model_ref_node(long self, long iter);

    static final void rowChanged(TreeModel self, TreePath path, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_row_changed(pointerOf((Object) self), pointerOf(path), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_model_row_changed(long self, long path, long iter);

    static final void rowDeleted(TreeModel self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_row_deleted(pointerOf((Object) self), pointerOf(path));
        }
    }

    private static native final void gtk_tree_model_row_deleted(long self, long path);

    static final void rowHasChildToggled(TreeModel self, TreePath path, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_row_has_child_toggled(pointerOf((Object) self), pointerOf(path), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_model_row_has_child_toggled(long self, long path, long iter);

    static final void rowInserted(TreeModel self, TreePath path, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_row_inserted(pointerOf((Object) self), pointerOf(path), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_model_row_inserted(long self, long path, long iter);

    static final void rowsReordered(TreeModel self, TreePath path, TreeIter iter, int[] newOrder) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (newOrder == null) {
            throw new IllegalArgumentException("newOrder can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_rows_reordered(pointerOf((Object) self), pointerOf(path), pointerOf(iter), newOrder);
        }
    }

    private static native final void gtk_tree_model_rows_reordered(long self, long path, long iter, int[] newOrder);

    static final void rowsReorderedWithLength(TreeModel self, TreePath path, TreeIter iter, int[] newOrder, int length) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (newOrder == null) {
            throw new IllegalArgumentException("newOrder can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_rows_reordered_with_length(pointerOf((Object) self), pointerOf(path), pointerOf(iter), newOrder, length);
        }
    }

    private static native final void gtk_tree_model_rows_reordered_with_length(long self, long path, long iter, int[] newOrder, int length);

    static final TreeModel sortNewWithModel(TreeModel self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_sort_new_with_model(pointerOf((Object) self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_tree_model_sort_new_with_model(long self);

    static final void unrefNode(TreeModel self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_unref_node(pointerOf((Object) self), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_model_unref_node(long self, long iter);

    interface GetColumnTypeSignal extends Signal
    {
        FIXME onGetColumnType(TreeModel source, int index);
    }

    static final void connect(TreeModel self, GtkTreeModel.GetColumnTypeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "get-column-type", after);
    }

    protected static final java.lang.Object receiveGetColumnType(Signal handler, long source, int index) {
        FIXME result;

        result = ((GtkTreeModel.GetColumnTypeSignal) handler).onGetColumnType((TreeModel) objectFor(source), index);

        return result;
    }

    interface GetFlagsSignal extends Signal
    {
        TreeModelFlags onGetFlags(TreeModel source);
    }

    static final void connect(TreeModel self, GtkTreeModel.GetFlagsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "get-flags", after);
    }

    protected static final int receiveGetFlags(Signal handler, long source) {
        TreeModelFlags result;

        result = ((GtkTreeModel.GetFlagsSignal) handler).onGetFlags((TreeModel) objectFor(source));

        return numOf(result);
    }

    interface GetIterSignal extends Signal
    {
        boolean onGetIter(TreeModel source, TreeIter iter, TreePath path);
    }

    static final void connect(TreeModel self, GtkTreeModel.GetIterSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "get-iter", after);
    }

    protected static final boolean receiveGetIter(Signal handler, long source, long iter, long path) {
        boolean result;

        result = ((GtkTreeModel.GetIterSignal) handler).onGetIter((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreePath) boxedFor(TreePath.class, path));

        return result;
    }

    interface GetNColumnsSignal extends Signal
    {
        int onGetNColumns(TreeModel source);
    }

    static final void connect(TreeModel self, GtkTreeModel.GetNColumnsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "get-n-columns", after);
    }

    protected static final int receiveGetNColumns(Signal handler, long source) {
        int result;

        result = ((GtkTreeModel.GetNColumnsSignal) handler).onGetNColumns((TreeModel) objectFor(source));

        return result;
    }

    interface GetPathSignal extends Signal
    {
        TreePath onGetPath(TreeModel source, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.GetPathSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "get-path", after);
    }

    protected static final long receiveGetPath(Signal handler, long source, long iter) {
        TreePath result;

        result = ((GtkTreeModel.GetPathSignal) handler).onGetPath((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter));

        return pointerOf(result);
    }

    interface GetValueSignal extends Signal
    {
        void onGetValue(TreeModel source, TreeIter iter, int column, Value value);
    }

    static final void connect(TreeModel self, GtkTreeModel.GetValueSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "get-value", after);
    }

    protected static final void receiveGetValue(Signal handler, long source, long iter, int column, long value) {
        ((GtkTreeModel.GetValueSignal) handler).onGetValue((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), column, valueFor(value));
    }

    interface IterChildrenSignal extends Signal
    {
        boolean onIterChildren(TreeModel source, TreeIter iter, TreeIter parent);
    }

    static final void connect(TreeModel self, GtkTreeModel.IterChildrenSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "iter-children", after);
    }

    protected static final boolean receiveIterChildren(Signal handler, long source, long iter, long parent) {
        boolean result;

        result = ((GtkTreeModel.IterChildrenSignal) handler).onIterChildren((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreeIter) boxedFor(TreeIter.class, parent));

        return result;
    }

    interface IterHasChildSignal extends Signal
    {
        boolean onIterHasChild(TreeModel source, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.IterHasChildSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "iter-has-child", after);
    }

    protected static final boolean receiveIterHasChild(Signal handler, long source, long iter) {
        boolean result;

        result = ((GtkTreeModel.IterHasChildSignal) handler).onIterHasChild((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }

    interface IterNChildrenSignal extends Signal
    {
        int onIterNChildren(TreeModel source, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.IterNChildrenSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "iter-n-children", after);
    }

    protected static final int receiveIterNChildren(Signal handler, long source, long iter) {
        int result;

        result = ((GtkTreeModel.IterNChildrenSignal) handler).onIterNChildren((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }

    interface IterNextSignal extends Signal
    {
        boolean onIterNext(TreeModel source, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.IterNextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "iter-next", after);
    }

    protected static final boolean receiveIterNext(Signal handler, long source, long iter) {
        boolean result;

        result = ((GtkTreeModel.IterNextSignal) handler).onIterNext((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }

    interface IterNthChildSignal extends Signal
    {
        boolean onIterNthChild(TreeModel source, TreeIter iter, TreeIter parent, int n);
    }

    static final void connect(TreeModel self, GtkTreeModel.IterNthChildSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "iter-nth-child", after);
    }

    protected static final boolean receiveIterNthChild(Signal handler, long source, long iter, long parent, int n) {
        boolean result;

        result = ((GtkTreeModel.IterNthChildSignal) handler).onIterNthChild((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreeIter) boxedFor(TreeIter.class, parent), n);

        return result;
    }

    interface IterParentSignal extends Signal
    {
        boolean onIterParent(TreeModel source, TreeIter iter, TreeIter child);
    }

    static final void connect(TreeModel self, GtkTreeModel.IterParentSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "iter-parent", after);
    }

    protected static final boolean receiveIterParent(Signal handler, long source, long iter, long child) {
        boolean result;

        result = ((GtkTreeModel.IterParentSignal) handler).onIterParent((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter), (TreeIter) boxedFor(TreeIter.class, child));

        return result;
    }

    interface IterPreviousSignal extends Signal
    {
        boolean onIterPrevious(TreeModel source, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.IterPreviousSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "iter-previous", after);
    }

    protected static final boolean receiveIterPrevious(Signal handler, long source, long iter) {
        boolean result;

        result = ((GtkTreeModel.IterPreviousSignal) handler).onIterPrevious((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }

    interface RefNodeSignal extends Signal
    {
        void onRefNode(TreeModel source, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.RefNodeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "ref-node", after);
    }

    protected static final void receiveRefNode(Signal handler, long source, long iter) {
        ((GtkTreeModel.RefNodeSignal) handler).onRefNode((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter));
    }

    interface RowChangedSignal extends Signal
    {
        void onRowChanged(TreeModel source, TreePath path, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.RowChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "row-changed", after);
    }

    protected static final void receiveRowChanged(Signal handler, long source, long path, long iter) {
        ((GtkTreeModel.RowChangedSignal) handler).onRowChanged((TreeModel) objectFor(source), (TreePath) boxedFor(TreePath.class, path), (TreeIter) boxedFor(TreeIter.class, iter));
    }

    interface RowDeletedSignal extends Signal
    {
        void onRowDeleted(TreeModel source, TreePath path);
    }

    static final void connect(TreeModel self, GtkTreeModel.RowDeletedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "row-deleted", after);
    }

    protected static final void receiveRowDeleted(Signal handler, long source, long path) {
        ((GtkTreeModel.RowDeletedSignal) handler).onRowDeleted((TreeModel) objectFor(source), (TreePath) boxedFor(TreePath.class, path));
    }

    interface RowHasChildToggledSignal extends Signal
    {
        void onRowHasChildToggled(TreeModel source, TreePath path, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.RowHasChildToggledSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "row-has-child-toggled", after);
    }

    protected static final void receiveRowHasChildToggled(Signal handler, long source, long path, long iter) {
        ((GtkTreeModel.RowHasChildToggledSignal) handler).onRowHasChildToggled((TreeModel) objectFor(source), (TreePath) boxedFor(TreePath.class, path), (TreeIter) boxedFor(TreeIter.class, iter));
    }

    interface RowInsertedSignal extends Signal
    {
        void onRowInserted(TreeModel source, TreePath path, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.RowInsertedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "row-inserted", after);
    }

    protected static final void receiveRowInserted(Signal handler, long source, long path, long iter) {
        ((GtkTreeModel.RowInsertedSignal) handler).onRowInserted((TreeModel) objectFor(source), (TreePath) boxedFor(TreePath.class, path), (TreeIter) boxedFor(TreeIter.class, iter));
    }

    interface RowsReorderedSignal extends Signal
    {
        void onRowsReordered(TreeModel source, TreePath path, TreeIter iter, int[] newOrder);
    }

    static final void connect(TreeModel self, GtkTreeModel.RowsReorderedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "rows-reordered", after);
    }

    protected static final void receiveRowsReordered(Signal handler, long source, long path, long iter, int[] newOrder) {
        ((GtkTreeModel.RowsReorderedSignal) handler).onRowsReordered((TreeModel) objectFor(source), (TreePath) boxedFor(TreePath.class, path), (TreeIter) boxedFor(TreeIter.class, iter), newOrder);
    }

    interface UnrefNodeSignal extends Signal
    {
        void onUnrefNode(TreeModel source, TreeIter iter);
    }

    static final void connect(TreeModel self, GtkTreeModel.UnrefNodeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeModel.class, "unref-node", after);
    }

    protected static final void receiveUnrefNode(Signal handler, long source, long iter) {
        ((GtkTreeModel.UnrefNodeSignal) handler).onUnrefNode((TreeModel) objectFor(source), (TreeIter) boxedFor(TreeIter.class, iter));
    }
}

