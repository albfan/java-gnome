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
import org.gnome.glib.Signal;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SelectionData;
import org.gnome.gtk.TreeDragSource;
import org.gnome.gtk.TreePath;

final class GtkTreeDragSource extends Plumbing
{
    private GtkTreeDragSource() {}

    static final boolean dragDataDelete(TreeDragSource self, TreePath path) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_drag_source_drag_data_delete(pointerOf((Object) self), pointerOf(path));

            return result;
        }
    }

    private static native final boolean gtk_tree_drag_source_drag_data_delete(long self, long path);

    static final boolean dragDataGet(TreeDragSource self, TreePath path, SelectionData selectionData) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (selectionData == null) {
            throw new IllegalArgumentException("selectionData can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_drag_source_drag_data_get(pointerOf((Object) self), pointerOf(path), pointerOf(selectionData));

            return result;
        }
    }

    private static native final boolean gtk_tree_drag_source_drag_data_get(long self, long path, long selectionData);

    static final boolean rowDraggable(TreeDragSource self, TreePath path) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_tree_drag_source_row_draggable(pointerOf((Object) self), pointerOf(path));

            return result;
        }
    }

    private static native final boolean gtk_tree_drag_source_row_draggable(long self, long path);

    interface DragDataDeleteSignal extends Signal
    {
        boolean onDragDataDelete(TreeDragSource source, TreePath path);
    }

    static final void connect(TreeDragSource self, GtkTreeDragSource.DragDataDeleteSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeDragSource.class, "drag-data-delete", after);
    }

    protected static final boolean receiveDragDataDelete(Signal handler, long source, long path) {
        boolean result;

        result = ((GtkTreeDragSource.DragDataDeleteSignal) handler).onDragDataDelete((TreeDragSource) objectFor(source), (TreePath) boxedFor(TreePath.class, path));

        return result;
    }

    interface DragDataGetSignal extends Signal
    {
        boolean onDragDataGet(TreeDragSource source, TreePath path, SelectionData selectionData);
    }

    static final void connect(TreeDragSource self, GtkTreeDragSource.DragDataGetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeDragSource.class, "drag-data-get", after);
    }

    protected static final boolean receiveDragDataGet(Signal handler, long source, long path, long selectionData) {
        boolean result;

        result = ((GtkTreeDragSource.DragDataGetSignal) handler).onDragDataGet((TreeDragSource) objectFor(source), (TreePath) boxedFor(TreePath.class, path), (SelectionData) boxedFor(SelectionData.class, selectionData));

        return result;
    }

    interface RowDraggableSignal extends Signal
    {
        boolean onRowDraggable(TreeDragSource source, TreePath path);
    }

    static final void connect(TreeDragSource self, GtkTreeDragSource.RowDraggableSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkTreeDragSource.class, "row-draggable", after);
    }

    protected static final boolean receiveRowDraggable(Signal handler, long source, long path) {
        boolean result;

        result = ((GtkTreeDragSource.RowDraggableSignal) handler).onRowDraggable((TreeDragSource) objectFor(source), (TreePath) boxedFor(TreePath.class, path));

        return result;
    }
}

