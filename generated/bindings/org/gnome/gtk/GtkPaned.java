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

import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.Paned;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ScrollType;
import org.gnome.gtk.Widget;

final class GtkPaned extends Plumbing
{
    private GtkPaned() {}

    static final long createPaned(Orientation orientation) {
        long result;

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            result = gtk_paned_new(numOf(orientation));

            return result;
        }
    }

    private static native final long gtk_paned_new(int orientation);

    static final void add1(Paned self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_paned_add1(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_paned_add1(long self, long child);

    static final void add2(Paned self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_paned_add2(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_paned_add2(long self, long child);

    static final Widget getChild1(Paned self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paned_get_child1(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_paned_get_child1(long self);

    static final Widget getChild2(Paned self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paned_get_child2(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_paned_get_child2(long self);

    static final Window getHandleWindow(Paned self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paned_get_handle_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_paned_get_handle_window(long self);

    static final int getPosition(Paned self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paned_get_position(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_paned_get_position(long self);

    static final boolean getWideHandle(Paned self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paned_get_wide_handle(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_paned_get_wide_handle(long self);

    static final void pack1(Paned self, Widget child, boolean resize, boolean shrink) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_paned_pack1(pointerOf(self), pointerOf(child), resize, shrink);
        }
    }

    private static native final void gtk_paned_pack1(long self, long child, boolean resize, boolean shrink);

    static final void pack2(Paned self, Widget child, boolean resize, boolean shrink) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_paned_pack2(pointerOf(self), pointerOf(child), resize, shrink);
        }
    }

    private static native final void gtk_paned_pack2(long self, long child, boolean resize, boolean shrink);

    static final void setPosition(Paned self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_paned_set_position(pointerOf(self), position);
        }
    }

    private static native final void gtk_paned_set_position(long self, int position);

    static final void setWideHandle(Paned self, boolean wide) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_paned_set_wide_handle(pointerOf(self), wide);
        }
    }

    private static native final void gtk_paned_set_wide_handle(long self, boolean wide);

    interface AcceptPositionSignal extends Signal
    {
        boolean onAcceptPosition(Paned source);
    }

    static final void connect(Paned self, GtkPaned.AcceptPositionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPaned.class, "accept-position", after);
    }

    protected static final boolean receiveAcceptPosition(Signal handler, long source) {
        boolean result;

        result = ((GtkPaned.AcceptPositionSignal) handler).onAcceptPosition((Paned) objectFor(source));

        return result;
    }

    interface CancelPositionSignal extends Signal
    {
        boolean onCancelPosition(Paned source);
    }

    static final void connect(Paned self, GtkPaned.CancelPositionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPaned.class, "cancel-position", after);
    }

    protected static final boolean receiveCancelPosition(Signal handler, long source) {
        boolean result;

        result = ((GtkPaned.CancelPositionSignal) handler).onCancelPosition((Paned) objectFor(source));

        return result;
    }

    interface CycleChildFocusSignal extends Signal
    {
        boolean onCycleChildFocus(Paned source, boolean reverse);
    }

    static final void connect(Paned self, GtkPaned.CycleChildFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPaned.class, "cycle-child-focus", after);
    }

    protected static final boolean receiveCycleChildFocus(Signal handler, long source, boolean reverse) {
        boolean result;

        result = ((GtkPaned.CycleChildFocusSignal) handler).onCycleChildFocus((Paned) objectFor(source), reverse);

        return result;
    }

    interface CycleHandleFocusSignal extends Signal
    {
        boolean onCycleHandleFocus(Paned source, boolean reverse);
    }

    static final void connect(Paned self, GtkPaned.CycleHandleFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPaned.class, "cycle-handle-focus", after);
    }

    protected static final boolean receiveCycleHandleFocus(Signal handler, long source, boolean reverse) {
        boolean result;

        result = ((GtkPaned.CycleHandleFocusSignal) handler).onCycleHandleFocus((Paned) objectFor(source), reverse);

        return result;
    }

    interface MoveHandleSignal extends Signal
    {
        boolean onMoveHandle(Paned source, ScrollType scroll);
    }

    static final void connect(Paned self, GtkPaned.MoveHandleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPaned.class, "move-handle", after);
    }

    protected static final boolean receiveMoveHandle(Signal handler, long source, int scroll) {
        boolean result;

        result = ((GtkPaned.MoveHandleSignal) handler).onMoveHandle((Paned) objectFor(source), (ScrollType) enumFor(ScrollType.class, scroll));

        return result;
    }

    interface ToggleHandleFocusSignal extends Signal
    {
        boolean onToggleHandleFocus(Paned source);
    }

    static final void connect(Paned self, GtkPaned.ToggleHandleFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPaned.class, "toggle-handle-focus", after);
    }

    protected static final boolean receiveToggleHandleFocus(Signal handler, long source) {
        boolean result;

        result = ((GtkPaned.ToggleHandleFocusSignal) handler).onToggleHandleFocus((Paned) objectFor(source));

        return result;
    }
}

