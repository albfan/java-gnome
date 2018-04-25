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
import org.gnome.gtk.Justification;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TextAttributes;
import org.gnome.gtk.TextDirection;
import org.gnome.gtk.WrapMode;
import org.gnome.pango.FontDescription;
import org.gnome.pango.Language;
import org.gnome.pango.TabArray;

final class GtkTextAttributes extends Plumbing
{
    private GtkTextAttributes() {}

    static final int getRefcount(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_refcount(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_refcount(long self);

    @SuppressWarnings("unused")
    static final FIXME getAppearance(TextAttributes self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTextAppearance");
    }

    @SuppressWarnings("unused")
    static final void setAppearance(TextAttributes self, FIXME appearance) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTextAppearance");
    }

    static final Justification getJustification(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_justification(pointerOf(self));

            return (Justification) enumFor(Justification.class, result);
        }
    }

    private static native final int gtk_text_attributes_get_justification(long self);

    static final void setJustification(TextAttributes self, Justification justification) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (justification == null) {
            throw new IllegalArgumentException("justification can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_justification(pointerOf(self), numOf(justification));
        }
    }

    private static native final void gtk_text_attributes_set_justification(long self, int justification);

    static final TextDirection getDirection(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_direction(pointerOf(self));

            return (TextDirection) enumFor(TextDirection.class, result);
        }
    }

    private static native final int gtk_text_attributes_get_direction(long self);

    static final void setDirection(TextAttributes self, TextDirection direction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_direction(pointerOf(self), numOf(direction));
        }
    }

    private static native final void gtk_text_attributes_set_direction(long self, int direction);

    static final FontDescription getFont(TextAttributes self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_font(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long gtk_text_attributes_get_font(long self);

    static final void setFont(TextAttributes self, FontDescription font) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (font == null) {
            throw new IllegalArgumentException("font can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_font(pointerOf(self), pointerOf(font));
        }
    }

    private static native final void gtk_text_attributes_set_font(long self, long font);

    static final double getFontScale(TextAttributes self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_font_scale(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_text_attributes_get_font_scale(long self);

    static final void setFontScale(TextAttributes self, double fontScale) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_font_scale(pointerOf(self), fontScale);
        }
    }

    private static native final void gtk_text_attributes_set_font_scale(long self, double fontScale);

    static final int getLeftMargin(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_left_margin(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_left_margin(long self);

    static final void setLeftMargin(TextAttributes self, int leftMargin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_left_margin(pointerOf(self), leftMargin);
        }
    }

    private static native final void gtk_text_attributes_set_left_margin(long self, int leftMargin);

    static final int getRightMargin(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_right_margin(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_right_margin(long self);

    static final void setRightMargin(TextAttributes self, int rightMargin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_right_margin(pointerOf(self), rightMargin);
        }
    }

    private static native final void gtk_text_attributes_set_right_margin(long self, int rightMargin);

    static final int getIndent(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_indent(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_indent(long self);

    static final void setIndent(TextAttributes self, int indent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_indent(pointerOf(self), indent);
        }
    }

    private static native final void gtk_text_attributes_set_indent(long self, int indent);

    static final int getPixelsAboveLines(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_pixels_above_lines(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_pixels_above_lines(long self);

    static final void setPixelsAboveLines(TextAttributes self, int pixelsAboveLines) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_pixels_above_lines(pointerOf(self), pixelsAboveLines);
        }
    }

    private static native final void gtk_text_attributes_set_pixels_above_lines(long self, int pixelsAboveLines);

    static final int getPixelsBelowLines(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_pixels_below_lines(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_pixels_below_lines(long self);

    static final void setPixelsBelowLines(TextAttributes self, int pixelsBelowLines) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_pixels_below_lines(pointerOf(self), pixelsBelowLines);
        }
    }

    private static native final void gtk_text_attributes_set_pixels_below_lines(long self, int pixelsBelowLines);

    static final int getPixelsInsideWrap(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_pixels_inside_wrap(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_pixels_inside_wrap(long self);

    static final void setPixelsInsideWrap(TextAttributes self, int pixelsInsideWrap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_pixels_inside_wrap(pointerOf(self), pixelsInsideWrap);
        }
    }

    private static native final void gtk_text_attributes_set_pixels_inside_wrap(long self, int pixelsInsideWrap);

    static final TabArray getTabs(TextAttributes self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_tabs(pointerOf(self));

            return (TabArray) boxedFor(TabArray.class, result);
        }
    }

    private static native final long gtk_text_attributes_get_tabs(long self);

    static final void setTabs(TextAttributes self, TabArray tabs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tabs == null) {
            throw new IllegalArgumentException("tabs can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_tabs(pointerOf(self), pointerOf(tabs));
        }
    }

    private static native final void gtk_text_attributes_set_tabs(long self, long tabs);

    static final WrapMode getWrapMode(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_wrap_mode(pointerOf(self));

            return (WrapMode) enumFor(WrapMode.class, result);
        }
    }

    private static native final int gtk_text_attributes_get_wrap_mode(long self);

    static final void setWrapMode(TextAttributes self, WrapMode wrapMode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wrapMode == null) {
            throw new IllegalArgumentException("wrapMode can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_wrap_mode(pointerOf(self), numOf(wrapMode));
        }
    }

    private static native final void gtk_text_attributes_set_wrap_mode(long self, int wrapMode);

    static final Language getLanguage(TextAttributes self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_language(pointerOf(self));

            return (Language) boxedFor(Language.class, result);
        }
    }

    private static native final long gtk_text_attributes_get_language(long self);

    static final void setLanguage(TextAttributes self, Language language) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_language(pointerOf(self), pointerOf(language));
        }
    }

    private static native final void gtk_text_attributes_set_language(long self, long language);

    @SuppressWarnings("unused")
    static final FIXME getPgBgColor(TextAttributes self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor*");
    }

    static final int getInvisible(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_invisible(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_invisible(long self);

    static final void setInvisible(TextAttributes self, int invisible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_invisible(pointerOf(self), invisible);
        }
    }

    private static native final void gtk_text_attributes_set_invisible(long self, int invisible);

    static final int getBgFullHeight(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_bg_full_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_bg_full_height(long self);

    static final void setBgFullHeight(TextAttributes self, int bgFullHeight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_bg_full_height(pointerOf(self), bgFullHeight);
        }
    }

    private static native final void gtk_text_attributes_set_bg_full_height(long self, int bgFullHeight);

    static final int getEditable(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_editable(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_editable(long self);

    static final void setEditable(TextAttributes self, int editable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_editable(pointerOf(self), editable);
        }
    }

    private static native final void gtk_text_attributes_set_editable(long self, int editable);

    static final int getNoFallback(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_no_fallback(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_no_fallback(long self);

    static final void setNoFallback(TextAttributes self, int noFallback) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_no_fallback(pointerOf(self), noFallback);
        }
    }

    private static native final void gtk_text_attributes_set_no_fallback(long self, int noFallback);

    static final RGBA getPgBgRgba(TextAttributes self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_pg_bg_rgba(pointerOf(self));

            return (RGBA) boxedFor(RGBA.class, result);
        }
    }

    private static native final long gtk_text_attributes_get_pg_bg_rgba(long self);

    static final int getLetterSpacing(TextAttributes self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_get_letter_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_attributes_get_letter_spacing(long self);

    static final void setLetterSpacing(TextAttributes self, int letterSpacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_set_letter_spacing(pointerOf(self), letterSpacing);
        }
    }

    private static native final void gtk_text_attributes_set_letter_spacing(long self, int letterSpacing);

    static final long createTextAttributes() {
        long result;

        synchronized (lock) {
            result = gtk_text_attributes_new();

            return result;
        }
    }

    private static native final long gtk_text_attributes_new();

    static final TextAttributes copy(TextAttributes self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_copy(pointerOf(self));

            return (TextAttributes) boxedFor(TextAttributes.class, result);
        }
    }

    private static native final long gtk_text_attributes_copy(long self);

    static final void copyValues(TextAttributes self, TextAttributes dest) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dest == null) {
            throw new IllegalArgumentException("dest can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_copy_values(pointerOf(self), pointerOf(dest));
        }
    }

    private static native final void gtk_text_attributes_copy_values(long self, long dest);

    static final TextAttributes ref(TextAttributes self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_attributes_ref(pointerOf(self));

            return (TextAttributes) boxedFor(TextAttributes.class, result);
        }
    }

    private static native final long gtk_text_attributes_ref(long self);

    static final void unref(TextAttributes self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_attributes_unref(pointerOf(self));
        }
    }

    private static native final void gtk_text_attributes_unref(long self);
}

