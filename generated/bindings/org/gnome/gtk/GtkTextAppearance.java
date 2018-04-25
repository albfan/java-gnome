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
import org.gnome.gtk.Plumbing;

final class GtkTextAppearance extends Plumbing
{
    private GtkTextAppearance() {}

    @SuppressWarnings("unused")
    static final FIXME getBgColor(TextAppearance self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor");
    }

    @SuppressWarnings("unused")
    static final void setBgColor(TextAppearance self, FIXME bgColor) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor");
    }

    @SuppressWarnings("unused")
    static final FIXME getFgColor(TextAppearance self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor");
    }

    @SuppressWarnings("unused")
    static final void setFgColor(TextAppearance self, FIXME fgColor) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkColor");
    }

    static final int getRise(TextAppearance self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_appearance_get_rise(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_appearance_get_rise(long self);

    static final void setRise(TextAppearance self, int rise) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_appearance_set_rise(pointerOf(self), rise);
        }
    }

    private static native final void gtk_text_appearance_set_rise(long self, int rise);

    static final int getUnderline(TextAppearance self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_appearance_get_underline(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_appearance_get_underline(long self);

    static final void setUnderline(TextAppearance self, int underline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_appearance_set_underline(pointerOf(self), underline);
        }
    }

    private static native final void gtk_text_appearance_set_underline(long self, int underline);

    static final int getStrikethrough(TextAppearance self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_appearance_get_strikethrough(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_appearance_get_strikethrough(long self);

    static final void setStrikethrough(TextAppearance self, int strikethrough) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_appearance_set_strikethrough(pointerOf(self), strikethrough);
        }
    }

    private static native final void gtk_text_appearance_set_strikethrough(long self, int strikethrough);

    static final int getDrawBg(TextAppearance self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_appearance_get_draw_bg(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_appearance_get_draw_bg(long self);

    static final void setDrawBg(TextAppearance self, int drawBg) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_appearance_set_draw_bg(pointerOf(self), drawBg);
        }
    }

    private static native final void gtk_text_appearance_set_draw_bg(long self, int drawBg);

    static final int getInsideSelection(TextAppearance self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_appearance_get_inside_selection(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_appearance_get_inside_selection(long self);

    static final void setInsideSelection(TextAppearance self, int insideSelection) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_appearance_set_inside_selection(pointerOf(self), insideSelection);
        }
    }

    private static native final void gtk_text_appearance_set_inside_selection(long self, int insideSelection);

    static final int getIsText(TextAppearance self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_appearance_get_is_text(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_appearance_get_is_text(long self);

    static final void setIsText(TextAppearance self, int isText) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_appearance_set_is_text(pointerOf(self), isText);
        }
    }

    private static native final void gtk_text_appearance_set_is_text(long self, int isText);
}

