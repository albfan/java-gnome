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
import org.gnome.gtk.TreeModelFilter;
import org.gnome.gtk.TreePath;

final class GtkTreeModelFilter extends Plumbing
{
    private GtkTreeModelFilter() {}

    static final void clearCache(TreeModelFilter self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_filter_clear_cache(pointerOf(self));
        }
    }

    private static native final void gtk_tree_model_filter_clear_cache(long self);

    static final boolean convertChildIterToIter(TreeModelFilter self, TreeIter filterIter, TreeIter childIter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (childIter == null) {
            throw new IllegalArgumentException("childIter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_filter_convert_child_iter_to_iter(pointerOf(self), pointerOf(filterIter), pointerOf(childIter));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_filter_convert_child_iter_to_iter(long self, long filterIter, long childIter);

    static final TreePath convertChildPathToPath(TreeModelFilter self, TreePath childPath) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (childPath == null) {
            throw new IllegalArgumentException("childPath can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_filter_convert_child_path_to_path(pointerOf(self), pointerOf(childPath));

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_tree_model_filter_convert_child_path_to_path(long self, long childPath);

    static final void convertIterToChildIter(TreeModelFilter self, TreeIter childIter, TreeIter filterIter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filterIter == null) {
            throw new IllegalArgumentException("filterIter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_filter_convert_iter_to_child_iter(pointerOf(self), pointerOf(childIter), pointerOf(filterIter));
        }
    }

    private static native final void gtk_tree_model_filter_convert_iter_to_child_iter(long self, long childIter, long filterIter);

    static final TreePath convertPathToChildPath(TreeModelFilter self, TreePath filterPath) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filterPath == null) {
            throw new IllegalArgumentException("filterPath can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_filter_convert_path_to_child_path(pointerOf(self), pointerOf(filterPath));

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_tree_model_filter_convert_path_to_child_path(long self, long filterPath);

    static final TreeModel getModel(TreeModelFilter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_filter_get_model(pointerOf(self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_tree_model_filter_get_model(long self);

    static final void refilter(TreeModelFilter self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_filter_refilter(pointerOf(self));
        }
    }

    private static native final void gtk_tree_model_filter_refilter(long self);

    @SuppressWarnings("unused")
    static final void setModifyFunc(TreeModelFilter self, int nColumns, FIXME types, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType*");
    }

    static final void setVisibleColumn(TreeModelFilter self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_filter_set_visible_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_tree_model_filter_set_visible_column(long self, int column);

    @SuppressWarnings("unused")
    static final void setVisibleFunc(TreeModelFilter self, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeModelFilterVisibleFunc");
    }

    interface ModifySignal extends Signal
    {
        void onModify(TreeModelFilter source, TreeModel childModel, TreeIter iter, Value value, int column);
    }

    static final void connect(TreeModelFilter self, GtkTreeModelFilter.ModifySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeModelFilter.class, "modify", after);
    }

    protected static final void receiveModify(Signal handler, long source, long childModel, long iter, long value, int column) {
        ((GtkTreeModelFilter.ModifySignal) handler).onModify((TreeModelFilter) objectFor(source), (TreeModel) objectFor(childModel), (TreeIter) boxedFor(TreeIter.class, iter), valueFor(value), column);
    }

    interface VisibleSignal extends Signal
    {
        boolean onVisible(TreeModelFilter source, TreeModel childModel, TreeIter iter);
    }

    static final void connect(TreeModelFilter self, GtkTreeModelFilter.VisibleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTreeModelFilter.class, "visible", after);
    }

    protected static final boolean receiveVisible(Signal handler, long source, long childModel, long iter) {
        boolean result;

        result = ((GtkTreeModelFilter.VisibleSignal) handler).onVisible((TreeModelFilter) objectFor(source), (TreeModel) objectFor(childModel), (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }

    static final long createTreeModelFilter(TreeModel childModel, TreePath root) {
        long result;

        if (childModel == null) {
            throw new IllegalArgumentException("childModel can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_filter_new(pointerOf((Object) childModel), pointerOf(root));

            return result;
        }
    }

    private static native final long gtk_tree_model_filter_new(long childModel, long root);
}

