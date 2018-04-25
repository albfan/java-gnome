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
import org.gnome.gtk.FontButton;
import org.gnome.gtk.Plumbing;

final class GtkFontButton extends Plumbing
{
    private GtkFontButton() {}

    static final long createFontButton() {
        long result;

        synchronized (lock) {
            result = gtk_font_button_new();

            return result;
        }
    }

    private static native final long gtk_font_button_new();

    static final long createFontButtonWithFont(String fontname) {
        long result;

        if (fontname == null) {
            throw new IllegalArgumentException("fontname can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_new_with_font(fontname);

            return result;
        }
    }

    private static native final long gtk_font_button_new_with_font(String fontname);

    static final String getFontName(FontButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_get_font_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_font_button_get_font_name(long self);

    static final boolean getShowSize(FontButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_get_show_size(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_font_button_get_show_size(long self);

    static final boolean getShowStyle(FontButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_get_show_style(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_font_button_get_show_style(long self);

    static final String getTitle(FontButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_font_button_get_title(long self);

    static final boolean getUseFont(FontButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_get_use_font(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_font_button_get_use_font(long self);

    static final boolean getUseSize(FontButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_get_use_size(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_font_button_get_use_size(long self);

    static final boolean setFontName(FontButton self, String fontname) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fontname == null) {
            throw new IllegalArgumentException("fontname can't be null");
        }

        synchronized (lock) {
            result = gtk_font_button_set_font_name(pointerOf(self), fontname);

            return result;
        }
    }

    private static native final boolean gtk_font_button_set_font_name(long self, String fontname);

    static final void setShowSize(FontButton self, boolean showSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_font_button_set_show_size(pointerOf(self), showSize);
        }
    }

    private static native final void gtk_font_button_set_show_size(long self, boolean showSize);

    static final void setShowStyle(FontButton self, boolean showStyle) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_font_button_set_show_style(pointerOf(self), showStyle);
        }
    }

    private static native final void gtk_font_button_set_show_style(long self, boolean showStyle);

    static final void setTitle(FontButton self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_font_button_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_font_button_set_title(long self, String title);

    static final void setUseFont(FontButton self, boolean useFont) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_font_button_set_use_font(pointerOf(self), useFont);
        }
    }

    private static native final void gtk_font_button_set_use_font(long self, boolean useFont);

    static final void setUseSize(FontButton self, boolean useSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_font_button_set_use_size(pointerOf(self), useSize);
        }
    }

    private static native final void gtk_font_button_set_use_size(long self, boolean useSize);

    interface FontSetSignal extends Signal
    {
        void onFontSet(FontButton source);
    }

    static final void connect(FontButton self, GtkFontButton.FontSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFontButton.class, "font-set", after);
    }

    protected static final void receiveFontSet(Signal handler, long source) {
        ((GtkFontButton.FontSetSignal) handler).onFontSet((FontButton) objectFor(source));
    }
}

