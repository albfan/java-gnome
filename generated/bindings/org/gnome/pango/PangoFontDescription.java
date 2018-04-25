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

import org.gnome.pango.FontDescription;
import org.gnome.pango.FontMask;
import org.gnome.pango.Gravity;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Stretch;
import org.gnome.pango.Style;
import org.gnome.pango.Variant;
import org.gnome.pango.Weight;

final class PangoFontDescription extends Plumbing
{
    private PangoFontDescription() {}

    static final long createFontDescription() {
        long result;

        synchronized (lock) {
            result = pango_font_description_new();

            return result;
        }
    }

    private static native final long pango_font_description_new();

    static final boolean betterMatch(FontDescription self, org.gnome.pango.FontDescription oldMatch, org.gnome.pango.FontDescription newMatch) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newMatch == null) {
            throw new IllegalArgumentException("newMatch can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_better_match(pointerOf(self), pointerOf(oldMatch), pointerOf(newMatch));

            return result;
        }
    }

    private static native final boolean pango_font_description_better_match(long self, long oldMatch, long newMatch);

    static final FontDescription copy(FontDescription self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_copy(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long pango_font_description_copy(long self);

    static final FontDescription copyStatic(FontDescription self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_copy_static(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long pango_font_description_copy_static(long self);

    static final boolean equal(FontDescription self, org.gnome.pango.FontDescription desc2) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (desc2 == null) {
            throw new IllegalArgumentException("desc2 can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_equal(pointerOf(self), pointerOf(desc2));

            return result;
        }
    }

    private static native final boolean pango_font_description_equal(long self, long desc2);

    static final void free(FontDescription self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_font_description_free(pointerOf(self));
        }
    }

    private static native final void pango_font_description_free(long self);

    static final String getFamily(FontDescription self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_family(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_font_description_get_family(long self);

    static final Gravity getGravity(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_gravity(pointerOf(self));

            return (Gravity) enumFor(Gravity.class, result);
        }
    }

    private static native final int pango_font_description_get_gravity(long self);

    static final FontMask getSetFields(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_set_fields(pointerOf(self));

            return (FontMask) flagFor(FontMask.class, result);
        }
    }

    private static native final int pango_font_description_get_set_fields(long self);

    static final int getSize(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_size(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_font_description_get_size(long self);

    static final boolean getSizeIsAbsolute(FontDescription self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_size_is_absolute(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_font_description_get_size_is_absolute(long self);

    static final Stretch getStretch(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_stretch(pointerOf(self));

            return (Stretch) enumFor(Stretch.class, result);
        }
    }

    private static native final int pango_font_description_get_stretch(long self);

    static final Style getStyle(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_style(pointerOf(self));

            return (Style) enumFor(Style.class, result);
        }
    }

    private static native final int pango_font_description_get_style(long self);

    static final Variant getVariant(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_variant(pointerOf(self));

            return (Variant) enumFor(Variant.class, result);
        }
    }

    private static native final int pango_font_description_get_variant(long self);

    static final String getVariations(FontDescription self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_variations(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_font_description_get_variations(long self);

    static final Weight getWeight(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_get_weight(pointerOf(self));

            return (Weight) enumFor(Weight.class, result);
        }
    }

    private static native final int pango_font_description_get_weight(long self);

    static final int hash(FontDescription self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_hash(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_font_description_hash(long self);

    static final void merge(FontDescription self, org.gnome.pango.FontDescription descToMerge, boolean replaceExisting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_font_description_merge(pointerOf(self), pointerOf(descToMerge), replaceExisting);
        }
    }

    private static native final void pango_font_description_merge(long self, long descToMerge, boolean replaceExisting);

    static final void mergeStatic(FontDescription self, org.gnome.pango.FontDescription descToMerge, boolean replaceExisting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (descToMerge == null) {
            throw new IllegalArgumentException("descToMerge can't be null");
        }

        synchronized (lock) {
            pango_font_description_merge_static(pointerOf(self), pointerOf(descToMerge), replaceExisting);
        }
    }

    private static native final void pango_font_description_merge_static(long self, long descToMerge, boolean replaceExisting);

    static final void setAbsoluteSize(FontDescription self, double size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_absolute_size(pointerOf(self), size);
        }
    }

    private static native final void pango_font_description_set_absolute_size(long self, double size);

    static final void setFamily(FontDescription self, String family) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (family == null) {
            throw new IllegalArgumentException("family can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_family(pointerOf(self), family);
        }
    }

    private static native final void pango_font_description_set_family(long self, String family);

    static final void setFamilyStatic(FontDescription self, String family) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (family == null) {
            throw new IllegalArgumentException("family can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_family_static(pointerOf(self), family);
        }
    }

    private static native final void pango_font_description_set_family_static(long self, String family);

    static final void setGravity(FontDescription self, Gravity gravity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (gravity == null) {
            throw new IllegalArgumentException("gravity can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_gravity(pointerOf(self), numOf(gravity));
        }
    }

    private static native final void pango_font_description_set_gravity(long self, int gravity);

    static final void setSize(FontDescription self, int size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_size(pointerOf(self), size);
        }
    }

    private static native final void pango_font_description_set_size(long self, int size);

    static final void setStretch(FontDescription self, Stretch stretch) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stretch == null) {
            throw new IllegalArgumentException("stretch can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_stretch(pointerOf(self), numOf(stretch));
        }
    }

    private static native final void pango_font_description_set_stretch(long self, int stretch);

    static final void setStyle(FontDescription self, Style style) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (style == null) {
            throw new IllegalArgumentException("style can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_style(pointerOf(self), numOf(style));
        }
    }

    private static native final void pango_font_description_set_style(long self, int style);

    static final void setVariant(FontDescription self, Variant variant) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (variant == null) {
            throw new IllegalArgumentException("variant can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_variant(pointerOf(self), numOf(variant));
        }
    }

    private static native final void pango_font_description_set_variant(long self, int variant);

    static final void setVariations(FontDescription self, String settings) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (settings == null) {
            throw new IllegalArgumentException("settings can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_variations(pointerOf(self), settings);
        }
    }

    private static native final void pango_font_description_set_variations(long self, String settings);

    static final void setVariationsStatic(FontDescription self, String settings) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (settings == null) {
            throw new IllegalArgumentException("settings can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_variations_static(pointerOf(self), settings);
        }
    }

    private static native final void pango_font_description_set_variations_static(long self, String settings);

    static final void setWeight(FontDescription self, Weight weight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (weight == null) {
            throw new IllegalArgumentException("weight can't be null");
        }

        synchronized (lock) {
            pango_font_description_set_weight(pointerOf(self), numOf(weight));
        }
    }

    private static native final void pango_font_description_set_weight(long self, int weight);

    static final String toFilename(FontDescription self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_to_filename(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_font_description_to_filename(long self);

    static final String toString(FontDescription self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_to_string(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_font_description_to_string(long self);

    static final void unsetFields(FontDescription self, FontMask toUnset) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (toUnset == null) {
            throw new IllegalArgumentException("toUnset can't be null");
        }

        synchronized (lock) {
            pango_font_description_unset_fields(pointerOf(self), numOf(toUnset));
        }
    }

    private static native final void pango_font_description_unset_fields(long self, int toUnset);

    static final long createFontDescriptionFromString(String str) {
        long result;

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            result = pango_font_description_from_string(str);

            return result;
        }
    }

    private static native final long pango_font_description_from_string(String str);
}

