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
import org.gnome.pango.Alignment;
import org.gnome.pango.AttributeList;
import org.gnome.pango.Context;
import org.gnome.pango.EllipsizeMode;
import org.gnome.pango.FontDescription;
import org.gnome.pango.Layout;
import org.gnome.pango.LayoutIter;
import org.gnome.pango.LayoutLine;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Rectangle;
import org.gnome.pango.TabArray;
import org.gnome.pango.WrapMode;

final class PangoLayout extends Plumbing
{
    private PangoLayout() {}

    static final long createLayout(Context context) {
        long result;

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        synchronized (lock) {
            result = pango_layout_new(pointerOf(context));

            return result;
        }
    }

    private static native final long pango_layout_new(long context);

    static final void contextChanged(Layout self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_context_changed(pointerOf(self));
        }
    }

    private static native final void pango_layout_context_changed(long self);

    static final Layout copy(Layout self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_copy(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long pango_layout_copy(long self);

    static final Alignment getAlignment(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_alignment(pointerOf(self));

            return (Alignment) enumFor(Alignment.class, result);
        }
    }

    private static native final int pango_layout_get_alignment(long self);

    static final AttributeList getAttributes(Layout self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_attributes(pointerOf(self));

            return (AttributeList) boxedFor(AttributeList.class, result);
        }
    }

    private static native final long pango_layout_get_attributes(long self);

    static final boolean getAutoDir(Layout self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_auto_dir(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_get_auto_dir(long self);

    static final int getBaseline(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_baseline(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_baseline(long self);

    static final int getCharacterCount(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_character_count(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_character_count(long self);

    static final Context getContext(Layout self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_context(pointerOf(self));

            return (Context) objectFor(result);
        }
    }

    private static native final long pango_layout_get_context(long self);

    static final void getCursorPos(Layout self, int index, Rectangle strongPos, Rectangle weakPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_get_cursor_pos(pointerOf(self), index, pointerOf(strongPos), pointerOf(weakPos));
        }
    }

    private static native final void pango_layout_get_cursor_pos(long self, int index, long strongPos, long weakPos);

    static final EllipsizeMode getEllipsize(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_ellipsize(pointerOf(self));

            return (EllipsizeMode) enumFor(EllipsizeMode.class, result);
        }
    }

    private static native final int pango_layout_get_ellipsize(long self);

    static final void getExtents(Layout self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_get_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_get_extents(long self, long inkRect, long logicalRect);

    static final FontDescription getFontDescription(Layout self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_font_description(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long pango_layout_get_font_description(long self);

    static final int getHeight(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_height(long self);

    static final int getIndent(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_indent(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_indent(long self);

    static final LayoutIter getIter(Layout self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_iter(pointerOf(self));

            return (LayoutIter) boxedFor(LayoutIter.class, result);
        }
    }

    private static native final long pango_layout_get_iter(long self);

    static final boolean getJustify(Layout self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_justify(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_get_justify(long self);

    static final LayoutLine getLine(Layout self, int line) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_line(pointerOf(self), line);

            return (LayoutLine) boxedFor(LayoutLine.class, result);
        }
    }

    private static native final long pango_layout_get_line(long self, int line);

    static final int getLineCount(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_line_count(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_line_count(long self);

    static final LayoutLine getLineReadonly(Layout self, int line) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_line_readonly(pointerOf(self), line);

            return (LayoutLine) boxedFor(LayoutLine.class, result);
        }
    }

    private static native final long pango_layout_get_line_readonly(long self, int line);

    static final LayoutLine[] getLines(Layout self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_lines(pointerOf(self));

            return (LayoutLine[]) boxedArrayFor(LayoutLine.class, result, new LayoutLine[result.length]);
        }
    }

    private static native final long[] pango_layout_get_lines(long self);

    static final LayoutLine[] getLinesReadonly(Layout self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_lines_readonly(pointerOf(self));

            return (LayoutLine[]) boxedArrayFor(LayoutLine.class, result, new LayoutLine[result.length]);
        }
    }

    private static native final long[] pango_layout_get_lines_readonly(long self);

    @SuppressWarnings("unused")
    static final void getLogAttrs(Layout self, FIXME attrs, int[] nAttrs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoLogAttr**");
    }

    @SuppressWarnings("unused")
    static final FIXME getLogAttrsReadonly(Layout self, int[] nAttrs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoLogAttr*");
    }

    static final void getPixelExtents(Layout self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_get_pixel_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_get_pixel_extents(long self, long inkRect, long logicalRect);

    static final void getPixelSize(Layout self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_get_pixel_size(pointerOf(self), width, height);
        }
    }

    private static native final void pango_layout_get_pixel_size(long self, int[] width, int[] height);

    static final int getSerial(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_serial(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_serial(long self);

    static final boolean getSingleParagraphMode(Layout self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_single_paragraph_mode(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_get_single_paragraph_mode(long self);

    static final void getSize(Layout self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_get_size(pointerOf(self), width, height);
        }
    }

    private static native final void pango_layout_get_size(long self, int[] width, int[] height);

    static final int getSpacing(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_spacing(long self);

    static final TabArray getTabs(Layout self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_tabs(pointerOf(self));

            return (TabArray) boxedFor(TabArray.class, result);
        }
    }

    private static native final long pango_layout_get_tabs(long self);

    static final String getText(Layout self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_text(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_layout_get_text(long self);

    static final int getUnknownGlyphsCount(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_unknown_glyphs_count(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_unknown_glyphs_count(long self);

    static final int getWidth(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_get_width(long self);

    static final WrapMode getWrap(Layout self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_get_wrap(pointerOf(self));

            return (WrapMode) enumFor(WrapMode.class, result);
        }
    }

    private static native final int pango_layout_get_wrap(long self);

    static final void indexToLineX(Layout self, int index, boolean trailing, int[] line, int[] xPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_index_to_line_x(pointerOf(self), index, trailing, line, xPos);
        }
    }

    private static native final void pango_layout_index_to_line_x(long self, int index, boolean trailing, int[] line, int[] xPos);

    static final void indexToPos(Layout self, int index, Rectangle pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_index_to_pos(pointerOf(self), index, pointerOf(pos));
        }
    }

    private static native final void pango_layout_index_to_pos(long self, int index, long pos);

    static final boolean isEllipsized(Layout self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_is_ellipsized(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_is_ellipsized(long self);

    static final boolean isWrapped(Layout self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_is_wrapped(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_is_wrapped(long self);

    static final void moveCursorVisually(Layout self, boolean strong, int oldIndex, int oldTrailing, int direction, int[] newIndex, int[] newTrailing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_move_cursor_visually(pointerOf(self), strong, oldIndex, oldTrailing, direction, newIndex, newTrailing);
        }
    }

    private static native final void pango_layout_move_cursor_visually(long self, boolean strong, int oldIndex, int oldTrailing, int direction, int[] newIndex, int[] newTrailing);

    static final void setAlignment(Layout self, Alignment alignment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (alignment == null) {
            throw new IllegalArgumentException("alignment can't be null");
        }

        synchronized (lock) {
            pango_layout_set_alignment(pointerOf(self), numOf(alignment));
        }
    }

    private static native final void pango_layout_set_alignment(long self, int alignment);

    static final void setAttributes(Layout self, AttributeList attrs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_attributes(pointerOf(self), pointerOf(attrs));
        }
    }

    private static native final void pango_layout_set_attributes(long self, long attrs);

    static final void setAutoDir(Layout self, boolean autoDir) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_auto_dir(pointerOf(self), autoDir);
        }
    }

    private static native final void pango_layout_set_auto_dir(long self, boolean autoDir);

    static final void setEllipsize(Layout self, EllipsizeMode ellipsize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (ellipsize == null) {
            throw new IllegalArgumentException("ellipsize can't be null");
        }

        synchronized (lock) {
            pango_layout_set_ellipsize(pointerOf(self), numOf(ellipsize));
        }
    }

    private static native final void pango_layout_set_ellipsize(long self, int ellipsize);

    static final void setFontDescription(Layout self, FontDescription desc) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_font_description(pointerOf(self), pointerOf(desc));
        }
    }

    private static native final void pango_layout_set_font_description(long self, long desc);

    static final void setHeight(Layout self, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_height(pointerOf(self), height);
        }
    }

    private static native final void pango_layout_set_height(long self, int height);

    static final void setIndent(Layout self, int indent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_indent(pointerOf(self), indent);
        }
    }

    private static native final void pango_layout_set_indent(long self, int indent);

    static final void setJustify(Layout self, boolean justify) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_justify(pointerOf(self), justify);
        }
    }

    private static native final void pango_layout_set_justify(long self, boolean justify);

    static final void setMarkup(Layout self, String markup, int length) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (markup == null) {
            throw new IllegalArgumentException("markup can't be null");
        }

        synchronized (lock) {
            pango_layout_set_markup(pointerOf(self), markup, length);
        }
    }

    private static native final void pango_layout_set_markup(long self, String markup, int length);

    @SuppressWarnings("unused")
    static final void setMarkupWithAccel(Layout self, String markup, int length, int accelMarker, FIXME accelChar) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gunichar*");
    }

    static final void setSingleParagraphMode(Layout self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_single_paragraph_mode(pointerOf(self), setting);
        }
    }

    private static native final void pango_layout_set_single_paragraph_mode(long self, boolean setting);

    static final void setSpacing(Layout self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_spacing(pointerOf(self), spacing);
        }
    }

    private static native final void pango_layout_set_spacing(long self, int spacing);

    static final void setTabs(Layout self, TabArray tabs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_tabs(pointerOf(self), pointerOf(tabs));
        }
    }

    private static native final void pango_layout_set_tabs(long self, long tabs);

    static final void setText(Layout self, String text, int length) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            pango_layout_set_text(pointerOf(self), text, length);
        }
    }

    private static native final void pango_layout_set_text(long self, String text, int length);

    static final void setWidth(Layout self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_set_width(pointerOf(self), width);
        }
    }

    private static native final void pango_layout_set_width(long self, int width);

    static final void setWrap(Layout self, WrapMode wrap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wrap == null) {
            throw new IllegalArgumentException("wrap can't be null");
        }

        synchronized (lock) {
            pango_layout_set_wrap(pointerOf(self), numOf(wrap));
        }
    }

    private static native final void pango_layout_set_wrap(long self, int wrap);

    static final boolean xyToIndex(Layout self, int x, int y, int[] index, int[] trailing) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_xy_to_index(pointerOf(self), x, y, index, trailing);

            return result;
        }
    }

    private static native final boolean pango_layout_xy_to_index(long self, int x, int y, int[] index, int[] trailing);

    static final long createLayoutFromCairo(org.freedesktop.cairo.Context context) {
        long result;

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        synchronized (lock) {
            result = pango_cairo_create_layout(pointerOf(context));

            return result;
        }
    }

    private static native final long pango_cairo_create_layout(long context);
}

