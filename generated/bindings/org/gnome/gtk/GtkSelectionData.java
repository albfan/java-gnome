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
import org.gnome.gdk.Display;
import org.gnome.gdk.Pixbuf;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SelectionData;
import org.gnome.gtk.TextBuffer;

final class GtkSelectionData extends Plumbing
{
    private GtkSelectionData() {}

    static final SelectionData copy(SelectionData self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_copy(pointerOf(self));

            return (SelectionData) boxedFor(SelectionData.class, result);
        }
    }

    private static native final long gtk_selection_data_copy(long self);

    static final void free(SelectionData self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_selection_data_free(pointerOf(self));
        }
    }

    private static native final void gtk_selection_data_free(long self);

    @SuppressWarnings("unused")
    static final FIXME getData(SelectionData self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    @SuppressWarnings("unused")
    static final FIXME getDataType(SelectionData self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final FIXME getDataWithLength(SelectionData self, int[] length) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    static final Display getDisplay(SelectionData self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_get_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gtk_selection_data_get_display(long self);

    static final int getFormat(SelectionData self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_get_format(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_selection_data_get_format(long self);

    static final int getLength(SelectionData self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_get_length(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_selection_data_get_length(long self);

    static final Pixbuf getPixbuf(SelectionData self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_get_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_selection_data_get_pixbuf(long self);

    @SuppressWarnings("unused")
    static final FIXME getSelection(SelectionData self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final FIXME getTarget(SelectionData self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final boolean getTargets(SelectionData self, FIXME targets, int[] nAtoms) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom**");
    }

    @SuppressWarnings("unused")
    static final FIXME getText(SelectionData self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    static final String[] getUris(SelectionData self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_get_uris(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_selection_data_get_uris(long self);

    @SuppressWarnings("unused")
    static final void set(SelectionData self, FIXME type, int format, FIXME data, int length) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final boolean setPixbuf(SelectionData self, Pixbuf pixbuf) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_set_pixbuf(pointerOf(self), pointerOf(pixbuf));

            return result;
        }
    }

    private static native final boolean gtk_selection_data_set_pixbuf(long self, long pixbuf);

    static final boolean setText(SelectionData self, String str, int len) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_set_text(pointerOf(self), str, len);

            return result;
        }
    }

    private static native final boolean gtk_selection_data_set_text(long self, String str, int len);

    static final boolean setUris(SelectionData self, String[] uris) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uris == null) {
            throw new IllegalArgumentException("uris can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_set_uris(pointerOf(self), uris);

            return result;
        }
    }

    private static native final boolean gtk_selection_data_set_uris(long self, String[] uris);

    static final boolean targetsIncludeImage(SelectionData self, boolean writable) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_targets_include_image(pointerOf(self), writable);

            return result;
        }
    }

    private static native final boolean gtk_selection_data_targets_include_image(long self, boolean writable);

    static final boolean targetsIncludeRichText(SelectionData self, TextBuffer buffer) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_targets_include_rich_text(pointerOf(self), pointerOf(buffer));

            return result;
        }
    }

    private static native final boolean gtk_selection_data_targets_include_rich_text(long self, long buffer);

    static final boolean targetsIncludeText(SelectionData self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_targets_include_text(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_selection_data_targets_include_text(long self);

    static final boolean targetsIncludeUri(SelectionData self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_selection_data_targets_include_uri(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_selection_data_targets_include_uri(long self);
}

