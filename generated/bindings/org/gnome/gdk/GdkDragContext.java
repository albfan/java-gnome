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
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.Device;
import org.gnome.gdk.DragAction;
import org.gnome.gdk.DragContext;
import org.gnome.gdk.DragProtocol;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;

final class GdkDragContext extends Plumbing
{
    private GdkDragContext() {}

    static final DragAction getActions(DragContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_actions(pointerOf(self));

            return (DragAction) flagFor(DragAction.class, result);
        }
    }

    private static native final int gdk_drag_context_get_actions(long self);

    static final Window getDestWindow(DragContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_dest_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_drag_context_get_dest_window(long self);

    static final Device getDevice(DragContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_device(pointerOf(self));

            return (Device) objectFor(result);
        }
    }

    private static native final long gdk_drag_context_get_device(long self);

    static final Window getDragWindow(DragContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_drag_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_drag_context_get_drag_window(long self);

    static final DragProtocol getProtocol(DragContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_protocol(pointerOf(self));

            return (DragProtocol) enumFor(DragProtocol.class, result);
        }
    }

    private static native final int gdk_drag_context_get_protocol(long self);

    static final DragAction getSelectedAction(DragContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_selected_action(pointerOf(self));

            return (DragAction) flagFor(DragAction.class, result);
        }
    }

    private static native final int gdk_drag_context_get_selected_action(long self);

    static final Window getSourceWindow(DragContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_source_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gdk_drag_context_get_source_window(long self);

    static final DragAction getSuggestedAction(DragContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_get_suggested_action(pointerOf(self));

            return (DragAction) flagFor(DragAction.class, result);
        }
    }

    private static native final int gdk_drag_context_get_suggested_action(long self);

    @SuppressWarnings("unused")
    static final FIXME listTargets(DragContext self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GdkAtom*");
    }

    static final boolean manageDnd(DragContext self, Window ipcWindow, DragAction actions) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (ipcWindow == null) {
            throw new IllegalArgumentException("ipcWindow can't be null");
        }

        if (actions == null) {
            throw new IllegalArgumentException("actions can't be null");
        }

        synchronized (lock) {
            result = gdk_drag_context_manage_dnd(pointerOf(self), pointerOf(ipcWindow), numOf(actions));

            return result;
        }
    }

    private static native final boolean gdk_drag_context_manage_dnd(long self, long ipcWindow, int actions);

    static final void setDevice(DragContext self, Device device) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            gdk_drag_context_set_device(pointerOf(self), pointerOf(device));
        }
    }

    private static native final void gdk_drag_context_set_device(long self, long device);

    static final void setHotspot(DragContext self, int hotX, int hotY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_drag_context_set_hotspot(pointerOf(self), hotX, hotY);
        }
    }

    private static native final void gdk_drag_context_set_hotspot(long self, int hotX, int hotY);

    interface ActionChangedSignal extends Signal
    {
        void onActionChanged(DragContext source, DragAction action);
    }

    static final void connect(DragContext self, GdkDragContext.ActionChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDragContext.class, "action-changed", after);
    }

    protected static final void receiveActionChanged(Signal handler, long source, int action) {
        ((GdkDragContext.ActionChangedSignal) handler).onActionChanged((DragContext) objectFor(source), (DragAction) flagFor(DragAction.class, action));
    }

    interface CancelSignal extends Signal
    {
        void onCancel(DragContext source, FIXME reason);
    }

    static final void connect(DragContext self, GdkDragContext.CancelSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDragContext.class, "cancel", after);
    }

    protected static final void receiveCancel(Signal handler, long source, java.lang.Object reason) {
        ((GdkDragContext.CancelSignal) handler).onCancel((DragContext) objectFor(source), (FIXME) reason);
    }

    interface DndFinishedSignal extends Signal
    {
        void onDndFinished(DragContext source);
    }

    static final void connect(DragContext self, GdkDragContext.DndFinishedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDragContext.class, "dnd-finished", after);
    }

    protected static final void receiveDndFinished(Signal handler, long source) {
        ((GdkDragContext.DndFinishedSignal) handler).onDndFinished((DragContext) objectFor(source));
    }

    interface DropPerformedSignal extends Signal
    {
        void onDropPerformed(DragContext source, int time);
    }

    static final void connect(DragContext self, GdkDragContext.DropPerformedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDragContext.class, "drop-performed", after);
    }

    protected static final void receiveDropPerformed(Signal handler, long source, int time) {
        ((GdkDragContext.DropPerformedSignal) handler).onDropPerformed((DragContext) objectFor(source), time);
    }
}

