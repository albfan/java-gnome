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
import org.gnome.gtk.SortType;
import org.gnome.gtk.TreeSortable;

final class GtkTreeSortable extends Plumbing
{
    private GtkTreeSortable() {}

    static final boolean getSortColumnId(TreeSortable self, int[] sortColumnId, SortType[] order) {
        boolean result;
        int[] _order;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _order = numsOf(order);

        synchronized (lock) {
            result = gtk_tree_sortable_get_sort_column_id(pointerOf((Object) self), sortColumnId, _order);
            fillEnumArray(SortType.class, order, _order);

            return result;
        }
    }

    private static native final boolean gtk_tree_sortable_get_sort_column_id(long self, int[] sortColumnId, int[] order);

    static final boolean hasDefaultSortFunc(TreeSortable self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_sortable_has_default_sort_func(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_tree_sortable_has_default_sort_func(long self);

    @SuppressWarnings("unused")
    static final void setDefaultSortFunc(TreeSortable self, FIXME sortFunc, FIXME userData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeIterCompareFunc");
    }

    static final void setSortColumnId(TreeSortable self, int sortColumnId, SortType order) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (order == null) {
            throw new IllegalArgumentException("order can't be null");
        }

        synchronized (lock) {
            gtk_tree_sortable_set_sort_column_id(pointerOf((Object) self), sortColumnId, numOf(order));
        }
    }

    private static native final void gtk_tree_sortable_set_sort_column_id(long self, int sortColumnId, int order);

    @SuppressWarnings("unused")
    static final void setSortFunc(TreeSortable self, int sortColumnId, FIXME sortFunc, FIXME userData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeIterCompareFunc");
    }

    static final void sortColumnChanged(TreeSortable self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tree_sortable_sort_column_changed(pointerOf((Object) self));
        }
    }

    private static native final void gtk_tree_sortable_sort_column_changed(long self);

    interface GetSortColumnIdSignal extends Signal
    {
        boolean onGetSortColumnId(TreeSortable source, int[] sortColumnId, SortType[] order);
    }

    static final void connect(TreeSortable self, GtkTreeSortable.GetSortColumnIdSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeSortable.class, "get-sort-column-id", after);
    }

    protected static final boolean receiveGetSortColumnId(Signal handler, long source, int[] sortColumnId, int[] order) {
        boolean result;

        result = ((GtkTreeSortable.GetSortColumnIdSignal) handler).onGetSortColumnId((TreeSortable) objectFor(source), sortColumnId, null);

        return result;
    }

    interface HasDefaultSortFuncSignal extends Signal
    {
        boolean onHasDefaultSortFunc(TreeSortable source);
    }

    static final void connect(TreeSortable self, GtkTreeSortable.HasDefaultSortFuncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeSortable.class, "has-default-sort-func", after);
    }

    protected static final boolean receiveHasDefaultSortFunc(Signal handler, long source) {
        boolean result;

        result = ((GtkTreeSortable.HasDefaultSortFuncSignal) handler).onHasDefaultSortFunc((TreeSortable) objectFor(source));

        return result;
    }

    interface SetDefaultSortFuncSignal extends Signal
    {
        void onSetDefaultSortFunc(TreeSortable source, FIXME sortFunc, FIXME userData, FIXME destroy);
    }

    static final void connect(TreeSortable self, GtkTreeSortable.SetDefaultSortFuncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeSortable.class, "set-default-sort-func", after);
    }

    protected static final void receiveSetDefaultSortFunc(Signal handler, long source, java.lang.Object sortFunc, java.lang.Object userData, java.lang.Object destroy) {
        ((GtkTreeSortable.SetDefaultSortFuncSignal) handler).onSetDefaultSortFunc((TreeSortable) objectFor(source), (FIXME) sortFunc, (FIXME) userData, (FIXME) destroy);
    }

    interface SetSortColumnIdSignal extends Signal
    {
        void onSetSortColumnId(TreeSortable source, int sortColumnId, SortType order);
    }

    static final void connect(TreeSortable self, GtkTreeSortable.SetSortColumnIdSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeSortable.class, "set-sort-column-id", after);
    }

    protected static final void receiveSetSortColumnId(Signal handler, long source, int sortColumnId, int order) {
        ((GtkTreeSortable.SetSortColumnIdSignal) handler).onSetSortColumnId((TreeSortable) objectFor(source), sortColumnId, (SortType) enumFor(SortType.class, order));
    }

    interface SetSortFuncSignal extends Signal
    {
        void onSetSortFunc(TreeSortable source, int sortColumnId, FIXME sortFunc, FIXME userData, FIXME destroy);
    }

    static final void connect(TreeSortable self, GtkTreeSortable.SetSortFuncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeSortable.class, "set-sort-func", after);
    }

    protected static final void receiveSetSortFunc(Signal handler, long source, int sortColumnId, java.lang.Object sortFunc, java.lang.Object userData, java.lang.Object destroy) {
        ((GtkTreeSortable.SetSortFuncSignal) handler).onSetSortFunc((TreeSortable) objectFor(source), sortColumnId, (FIXME) sortFunc, (FIXME) userData, (FIXME) destroy);
    }

    interface SortColumnChangedSignal extends Signal
    {
        void onSortColumnChanged(TreeSortable source);
    }

    static final void connect(TreeSortable self, GtkTreeSortable.SortColumnChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeSortable.class, "sort-column-changed", after);
    }

    protected static final void receiveSortColumnChanged(Signal handler, long source) {
        ((GtkTreeSortable.SortColumnChangedSignal) handler).onSortColumnChanged((TreeSortable) objectFor(source));
    }
}

