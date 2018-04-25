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
import org.gnome.glib.Value;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeStore;

final class GtkTreeStore extends Plumbing
{
    private GtkTreeStore() {}

    static final long createTreeStore(int nColumns) {
        long result;

        synchronized (lock) {
            result = gtk_tree_store_new(nColumns);

            return result;
        }
    }

    private static native final long gtk_tree_store_new(int nColumns);

    @SuppressWarnings("unused")
    static final long createTreeStorev(int nColumns, FIXME types) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType*");
    }

    static final void append(TreeStore self, TreeIter iter, TreeIter parent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_append(pointerOf(self), pointerOf(iter), pointerOf(parent));
        }
    }

    private static native final void gtk_tree_store_append(long self, long iter, long parent);

    static final void clear(TreeStore self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_clear(pointerOf(self));
        }
    }

    private static native final void gtk_tree_store_clear(long self);

    static final void insert(TreeStore self, TreeIter iter, TreeIter parent, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_insert(pointerOf(self), pointerOf(iter), pointerOf(parent), position);
        }
    }

    private static native final void gtk_tree_store_insert(long self, long iter, long parent, int position);

    static final void insertAfter(TreeStore self, TreeIter iter, TreeIter parent, TreeIter sibling) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_insert_after(pointerOf(self), pointerOf(iter), pointerOf(parent), pointerOf(sibling));
        }
    }

    private static native final void gtk_tree_store_insert_after(long self, long iter, long parent, long sibling);

    static final void insertBefore(TreeStore self, TreeIter iter, TreeIter parent, TreeIter sibling) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_insert_before(pointerOf(self), pointerOf(iter), pointerOf(parent), pointerOf(sibling));
        }
    }

    private static native final void gtk_tree_store_insert_before(long self, long iter, long parent, long sibling);

    static final boolean isAncestor(TreeStore self, TreeIter iter, TreeIter descendant) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (descendant == null) {
            throw new IllegalArgumentException("descendant can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_store_is_ancestor(pointerOf(self), pointerOf(iter), pointerOf(descendant));

            return result;
        }
    }

    private static native final boolean gtk_tree_store_is_ancestor(long self, long iter, long descendant);

    static final int iterDepth(TreeStore self, TreeIter iter) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_store_iter_depth(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final int gtk_tree_store_iter_depth(long self, long iter);

    static final boolean iterIsValid(TreeStore self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_store_iter_is_valid(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_store_iter_is_valid(long self, long iter);

    static final void moveAfter(TreeStore self, TreeIter iter, TreeIter position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_move_after(pointerOf(self), pointerOf(iter), pointerOf(position));
        }
    }

    private static native final void gtk_tree_store_move_after(long self, long iter, long position);

    static final void moveBefore(TreeStore self, TreeIter iter, TreeIter position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_move_before(pointerOf(self), pointerOf(iter), pointerOf(position));
        }
    }

    private static native final void gtk_tree_store_move_before(long self, long iter, long position);

    static final void prepend(TreeStore self, TreeIter iter, TreeIter parent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_prepend(pointerOf(self), pointerOf(iter), pointerOf(parent));
        }
    }

    private static native final void gtk_tree_store_prepend(long self, long iter, long parent);

    static final boolean remove(TreeStore self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_store_remove(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_tree_store_remove(long self, long iter);

    static final void reorder(TreeStore self, TreeIter parent, int[] newOrder) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newOrder == null) {
            throw new IllegalArgumentException("newOrder can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_reorder(pointerOf(self), pointerOf(parent), newOrder);
        }
    }

    private static native final void gtk_tree_store_reorder(long self, long parent, int[] newOrder);

    static final void set(TreeStore self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_set(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_tree_store_set(long self, long iter);

    @SuppressWarnings("unused")
    static final void setColumnTypes(TreeStore self, int nColumns, FIXME types) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType*");
    }

    @SuppressWarnings("unused")
    static final void setValist(TreeStore self, TreeIter iter, FIXME varArgs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    static final void setValue(TreeStore self, TreeIter iter, int column, Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_set_value(pointerOf(self), pointerOf(iter), column, pointerOf(value));
        }
    }

    private static native final void gtk_tree_store_set_value(long self, long iter, int column, long value);

    static final void swap(TreeStore self, TreeIter a, TreeIter b) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (a == null) {
            throw new IllegalArgumentException("a can't be null");
        }

        if (b == null) {
            throw new IllegalArgumentException("b can't be null");
        }

        synchronized (lock) {
            gtk_tree_store_swap(pointerOf(self), pointerOf(a), pointerOf(b));
        }
    }

    private static native final void gtk_tree_store_swap(long self, long a, long b);
}

