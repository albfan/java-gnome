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

import org.gnome.gtk.PageSetup;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PrintContext;
import org.gnome.pango.Context;
import org.gnome.pango.FontMap;
import org.gnome.pango.Layout;

final class GtkPrintContext extends Plumbing
{
    private GtkPrintContext() {}

    static final Context createPangoContext(PrintContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_create_pango_context(pointerOf(self));

            return (Context) objectFor(result);
        }
    }

    private static native final long gtk_print_context_create_pango_context(long self);

    static final Layout createPangoLayout(PrintContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_create_pango_layout(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long gtk_print_context_create_pango_layout(long self);

    static final org.freedesktop.cairo.Context getCairoContext(PrintContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_cairo_context(pointerOf(self));

            return (org.freedesktop.cairo.Context) entityFor(org.freedesktop.cairo.Context.class,  result);
        }
    }

    private static native final long gtk_print_context_get_cairo_context(long self);

    static final double getDpiX(PrintContext self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_dpi_x(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_print_context_get_dpi_x(long self);

    static final double getDpiY(PrintContext self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_dpi_y(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_print_context_get_dpi_y(long self);

    static final boolean getHardMargins(PrintContext self, double[] top, double[] bottom, double[] left, double[] right) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_hard_margins(pointerOf(self), top, bottom, left, right);

            return result;
        }
    }

    private static native final boolean gtk_print_context_get_hard_margins(long self, double[] top, double[] bottom, double[] left, double[] right);

    static final double getHeight(PrintContext self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_print_context_get_height(long self);

    static final PageSetup getPageSetup(PrintContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_page_setup(pointerOf(self));

            return (PageSetup) objectFor(result);
        }
    }

    private static native final long gtk_print_context_get_page_setup(long self);

    static final FontMap getPangoFontmap(PrintContext self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_pango_fontmap(pointerOf(self));

            return (FontMap) objectFor(result);
        }
    }

    private static native final long gtk_print_context_get_pango_fontmap(long self);

    static final double getWidth(PrintContext self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_context_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_print_context_get_width(long self);

    static final void setCairoContext(PrintContext self, org.freedesktop.cairo.Context cr, double dpiX, double dpiY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cr == null) {
            throw new IllegalArgumentException("cr can't be null");
        }

        synchronized (lock) {
            gtk_print_context_set_cairo_context(pointerOf(self), pointerOf(cr), dpiX, dpiY);
        }
    }

    private static native final void gtk_print_context_set_cairo_context(long self, long cr, double dpiX, double dpiY);
}

