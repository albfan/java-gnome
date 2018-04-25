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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.RecentFilter;
import org.gnome.gtk.RecentFilterFlags;

final class GtkRecentFilter extends Plumbing
{
    private GtkRecentFilter() {}

    static final long createRecentFilter() {
        long result;

        synchronized (lock) {
            result = gtk_recent_filter_new();

            return result;
        }
    }

    private static native final long gtk_recent_filter_new();

    static final void addAge(RecentFilter self, int days) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_filter_add_age(pointerOf(self), days);
        }
    }

    private static native final void gtk_recent_filter_add_age(long self, int days);

    static final void addApplication(RecentFilter self, String application) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (application == null) {
            throw new IllegalArgumentException("application can't be null");
        }

        synchronized (lock) {
            gtk_recent_filter_add_application(pointerOf(self), application);
        }
    }

    private static native final void gtk_recent_filter_add_application(long self, String application);

    @SuppressWarnings("unused")
    static final void addCustom(RecentFilter self, RecentFilterFlags needed, FIXME func, FIXME data, FIXME dataDestroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkRecentFilterFunc");
    }

    static final void addGroup(RecentFilter self, String group) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (group == null) {
            throw new IllegalArgumentException("group can't be null");
        }

        synchronized (lock) {
            gtk_recent_filter_add_group(pointerOf(self), group);
        }
    }

    private static native final void gtk_recent_filter_add_group(long self, String group);

    static final void addMimeType(RecentFilter self, String mimeType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mimeType == null) {
            throw new IllegalArgumentException("mimeType can't be null");
        }

        synchronized (lock) {
            gtk_recent_filter_add_mime_type(pointerOf(self), mimeType);
        }
    }

    private static native final void gtk_recent_filter_add_mime_type(long self, String mimeType);

    static final void addPattern(RecentFilter self, String pattern) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pattern == null) {
            throw new IllegalArgumentException("pattern can't be null");
        }

        synchronized (lock) {
            gtk_recent_filter_add_pattern(pointerOf(self), pattern);
        }
    }

    private static native final void gtk_recent_filter_add_pattern(long self, String pattern);

    static final void addPixbufFormats(RecentFilter self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_filter_add_pixbuf_formats(pointerOf(self));
        }
    }

    private static native final void gtk_recent_filter_add_pixbuf_formats(long self);

    @SuppressWarnings("unused")
    static final boolean filter(RecentFilter self, FIXME filterInfo) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GtkRecentFilterInfo*");
    }

    static final String getName(RecentFilter self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_filter_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_filter_get_name(long self);

    static final RecentFilterFlags getNeeded(RecentFilter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_filter_get_needed(pointerOf(self));

            return (RecentFilterFlags) flagFor(RecentFilterFlags.class, result);
        }
    }

    private static native final int gtk_recent_filter_get_needed(long self);

    static final void setName(RecentFilter self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_recent_filter_set_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_recent_filter_set_name(long self, String name);
}

