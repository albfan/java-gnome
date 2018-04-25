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
import org.gnome.glib.GlibException;
import org.gnome.gtk.PageOrientation;
import org.gnome.gtk.PageSetup;
import org.gnome.gtk.PaperSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Unit;

final class GtkPageSetup extends Plumbing
{
    private GtkPageSetup() {}

    static final long createPageSetup() {
        long result;

        synchronized (lock) {
            result = gtk_page_setup_new();

            return result;
        }
    }

    private static native final long gtk_page_setup_new();

    static final long createPageSetupFromFile(String fileName) throws GlibException {
        long result;

        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_new_from_file(fileName);

            return result;
        }
    }

    private static native final long gtk_page_setup_new_from_file(String fileName) throws GlibException;

    @SuppressWarnings("unused")
    static final long createPageSetupFromGvariant(FIXME variant) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final long createPageSetupFromKeyFile(FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }

    static final PageSetup copy(PageSetup self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_copy(pointerOf(self));

            return (PageSetup) objectFor(result);
        }
    }

    private static native final long gtk_page_setup_copy(long self);

    static final double getBottomMargin(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_bottom_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_bottom_margin(long self, int unit);

    static final double getLeftMargin(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_left_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_left_margin(long self, int unit);

    static final PageOrientation getOrientation(PageSetup self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_orientation(pointerOf(self));

            return (PageOrientation) enumFor(PageOrientation.class, result);
        }
    }

    private static native final int gtk_page_setup_get_orientation(long self);

    static final double getPageHeight(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_page_height(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_page_height(long self, int unit);

    static final double getPageWidth(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_page_width(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_page_width(long self, int unit);

    static final double getPaperHeight(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_paper_height(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_paper_height(long self, int unit);

    static final PaperSize getPaperSize(PageSetup self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_paper_size(pointerOf(self));

            return (PaperSize) boxedFor(PaperSize.class, result);
        }
    }

    private static native final long gtk_page_setup_get_paper_size(long self);

    static final double getPaperWidth(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_paper_width(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_paper_width(long self, int unit);

    static final double getRightMargin(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_right_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_right_margin(long self, int unit);

    static final double getTopMargin(PageSetup self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_get_top_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_page_setup_get_top_margin(long self, int unit);

    static final boolean loadFile(PageSetup self, String fileName) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_load_file(pointerOf(self), fileName);

            return result;
        }
    }

    private static native final boolean gtk_page_setup_load_file(long self, String fileName) throws GlibException;

    @SuppressWarnings("unused")
    static final boolean loadKeyFile(PageSetup self, FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }

    static final void setBottomMargin(PageSetup self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_page_setup_set_bottom_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_page_setup_set_bottom_margin(long self, double margin, int unit);

    static final void setLeftMargin(PageSetup self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_page_setup_set_left_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_page_setup_set_left_margin(long self, double margin, int unit);

    static final void setOrientation(PageSetup self, PageOrientation orientation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            gtk_page_setup_set_orientation(pointerOf(self), numOf(orientation));
        }
    }

    private static native final void gtk_page_setup_set_orientation(long self, int orientation);

    static final void setPaperSize(PageSetup self, PaperSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_page_setup_set_paper_size(pointerOf(self), pointerOf(size));
        }
    }

    private static native final void gtk_page_setup_set_paper_size(long self, long size);

    static final void setPaperSizeAndDefaultMargins(PageSetup self, PaperSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_page_setup_set_paper_size_and_default_margins(pointerOf(self), pointerOf(size));
        }
    }

    private static native final void gtk_page_setup_set_paper_size_and_default_margins(long self, long size);

    static final void setRightMargin(PageSetup self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_page_setup_set_right_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_page_setup_set_right_margin(long self, double margin, int unit);

    static final void setTopMargin(PageSetup self, double margin, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_page_setup_set_top_margin(pointerOf(self), margin, numOf(unit));
        }
    }

    private static native final void gtk_page_setup_set_top_margin(long self, double margin, int unit);

    static final boolean toFile(PageSetup self, String fileName) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            result = gtk_page_setup_to_file(pointerOf(self), fileName);

            return result;
        }
    }

    private static native final boolean gtk_page_setup_to_file(long self, String fileName) throws GlibException;

    @SuppressWarnings("unused")
    static final FIXME toGvariant(PageSetup self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final void toKeyFile(PageSetup self, FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }
}

