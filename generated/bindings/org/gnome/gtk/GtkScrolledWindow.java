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
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.CornerType;
import org.gnome.gtk.DirectionType;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PolicyType;
import org.gnome.gtk.PositionType;
import org.gnome.gtk.ScrollType;
import org.gnome.gtk.ScrolledWindow;
import org.gnome.gtk.ShadowType;
import org.gnome.gtk.Widget;

final class GtkScrolledWindow extends Plumbing
{
    private GtkScrolledWindow() {}

    static final long createScrolledWindow(Adjustment hadjustment, Adjustment vadjustment) {
        long result;

        synchronized (lock) {
            result = gtk_scrolled_window_new(pointerOf(hadjustment), pointerOf(vadjustment));

            return result;
        }
    }

    private static native final long gtk_scrolled_window_new(long hadjustment, long vadjustment);

    static final void addWithViewport(ScrolledWindow self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_add_with_viewport(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_scrolled_window_add_with_viewport(long self, long child);

    static final boolean getCaptureButtonPress(ScrolledWindow self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_capture_button_press(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_scrolled_window_get_capture_button_press(long self);

    static final Adjustment getHadjustment(ScrolledWindow self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_hadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_scrolled_window_get_hadjustment(long self);

    static final Widget getHscrollbar(ScrolledWindow self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_hscrollbar(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_scrolled_window_get_hscrollbar(long self);

    static final boolean getKineticScrolling(ScrolledWindow self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_kinetic_scrolling(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_scrolled_window_get_kinetic_scrolling(long self);

    static final int getMaxContentHeight(ScrolledWindow self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_max_content_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_scrolled_window_get_max_content_height(long self);

    static final int getMaxContentWidth(ScrolledWindow self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_max_content_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_scrolled_window_get_max_content_width(long self);

    static final int getMinContentHeight(ScrolledWindow self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_min_content_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_scrolled_window_get_min_content_height(long self);

    static final int getMinContentWidth(ScrolledWindow self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_min_content_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_scrolled_window_get_min_content_width(long self);

    static final boolean getOverlayScrolling(ScrolledWindow self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_overlay_scrolling(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_scrolled_window_get_overlay_scrolling(long self);

    static final CornerType getPlacement(ScrolledWindow self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_placement(pointerOf(self));

            return (CornerType) enumFor(CornerType.class, result);
        }
    }

    private static native final int gtk_scrolled_window_get_placement(long self);

    static final void getPolicy(ScrolledWindow self, PolicyType[] hscrollbarPolicy, PolicyType[] vscrollbarPolicy) {
        int[] _hscrollbarPolicy;
        int[] _vscrollbarPolicy;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _hscrollbarPolicy = numsOf(hscrollbarPolicy);

        _vscrollbarPolicy = numsOf(vscrollbarPolicy);

        synchronized (lock) {
            gtk_scrolled_window_get_policy(pointerOf(self), _hscrollbarPolicy, _vscrollbarPolicy);
            fillEnumArray(PolicyType.class, hscrollbarPolicy, _hscrollbarPolicy);
            fillEnumArray(PolicyType.class, vscrollbarPolicy, _vscrollbarPolicy);
        }
    }

    private static native final void gtk_scrolled_window_get_policy(long self, int[] hscrollbarPolicy, int[] vscrollbarPolicy);

    static final boolean getPropagateNaturalHeight(ScrolledWindow self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_propagate_natural_height(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_scrolled_window_get_propagate_natural_height(long self);

    static final boolean getPropagateNaturalWidth(ScrolledWindow self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_propagate_natural_width(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_scrolled_window_get_propagate_natural_width(long self);

    static final ShadowType getShadowType(ScrolledWindow self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_shadow_type(pointerOf(self));

            return (ShadowType) enumFor(ShadowType.class, result);
        }
    }

    private static native final int gtk_scrolled_window_get_shadow_type(long self);

    static final Adjustment getVadjustment(ScrolledWindow self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_vadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_scrolled_window_get_vadjustment(long self);

    static final Widget getVscrollbar(ScrolledWindow self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_scrolled_window_get_vscrollbar(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_scrolled_window_get_vscrollbar(long self);

    static final void setCaptureButtonPress(ScrolledWindow self, boolean captureButtonPress) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_capture_button_press(pointerOf(self), captureButtonPress);
        }
    }

    private static native final void gtk_scrolled_window_set_capture_button_press(long self, boolean captureButtonPress);

    static final void setHadjustment(ScrolledWindow self, Adjustment hadjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (hadjustment == null) {
            throw new IllegalArgumentException("hadjustment can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_hadjustment(pointerOf(self), pointerOf(hadjustment));
        }
    }

    private static native final void gtk_scrolled_window_set_hadjustment(long self, long hadjustment);

    static final void setKineticScrolling(ScrolledWindow self, boolean kineticScrolling) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_kinetic_scrolling(pointerOf(self), kineticScrolling);
        }
    }

    private static native final void gtk_scrolled_window_set_kinetic_scrolling(long self, boolean kineticScrolling);

    static final void setMaxContentHeight(ScrolledWindow self, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_max_content_height(pointerOf(self), height);
        }
    }

    private static native final void gtk_scrolled_window_set_max_content_height(long self, int height);

    static final void setMaxContentWidth(ScrolledWindow self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_max_content_width(pointerOf(self), width);
        }
    }

    private static native final void gtk_scrolled_window_set_max_content_width(long self, int width);

    static final void setMinContentHeight(ScrolledWindow self, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_min_content_height(pointerOf(self), height);
        }
    }

    private static native final void gtk_scrolled_window_set_min_content_height(long self, int height);

    static final void setMinContentWidth(ScrolledWindow self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_min_content_width(pointerOf(self), width);
        }
    }

    private static native final void gtk_scrolled_window_set_min_content_width(long self, int width);

    static final void setOverlayScrolling(ScrolledWindow self, boolean overlayScrolling) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_overlay_scrolling(pointerOf(self), overlayScrolling);
        }
    }

    private static native final void gtk_scrolled_window_set_overlay_scrolling(long self, boolean overlayScrolling);

    static final void setPlacement(ScrolledWindow self, CornerType windowPlacement) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (windowPlacement == null) {
            throw new IllegalArgumentException("windowPlacement can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_placement(pointerOf(self), numOf(windowPlacement));
        }
    }

    private static native final void gtk_scrolled_window_set_placement(long self, int windowPlacement);

    static final void setPolicy(ScrolledWindow self, PolicyType hscrollbarPolicy, PolicyType vscrollbarPolicy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (hscrollbarPolicy == null) {
            throw new IllegalArgumentException("hscrollbarPolicy can't be null");
        }

        if (vscrollbarPolicy == null) {
            throw new IllegalArgumentException("vscrollbarPolicy can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_policy(pointerOf(self), numOf(hscrollbarPolicy), numOf(vscrollbarPolicy));
        }
    }

    private static native final void gtk_scrolled_window_set_policy(long self, int hscrollbarPolicy, int vscrollbarPolicy);

    static final void setPropagateNaturalHeight(ScrolledWindow self, boolean propagate) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_propagate_natural_height(pointerOf(self), propagate);
        }
    }

    private static native final void gtk_scrolled_window_set_propagate_natural_height(long self, boolean propagate);

    static final void setPropagateNaturalWidth(ScrolledWindow self, boolean propagate) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_propagate_natural_width(pointerOf(self), propagate);
        }
    }

    private static native final void gtk_scrolled_window_set_propagate_natural_width(long self, boolean propagate);

    static final void setShadowType(ScrolledWindow self, ShadowType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_shadow_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gtk_scrolled_window_set_shadow_type(long self, int type);

    static final void setVadjustment(ScrolledWindow self, Adjustment vadjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (vadjustment == null) {
            throw new IllegalArgumentException("vadjustment can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_set_vadjustment(pointerOf(self), pointerOf(vadjustment));
        }
    }

    private static native final void gtk_scrolled_window_set_vadjustment(long self, long vadjustment);

    static final void unsetPlacement(ScrolledWindow self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_scrolled_window_unset_placement(pointerOf(self));
        }
    }

    private static native final void gtk_scrolled_window_unset_placement(long self);

    interface MoveFocusOutSignal extends Signal
    {
        void onMoveFocusOut(ScrolledWindow source, DirectionType direction);
    }

    static final void connect(ScrolledWindow self, GtkScrolledWindow.MoveFocusOutSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScrolledWindow.class, "move-focus-out", after);
    }

    protected static final void receiveMoveFocusOut(Signal handler, long source, int direction) {
        ((GtkScrolledWindow.MoveFocusOutSignal) handler).onMoveFocusOut((ScrolledWindow) objectFor(source), (DirectionType) enumFor(DirectionType.class, direction));
    }

    interface ScrollChildSignal extends Signal
    {
        boolean onScrollChild(ScrolledWindow source, ScrollType scroll, boolean horizontal);
    }

    static final void connect(ScrolledWindow self, GtkScrolledWindow.ScrollChildSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScrolledWindow.class, "scroll-child", after);
    }

    protected static final boolean receiveScrollChild(Signal handler, long source, int scroll, boolean horizontal) {
        boolean result;

        result = ((GtkScrolledWindow.ScrollChildSignal) handler).onScrollChild((ScrolledWindow) objectFor(source), (ScrollType) enumFor(ScrollType.class, scroll), horizontal);

        return result;
    }

    interface EdgeOvershotSignal extends Signal
    {
        void onEdgeOvershot(ScrolledWindow source, PositionType pos);
    }

    static final void connect(ScrolledWindow self, GtkScrolledWindow.EdgeOvershotSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScrolledWindow.class, "edge-overshot", after);
    }

    protected static final void receiveEdgeOvershot(Signal handler, long source, int pos) {
        ((GtkScrolledWindow.EdgeOvershotSignal) handler).onEdgeOvershot((ScrolledWindow) objectFor(source), (PositionType) enumFor(PositionType.class, pos));
    }

    interface EdgeReachedSignal extends Signal
    {
        void onEdgeReached(ScrolledWindow source, PositionType pos);
    }

    static final void connect(ScrolledWindow self, GtkScrolledWindow.EdgeReachedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkScrolledWindow.class, "edge-reached", after);
    }

    protected static final void receiveEdgeReached(Signal handler, long source, int pos) {
        ((GtkScrolledWindow.EdgeReachedSignal) handler).onEdgeReached((ScrolledWindow) objectFor(source), (PositionType) enumFor(PositionType.class, pos));
    }
}

