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

import org.gnome.gdk.Event;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.CellEditable;
import org.gnome.gtk.Plumbing;

final class GtkCellEditable extends Plumbing
{
    private GtkCellEditable() {}

    static final void editingDone(CellEditable self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_editable_editing_done(pointerOf((Object) self));
        }
    }

    private static native final void gtk_cell_editable_editing_done(long self);

    static final void removeWidget(CellEditable self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_editable_remove_widget(pointerOf((Object) self));
        }
    }

    private static native final void gtk_cell_editable_remove_widget(long self);

    static final void startEditing(CellEditable self, Event event) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_editable_start_editing(pointerOf((Object) self), pointerOf(event));
        }
    }

    private static native final void gtk_cell_editable_start_editing(long self, long event);

    interface EditingDoneSignal extends Signal
    {
        void onEditingDone(CellEditable source);
    }

    static final void connect(CellEditable self, GtkCellEditable.EditingDoneSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellEditable.class, "editing-done", after);
    }

    protected static final void receiveEditingDone(Signal handler, long source) {
        ((GtkCellEditable.EditingDoneSignal) handler).onEditingDone((CellEditable) objectFor(source));
    }

    interface RemoveWidgetSignal extends Signal
    {
        void onRemoveWidget(CellEditable source);
    }

    static final void connect(CellEditable self, GtkCellEditable.RemoveWidgetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellEditable.class, "remove-widget", after);
    }

    protected static final void receiveRemoveWidget(Signal handler, long source) {
        ((GtkCellEditable.RemoveWidgetSignal) handler).onRemoveWidget((CellEditable) objectFor(source));
    }

    interface StartEditingSignal extends Signal
    {
        void onStartEditing(CellEditable source, Event event);
    }

    static final void connect(CellEditable self, GtkCellEditable.StartEditingSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellEditable.class, "start-editing", after);
    }

    protected static final void receiveStartEditing(Signal handler, long source, long event) {
        ((GtkCellEditable.StartEditingSignal) handler).onStartEditing((CellEditable) objectFor(source), (Event) boxedFor(Event.class, event));
    }
}

