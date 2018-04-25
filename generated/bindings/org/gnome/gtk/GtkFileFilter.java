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
import org.gnome.gtk.FileFilter;
import org.gnome.gtk.FileFilterFlags;
import org.gnome.gtk.Plumbing;

final class GtkFileFilter extends Plumbing
{
    private GtkFileFilter() {}

    static final long createFileFilter() {
        long result;

        synchronized (lock) {
            result = gtk_file_filter_new();

            return result;
        }
    }

    private static native final long gtk_file_filter_new();

    @SuppressWarnings("unused")
    static final long createFileFilterFromGvariant(FIXME variant) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final void addCustom(FileFilter self, FileFilterFlags needed, FIXME func, FIXME data, FIXME notify) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkFileFilterFunc");
    }

    static final void addMimeType(FileFilter self, String mimeType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mimeType == null) {
            throw new IllegalArgumentException("mimeType can't be null");
        }

        synchronized (lock) {
            gtk_file_filter_add_mime_type(pointerOf(self), mimeType);
        }
    }

    private static native final void gtk_file_filter_add_mime_type(long self, String mimeType);

    static final void addPattern(FileFilter self, String pattern) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pattern == null) {
            throw new IllegalArgumentException("pattern can't be null");
        }

        synchronized (lock) {
            gtk_file_filter_add_pattern(pointerOf(self), pattern);
        }
    }

    private static native final void gtk_file_filter_add_pattern(long self, String pattern);

    static final void addPixbufFormats(FileFilter self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_filter_add_pixbuf_formats(pointerOf(self));
        }
    }

    private static native final void gtk_file_filter_add_pixbuf_formats(long self);

    @SuppressWarnings("unused")
    static final boolean filter(FileFilter self, FIXME filterInfo) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GtkFileFilterInfo*");
    }

    static final String getName(FileFilter self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_filter_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_file_filter_get_name(long self);

    static final FileFilterFlags getNeeded(FileFilter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_filter_get_needed(pointerOf(self));

            return (FileFilterFlags) flagFor(FileFilterFlags.class, result);
        }
    }

    private static native final int gtk_file_filter_get_needed(long self);

    static final void setName(FileFilter self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_filter_set_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_file_filter_set_name(long self, String name);

    @SuppressWarnings("unused")
    static final FIXME toGvariant(FileFilter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }
}

