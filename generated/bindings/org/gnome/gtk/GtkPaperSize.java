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
import org.gnome.gtk.PaperSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Unit;

final class GtkPaperSize extends Plumbing
{
    private GtkPaperSize() {}

    static final long createPaperSize(String name) {
        long result;

        synchronized (lock) {
            result = gtk_paper_size_new(name);

            return result;
        }
    }

    private static native final long gtk_paper_size_new(String name);

    static final long createPaperSizeCustom(String name, String displayName, double width, double height, Unit unit) {
        long result;

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (displayName == null) {
            throw new IllegalArgumentException("displayName can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_new_custom(name, displayName, width, height, numOf(unit));

            return result;
        }
    }

    private static native final long gtk_paper_size_new_custom(String name, String displayName, double width, double height, int unit);

    @SuppressWarnings("unused")
    static final long createPaperSizeFromGvariant(FIXME variant) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    static final long createPaperSizeFromIpp(String ippName, double width, double height) {
        long result;

        if (ippName == null) {
            throw new IllegalArgumentException("ippName can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_new_from_ipp(ippName, width, height);

            return result;
        }
    }

    private static native final long gtk_paper_size_new_from_ipp(String ippName, double width, double height);

    @SuppressWarnings("unused")
    static final long createPaperSizeFromKeyFile(FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }

    static final long createPaperSizeFromPpd(String ppdName, String ppdDisplayName, double width, double height) {
        long result;

        if (ppdName == null) {
            throw new IllegalArgumentException("ppdName can't be null");
        }

        if (ppdDisplayName == null) {
            throw new IllegalArgumentException("ppdDisplayName can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_new_from_ppd(ppdName, ppdDisplayName, width, height);

            return result;
        }
    }

    private static native final long gtk_paper_size_new_from_ppd(String ppdName, String ppdDisplayName, double width, double height);

    static final PaperSize copy(PaperSize self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_copy(pointerOf(self));

            return (PaperSize) boxedFor(PaperSize.class, result);
        }
    }

    private static native final long gtk_paper_size_copy(long self);

    static final void free(PaperSize self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_paper_size_free(pointerOf(self));
        }
    }

    private static native final void gtk_paper_size_free(long self);

    static final double getDefaultBottomMargin(PaperSize self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_default_bottom_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_paper_size_get_default_bottom_margin(long self, int unit);

    static final double getDefaultLeftMargin(PaperSize self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_default_left_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_paper_size_get_default_left_margin(long self, int unit);

    static final double getDefaultRightMargin(PaperSize self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_default_right_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_paper_size_get_default_right_margin(long self, int unit);

    static final double getDefaultTopMargin(PaperSize self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_default_top_margin(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_paper_size_get_default_top_margin(long self, int unit);

    static final String getDisplayName(PaperSize self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_display_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_paper_size_get_display_name(long self);

    static final double getHeight(PaperSize self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_height(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_paper_size_get_height(long self, int unit);

    static final String getName(PaperSize self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_paper_size_get_name(long self);

    static final String getPpdName(PaperSize self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_ppd_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_paper_size_get_ppd_name(long self);

    static final double getWidth(PaperSize self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_get_width(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_paper_size_get_width(long self, int unit);

    static final boolean isCustom(PaperSize self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_is_custom(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_paper_size_is_custom(long self);

    static final boolean isEqual(PaperSize self, PaperSize size2) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (size2 == null) {
            throw new IllegalArgumentException("size2 can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_is_equal(pointerOf(self), pointerOf(size2));

            return result;
        }
    }

    private static native final boolean gtk_paper_size_is_equal(long self, long size2);

    static final boolean isIpp(PaperSize self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_paper_size_is_ipp(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_paper_size_is_ipp(long self);

    static final void setSize(PaperSize self, double width, double height, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_paper_size_set_size(pointerOf(self), width, height, numOf(unit));
        }
    }

    private static native final void gtk_paper_size_set_size(long self, double width, double height, int unit);

    @SuppressWarnings("unused")
    static final FIXME toGvariant(PaperSize self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final void toKeyFile(PaperSize self, FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }
}

