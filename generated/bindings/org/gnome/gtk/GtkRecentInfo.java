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
import org.gnome.gdk.Pixbuf;
import org.gnome.glib.GlibException;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.RecentInfo;

final class GtkRecentInfo extends Plumbing
{
    private GtkRecentInfo() {}

    @SuppressWarnings("unused")
    static final FIXME createAppInfo(RecentInfo self, String appName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAppInfo*");
    }

    static final boolean exists(RecentInfo self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_exists(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_recent_info_exists(long self);

    static final long getAdded(RecentInfo self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_added(pointerOf(self));

            return result;
        }
    }

    private static native final long gtk_recent_info_get_added(long self);

    static final int getAge(RecentInfo self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_age(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_recent_info_get_age(long self);

    @SuppressWarnings("unused")
    static final boolean getApplicationInfo(RecentInfo self, String appName, String[] appExec, int[] count, FIXME time) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("time_t*");
    }

    static final String[] getApplications(RecentInfo self, long[] length) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_applications(pointerOf(self), length);

            return result;
        }
    }

    private static native final String[] gtk_recent_info_get_applications(long self, long[] length);

    static final String getDescription(RecentInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_description(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_info_get_description(long self);

    static final String getDisplayName(RecentInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_display_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_info_get_display_name(long self);

    @SuppressWarnings("unused")
    static final FIXME getGicon(RecentInfo self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final String[] getGroups(RecentInfo self, long[] length) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_groups(pointerOf(self), length);

            return result;
        }
    }

    private static native final String[] gtk_recent_info_get_groups(long self, long[] length);

    static final Pixbuf getIcon(RecentInfo self, int size) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_icon(pointerOf(self), size);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_recent_info_get_icon(long self, int size);

    static final String getMimeType(RecentInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_mime_type(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_info_get_mime_type(long self);

    static final long getModified(RecentInfo self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_modified(pointerOf(self));

            return result;
        }
    }

    private static native final long gtk_recent_info_get_modified(long self);

    static final boolean getPrivateHint(RecentInfo self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_private_hint(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_recent_info_get_private_hint(long self);

    static final String getShortName(RecentInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_short_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_info_get_short_name(long self);

    static final String getUri(RecentInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_uri(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_info_get_uri(long self);

    static final String getUriDisplay(RecentInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_uri_display(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_info_get_uri_display(long self);

    static final long getVisited(RecentInfo self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_get_visited(pointerOf(self));

            return result;
        }
    }

    private static native final long gtk_recent_info_get_visited(long self);

    static final boolean hasApplication(RecentInfo self, String appName) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (appName == null) {
            throw new IllegalArgumentException("appName can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_has_application(pointerOf(self), appName);

            return result;
        }
    }

    private static native final boolean gtk_recent_info_has_application(long self, String appName);

    static final boolean hasGroup(RecentInfo self, String groupName) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (groupName == null) {
            throw new IllegalArgumentException("groupName can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_has_group(pointerOf(self), groupName);

            return result;
        }
    }

    private static native final boolean gtk_recent_info_has_group(long self, String groupName);

    static final boolean isLocal(RecentInfo self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_is_local(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_recent_info_is_local(long self);

    static final String lastApplication(RecentInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_last_application(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_recent_info_last_application(long self);

    static final boolean match(RecentInfo self, RecentInfo infoB) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (infoB == null) {
            throw new IllegalArgumentException("infoB can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_match(pointerOf(self), pointerOf(infoB));

            return result;
        }
    }

    private static native final boolean gtk_recent_info_match(long self, long infoB);

    static final RecentInfo ref(RecentInfo self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_info_ref(pointerOf(self));

            return (RecentInfo) boxedFor(RecentInfo.class, result);
        }
    }

    private static native final long gtk_recent_info_ref(long self);

    static final void unref(RecentInfo self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_info_unref(pointerOf(self));
        }
    }

    private static native final void gtk_recent_info_unref(long self);
}

