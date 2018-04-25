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
import org.gnome.gtk.ListStore;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TreeIter;

final class GtkListStore extends Plumbing
{
    private GtkListStore() {}

    static final long createListStore(int nColumns) {
        long result;

        synchronized (lock) {
            result = gtk_list_store_new(nColumns);

            return result;
        }
    }

    private static native final long gtk_list_store_new(int nColumns);

    @SuppressWarnings("unused")
    static final long createListStorev(int nColumns, FIXME types) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType*");
    }

    static final void append(ListStore self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_list_store_append(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_list_store_append(long self, long iter);

    static final void clear(ListStore self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_list_store_clear(pointerOf(self));
        }
    }

    private static native final void gtk_list_store_clear(long self);

    static final void insert(ListStore self, TreeIter iter, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_list_store_insert(pointerOf(self), pointerOf(iter), position);
        }
    }

    private static native final void gtk_list_store_insert(long self, long iter, int position);

    static final void insertAfter(ListStore self, TreeIter iter, TreeIter sibling) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_list_store_insert_after(pointerOf(self), pointerOf(iter), pointerOf(sibling));
        }
    }

    private static native final void gtk_list_store_insert_after(long self, long iter, long sibling);

    static final void insertBefore(ListStore self, TreeIter iter, TreeIter sibling) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_list_store_insert_before(pointerOf(self), pointerOf(iter), pointerOf(sibling));
        }
    }

    private static native final void gtk_list_store_insert_before(long self, long iter, long sibling);

    static final void insertWithValues(ListStore self, TreeIter iter, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_list_store_insert_with_values(pointerOf(self), pointerOf(iter), position);
        }
    }

    private static native final void gtk_list_store_insert_with_values(long self, long iter, int position);

    static final boolean iterIsValid(ListStore self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_list_store_iter_is_valid(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_list_store_iter_is_valid(long self, long iter);

    static final void moveAfter(ListStore self, TreeIter iter, TreeIter position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_list_store_move_after(pointerOf(self), pointerOf(iter), pointerOf(position));
        }
    }

    private static native final void gtk_list_store_move_after(long self, long iter, long position);

    static final void moveBefore(ListStore self, TreeIter iter, TreeIter position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_list_store_move_before(pointerOf(self), pointerOf(iter), pointerOf(position));
        }
    }

    private static native final void gtk_list_store_move_before(long self, long iter, long position);

    static final void prepend(ListStore self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_list_store_prepend(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_list_store_prepend(long self, long iter);

    static final boolean remove(ListStore self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_list_store_remove(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_list_store_remove(long self, long iter);

    static final void reorder(ListStore self, int[] newOrder) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newOrder == null) {
            throw new IllegalArgumentException("newOrder can't be null");
        }

        synchronized (lock) {
            gtk_list_store_reorder(pointerOf(self), newOrder);
        }
    }

    private static native final void gtk_list_store_reorder(long self, int[] newOrder);

    static final void set(ListStore self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_list_store_set(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_list_store_set(long self, long iter);

    @SuppressWarnings("unused")
    static final void setColumnTypes(ListStore self, int nColumns, FIXME types) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType*");
    }

    @SuppressWarnings("unused")
    static final void setValist(ListStore self, TreeIter iter, FIXME varArgs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    static final void setValue(ListStore self, TreeIter iter, int column, Value value) {
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
            gtk_list_store_set_value(pointerOf(self), pointerOf(iter), column, pointerOf(value));
        }
    }

    private static native final void gtk_list_store_set_value(long self, long iter, int column, long value);

    static final void swap(ListStore self, TreeIter a, TreeIter b) {
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
            gtk_list_store_swap(pointerOf(self), pointerOf(a), pointerOf(b));
        }
    }

    private static native final void gtk_list_store_swap(long self, long a, long b);
}

