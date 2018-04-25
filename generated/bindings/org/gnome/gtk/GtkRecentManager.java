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
import org.gnome.glib.Signal;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.RecentInfo;
import org.gnome.gtk.RecentManager;

final class GtkRecentManager extends Plumbing
{
    private GtkRecentManager() {}

    static final long createRecentManager() {
        long result;

        synchronized (lock) {
            result = gtk_recent_manager_new();

            return result;
        }
    }

    private static native final long gtk_recent_manager_new();

    @SuppressWarnings("unused")
    static final boolean addFull(RecentManager self, String uri, FIXME recentData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GtkRecentData*");
    }

    static final boolean addItem(RecentManager self, String uri) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_manager_add_item(pointerOf(self), uri);

            return result;
        }
    }

    private static native final boolean gtk_recent_manager_add_item(long self, String uri);

    static final RecentInfo[] getItems(RecentManager self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_manager_get_items(pointerOf(self));

            return (RecentInfo[]) boxedArrayFor(RecentInfo.class, result, new RecentInfo[result.length]);
        }
    }

    private static native final long[] gtk_recent_manager_get_items(long self);

    static final boolean hasItem(RecentManager self, String uri) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_manager_has_item(pointerOf(self), uri);

            return result;
        }
    }

    private static native final boolean gtk_recent_manager_has_item(long self, String uri);

    static final RecentInfo lookupItem(RecentManager self, String uri) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_manager_lookup_item(pointerOf(self), uri);

            return (RecentInfo) boxedFor(RecentInfo.class, result);
        }
    }

    private static native final long gtk_recent_manager_lookup_item(long self, String uri) throws GlibException;

    static final boolean moveItem(RecentManager self, String uri, String newUri) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_manager_move_item(pointerOf(self), uri, newUri);

            return result;
        }
    }

    private static native final boolean gtk_recent_manager_move_item(long self, String uri, String newUri) throws GlibException;

    static final int purgeItems(RecentManager self) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_manager_purge_items(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_recent_manager_purge_items(long self) throws GlibException;

    static final boolean removeItem(RecentManager self, String uri) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_manager_remove_item(pointerOf(self), uri);

            return result;
        }
    }

    private static native final boolean gtk_recent_manager_remove_item(long self, String uri) throws GlibException;

    static final RecentManager getDefault() {
        long result;

        synchronized (lock) {
            result = gtk_recent_manager_get_default();

            return (RecentManager) objectFor(result);
        }
    }

    private static native final long gtk_recent_manager_get_default();

    interface ChangedSignal extends Signal
    {
        void onChanged(RecentManager source);
    }

    static final void connect(RecentManager self, GtkRecentManager.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRecentManager.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkRecentManager.ChangedSignal) handler).onChanged((RecentManager) objectFor(source));
    }
}

