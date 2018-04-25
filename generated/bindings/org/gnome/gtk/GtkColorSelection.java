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
import org.gnome.glib.Signal;
import org.gnome.gtk.ColorSelection;
import org.gnome.gtk.Plumbing;

final class GtkColorSelection extends Plumbing
{
    private GtkColorSelection() {}

    static final long createColorSelection() {
        long result;

        synchronized (lock) {
            result = gtk_color_selection_new();

            return result;
        }
    }

    private static native final long gtk_color_selection_new();

    static final char getCurrentAlpha(ColorSelection self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_selection_get_current_alpha(pointerOf(self));

            return result;
        }
    }

    private static native final char gtk_color_selection_get_current_alpha(long self);

    @SuppressWarnings("unused")
    static final void getCurrentColor(ColorSelection self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor*");
    }

    static final void getCurrentRgba(ColorSelection self, RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_get_current_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gtk_color_selection_get_current_rgba(long self, long rgba);

    static final boolean getHasOpacityControl(ColorSelection self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_selection_get_has_opacity_control(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_color_selection_get_has_opacity_control(long self);

    static final boolean getHasPalette(ColorSelection self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_selection_get_has_palette(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_color_selection_get_has_palette(long self);

    static final char getPreviousAlpha(ColorSelection self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_selection_get_previous_alpha(pointerOf(self));

            return result;
        }
    }

    private static native final char gtk_color_selection_get_previous_alpha(long self);

    @SuppressWarnings("unused")
    static final void getPreviousColor(ColorSelection self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor*");
    }

    static final void getPreviousRgba(ColorSelection self, RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_get_previous_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gtk_color_selection_get_previous_rgba(long self, long rgba);

    static final boolean isAdjusting(ColorSelection self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_selection_is_adjusting(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_color_selection_is_adjusting(long self);

    static final void setCurrentAlpha(ColorSelection self, char alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_set_current_alpha(pointerOf(self), alpha);
        }
    }

    private static native final void gtk_color_selection_set_current_alpha(long self, char alpha);

    @SuppressWarnings("unused")
    static final void setCurrentColor(ColorSelection self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkColor*");
    }

    static final void setCurrentRgba(ColorSelection self, org.gnome.gdk.RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rgba == null) {
            throw new IllegalArgumentException("rgba can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_set_current_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gtk_color_selection_set_current_rgba(long self, long rgba);

    static final void setHasOpacityControl(ColorSelection self, boolean hasOpacity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_set_has_opacity_control(pointerOf(self), hasOpacity);
        }
    }

    private static native final void gtk_color_selection_set_has_opacity_control(long self, boolean hasOpacity);

    static final void setHasPalette(ColorSelection self, boolean hasPalette) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_set_has_palette(pointerOf(self), hasPalette);
        }
    }

    private static native final void gtk_color_selection_set_has_palette(long self, boolean hasPalette);

    static final void setPreviousAlpha(ColorSelection self, char alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_set_previous_alpha(pointerOf(self), alpha);
        }
    }

    private static native final void gtk_color_selection_set_previous_alpha(long self, char alpha);

    @SuppressWarnings("unused")
    static final void setPreviousColor(ColorSelection self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkColor*");
    }

    static final void setPreviousRgba(ColorSelection self, org.gnome.gdk.RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rgba == null) {
            throw new IllegalArgumentException("rgba can't be null");
        }

        synchronized (lock) {
            gtk_color_selection_set_previous_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gtk_color_selection_set_previous_rgba(long self, long rgba);

    @SuppressWarnings("unused")
    static final boolean paletteFromString(String str, FIXME colors, int[] nColors) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor**");
    }

    @SuppressWarnings("unused")
    static final String paletteToString(FIXME colors, int nColors) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor*");
    }

    @SuppressWarnings("unused")
    static final FIXME setChangePaletteWithScreenHook(FIXME func) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkColorSelectionChangePaletteWithScreenFunc");
    }

    interface ColorChangedSignal extends Signal
    {
        void onColorChanged(ColorSelection source);
    }

    static final void connect(ColorSelection self, GtkColorSelection.ColorChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkColorSelection.class, "color-changed", after);
    }

    protected static final void receiveColorChanged(Signal handler, long source) {
        ((GtkColorSelection.ColorChangedSignal) handler).onColorChanged((ColorSelection) objectFor(source));
    }
}

