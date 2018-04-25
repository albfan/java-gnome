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

import org.gnome.gtk.FontSelectionDialog;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkFontSelectionDialog extends Plumbing
{
    private GtkFontSelectionDialog() {}

    static final long createFontSelectionDialog(String title) {
        long result;

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_dialog_new(title);

            return result;
        }
    }

    private static native final long gtk_font_selection_dialog_new(String title);

    static final Widget getCancelButton(FontSelectionDialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_dialog_get_cancel_button(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_dialog_get_cancel_button(long self);

    static final String getFontName(FontSelectionDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_dialog_get_font_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_font_selection_dialog_get_font_name(long self);

    static final Widget getFontSelection(FontSelectionDialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_dialog_get_font_selection(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_dialog_get_font_selection(long self);

    static final Widget getOkButton(FontSelectionDialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_dialog_get_ok_button(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_font_selection_dialog_get_ok_button(long self);

    static final String getPreviewText(FontSelectionDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_dialog_get_preview_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_font_selection_dialog_get_preview_text(long self);

    static final boolean setFontName(FontSelectionDialog self, String fontname) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fontname == null) {
            throw new IllegalArgumentException("fontname can't be null");
        }

        synchronized (lock) {
            result = gtk_font_selection_dialog_set_font_name(pointerOf(self), fontname);

            return result;
        }
    }

    private static native final boolean gtk_font_selection_dialog_set_font_name(long self, String fontname);

    static final void setPreviewText(FontSelectionDialog self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_font_selection_dialog_set_preview_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_font_selection_dialog_set_preview_text(long self, String text);
}

