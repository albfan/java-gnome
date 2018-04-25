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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SelectionMode;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.TreePath;
import org.gnome.gtk.TreeSelection;
import org.gnome.gtk.TreeView;

final class GtkTreeSelection extends Plumbing
{
    private GtkTreeSelection() {}

    static final int countSelectedRows(TreeSelection self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_selection_count_selected_rows(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_selection_count_selected_rows(long self);

    static final SelectionMode getMode(TreeSelection self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_selection_get_mode(pointerOf(self));

            return (SelectionMode) enumFor(SelectionMode.class, result);
        }
    }

    private static native final int gtk_tree_selection_get_mode(long self);

    @SuppressWarnings("unused")
    static final FIXME getSelectFunction(TreeSelection self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeSelectionFunc");
    }

    static final boolean getSelected(TreeSelection self, TreeModel[] model, TreeIter iter) {
        boolean result;
        long[] _model;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _model = pointersOf((Object[])model);

        synchronized (lock) {
            result = gtk_tree_selection_get_selected(pointerOf(self), _model, pointerOf(iter));
            fillObjectArray((Object[])model, _model);

            return result;
        }
    }

    private static native final boolean gtk_tree_selection_get_selected(long self, long[] model, long iter);

    static final TreePath[] getSelectedRows(TreeSelection self, TreeModel[] model) {
        long[] result;
        long[] _model;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _model = pointersOf((Object[])model);

        synchronized (lock) {
            result = gtk_tree_selection_get_selected_rows(pointerOf(self), _model);
            fillObjectArray((Object[])model, _model);

            return (TreePath[]) boxedArrayFor(TreePath.class, result, new TreePath[result.length]);
        }
    }

    private static native final long[] gtk_tree_selection_get_selected_rows(long self, long[] model);

    static final TreeView getTreeView(TreeSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_selection_get_tree_view(pointerOf(self));

            return (TreeView) objectFor(result);
        }
    }

    private static native final long gtk_tree_selection_get_tree_view(long self);

    @SuppressWarnings("unused")
    static final FIXME getUserData(TreeSelection self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final boolean iterIsSelected(TreeSelection self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_selection_iter_is_selected(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_selection_iter_is_selected(long self, long iter);

    static final boolean pathIsSelected(TreeSelection self, TreePath path) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_selection_path_is_selected(pointerOf(self), pointerOf(path));

            return result;
        }
    }

    private static native final boolean gtk_tree_selection_path_is_selected(long self, long path);

    static final void selectAll(TreeSelection self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_select_all(pointerOf(self));
        }
    }

    private static native final void gtk_tree_selection_select_all(long self);

    static final void selectIter(TreeSelection self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_select_iter(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_selection_select_iter(long self, long iter);

    static final void selectPath(TreeSelection self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_select_path(pointerOf(self), pointerOf(path));
        }
    }

    private static native final void gtk_tree_selection_select_path(long self, long path);

    static final void selectRange(TreeSelection self, TreePath startPath, TreePath endPath) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (startPath == null) {
            throw new IllegalArgumentException("startPath can't be null");
        }

        if (endPath == null) {
            throw new IllegalArgumentException("endPath can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_select_range(pointerOf(self), pointerOf(startPath), pointerOf(endPath));
        }
    }

    private static native final void gtk_tree_selection_select_range(long self, long startPath, long endPath);

    @SuppressWarnings("unused")
    static final void selectedForeach(TreeSelection self, FIXME func, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeSelectionForeachFunc");
    }

    static final void setMode(TreeSelection self, SelectionMode type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_set_mode(pointerOf(self), numOf(type));
        }
    }

    private static native final void gtk_tree_selection_set_mode(long self, int type);

    @SuppressWarnings("unused")
    static final void setSelectFunction(TreeSelection self, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeSelectionFunc");
    }

    static final void unselectAll(TreeSelection self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_unselect_all(pointerOf(self));
        }
    }

    private static native final void gtk_tree_selection_unselect_all(long self);

    static final void unselectIter(TreeSelection self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_unselect_iter(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_selection_unselect_iter(long self, long iter);

    static final void unselectPath(TreeSelection self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_unselect_path(pointerOf(self), pointerOf(path));
        }
    }

    private static native final void gtk_tree_selection_unselect_path(long self, long path);

    static final void unselectRange(TreeSelection self, TreePath startPath, TreePath endPath) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (startPath == null) {
            throw new IllegalArgumentException("startPath can't be null");
        }

        if (endPath == null) {
            throw new IllegalArgumentException("endPath can't be null");
        }

        synchronized (lock) {
            gtk_tree_selection_unselect_range(pointerOf(self), pointerOf(startPath), pointerOf(endPath));
        }
    }

    private static native final void gtk_tree_selection_unselect_range(long self, long startPath, long endPath);

    interface ChangedSignal extends Signal
    {
        void onChanged(TreeSelection source);
    }

    static final void connect(TreeSelection self, GtkTreeSelection.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeSelection.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkTreeSelection.ChangedSignal) handler).onChanged((TreeSelection) objectFor(source));
    }
}

