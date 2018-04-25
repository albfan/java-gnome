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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TreePath;

final class GtkTreePath extends Plumbing
{
    private GtkTreePath() {}

    static final long createTreePath() {
        long result;

        synchronized (lock) {
            result = gtk_tree_path_new();

            return result;
        }
    }

    private static native final long gtk_tree_path_new();

    static final long createTreePathFirst() {
        long result;

        synchronized (lock) {
            result = gtk_tree_path_new_first();

            return result;
        }
    }

    private static native final long gtk_tree_path_new_first();

    static final long createTreePathFromIndices(int firstIndex) {
        long result;

        synchronized (lock) {
            result = gtk_tree_path_new_from_indices(firstIndex);

            return result;
        }
    }

    private static native final long gtk_tree_path_new_from_indices(int firstIndex);

    static final long createTreePathFromIndicesv(int[] indices, long length) {
        long result;

        if (indices == null) {
            throw new IllegalArgumentException("indices can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_new_from_indicesv(indices, length);

            return result;
        }
    }

    private static native final long gtk_tree_path_new_from_indicesv(int[] indices, long length);

    static final long createTreePathFromString(String path) {
        long result;

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_new_from_string(path);

            return result;
        }
    }

    private static native final long gtk_tree_path_new_from_string(String path);

    static final void appendIndex(TreePath self, int index) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_path_append_index(pointerOf(self), index);
        }
    }

    private static native final void gtk_tree_path_append_index(long self, int index);

    static final int compare(TreePath self, org.gnome.gtk.TreePath b) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (b == null) {
            throw new IllegalArgumentException("b can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_compare(pointerOf(self), pointerOf(b));

            return result;
        }
    }

    private static native final int gtk_tree_path_compare(long self, long b);

    static final TreePath copy(TreePath self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_copy(pointerOf(self));

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_tree_path_copy(long self);

    static final void down(TreePath self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_path_down(pointerOf(self));
        }
    }

    private static native final void gtk_tree_path_down(long self);

    static final void free(TreePath self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_path_free(pointerOf(self));
        }
    }

    private static native final void gtk_tree_path_free(long self);

    static final int getDepth(TreePath self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_get_depth(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_tree_path_get_depth(long self);

    static final int[] getIndices(TreePath self) {
        int[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_get_indices(pointerOf(self));

            return result;
        }
    }

    private static native final int[] gtk_tree_path_get_indices(long self);

    static final int[] getIndicesWithDepth(TreePath self, int[] depth) {
        int[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_get_indices_with_depth(pointerOf(self), depth);

            return result;
        }
    }

    private static native final int[] gtk_tree_path_get_indices_with_depth(long self, int[] depth);

    static final boolean isAncestor(TreePath self, TreePath descendant) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (descendant == null) {
            throw new IllegalArgumentException("descendant can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_is_ancestor(pointerOf(self), pointerOf(descendant));

            return result;
        }
    }

    private static native final boolean gtk_tree_path_is_ancestor(long self, long descendant);

    static final boolean isDescendant(TreePath self, TreePath ancestor) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (ancestor == null) {
            throw new IllegalArgumentException("ancestor can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_is_descendant(pointerOf(self), pointerOf(ancestor));

            return result;
        }
    }

    private static native final boolean gtk_tree_path_is_descendant(long self, long ancestor);

    static final void next(TreePath self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_path_next(pointerOf(self));
        }
    }

    private static native final void gtk_tree_path_next(long self);

    static final void prependIndex(TreePath self, int index) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_path_prepend_index(pointerOf(self), index);
        }
    }

    private static native final void gtk_tree_path_prepend_index(long self, int index);

    static final boolean prev(TreePath self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_prev(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_path_prev(long self);

    static final String toString(TreePath self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_to_string(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_tree_path_to_string(long self);

    static final boolean up(TreePath self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_path_up(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tree_path_up(long self);
}

