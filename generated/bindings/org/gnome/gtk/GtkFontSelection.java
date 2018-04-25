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

import org.gnome.gtk.FontSelection;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;
import org.gnome.pango.FontFace;
import org.gnome.pango.FontFamily;

final class GtkFontSelection extends Plumbing
{
    private GtkFontSelection() {}

    static final long createFontSelection() {
        long result;

        synchronized (lock) {
            result = gtk_font_selection_new();

            return result;
        }
    }

    private static native final long gtk_font_selection_new();

    static final FontFace getFace(FontSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_face(pointerOf(self));

            return (FontFace) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_get_face(long self);

    static final Widget getFaceList(FontSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_face_list(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_get_face_list(long self);

    static final FontFamily getFamily(FontSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_family(pointerOf(self));

            return (FontFamily) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_get_family(long self);

    static final Widget getFamilyList(FontSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_family_list(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_get_family_list(long self);

    static final String getFontName(FontSelection self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_font_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_font_selection_get_font_name(long self);

    static final Widget getPreviewEntry(FontSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_preview_entry(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_get_preview_entry(long self);

    static final String getPreviewText(FontSelection self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_preview_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_font_selection_get_preview_text(long self);

    static final int getSize(FontSelection self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_font_selection_get_size(long self);

    static final Widget getSizeEntry(FontSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_size_entry(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_get_size_entry(long self);

    static final Widget getSizeList(FontSelection self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_get_size_list(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_get_size_list(long self);

    static final boolean setFontName(FontSelection self, String fontname) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fontname == null) {
            throw new IllegalArgumentException("fontname can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_set_font_name(pointerOf(self), fontname);

            return result;
        }
    }

    private static native final boolean gtk_font_selection_set_font_name(long self, String fontname);

    static final void setPreviewText(FontSelection self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_font_selection_set_preview_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_font_selection_set_preview_text(long self, String text);
}

