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
import org.gnome.gdk.ModifierType;
import org.gnome.glib.Signal;
import org.gnome.gtk.AccelKey;
import org.gnome.gtk.AccelMap;
import org.gnome.gtk.Plumbing;

final class GtkAccelMap extends Plumbing
{
    private GtkAccelMap() {}

    static final void addEntry(String accelPath, int accelKey, ModifierType accelMods) {
        if (accelPath == null) {
            throw new IllegalArgumentException("accelPath can't be null");
        }

        if (accelMods == null) {
            throw new IllegalArgumentException("accelMods can't be null");
        }

        synchronized (lock) {
            gtk_accel_map_add_entry(accelPath, accelKey, numOf(accelMods));
        }
    }

    private static native final void gtk_accel_map_add_entry(String accelPath, int accelKey, int accelMods);

    static final void addFilter(String filterPattern) {
        if (filterPattern == null) {
            throw new IllegalArgumentException("filterPattern can't be null");
        }

        synchronized (lock) {
            gtk_accel_map_add_filter(filterPattern);
        }
    }

    private static native final void gtk_accel_map_add_filter(String filterPattern);

    static final boolean changeEntry(String accelPath, int accelKey, ModifierType accelMods, boolean replace) {
        boolean result;

        if (accelPath == null) {
            throw new IllegalArgumentException("accelPath can't be null");
        }

        if (accelMods == null) {
            throw new IllegalArgumentException("accelMods can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_map_change_entry(accelPath, accelKey, numOf(accelMods), replace);

            return result;
        }
    }

    private static native final boolean gtk_accel_map_change_entry(String accelPath, int accelKey, int accelMods, boolean replace);

    @SuppressWarnings("unused")
    static final void foreach(FIXME data, FIXME foreachFunc) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    @SuppressWarnings("unused")
    static final void foreachUnfiltered(FIXME data, FIXME foreachFunc) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final AccelMap get() {
        long result;

        synchronized (lock) {
            result = gtk_accel_map_get();

            return (AccelMap) objectFor(result);
        }
    }

    private static native final long gtk_accel_map_get();

    static final void load(String fileName) {
        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            gtk_accel_map_load(fileName);
        }
    }

    private static native final void gtk_accel_map_load(String fileName);

    static final void loadFd(int fd) {
        synchronized (lock) {
            gtk_accel_map_load_fd(fd);
        }
    }

    private static native final void gtk_accel_map_load_fd(int fd);

    @SuppressWarnings("unused")
    static final void loadScanner(FIXME scanner) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GScanner*");
    }

    static final void lockPath(String accelPath) {
        if (accelPath == null) {
            throw new IllegalArgumentException("accelPath can't be null");
        }

        synchronized (lock) {
            gtk_accel_map_lock_path(accelPath);
        }
    }

    private static native final void gtk_accel_map_lock_path(String accelPath);

    static final boolean lookupEntry(String accelPath, AccelKey key) {
        boolean result;

        if (accelPath == null) {
            throw new IllegalArgumentException("accelPath can't be null");
        }

        synchronized (lock) {
            result = gtk_accel_map_lookup_entry(accelPath, pointerOf(key));

            return result;
        }
    }

    private static native final boolean gtk_accel_map_lookup_entry(String accelPath, long key);

    static final void save(String fileName) {
        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            gtk_accel_map_save(fileName);
        }
    }

    private static native final void gtk_accel_map_save(String fileName);

    static final void saveFd(int fd) {
        synchronized (lock) {
            gtk_accel_map_save_fd(fd);
        }
    }

    private static native final void gtk_accel_map_save_fd(int fd);

    static final void unlockPath(String accelPath) {
        if (accelPath == null) {
            throw new IllegalArgumentException("accelPath can't be null");
        }

        synchronized (lock) {
            gtk_accel_map_unlock_path(accelPath);
        }
    }

    private static native final void gtk_accel_map_unlock_path(String accelPath);

    interface ChangedSignal extends Signal
    {
        void onChanged(AccelMap source, String accelPath, int accelKey, ModifierType[] accelMods);
    }

    static final void connect(AccelMap self, GtkAccelMap.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAccelMap.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source, String accelPath, int accelKey, int[] accelMods) {
        ((GtkAccelMap.ChangedSignal) handler).onChanged((AccelMap) objectFor(source), accelPath, accelKey, null);
    }
}

