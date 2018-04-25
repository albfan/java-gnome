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
import org.gnome.gdk.RGBA;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.glib.Value;
import org.gnome.gtk.Border;
import org.gnome.gtk.IconSet;
import org.gnome.gtk.JunctionSides;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.RegionFlags;
import org.gnome.gtk.StateFlags;
import org.gnome.gtk.StyleContext;
import org.gnome.gtk.TextDirection;
import org.gnome.pango.FontDescription;

final class GtkStyleContext extends Plumbing
{
    private GtkStyleContext() {}

    static final long createStyleContext() {
        long result;

        synchronized (lock) {
            result = gtk_style_context_new();

            return result;
        }
    }

    private static native final long gtk_style_context_new();

    static final void addClass(StyleContext self, String className) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (className == null) {
            throw new IllegalArgumentException("className can't be null");
        }

        synchronized (lock) {
            gtk_style_context_add_class(pointerOf(self), className);
        }
    }

    private static native final void gtk_style_context_add_class(long self, String className);

    @SuppressWarnings("unused")
    static final void addProvider(StyleContext self, FIXME provider, int priority) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyleProvider*");
    }

    static final void addRegion(StyleContext self, String regionName, RegionFlags flags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (regionName == null) {
            throw new IllegalArgumentException("regionName can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            gtk_style_context_add_region(pointerOf(self), regionName, numOf(flags));
        }
    }

    private static native final void gtk_style_context_add_region(long self, String regionName, int flags);

    @SuppressWarnings("unused")
    static final void cancelAnimations(StyleContext self, FIXME regionId) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final void get(StyleContext self, StateFlags state) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get(pointerOf(self), numOf(state));
        }
    }

    private static native final void gtk_style_context_get(long self, int state);

    static final void getBackgroundColor(StyleContext self, StateFlags state, RGBA color) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_background_color(pointerOf(self), numOf(state), pointerOf(color));
        }
    }

    private static native final void gtk_style_context_get_background_color(long self, int state, long color);

    static final void getBorder(StyleContext self, StateFlags state, Border border) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_border(pointerOf(self), numOf(state), pointerOf(border));
        }
    }

    private static native final void gtk_style_context_get_border(long self, int state, long border);

    static final void getBorderColor(StyleContext self, StateFlags state, RGBA color) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_border_color(pointerOf(self), numOf(state), pointerOf(color));
        }
    }

    private static native final void gtk_style_context_get_border_color(long self, int state, long color);

    static final void getColor(StyleContext self, StateFlags state, RGBA color) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_color(pointerOf(self), numOf(state), pointerOf(color));
        }
    }

    private static native final void gtk_style_context_get_color(long self, int state, long color);

    static final TextDirection getDirection(StyleContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_get_direction(pointerOf(self));

            return (TextDirection) enumFor(TextDirection.class, result);
        }
    }

    private static native final int gtk_style_context_get_direction(long self);

    static final FontDescription getFont(StyleContext self, StateFlags state) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_get_font(pointerOf(self), numOf(state));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long gtk_style_context_get_font(long self, int state);

    @SuppressWarnings("unused")
    static final FIXME getFrameClock(StyleContext self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFrameClock*");
    }

    static final JunctionSides getJunctionSides(StyleContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_get_junction_sides(pointerOf(self));

            return (JunctionSides) flagFor(JunctionSides.class, result);
        }
    }

    private static native final int gtk_style_context_get_junction_sides(long self);

    static final void getMargin(StyleContext self, StateFlags state, Border margin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_margin(pointerOf(self), numOf(state), pointerOf(margin));
        }
    }

    private static native final void gtk_style_context_get_margin(long self, int state, long margin);

    static final void getPadding(StyleContext self, StateFlags state, Border padding) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_padding(pointerOf(self), numOf(state), pointerOf(padding));
        }
    }

    private static native final void gtk_style_context_get_padding(long self, int state, long padding);

    static final StyleContext getParent(StyleContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_get_parent(pointerOf(self));

            return (StyleContext) objectFor(result);
        }
    }

    private static native final long gtk_style_context_get_parent(long self);

    @SuppressWarnings("unused")
    static final FIXME getPath(StyleContext self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GtkWidgetPath*");
    }

    static final void getProperty(StyleContext self, String property, StateFlags state, Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (property == null) {
            throw new IllegalArgumentException("property can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_property(pointerOf(self), property, numOf(state), pointerOf(value));
        }
    }

    private static native final void gtk_style_context_get_property(long self, String property, int state, long value);

    static final int getScale(StyleContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_get_scale(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_style_context_get_scale(long self);

    static final Screen getScreen(StyleContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_get_screen(pointerOf(self));

            return (Screen) objectFor(result);
        }
    }

    private static native final long gtk_style_context_get_screen(long self);

    @SuppressWarnings("unused")
    static final FIXME getSection(StyleContext self, String property) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCssSection*");
    }

    static final StateFlags getState(StyleContext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_get_state(pointerOf(self));

            return (StateFlags) flagFor(StateFlags.class, result);
        }
    }

    private static native final int gtk_style_context_get_state(long self);

    static final void getStyle(StyleContext self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_style(pointerOf(self));
        }
    }

    private static native final void gtk_style_context_get_style(long self);

    static final void getStyleProperty(StyleContext self, String propertyName, Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (propertyName == null) {
            throw new IllegalArgumentException("propertyName can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            gtk_style_context_get_style_property(pointerOf(self), propertyName, pointerOf(value));
        }
    }

    private static native final void gtk_style_context_get_style_property(long self, String propertyName, long value);

    @SuppressWarnings("unused")
    static final void getStyleValist(StyleContext self, FIXME args) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    @SuppressWarnings("unused")
    static final void getValist(StyleContext self, StateFlags state, FIXME args) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    static final boolean hasClass(StyleContext self, String className) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (className == null) {
            throw new IllegalArgumentException("className can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_has_class(pointerOf(self), className);

            return result;
        }
    }

    private static native final boolean gtk_style_context_has_class(long self, String className);

    static final boolean hasRegion(StyleContext self, String regionName, RegionFlags[] flagsReturn) {
        boolean result;
        int[] _flagsReturn;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (regionName == null) {
            throw new IllegalArgumentException("regionName can't be null");
        }

        _flagsReturn = numsOf(flagsReturn);

        synchronized (lock) {
            result = gtk_style_context_has_region(pointerOf(self), regionName, _flagsReturn);
            fillFlagArray(RegionFlags.class, flagsReturn, _flagsReturn);

            return result;
        }
    }

    private static native final boolean gtk_style_context_has_region(long self, String regionName, int[] flagsReturn);

    static final void invalidate(StyleContext self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_style_context_invalidate(pointerOf(self));
        }
    }

    private static native final void gtk_style_context_invalidate(long self);

    @SuppressWarnings("unused")
    static final FIXME listClasses(StyleContext self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-utf8*");
    }

    @SuppressWarnings("unused")
    static final FIXME listRegions(StyleContext self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-utf8*");
    }

    static final boolean lookupColor(StyleContext self, String colorName, RGBA color) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (colorName == null) {
            throw new IllegalArgumentException("colorName can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_lookup_color(pointerOf(self), colorName, pointerOf(color));

            return result;
        }
    }

    private static native final boolean gtk_style_context_lookup_color(long self, String colorName, long color);

    static final IconSet lookupIconSet(StyleContext self, String stockId) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            result = gtk_style_context_lookup_icon_set(pointerOf(self), stockId);

            return (IconSet) boxedFor(IconSet.class, result);
        }
    }

    private static native final long gtk_style_context_lookup_icon_set(long self, String stockId);

    @SuppressWarnings("unused")
    static final void notifyStateChange(StyleContext self, Window window, FIXME regionId, FIXME state, boolean stateValue) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final void popAnimatableRegion(StyleContext self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_style_context_pop_animatable_region(pointerOf(self));
        }
    }

    private static native final void gtk_style_context_pop_animatable_region(long self);

    @SuppressWarnings("unused")
    static final void pushAnimatableRegion(StyleContext self, FIXME regionId) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final void removeClass(StyleContext self, String className) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (className == null) {
            throw new IllegalArgumentException("className can't be null");
        }

        synchronized (lock) {
            gtk_style_context_remove_class(pointerOf(self), className);
        }
    }

    private static native final void gtk_style_context_remove_class(long self, String className);

    @SuppressWarnings("unused")
    static final void removeProvider(StyleContext self, FIXME provider) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyleProvider*");
    }

    static final void removeRegion(StyleContext self, String regionName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (regionName == null) {
            throw new IllegalArgumentException("regionName can't be null");
        }

        synchronized (lock) {
            gtk_style_context_remove_region(pointerOf(self), regionName);
        }
    }

    private static native final void gtk_style_context_remove_region(long self, String regionName);

    static final void restore(StyleContext self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_style_context_restore(pointerOf(self));
        }
    }

    private static native final void gtk_style_context_restore(long self);

    static final void save(StyleContext self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_style_context_save(pointerOf(self));
        }
    }

    private static native final void gtk_style_context_save(long self);

    static final void scrollAnimations(StyleContext self, Window window, int dx, int dy) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gtk_style_context_scroll_animations(pointerOf(self), pointerOf(window), dx, dy);
        }
    }

    private static native final void gtk_style_context_scroll_animations(long self, long window, int dx, int dy);

    static final void setBackground(StyleContext self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gtk_style_context_set_background(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gtk_style_context_set_background(long self, long window);

    static final void setDirection(StyleContext self, TextDirection direction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            gtk_style_context_set_direction(pointerOf(self), numOf(direction));
        }
    }

    private static native final void gtk_style_context_set_direction(long self, int direction);

    @SuppressWarnings("unused")
    static final void setFrameClock(StyleContext self, FIXME frameClock) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkFrameClock*");
    }

    static final void setJunctionSides(StyleContext self, JunctionSides sides) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sides == null) {
            throw new IllegalArgumentException("sides can't be null");
        }

        synchronized (lock) {
            gtk_style_context_set_junction_sides(pointerOf(self), numOf(sides));
        }
    }

    private static native final void gtk_style_context_set_junction_sides(long self, int sides);

    static final void setParent(StyleContext self, StyleContext parent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_style_context_set_parent(pointerOf(self), pointerOf(parent));
        }
    }

    private static native final void gtk_style_context_set_parent(long self, long parent);

    @SuppressWarnings("unused")
    static final void setPath(StyleContext self, FIXME path) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWidgetPath*");
    }

    static final void setScale(StyleContext self, int scale) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_style_context_set_scale(pointerOf(self), scale);
        }
    }

    private static native final void gtk_style_context_set_scale(long self, int scale);

    static final void setScreen(StyleContext self, Screen screen) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gtk_style_context_set_screen(pointerOf(self), pointerOf(screen));
        }
    }

    private static native final void gtk_style_context_set_screen(long self, long screen);

    static final void setState(StyleContext self, StateFlags flags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            gtk_style_context_set_state(pointerOf(self), numOf(flags));
        }
    }

    private static native final void gtk_style_context_set_state(long self, int flags);

    @SuppressWarnings("unused")
    static final boolean stateIsRunning(StyleContext self, FIXME state, double[] progress) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    @SuppressWarnings("unused")
    static final String toString(StyleContext self, FIXME flags) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyleContextPrintFlags");
    }

    @SuppressWarnings("unused")
    static final void addProviderForScreen(Screen screen, FIXME provider, int priority) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyleProvider*");
    }

    @SuppressWarnings("unused")
    static final void removeProviderForScreen(Screen screen, FIXME provider) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyleProvider*");
    }

    static final void resetWidgets(Screen screen) {
        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gtk_style_context_reset_widgets(pointerOf(screen));
        }
    }

    private static native final void gtk_style_context_reset_widgets(long screen);

    interface ChangedSignal extends Signal
    {
        void onChanged(StyleContext source);
    }

    static final void connect(StyleContext self, GtkStyleContext.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStyleContext.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkStyleContext.ChangedSignal) handler).onChanged((StyleContext) objectFor(source));
    }
}

