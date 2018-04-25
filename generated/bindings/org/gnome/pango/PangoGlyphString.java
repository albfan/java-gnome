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
import org.gnome.pango.Analysis;
import org.gnome.pango.Font;
import org.gnome.pango.GlyphString;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Rectangle;

final class PangoGlyphString extends Plumbing
{
    private PangoGlyphString() {}

    static final int getNumGlyphs(GlyphString self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_glyph_string_get_num_glyphs(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_glyph_string_get_num_glyphs(long self);

    static final void setNumGlyphs(GlyphString self, int numGlyphs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_set_num_glyphs(pointerOf(self), numGlyphs);
        }
    }

    private static native final void pango_glyph_string_set_num_glyphs(long self, int numGlyphs);

    @SuppressWarnings("unused")
    static final FIXME getGlyphs(GlyphString self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("Pangonull");
    }

    @SuppressWarnings("unused")
    static final void setGlyphs(GlyphString self, FIXME glyphs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("Pangonull");
    }

    static final int[] getLogClusters(GlyphString self) {
        int[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_glyph_string_get_log_clusters(pointerOf(self));

            return result;
        }
    }

    private static native final int[] pango_glyph_string_get_log_clusters(long self);

    static final void setLogClusters(GlyphString self, int[] logClusters) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (logClusters == null) {
            throw new IllegalArgumentException("logClusters can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_set_log_clusters(pointerOf(self), logClusters);
        }
    }

    private static native final void pango_glyph_string_set_log_clusters(long self, int[] logClusters);

    static final int getSpace(GlyphString self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_glyph_string_get_space(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_glyph_string_get_space(long self);

    static final long createGlyphString() {
        long result;

        synchronized (lock) {
            result = pango_glyph_string_new();

            return result;
        }
    }

    private static native final long pango_glyph_string_new();

    static final GlyphString copy(GlyphString self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_glyph_string_copy(pointerOf(self));

            return (GlyphString) boxedFor(GlyphString.class, result);
        }
    }

    private static native final long pango_glyph_string_copy(long self);

    static final void extents(GlyphString self, Font font, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (font == null) {
            throw new IllegalArgumentException("font can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_extents(pointerOf(self), pointerOf(font), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_glyph_string_extents(long self, long font, long inkRect, long logicalRect);

    static final void extentsRange(GlyphString self, int start, int end, Font font, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (font == null) {
            throw new IllegalArgumentException("font can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_extents_range(pointerOf(self), start, end, pointerOf(font), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_glyph_string_extents_range(long self, int start, int end, long font, long inkRect, long logicalRect);

    static final void free(GlyphString self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_free(pointerOf(self));
        }
    }

    private static native final void pango_glyph_string_free(long self);

    static final void getLogicalWidths(GlyphString self, String text, int length, int embeddingLevel, int[] logicalWidths) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        if (logicalWidths == null) {
            throw new IllegalArgumentException("logicalWidths can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_get_logical_widths(pointerOf(self), text, length, embeddingLevel, logicalWidths);
        }
    }

    private static native final void pango_glyph_string_get_logical_widths(long self, String text, int length, int embeddingLevel, int[] logicalWidths);

    static final int getWidth(GlyphString self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_glyph_string_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_glyph_string_get_width(long self);

    static final void indexToX(GlyphString self, String text, int length, Analysis analysis, int index, boolean trailing, int[] xPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        if (analysis == null) {
            throw new IllegalArgumentException("analysis can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_index_to_x(pointerOf(self), text, length, pointerOf(analysis), index, trailing, xPos);
        }
    }

    private static native final void pango_glyph_string_index_to_x(long self, String text, int length, long analysis, int index, boolean trailing, int[] xPos);

    static final void setSize(GlyphString self, int newLen) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_set_size(pointerOf(self), newLen);
        }
    }

    private static native final void pango_glyph_string_set_size(long self, int newLen);

    static final void xToIndex(GlyphString self, String text, int length, Analysis analysis, int xPos, int[] index, int[] trailing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        if (analysis == null) {
            throw new IllegalArgumentException("analysis can't be null");
        }

        synchronized (lock) {
            pango_glyph_string_x_to_index(pointerOf(self), text, length, pointerOf(analysis), xPos, index, trailing);
        }
    }

    private static native final void pango_glyph_string_x_to_index(long self, String text, int length, long analysis, int xPos, int[] index, int[] trailing);
}

