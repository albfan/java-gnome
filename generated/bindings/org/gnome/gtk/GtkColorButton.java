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
import org.gnome.gtk.ColorButton;
import org.gnome.gtk.Plumbing;

final class GtkColorButton extends Plumbing
{
    private GtkColorButton() {}

    static final long createColorButton() {
        long result;

        synchronized (lock) {
            result = gtk_color_button_new();

            return result;
        }
    }

    private static native final long gtk_color_button_new();

    @SuppressWarnings("unused")
    static final long createColorButtonWithColor(FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkColor*");
    }

    static final long createColorButtonWithRgba(RGBA rgba) {
        long result;

        if (rgba == null) {
            throw new IllegalArgumentException("rgba can't be null");
        }

        synchronized (lock) {
            result = gtk_color_button_new_with_rgba(pointerOf(rgba));

            return result;
        }
    }

    private static native final long gtk_color_button_new_with_rgba(long rgba);

    static final char getAlpha(ColorButton self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_button_get_alpha(pointerOf(self));

            return result;
        }
    }

    private static native final char gtk_color_button_get_alpha(long self);

    @SuppressWarnings("unused")
    static final void getColor(ColorButton self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor*");
    }

    static final void getRgba(ColorButton self, org.gnome.gdk.RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_button_get_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gtk_color_button_get_rgba(long self, long rgba);

    static final String getTitle(ColorButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_button_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_color_button_get_title(long self);

    static final boolean getUseAlpha(ColorButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_color_button_get_use_alpha(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_color_button_get_use_alpha(long self);

    static final void setAlpha(ColorButton self, char alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_button_set_alpha(pointerOf(self), alpha);
        }
    }

    private static native final void gtk_color_button_set_alpha(long self, char alpha);

    @SuppressWarnings("unused")
    static final void setColor(ColorButton self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkColor*");
    }

    static final void setRgba(ColorButton self, RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rgba == null) {
            throw new IllegalArgumentException("rgba can't be null");
        }

        synchronized (lock) {
            gtk_color_button_set_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gtk_color_button_set_rgba(long self, long rgba);

    static final void setTitle(ColorButton self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_color_button_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_color_button_set_title(long self, String title);

    static final void setUseAlpha(ColorButton self, boolean useAlpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_color_button_set_use_alpha(pointerOf(self), useAlpha);
        }
    }

    private static native final void gtk_color_button_set_use_alpha(long self, boolean useAlpha);

    interface ColorSetSignal extends Signal
    {
        void onColorSet(ColorButton source);
    }

    static final void connect(ColorButton self, GtkColorButton.ColorSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkColorButton.class, "color-set", after);
    }

    protected static final void receiveColorSet(Signal handler, long source) {
        ((GtkColorButton.ColorSetSignal) handler).onColorSet((ColorButton) objectFor(source));
    }
}

