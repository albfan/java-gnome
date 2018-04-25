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
package org.gnome.pango;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.freedesktop.cairo.FontOptions;
import org.gnome.pango.Context;
import org.gnome.pango.Direction;
import org.gnome.pango.Font;
import org.gnome.pango.FontDescription;
import org.gnome.pango.FontMap;
import org.gnome.pango.FontMetrics;
import org.gnome.pango.Fontset;
import org.gnome.pango.Gravity;
import org.gnome.pango.GravityHint;
import org.gnome.pango.Language;
import org.gnome.pango.Matrix;
import org.gnome.pango.Plumbing;

final class PangoContext extends Plumbing
{
    private PangoContext() {}

    static final long createContext() {
        long result;

        synchronized (lock) {
            result = pango_context_new();

            return result;
        }
    }

    private static native final long pango_context_new();

    static final void changed(Context self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_context_changed(pointerOf(self));
        }
    }

    private static native final void pango_context_changed(long self);

    static final Direction getBaseDir(Context self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_base_dir(pointerOf(self));

            return (Direction) enumFor(Direction.class, result);
        }
    }

    private static native final int pango_context_get_base_dir(long self);

    static final Gravity getBaseGravity(Context self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_base_gravity(pointerOf(self));

            return (Gravity) enumFor(Gravity.class, result);
        }
    }

    private static native final int pango_context_get_base_gravity(long self);

    static final FontDescription getFontDescription(Context self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_font_description(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long pango_context_get_font_description(long self);

    static final FontMap getFontMap(Context self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_font_map(pointerOf(self));

            return (FontMap) objectFor(result);
        }
    }

    private static native final long pango_context_get_font_map(long self);

    static final Gravity getGravity(Context self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_gravity(pointerOf(self));

            return (Gravity) enumFor(Gravity.class, result);
        }
    }

    private static native final int pango_context_get_gravity(long self);

    static final GravityHint getGravityHint(Context self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_gravity_hint(pointerOf(self));

            return (GravityHint) enumFor(GravityHint.class, result);
        }
    }

    private static native final int pango_context_get_gravity_hint(long self);

    static final Language getLanguage(Context self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_language(pointerOf(self));

            return (Language) boxedFor(Language.class, result);
        }
    }

    private static native final long pango_context_get_language(long self);

    static final Matrix getMatrix(Context self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_matrix(pointerOf(self));

            return (Matrix) boxedFor(Matrix.class, result);
        }
    }

    private static native final long pango_context_get_matrix(long self);

    static final FontMetrics getMetrics(Context self, org.gnome.pango.FontDescription desc, Language language) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_metrics(pointerOf(self), pointerOf(desc), pointerOf(language));

            return (FontMetrics) boxedFor(FontMetrics.class, result);
        }
    }

    private static native final long pango_context_get_metrics(long self, long desc, long language);

    static final int getSerial(Context self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_context_get_serial(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_context_get_serial(long self);

    @SuppressWarnings("unused")
    static final void listFamilies(Context self, FIXME families, int[] nFamilies) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoFontFamily***");
    }

    static final Font loadFont(Context self, org.gnome.pango.FontDescription desc) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (desc == null) {
            throw new IllegalArgumentException("desc can't be null");
        }

        synchronized (lock) {
            result = pango_context_load_font(pointerOf(self), pointerOf(desc));

            return (Font) objectFor(result);
        }
    }

    private static native final long pango_context_load_font(long self, long desc);

    static final Fontset loadFontset(Context self, org.gnome.pango.FontDescription desc, Language language) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (desc == null) {
            throw new IllegalArgumentException("desc can't be null");
        }

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            result = pango_context_load_fontset(pointerOf(self), pointerOf(desc), pointerOf(language));

            return (Fontset) objectFor(result);
        }
    }

    private static native final long pango_context_load_fontset(long self, long desc, long language);

    static final void setBaseDir(Context self, Direction direction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            pango_context_set_base_dir(pointerOf(self), numOf(direction));
        }
    }

    private static native final void pango_context_set_base_dir(long self, int direction);

    static final void setBaseGravity(Context self, Gravity gravity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (gravity == null) {
            throw new IllegalArgumentException("gravity can't be null");
        }

        synchronized (lock) {
            pango_context_set_base_gravity(pointerOf(self), numOf(gravity));
        }
    }

    private static native final void pango_context_set_base_gravity(long self, int gravity);

    static final void setFontDescription(Context self, org.gnome.pango.FontDescription desc) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (desc == null) {
            throw new IllegalArgumentException("desc can't be null");
        }

        synchronized (lock) {
            pango_context_set_font_description(pointerOf(self), pointerOf(desc));
        }
    }

    private static native final void pango_context_set_font_description(long self, long desc);

    static final void setFontMap(Context self, FontMap fontMap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fontMap == null) {
            throw new IllegalArgumentException("fontMap can't be null");
        }

        synchronized (lock) {
            pango_context_set_font_map(pointerOf(self), pointerOf(fontMap));
        }
    }

    private static native final void pango_context_set_font_map(long self, long fontMap);

    static final void setGravityHint(Context self, GravityHint hint) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (hint == null) {
            throw new IllegalArgumentException("hint can't be null");
        }

        synchronized (lock) {
            pango_context_set_gravity_hint(pointerOf(self), numOf(hint));
        }
    }

    private static native final void pango_context_set_gravity_hint(long self, int hint);

    static final void setLanguage(Context self, Language language) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            pango_context_set_language(pointerOf(self), pointerOf(language));
        }
    }

    private static native final void pango_context_set_language(long self, long language);

    static final void setMatrix(Context self, Matrix matrix) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_context_set_matrix(pointerOf(self), pointerOf(matrix));
        }
    }

    private static native final void pango_context_set_matrix(long self, long matrix);

    static final void setFontOptions(Context self, FontOptions options) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (options == null) {
            throw new IllegalArgumentException("options can't be null");
        }

        synchronized (lock) {
            pango_cairo_context_set_font_options(pointerOf(self), pointerOf(options));
        }
    }

    private static native final void pango_cairo_context_set_font_options(long self, long options);
}

