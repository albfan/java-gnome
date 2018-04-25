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
import org.gnome.pango.Attribute;
import org.gnome.pango.FontDescription;
import org.gnome.pango.Gravity;
import org.gnome.pango.GravityHint;
import org.gnome.pango.Language;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Style;
import org.gnome.pango.Underline;
import org.gnome.pango.Variant;
import org.gnome.pango.Weight;

final class PangoAttribute extends Plumbing
{
    private PangoAttribute() {}

    @SuppressWarnings("unused")
    static final FIXME getKlass(Attribute self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const PangoAttrClass*");
    }

    @SuppressWarnings("unused")
    static final void setKlass(Attribute self, FIXME klass) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const PangoAttrClass*");
    }

    static final int getStartIndex(Attribute self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_attribute_get_start_index(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_attribute_get_start_index(long self);

    static final void setStartIndex(Attribute self, int startIndex) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_attribute_set_start_index(pointerOf(self), startIndex);
        }
    }

    private static native final void pango_attribute_set_start_index(long self, int startIndex);

    static final int getEndIndex(Attribute self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_attribute_get_end_index(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_attribute_get_end_index(long self);

    static final void setEndIndex(Attribute self, int endIndex) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_attribute_set_end_index(pointerOf(self), endIndex);
        }
    }

    private static native final void pango_attribute_set_end_index(long self, int endIndex);

    static final Attribute copy(Attribute self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_attribute_copy(pointerOf(self));

            return (Attribute) boxedFor(Attribute.class, result);
        }
    }

    private static native final long pango_attribute_copy(long self);

    static final void destroy(Attribute self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_attribute_destroy(pointerOf(self));
        }
    }

    private static native final void pango_attribute_destroy(long self);

    static final boolean equal(Attribute self, org.gnome.pango.Attribute attr2) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (attr2 == null) {
            throw new IllegalArgumentException("attr2 can't be null");
        }

        synchronized (lock) {
            result = pango_attribute_equal(pointerOf(self), pointerOf(attr2));

            return result;
        }
    }

    private static native final boolean pango_attribute_equal(long self, long attr2);

    @SuppressWarnings("unused")
    static final void init(Attribute self, FIXME klass) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-PangoAttrClass*");
    }

    static final long createAttributeLanguage(Language language) {
        long result;

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            result = pango_attr_language_new(pointerOf(language));

            return result;
        }
    }

    private static native final long pango_attr_language_new(long language);

    static final long createAttributeForeground(char red, char green, char blue) {
        long result;

        synchronized (lock) {
            result = pango_attr_foreground_new(red, green, blue);

            return result;
        }
    }

    private static native final long pango_attr_foreground_new(char red, char green, char blue);

    static final long createAttributeBackground(char red, char green, char blue) {
        long result;

        synchronized (lock) {
            result = pango_attr_background_new(red, green, blue);

            return result;
        }
    }

    private static native final long pango_attr_background_new(char red, char green, char blue);

    static final long createAttributeSize(int size) {
        long result;

        synchronized (lock) {
            result = pango_attr_size_new(size);

            return result;
        }
    }

    private static native final long pango_attr_size_new(int size);

    static final long createAttributeStyle(Style style) {
        long result;

        if (style == null) {
            throw new IllegalArgumentException("style can't be null");
        }

        synchronized (lock) {
            result = pango_attr_style_new(numOf(style));

            return result;
        }
    }

    private static native final long pango_attr_style_new(int style);

    static final long createAttributeWeight(Weight weight) {
        long result;

        if (weight == null) {
            throw new IllegalArgumentException("weight can't be null");
        }

        synchronized (lock) {
            result = pango_attr_weight_new(numOf(weight));

            return result;
        }
    }

    private static native final long pango_attr_weight_new(int weight);

    static final long createAttributeVariant(Variant variant) {
        long result;

        if (variant == null) {
            throw new IllegalArgumentException("variant can't be null");
        }

        synchronized (lock) {
            result = pango_attr_variant_new(numOf(variant));

            return result;
        }
    }

    private static native final long pango_attr_variant_new(int variant);

    static final long createAttributeFontDescription(FontDescription desc) {
        long result;

        if (desc == null) {
            throw new IllegalArgumentException("desc can't be null");
        }

        synchronized (lock) {
            result = pango_attr_font_desc_new(pointerOf(desc));

            return result;
        }
    }

    private static native final long pango_attr_font_desc_new(long desc);

    static final long createAttributeUnderline(Underline underline) {
        long result;

        if (underline == null) {
            throw new IllegalArgumentException("underline can't be null");
        }

        synchronized (lock) {
            result = pango_attr_underline_new(numOf(underline));

            return result;
        }
    }

    private static native final long pango_attr_underline_new(int underline);

    static final long createAttributeUnderlineColor(char red, char green, char blue) {
        long result;

        synchronized (lock) {
            result = pango_attr_underline_color_new(red, green, blue);

            return result;
        }
    }

    private static native final long pango_attr_underline_color_new(char red, char green, char blue);

    static final long createAttributeRise(int rise) {
        long result;

        synchronized (lock) {
            result = pango_attr_rise_new(rise);

            return result;
        }
    }

    private static native final long pango_attr_rise_new(int rise);

    static final long createAttributeFallback(boolean fallback) {
        long result;

        synchronized (lock) {
            result = pango_attr_fallback_new(fallback);

            return result;
        }
    }

    private static native final long pango_attr_fallback_new(boolean fallback);

    static final long createAttributeGravity(Gravity gravity) {
        long result;

        if (gravity == null) {
            throw new IllegalArgumentException("gravity can't be null");
        }

        synchronized (lock) {
            result = pango_attr_gravity_new(numOf(gravity));

            return result;
        }
    }

    private static native final long pango_attr_gravity_new(int gravity);

    static final long createAttributeGravityHint(GravityHint hint) {
        long result;

        if (hint == null) {
            throw new IllegalArgumentException("hint can't be null");
        }

        synchronized (lock) {
            result = pango_attr_gravity_hint_new(numOf(hint));

            return result;
        }
    }

    private static native final long pango_attr_gravity_hint_new(int hint);
}

