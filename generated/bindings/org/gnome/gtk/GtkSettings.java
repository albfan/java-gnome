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
import org.gnome.gdk.Screen;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Settings;

final class GtkSettings extends Plumbing
{
    private GtkSettings() {}

    static final void resetProperty(Settings self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_settings_reset_property(pointerOf(self), name);
        }
    }

    private static native final void gtk_settings_reset_property(long self, String name);

    static final void setDoubleProperty(Settings self, String name, double vDouble, String origin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (origin == null) {
            throw new IllegalArgumentException("origin can't be null");
        }

        synchronized (lock) {
            gtk_settings_set_double_property(pointerOf(self), name, vDouble, origin);
        }
    }

    private static native final void gtk_settings_set_double_property(long self, String name, double vDouble, String origin);

    static final void setLongProperty(Settings self, String name, long vLong, String origin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (origin == null) {
            throw new IllegalArgumentException("origin can't be null");
        }

        synchronized (lock) {
            gtk_settings_set_long_property(pointerOf(self), name, vLong, origin);
        }
    }

    private static native final void gtk_settings_set_long_property(long self, String name, long vLong, String origin);

    @SuppressWarnings("unused")
    static final void setPropertyValue(Settings self, String name, FIXME svalue) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GtkSettingsValue*");
    }

    static final void setStringProperty(Settings self, String name, String vString, String origin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (vString == null) {
            throw new IllegalArgumentException("vString can't be null");
        }

        if (origin == null) {
            throw new IllegalArgumentException("origin can't be null");
        }

        synchronized (lock) {
            gtk_settings_set_string_property(pointerOf(self), name, vString, origin);
        }
    }

    private static native final void gtk_settings_set_string_property(long self, String name, String vString, String origin);

    static final Settings getDefault() {
        long result;

        synchronized (lock) {
            result = gtk_settings_get_default();

            return (Settings) objectFor(result);
        }
    }

    private static native final long gtk_settings_get_default();

    static final Settings getForScreen(Screen screen) {
        long result;

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            result = gtk_settings_get_for_screen(pointerOf(screen));

            return (Settings) objectFor(result);
        }
    }

    private static native final long gtk_settings_get_for_screen(long screen);

    @SuppressWarnings("unused")
    static final void installProperty(FIXME pspec) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GParamSpec*");
    }

    @SuppressWarnings("unused")
    static final void installPropertyParser(FIXME pspec, FIXME parser) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GParamSpec*");
    }
}

