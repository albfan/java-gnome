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
import org.gnome.gtk.PageSet;
import org.gnome.gtk.PaperSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PrintDuplex;
import org.gnome.gtk.PrintPages;
import org.gnome.gtk.PrintQuality;
import org.gnome.gtk.PrintSettings;
import org.gnome.gtk.Unit;

final class GtkPrintSettings extends Plumbing
{
    private GtkPrintSettings() {}

    static final long createPrintSettings() {
        long result;

        synchronized (lock) {
            result = gtk_print_settings_new();

            return result;
        }
    }

    private static native final long gtk_print_settings_new();

    static final long createPrintSettingsFromFile(String fileName) throws GlibException {
        long result;

        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_new_from_file(fileName);

            return result;
        }
    }

    private static native final long gtk_print_settings_new_from_file(String fileName) throws GlibException;

    @SuppressWarnings("unused")
    static final long createPrintSettingsFromGvariant(FIXME variant) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final long createPrintSettingsFromKeyFile(FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }

    static final PrintSettings copy(PrintSettings self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_copy(pointerOf(self));

            return (PrintSettings) objectFor(result);
        }
    }

    private static native final long gtk_print_settings_copy(long self);

    @SuppressWarnings("unused")
    static final void foreach(PrintSettings self, FIXME func, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkPrintSettingsFunc");
    }

    static final String get(PrintSettings self, String key) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get(pointerOf(self), key);

            return result;
        }
    }

    private static native final String gtk_print_settings_get(long self, String key);

    static final boolean getBool(PrintSettings self, String key) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_bool(pointerOf(self), key);

            return result;
        }
    }

    private static native final boolean gtk_print_settings_get_bool(long self, String key);

    static final boolean getCollate(PrintSettings self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_collate(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_print_settings_get_collate(long self);

    static final String getDefaultSource(PrintSettings self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_default_source(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_print_settings_get_default_source(long self);

    static final String getDither(PrintSettings self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_dither(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_print_settings_get_dither(long self);

    static final double getDouble(PrintSettings self, String key) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_double(pointerOf(self), key);

            return result;
        }
    }

    private static native final double gtk_print_settings_get_double(long self, String key);

    static final double getDoubleWithDefault(PrintSettings self, String key, double def) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_double_with_default(pointerOf(self), key, def);

            return result;
        }
    }

    private static native final double gtk_print_settings_get_double_with_default(long self, String key, double def);

    static final PrintDuplex getDuplex(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_duplex(pointerOf(self));

            return (PrintDuplex) enumFor(PrintDuplex.class, result);
        }
    }

    private static native final int gtk_print_settings_get_duplex(long self);

    static final String getFinishings(PrintSettings self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_finishings(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_print_settings_get_finishings(long self);

    static final int getInt(PrintSettings self, String key) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_int(pointerOf(self), key);

            return result;
        }
    }

    private static native final int gtk_print_settings_get_int(long self, String key);

    static final int getIntWithDefault(PrintSettings self, String key, int def) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_int_with_default(pointerOf(self), key, def);

            return result;
        }
    }

    private static native final int gtk_print_settings_get_int_with_default(long self, String key, int def);

    static final double getLength(PrintSettings self, String key, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_length(pointerOf(self), key, numOf(unit));

            return result;
        }
    }

    private static native final double gtk_print_settings_get_length(long self, String key, int unit);

    static final String getMediaType(PrintSettings self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_media_type(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_print_settings_get_media_type(long self);

    static final int getNCopies(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_n_copies(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_print_settings_get_n_copies(long self);

    static final int getNumberUp(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_number_up(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_print_settings_get_number_up(long self);

    @SuppressWarnings("unused")
    static final FIXME getNumberUpLayout(PrintSettings self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkNumberUpLayout");
    }

    static final PageOrientation getOrientation(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_orientation(pointerOf(self));

            return (PageOrientation) enumFor(PageOrientation.class, result);
        }
    }

    private static native final int gtk_print_settings_get_orientation(long self);

    static final String getOutputBin(PrintSettings self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_output_bin(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_print_settings_get_output_bin(long self);

    @SuppressWarnings("unused")
    static final FIXME getPageRanges(PrintSettings self, int[] numRanges) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkPageRange*");
    }

    static final PageSet getPageSet(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_page_set(pointerOf(self));

            return (PageSet) enumFor(PageSet.class, result);
        }
    }

    private static native final int gtk_print_settings_get_page_set(long self);

    static final double getPaperHeight(PrintSettings self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_paper_height(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_print_settings_get_paper_height(long self, int unit);

    static final PaperSize getPaperSize(PrintSettings self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_paper_size(pointerOf(self));

            return (PaperSize) boxedFor(PaperSize.class, result);
        }
    }

    private static native final long gtk_print_settings_get_paper_size(long self);

    static final double getPaperWidth(PrintSettings self, Unit unit) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_paper_width(pointerOf(self), numOf(unit));

            return result;
        }
    }

    private static native final double gtk_print_settings_get_paper_width(long self, int unit);

    static final PrintPages getPrintPages(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_print_pages(pointerOf(self));

            return (PrintPages) enumFor(PrintPages.class, result);
        }
    }

    private static native final int gtk_print_settings_get_print_pages(long self);

    static final String getPrinter(PrintSettings self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_printer(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_print_settings_get_printer(long self);

    static final double getPrinterLpi(PrintSettings self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_printer_lpi(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_print_settings_get_printer_lpi(long self);

    static final PrintQuality getQuality(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_quality(pointerOf(self));

            return (PrintQuality) enumFor(PrintQuality.class, result);
        }
    }

    private static native final int gtk_print_settings_get_quality(long self);

    static final int getResolution(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_resolution(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_print_settings_get_resolution(long self);

    static final int getResolutionX(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_resolution_x(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_print_settings_get_resolution_x(long self);

    static final int getResolutionY(PrintSettings self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_resolution_y(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_print_settings_get_resolution_y(long self);

    static final boolean getReverse(PrintSettings self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_reverse(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_print_settings_get_reverse(long self);

    static final double getScale(PrintSettings self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_scale(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_print_settings_get_scale(long self);

    static final boolean getUseColor(PrintSettings self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_get_use_color(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_print_settings_get_use_color(long self);

    static final boolean hasKey(PrintSettings self, String key) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_has_key(pointerOf(self), key);

            return result;
        }
    }

    private static native final boolean gtk_print_settings_has_key(long self, String key);

    static final boolean loadFile(PrintSettings self, String fileName) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_load_file(pointerOf(self), fileName);

            return result;
        }
    }

    private static native final boolean gtk_print_settings_load_file(long self, String fileName) throws GlibException;

    @SuppressWarnings("unused")
    static final boolean loadKeyFile(PrintSettings self, FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }

    static final void set(PrintSettings self, String key, String value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set(pointerOf(self), key, value);
        }
    }

    private static native final void gtk_print_settings_set(long self, String key, String value);

    static final void setBool(PrintSettings self, String key, boolean value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_bool(pointerOf(self), key, value);
        }
    }

    private static native final void gtk_print_settings_set_bool(long self, String key, boolean value);

    static final void setCollate(PrintSettings self, boolean collate) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_collate(pointerOf(self), collate);
        }
    }

    private static native final void gtk_print_settings_set_collate(long self, boolean collate);

    static final void setDefaultSource(PrintSettings self, String defaultSource) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (defaultSource == null) {
            throw new IllegalArgumentException("defaultSource can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_default_source(pointerOf(self), defaultSource);
        }
    }

    private static native final void gtk_print_settings_set_default_source(long self, String defaultSource);

    static final void setDither(PrintSettings self, String dither) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dither == null) {
            throw new IllegalArgumentException("dither can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_dither(pointerOf(self), dither);
        }
    }

    private static native final void gtk_print_settings_set_dither(long self, String dither);

    static final void setDouble(PrintSettings self, String key, double value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_double(pointerOf(self), key, value);
        }
    }

    private static native final void gtk_print_settings_set_double(long self, String key, double value);

    static final void setDuplex(PrintSettings self, PrintDuplex duplex) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (duplex == null) {
            throw new IllegalArgumentException("duplex can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_duplex(pointerOf(self), numOf(duplex));
        }
    }

    private static native final void gtk_print_settings_set_duplex(long self, int duplex);

    static final void setFinishings(PrintSettings self, String finishings) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (finishings == null) {
            throw new IllegalArgumentException("finishings can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_finishings(pointerOf(self), finishings);
        }
    }

    private static native final void gtk_print_settings_set_finishings(long self, String finishings);

    static final void setInt(PrintSettings self, String key, int value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_int(pointerOf(self), key, value);
        }
    }

    private static native final void gtk_print_settings_set_int(long self, String key, int value);

    static final void setLength(PrintSettings self, String key, double value, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_length(pointerOf(self), key, value, numOf(unit));
        }
    }

    private static native final void gtk_print_settings_set_length(long self, String key, double value, int unit);

    static final void setMediaType(PrintSettings self, String mediaType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mediaType == null) {
            throw new IllegalArgumentException("mediaType can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_media_type(pointerOf(self), mediaType);
        }
    }

    private static native final void gtk_print_settings_set_media_type(long self, String mediaType);

    static final void setNCopies(PrintSettings self, int numCopies) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_n_copies(pointerOf(self), numCopies);
        }
    }

    private static native final void gtk_print_settings_set_n_copies(long self, int numCopies);

    static final void setNumberUp(PrintSettings self, int numberUp) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_number_up(pointerOf(self), numberUp);
        }
    }

    private static native final void gtk_print_settings_set_number_up(long self, int numberUp);

    @SuppressWarnings("unused")
    static final void setNumberUpLayout(PrintSettings self, FIXME numberUpLayout) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkNumberUpLayout");
    }

    static final void setOrientation(PrintSettings self, PageOrientation orientation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_orientation(pointerOf(self), numOf(orientation));
        }
    }

    private static native final void gtk_print_settings_set_orientation(long self, int orientation);

    static final void setOutputBin(PrintSettings self, String outputBin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (outputBin == null) {
            throw new IllegalArgumentException("outputBin can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_output_bin(pointerOf(self), outputBin);
        }
    }

    private static native final void gtk_print_settings_set_output_bin(long self, String outputBin);

    @SuppressWarnings("unused")
    static final void setPageRanges(PrintSettings self, FIXME pageRanges, int numRanges) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkPageRange*");
    }

    static final void setPageSet(PrintSettings self, PageSet pageSet) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pageSet == null) {
            throw new IllegalArgumentException("pageSet can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_page_set(pointerOf(self), numOf(pageSet));
        }
    }

    private static native final void gtk_print_settings_set_page_set(long self, int pageSet);

    static final void setPaperHeight(PrintSettings self, double height, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_paper_height(pointerOf(self), height, numOf(unit));
        }
    }

    private static native final void gtk_print_settings_set_paper_height(long self, double height, int unit);

    static final void setPaperSize(PrintSettings self, PaperSize paperSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (paperSize == null) {
            throw new IllegalArgumentException("paperSize can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_paper_size(pointerOf(self), pointerOf(paperSize));
        }
    }

    private static native final void gtk_print_settings_set_paper_size(long self, long paperSize);

    static final void setPaperWidth(PrintSettings self, double width, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_paper_width(pointerOf(self), width, numOf(unit));
        }
    }

    private static native final void gtk_print_settings_set_paper_width(long self, double width, int unit);

    static final void setPrintPages(PrintSettings self, PrintPages pages) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pages == null) {
            throw new IllegalArgumentException("pages can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_print_pages(pointerOf(self), numOf(pages));
        }
    }

    private static native final void gtk_print_settings_set_print_pages(long self, int pages);

    static final void setPrinter(PrintSettings self, String printer) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (printer == null) {
            throw new IllegalArgumentException("printer can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_printer(pointerOf(self), printer);
        }
    }

    private static native final void gtk_print_settings_set_printer(long self, String printer);

    static final void setPrinterLpi(PrintSettings self, double lpi) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_printer_lpi(pointerOf(self), lpi);
        }
    }

    private static native final void gtk_print_settings_set_printer_lpi(long self, double lpi);

    static final void setQuality(PrintSettings self, PrintQuality quality) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (quality == null) {
            throw new IllegalArgumentException("quality can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_quality(pointerOf(self), numOf(quality));
        }
    }

    private static native final void gtk_print_settings_set_quality(long self, int quality);

    static final void setResolution(PrintSettings self, int resolution) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_resolution(pointerOf(self), resolution);
        }
    }

    private static native final void gtk_print_settings_set_resolution(long self, int resolution);

    static final void setResolutionXy(PrintSettings self, int resolutionX, int resolutionY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_resolution_xy(pointerOf(self), resolutionX, resolutionY);
        }
    }

    private static native final void gtk_print_settings_set_resolution_xy(long self, int resolutionX, int resolutionY);

    static final void setReverse(PrintSettings self, boolean reverse) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_reverse(pointerOf(self), reverse);
        }
    }

    private static native final void gtk_print_settings_set_reverse(long self, boolean reverse);

    static final void setScale(PrintSettings self, double scale) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_scale(pointerOf(self), scale);
        }
    }

    private static native final void gtk_print_settings_set_scale(long self, double scale);

    static final void setUseColor(PrintSettings self, boolean useColor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_set_use_color(pointerOf(self), useColor);
        }
    }

    private static native final void gtk_print_settings_set_use_color(long self, boolean useColor);

    static final boolean toFile(PrintSettings self, String fileName) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            result = gtk_print_settings_to_file(pointerOf(self), fileName);

            return result;
        }
    }

    private static native final boolean gtk_print_settings_to_file(long self, String fileName) throws GlibException;

    @SuppressWarnings("unused")
    static final FIXME toGvariant(PrintSettings self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final void toKeyFile(PrintSettings self, FIXME keyFile, String groupName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GKeyFile*");
    }

    static final void unset(PrintSettings self, String key) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            gtk_print_settings_unset(pointerOf(self), key);
        }
    }

    private static native final void gtk_print_settings_unset(long self, String key);
}

