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
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.atk.Component;
import org.gnome.atk.CoordType;
import org.gnome.atk.Layer;
import org.gnome.atk.Plumbing;
import org.gnome.atk.Rectangle;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkComponent extends Plumbing
{
    private AtkComponent() {}

    @SuppressWarnings("unused")
    static final int addFocusHandler(Component self, FIXME handler) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkFocusHandler");
    }

    static final boolean contains(Component self, int x, int y, CoordType coordType) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            result = atk_component_contains(pointerOf((Object) self), x, y, numOf(coordType));

            return result;
        }
    }

    private static native final boolean atk_component_contains(long self, int x, int y, int coordType);

    static final double getAlpha(Component self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_component_get_alpha(pointerOf((Object) self));

            return result;
        }
    }

    private static native final double atk_component_get_alpha(long self);

    static final void getExtents(Component self, int[] x, int[] y, int[] width, int[] height, CoordType coordType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            atk_component_get_extents(pointerOf((Object) self), x, y, width, height, numOf(coordType));
        }
    }

    private static native final void atk_component_get_extents(long self, int[] x, int[] y, int[] width, int[] height, int coordType);

    static final Layer getLayer(Component self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_component_get_layer(pointerOf((Object) self));

            return (Layer) enumFor(Layer.class, result);
        }
    }

    private static native final int atk_component_get_layer(long self);

    static final int getMdiZorder(Component self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_component_get_mdi_zorder(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_component_get_mdi_zorder(long self);

    static final void getPosition(Component self, int[] x, int[] y, CoordType coordType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            atk_component_get_position(pointerOf((Object) self), x, y, numOf(coordType));
        }
    }

    private static native final void atk_component_get_position(long self, int[] x, int[] y, int coordType);

    static final void getSize(Component self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_component_get_size(pointerOf((Object) self), width, height);
        }
    }

    private static native final void atk_component_get_size(long self, int[] width, int[] height);

    static final boolean grabFocus(Component self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_component_grab_focus(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean atk_component_grab_focus(long self);

    static final org.gnome.atk.Object refAccessibleAtPoint(Component self, int x, int y, CoordType coordType) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            result = atk_component_ref_accessible_at_point(pointerOf((Object) self), x, y, numOf(coordType));

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long atk_component_ref_accessible_at_point(long self, int x, int y, int coordType);

    static final void removeFocusHandler(Component self, int handlerId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_component_remove_focus_handler(pointerOf((Object) self), handlerId);
        }
    }

    private static native final void atk_component_remove_focus_handler(long self, int handlerId);

    static final boolean setExtents(Component self, int x, int y, int width, int height, CoordType coordType) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            result = atk_component_set_extents(pointerOf((Object) self), x, y, width, height, numOf(coordType));

            return result;
        }
    }

    private static native final boolean atk_component_set_extents(long self, int x, int y, int width, int height, int coordType);

    static final boolean setPosition(Component self, int x, int y, CoordType coordType) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            result = atk_component_set_position(pointerOf((Object) self), x, y, numOf(coordType));

            return result;
        }
    }

    private static native final boolean atk_component_set_position(long self, int x, int y, int coordType);

    static final boolean setSize(Component self, int width, int height) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_component_set_size(pointerOf((Object) self), width, height);

            return result;
        }
    }

    private static native final boolean atk_component_set_size(long self, int width, int height);

    interface AddFocusHandlerSignal extends Signal
    {
        int onAddFocusHandler(Component source, FIXME handler0);
    }

    static final void connect(Component self, AtkComponent.AddFocusHandlerSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "add-focus-handler", after);
    }

    protected static final int receiveAddFocusHandler(Signal handler, long source, java.lang.Object handler0) {
        int result;

        result = ((AtkComponent.AddFocusHandlerSignal) handler).onAddFocusHandler((Component) objectFor(source), (FIXME) handler0);

        return result;
    }

    interface BoundsChangedSignal extends Signal
    {
        void onBoundsChanged(Component source, Rectangle bounds);
    }

    static final void connect(Component self, AtkComponent.BoundsChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "bounds-changed", after);
    }

    protected static final void receiveBoundsChanged(Signal handler, long source, long bounds) {
        ((AtkComponent.BoundsChangedSignal) handler).onBoundsChanged((Component) objectFor(source), (Rectangle) boxedFor(Rectangle.class, bounds));
    }

    interface ContainsSignal extends Signal
    {
        boolean onContains(Component source, int x, int y, CoordType coordType);
    }

    static final void connect(Component self, AtkComponent.ContainsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "contains", after);
    }

    protected static final boolean receiveContains(Signal handler, long source, int x, int y, int coordType) {
        boolean result;

        result = ((AtkComponent.ContainsSignal) handler).onContains((Component) objectFor(source), x, y, (CoordType) enumFor(CoordType.class, coordType));

        return result;
    }

    interface GetAlphaSignal extends Signal
    {
        double onGetAlpha(Component source);
    }

    static final void connect(Component self, AtkComponent.GetAlphaSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "get-alpha", after);
    }

    protected static final double receiveGetAlpha(Signal handler, long source) {
        double result;

        result = ((AtkComponent.GetAlphaSignal) handler).onGetAlpha((Component) objectFor(source));

        return result;
    }

    interface GetExtentsSignal extends Signal
    {
        void onGetExtents(Component source, int[] x, int[] y, int[] width, int[] height, CoordType coordType);
    }

    static final void connect(Component self, AtkComponent.GetExtentsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "get-extents", after);
    }

    protected static final void receiveGetExtents(Signal handler, long source, int[] x, int[] y, int[] width, int[] height, int coordType) {
        ((AtkComponent.GetExtentsSignal) handler).onGetExtents((Component) objectFor(source), x, y, width, height, (CoordType) enumFor(CoordType.class, coordType));
    }

    interface GetLayerSignal extends Signal
    {
        Layer onGetLayer(Component source);
    }

    static final void connect(Component self, AtkComponent.GetLayerSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "get-layer", after);
    }

    protected static final int receiveGetLayer(Signal handler, long source) {
        Layer result;

        result = ((AtkComponent.GetLayerSignal) handler).onGetLayer((Component) objectFor(source));

        return numOf(result);
    }

    interface GetMdiZorderSignal extends Signal
    {
        int onGetMdiZorder(Component source);
    }

    static final void connect(Component self, AtkComponent.GetMdiZorderSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "get-mdi-zorder", after);
    }

    protected static final int receiveGetMdiZorder(Signal handler, long source) {
        int result;

        result = ((AtkComponent.GetMdiZorderSignal) handler).onGetMdiZorder((Component) objectFor(source));

        return result;
    }

    interface GetPositionSignal extends Signal
    {
        void onGetPosition(Component source, int[] x, int[] y, CoordType coordType);
    }

    static final void connect(Component self, AtkComponent.GetPositionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "get-position", after);
    }

    protected static final void receiveGetPosition(Signal handler, long source, int[] x, int[] y, int coordType) {
        ((AtkComponent.GetPositionSignal) handler).onGetPosition((Component) objectFor(source), x, y, (CoordType) enumFor(CoordType.class, coordType));
    }

    interface GetSizeSignal extends Signal
    {
        void onGetSize(Component source, int[] width, int[] height);
    }

    static final void connect(Component self, AtkComponent.GetSizeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "get-size", after);
    }

    protected static final void receiveGetSize(Signal handler, long source, int[] width, int[] height) {
        ((AtkComponent.GetSizeSignal) handler).onGetSize((Component) objectFor(source), width, height);
    }

    interface GrabFocusSignal extends Signal
    {
        boolean onGrabFocus(Component source);
    }

    static final void connect(Component self, AtkComponent.GrabFocusSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "grab-focus", after);
    }

    protected static final boolean receiveGrabFocus(Signal handler, long source) {
        boolean result;

        result = ((AtkComponent.GrabFocusSignal) handler).onGrabFocus((Component) objectFor(source));

        return result;
    }

    interface RefAccessibleAtPointSignal extends Signal
    {
        org.gnome.atk.Object onRefAccessibleAtPoint(Component source, int x, int y, CoordType coordType);
    }

    static final void connect(Component self, AtkComponent.RefAccessibleAtPointSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "ref-accessible-at-point", after);
    }

    protected static final long receiveRefAccessibleAtPoint(Signal handler, long source, int x, int y, int coordType) {
        org.gnome.atk.Object result;

        result = ((AtkComponent.RefAccessibleAtPointSignal) handler).onRefAccessibleAtPoint((Component) objectFor(source), x, y, (CoordType) enumFor(CoordType.class, coordType));

        return pointerOf(result);
    }

    interface RemoveFocusHandlerSignal extends Signal
    {
        void onRemoveFocusHandler(Component source, int handlerId);
    }

    static final void connect(Component self, AtkComponent.RemoveFocusHandlerSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "remove-focus-handler", after);
    }

    protected static final void receiveRemoveFocusHandler(Signal handler, long source, int handlerId) {
        ((AtkComponent.RemoveFocusHandlerSignal) handler).onRemoveFocusHandler((Component) objectFor(source), handlerId);
    }

    interface SetExtentsSignal extends Signal
    {
        boolean onSetExtents(Component source, int x, int y, int width, int height, CoordType coordType);
    }

    static final void connect(Component self, AtkComponent.SetExtentsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "set-extents", after);
    }

    protected static final boolean receiveSetExtents(Signal handler, long source, int x, int y, int width, int height, int coordType) {
        boolean result;

        result = ((AtkComponent.SetExtentsSignal) handler).onSetExtents((Component) objectFor(source), x, y, width, height, (CoordType) enumFor(CoordType.class, coordType));

        return result;
    }

    interface SetPositionSignal extends Signal
    {
        boolean onSetPosition(Component source, int x, int y, CoordType coordType);
    }

    static final void connect(Component self, AtkComponent.SetPositionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "set-position", after);
    }

    protected static final boolean receiveSetPosition(Signal handler, long source, int x, int y, int coordType) {
        boolean result;

        result = ((AtkComponent.SetPositionSignal) handler).onSetPosition((Component) objectFor(source), x, y, (CoordType) enumFor(CoordType.class, coordType));

        return result;
    }

    interface SetSizeSignal extends Signal
    {
        boolean onSetSize(Component source, int width, int height);
    }

    static final void connect(Component self, AtkComponent.SetSizeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkComponent.class, "set-size", after);
    }

    protected static final boolean receiveSetSize(Signal handler, long source, int width, int height) {
        boolean result;

        result = ((AtkComponent.SetSizeSignal) handler).onSetSize((Component) objectFor(source), width, height);

        return result;
    }
}

