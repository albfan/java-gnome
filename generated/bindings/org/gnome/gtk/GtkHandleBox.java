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

import org.gnome.glib.Signal;
import org.gnome.gtk.HandleBox;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PositionType;
import org.gnome.gtk.ShadowType;
import org.gnome.gtk.Widget;

final class GtkHandleBox extends Plumbing
{
    private GtkHandleBox() {}

    static final long createHandleBox() {
        long result;

        synchronized (lock) {
            result = gtk_handle_box_new();

            return result;
        }
    }

    private static native final long gtk_handle_box_new();

    static final boolean getChildDetached(HandleBox self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_handle_box_get_child_detached(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_handle_box_get_child_detached(long self);

    static final PositionType getHandlePosition(HandleBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_handle_box_get_handle_position(pointerOf(self));

            return (PositionType) enumFor(PositionType.class, result);
        }
    }

    private static native final int gtk_handle_box_get_handle_position(long self);

    static final ShadowType getShadowType(HandleBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_handle_box_get_shadow_type(pointerOf(self));

            return (ShadowType) enumFor(ShadowType.class, result);
        }
    }

    private static native final int gtk_handle_box_get_shadow_type(long self);

    static final PositionType getSnapEdge(HandleBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_handle_box_get_snap_edge(pointerOf(self));

            return (PositionType) enumFor(PositionType.class, result);
        }
    }

    private static native final int gtk_handle_box_get_snap_edge(long self);

    static final void setHandlePosition(HandleBox self, PositionType position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (position == null) {
            throw new IllegalArgumentException("position can't be null");
        }

        synchronized (lock) {
            gtk_handle_box_set_handle_position(pointerOf(self), numOf(position));
        }
    }

    private static native final void gtk_handle_box_set_handle_position(long self, int position);

    static final void setShadowType(HandleBox self, ShadowType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_handle_box_set_shadow_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gtk_handle_box_set_shadow_type(long self, int type);

    static final void setSnapEdge(HandleBox self, PositionType edge) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (edge == null) {
            throw new IllegalArgumentException("edge can't be null");
        }

        synchronized (lock) {
            gtk_handle_box_set_snap_edge(pointerOf(self), numOf(edge));
        }
    }

    private static native final void gtk_handle_box_set_snap_edge(long self, int edge);

    interface ChildAttachedSignal extends Signal
    {
        void onChildAttached(HandleBox source, Widget child);
    }

    static final void connect(HandleBox self, GtkHandleBox.ChildAttachedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkHandleBox.class, "child-attached", after);
    }

    protected static final void receiveChildAttached(Signal handler, long source, long child) {
        ((GtkHandleBox.ChildAttachedSignal) handler).onChildAttached((HandleBox) objectFor(source), (Widget) objectFor(child));
    }

    interface ChildDetachedSignal extends Signal
    {
        void onChildDetached(HandleBox source, Widget child);
    }

    static final void connect(HandleBox self, GtkHandleBox.ChildDetachedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkHandleBox.class, "child-detached", after);
    }

    protected static final void receiveChildDetached(Signal handler, long source, long child) {
        ((GtkHandleBox.ChildDetachedSignal) handler).onChildDetached((HandleBox) objectFor(source), (Widget) objectFor(child));
    }
}

