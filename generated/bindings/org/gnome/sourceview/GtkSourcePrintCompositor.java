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
package org.gnome.sourceview;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.gtk.PrintContext;
import org.gnome.gtk.Unit;
import org.gnome.gtk.WrapMode;
import org.gnome.sourceview.Plumbing;
import org.gnome.sourceview.PrintCompositor;
import org.gnome.sourceview.SourceBuffer;
import org.gnome.sourceview.SourceView;

final class GtkSourcePrintCompositor extends Plumbing
{
    private GtkSourcePrintCompositor() {}

    static final long createPrintCompositor(SourceBuffer buffer) {
        long result;

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_new(pointerOf(buffer));

            return result;
        }
    }

    private static native final long gtk_source_print_compositor_new(long buffer);

    static final long createPrintCompositorFromView(SourceView view) {
        long result;

        if (view == null) {
            throw new IllegalArgumentException("view can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_new_from_view(pointerOf(view));

            return result;
        }
    }

    private static native final long gtk_source_print_compositor_new_from_view(long view);

    static final void drawPage(PrintCompositor self, PrintContext context, int pageNr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_draw_page(pointerOf(self), pointerOf(context), pageNr);
        }
    }

    private static native final void gtk_source_print_compositor_draw_page(long self, long context, int pageNr);

    static final String getBodyFontName(PrintCompositor self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_body_font_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_print_compositor_get_body_font_name(long self);

    static final double getBottomMargin(PrintCompositor self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_bottom_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_source_print_compositor_get_bottom_margin(long self, int unit);

    static final SourceBuffer getBuffer(PrintCompositor self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_buffer(pointerOf(self));

            return (SourceBuffer) objectFor(result);
        }
    }

    private static native final long gtk_source_print_compositor_get_buffer(long self);

    static final String getFooterFontName(PrintCompositor self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_footer_font_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_print_compositor_get_footer_font_name(long self);

    static final String getHeaderFontName(PrintCompositor self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_header_font_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_print_compositor_get_header_font_name(long self);

    static final boolean getHighlightSyntax(PrintCompositor self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_highlight_syntax(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_print_compositor_get_highlight_syntax(long self);

    static final double getLeftMargin(PrintCompositor self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_left_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_source_print_compositor_get_left_margin(long self, int unit);

    static final String getLineNumbersFontName(PrintCompositor self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_line_numbers_font_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_print_compositor_get_line_numbers_font_name(long self);

    static final int getNPages(PrintCompositor self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_n_pages(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_source_print_compositor_get_n_pages(long self);

    static final double getPaginationProgress(PrintCompositor self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_pagination_progress(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_source_print_compositor_get_pagination_progress(long self);

    static final boolean getPrintFooter(PrintCompositor self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_print_footer(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_print_compositor_get_print_footer(long self);

    static final boolean getPrintHeader(PrintCompositor self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_print_header(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_print_compositor_get_print_header(long self);

    static final int getPrintLineNumbers(PrintCompositor self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_print_line_numbers(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_source_print_compositor_get_print_line_numbers(long self);

    static final double getRightMargin(PrintCompositor self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_right_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_source_print_compositor_get_right_margin(long self, int unit);

    static final int getTabWidth(PrintCompositor self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_tab_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_source_print_compositor_get_tab_width(long self);

    static final double getTopMargin(PrintCompositor self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_top_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_source_print_compositor_get_top_margin(long self, int unit);

    static final WrapMode getWrapMode(PrintCompositor self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_get_wrap_mode(pointerOf(self));

            return (WrapMode) enumFor(WrapMode.class, result);
        }
    }

    private static native final int gtk_source_print_compositor_get_wrap_mode(long self);

    static final boolean paginate(PrintCompositor self, PrintContext context) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        synchronized (lock) {
            result = gtk_source_print_compositor_paginate(pointerOf(self), pointerOf(context));

            return result;
        }
    }

    private static native final boolean gtk_source_print_compositor_paginate(long self, long context);

    static final void setBodyFontName(PrintCompositor self, String fontName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fontName == null) {
            throw new IllegalArgumentException("fontName can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_body_font_name(pointerOf(self), fontName);
        }
    }

    private static native final void gtk_source_print_compositor_set_body_font_name(long self, String fontName);

    static final void setBottomMargin(PrintCompositor self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_bottom_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_source_print_compositor_set_bottom_margin(long self, double margin, int unit);

    static final void setFooterFontName(PrintCompositor self, String fontName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_footer_font_name(pointerOf(self), fontName);
        }
    }

    private static native final void gtk_source_print_compositor_set_footer_font_name(long self, String fontName);

    static final void setFooterFormat(PrintCompositor self, boolean separator, String left, String center, String right) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_footer_format(pointerOf(self), separator, left, center, right);
        }
    }

    private static native final void gtk_source_print_compositor_set_footer_format(long self, boolean separator, String left, String center, String right);

    static final void setHeaderFontName(PrintCompositor self, String fontName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_header_font_name(pointerOf(self), fontName);
        }
    }

    private static native final void gtk_source_print_compositor_set_header_font_name(long self, String fontName);

    static final void setHeaderFormat(PrintCompositor self, boolean separator, String left, String center, String right) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_header_format(pointerOf(self), separator, left, center, right);
        }
    }

    private static native final void gtk_source_print_compositor_set_header_format(long self, boolean separator, String left, String center, String right);

    static final void setHighlightSyntax(PrintCompositor self, boolean highlight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_highlight_syntax(pointerOf(self), highlight);
        }
    }

    private static native final void gtk_source_print_compositor_set_highlight_syntax(long self, boolean highlight);

    static final void setLeftMargin(PrintCompositor self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_left_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_source_print_compositor_set_left_margin(long self, double margin, int unit);

    static final void setLineNumbersFontName(PrintCompositor self, String fontName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_line_numbers_font_name(pointerOf(self), fontName);
        }
    }

    private static native final void gtk_source_print_compositor_set_line_numbers_font_name(long self, String fontName);

    static final void setPrintFooter(PrintCompositor self, boolean print) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_print_footer(pointerOf(self), print);
        }
    }

    private static native final void gtk_source_print_compositor_set_print_footer(long self, boolean print);

    static final void setPrintHeader(PrintCompositor self, boolean print) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_print_header(pointerOf(self), print);
        }
    }

    private static native final void gtk_source_print_compositor_set_print_header(long self, boolean print);

    static final void setPrintLineNumbers(PrintCompositor self, int interval) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_print_line_numbers(pointerOf(self), interval);
        }
    }

    private static native final void gtk_source_print_compositor_set_print_line_numbers(long self, int interval);

    static final void setRightMargin(PrintCompositor self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_right_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_source_print_compositor_set_right_margin(long self, double margin, int unit);

    static final void setTabWidth(PrintCompositor self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_tab_width(pointerOf(self), width);
        }
    }

    private static native final void gtk_source_print_compositor_set_tab_width(long self, int width);

    static final void setTopMargin(PrintCompositor self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_top_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_source_print_compositor_set_top_margin(long self, double margin, int unit);

    static final void setWrapMode(PrintCompositor self, WrapMode wrapMode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wrapMode == null) {
            throw new IllegalArgumentException("wrapMode can't be null");
        }

        synchronized (lock) {
            gtk_source_print_compositor_set_wrap_mode(pointerOf(self), numOf(wrapMode));
        }
    }

    private static native final void gtk_source_print_compositor_set_wrap_mode(long self, int wrapMode);
}

