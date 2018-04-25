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
package org.gnome.weather;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.weather.Plumbing;
import org.gnome.weather.Timezone;

final class GWeatherTimezone extends Plumbing
{
    private GWeatherTimezone() {}

    static final int getDstOffset(Timezone self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_timezone_get_dst_offset(pointerOf(self));

            return result;
        }
    }

    private static native final int gweather_timezone_get_dst_offset(long self);

    static final String getName(Timezone self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_timezone_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_timezone_get_name(long self);

    static final int getOffset(Timezone self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_timezone_get_offset(pointerOf(self));

            return result;
        }
    }

    private static native final int gweather_timezone_get_offset(long self);

    static final String getTzid(Timezone self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_timezone_get_tzid(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_timezone_get_tzid(long self);

    static final boolean hasDst(Timezone self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_timezone_has_dst(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gweather_timezone_has_dst(long self);

    static final Timezone ref(Timezone self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_timezone_ref(pointerOf(self));

            return (Timezone) boxedFor(Timezone.class, result);
        }
    }

    private static native final long gweather_timezone_ref(long self);

    static final void unref(Timezone self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gweather_timezone_unref(pointerOf(self));
        }
    }

    private static native final void gweather_timezone_unref(long self);
}

