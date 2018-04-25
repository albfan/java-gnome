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

import org.gnome.glib.Object;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.TreeModelSort;
import org.gnome.gtk.TreePath;

final class GtkTreeModelSort extends Plumbing
{
    private GtkTreeModelSort() {}

    static final void clearCache(TreeModelSort self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_sort_clear_cache(pointerOf(self));
        }
    }

    private static native final void gtk_tree_model_sort_clear_cache(long self);

    static final boolean convertChildIterToIter(TreeModelSort self, TreeIter sortIter, TreeIter childIter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (childIter == null) {
            throw new IllegalArgumentException("childIter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_sort_convert_child_iter_to_iter(pointerOf(self), pointerOf(sortIter), pointerOf(childIter));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_sort_convert_child_iter_to_iter(long self, long sortIter, long childIter);

    static final TreePath convertChildPathToPath(TreeModelSort self, TreePath childPath) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (childPath == null) {
            throw new IllegalArgumentException("childPath can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_sort_convert_child_path_to_path(pointerOf(self), pointerOf(childPath));

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_tree_model_sort_convert_child_path_to_path(long self, long childPath);

    static final void convertIterToChildIter(TreeModelSort self, TreeIter childIter, TreeIter sortedIter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sortedIter == null) {
            throw new IllegalArgumentException("sortedIter can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_sort_convert_iter_to_child_iter(pointerOf(self), pointerOf(childIter), pointerOf(sortedIter));
        }
    }

    private static native final void gtk_tree_model_sort_convert_iter_to_child_iter(long self, long childIter, long sortedIter);

    static final TreePath convertPathToChildPath(TreeModelSort self, TreePath sortedPath) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sortedPath == null) {
            throw new IllegalArgumentException("sortedPath can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_sort_convert_path_to_child_path(pointerOf(self), pointerOf(sortedPath));

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_tree_model_sort_convert_path_to_child_path(long self, long sortedPath);

    static final TreeModel getModel(TreeModelSort self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_sort_get_model(pointerOf(self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_tree_model_sort_get_model(long self);

    static final boolean iterIsValid(TreeModelSort self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_sort_iter_is_valid(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_model_sort_iter_is_valid(long self, long iter);

    static final void resetDefaultSortFunc(TreeModelSort self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_model_sort_reset_default_sort_func(pointerOf(self));
        }
    }

    private static native final void gtk_tree_model_sort_reset_default_sort_func(long self);

    static final long createTreeModelSortWithModel(TreeModel model) {
        long result;

        if (model == null) {
            throw new IllegalArgumentException("model can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_model_sort_new_with_model(pointerOf((Object) model));

            return result;
        }
    }

    private static native final long gtk_tree_model_sort_new_with_model(long model);
}

