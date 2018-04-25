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
import org.gnome.pango.EngineLang;
import org.gnome.pango.EngineShape;
import org.gnome.pango.Font;
import org.gnome.pango.Language;
import org.gnome.pango.Plumbing;

final class PangoAnalysis extends Plumbing
{
    private PangoAnalysis() {}

    static final EngineShape getShapeEngine(Analysis self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_shape_engine(pointerOf(self));

            //EngineShape engineShape = (EngineShape) objectFor(result);
            return null/*engineShape*/;
        }
    }

    private static native final long pango_analysis_get_shape_engine(long self);

    static final void setShapeEngine(Analysis self, EngineShape shapeEngine) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (shapeEngine == null) {
            throw new IllegalArgumentException("shapeEngine can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_shape_engine(pointerOf(self), pointerOf(shapeEngine));
        }
    }

    private static native final void pango_analysis_set_shape_engine(long self, long shapeEngine);

    static final EngineLang getLangEngine(Analysis self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_lang_engine(pointerOf(self));

            //EngineLang engineLang = (EngineLang) objectFor(result);
            return null/*engineLang*/;
        }
    }

    private static native final long pango_analysis_get_lang_engine(long self);

    static final void setLangEngine(Analysis self, EngineLang langEngine) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (langEngine == null) {
            throw new IllegalArgumentException("langEngine can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_lang_engine(pointerOf(self), pointerOf(langEngine));
        }
    }

    private static native final void pango_analysis_set_lang_engine(long self, long langEngine);

    static final Font getFont(Analysis self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_font(pointerOf(self));

            return (Font) objectFor(result);
        }
    }

    private static native final long pango_analysis_get_font(long self);

    static final void setFont(Analysis self, Font font) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (font == null) {
            throw new IllegalArgumentException("font can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_font(pointerOf(self), pointerOf(font));
        }
    }

    private static native final void pango_analysis_set_font(long self, long font);

    static final byte getLevel(Analysis self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_level(pointerOf(self));

            return result;
        }
    }

    private static native final byte pango_analysis_get_level(long self);

    static final void setLevel(Analysis self, byte level) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_level(pointerOf(self), level);
        }
    }

    private static native final void pango_analysis_set_level(long self, byte level);

    static final byte getGravity(Analysis self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_gravity(pointerOf(self));

            return result;
        }
    }

    private static native final byte pango_analysis_get_gravity(long self);

    static final void setGravity(Analysis self, byte gravity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_gravity(pointerOf(self), gravity);
        }
    }

    private static native final void pango_analysis_set_gravity(long self, byte gravity);

    static final byte getFlags(Analysis self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_flags(pointerOf(self));

            return result;
        }
    }

    private static native final byte pango_analysis_get_flags(long self);

    static final void setFlags(Analysis self, byte flags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_flags(pointerOf(self), flags);
        }
    }

    private static native final void pango_analysis_set_flags(long self, byte flags);

    static final byte getScript(Analysis self) {
        byte result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_script(pointerOf(self));

            return result;
        }
    }

    private static native final byte pango_analysis_get_script(long self);

    static final void setScript(Analysis self, byte script) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_script(pointerOf(self), script);
        }
    }

    private static native final void pango_analysis_set_script(long self, byte script);

    static final Language getLanguage(Analysis self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_analysis_get_language(pointerOf(self));

            return (Language) boxedFor(Language.class, result);
        }
    }

    private static native final long pango_analysis_get_language(long self);

    static final void setLanguage(Analysis self, Language language) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            pango_analysis_set_language(pointerOf(self), pointerOf(language));
        }
    }

    private static native final void pango_analysis_set_language(long self, long language);

    @SuppressWarnings("unused")
    static final FIXME getExtraAttrs(Analysis self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList*");
    }

    @SuppressWarnings("unused")
    static final void setExtraAttrs(Analysis self, FIXME extraAttrs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList*");
    }
}

