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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.weather.Location;
import org.gnome.weather.LocationLevel;
import org.gnome.weather.Plumbing;
import org.gnome.weather.Timezone;

final class GWeatherLocation extends Plumbing
{
    private GWeatherLocation() {}

    static final long createLocationDetached(String name, String icao, double latitude, double longitude) {
        long result;

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gweather_location_new_detached(name, icao, latitude, longitude);

            return result;
        }
    }

    private static native final long gweather_location_new_detached(String name, String icao, double latitude, double longitude);

    @SuppressWarnings("unused")
    static final Location deserialize(Location self, FIXME serialized) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final void detectNearestCity(Location self, double lat, double lon, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    static final boolean equal(Location self, Location two) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (two == null) {
            throw new IllegalArgumentException("two can't be null");
        }

        synchronized (lock) {
            result = gweather_location_equal(pointerOf(self), pointerOf(two));

            return result;
        }
    }

    private static native final boolean gweather_location_equal(long self, long two);

    static final Location findByCountryCode(Location self, String countryCode) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (countryCode == null) {
            throw new IllegalArgumentException("countryCode can't be null");
        }

        synchronized (lock) {
            result = gweather_location_find_by_country_code(pointerOf(self), countryCode);

            return (Location) boxedFor(Location.class, result);
        }
    }

    private static native final long gweather_location_find_by_country_code(long self, String countryCode);

    static final Location findByStationCode(Location self, String stationCode) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stationCode == null) {
            throw new IllegalArgumentException("stationCode can't be null");
        }

        synchronized (lock) {
            result = gweather_location_find_by_station_code(pointerOf(self), stationCode);

            return (Location) boxedFor(Location.class, result);
        }
    }

    private static native final long gweather_location_find_by_station_code(long self, String stationCode);

    static final Location findNearestCity(Location self, double lat, double lon) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_find_nearest_city(pointerOf(self), lat, lon);

            return (Location) boxedFor(Location.class, result);
        }
    }

    private static native final long gweather_location_find_nearest_city(long self, double lat, double lon);

    @SuppressWarnings("unused")
    static final Location findNearestCityFull(Location self, double lat, double lon, FIXME func, FIXME userData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GWeatherFilterFunc");
    }

    static final void freeTimezones(Location self, Timezone[] zones) {
        long[] _zones;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (zones == null) {
            throw new IllegalArgumentException("zones can't be null");
        }

        _zones = pointersOf(zones);

        synchronized (lock) {
            gweather_location_free_timezones(pointerOf(self), _zones);
            fillBoxedArray(Timezone.class, zones, _zones);
        }
    }

    private static native final void gweather_location_free_timezones(long self, long[] zones);

    static final Location[] getChildren(Location self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_children(pointerOf(self));

            return (Location[]) boxedArrayFor(Location.class, result, new Location[result.length]);
        }
    }

    private static native final long[] gweather_location_get_children(long self);

    static final String getCityName(Location self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_city_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_location_get_city_name(long self);

    static final String getCode(Location self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_code(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_location_get_code(long self);

    static final void getCoords(Location self, double[] latitude, double[] longitude) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gweather_location_get_coords(pointerOf(self), latitude, longitude);
        }
    }

    private static native final void gweather_location_get_coords(long self, double[] latitude, double[] longitude);

    static final String getCountry(Location self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_country(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_location_get_country(long self);

    static final String getCountryName(Location self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_country_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_location_get_country_name(long self);

    static final double getDistance(Location self, Location loc2) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (loc2 == null) {
            throw new IllegalArgumentException("loc2 can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_distance(pointerOf(self), pointerOf(loc2));

            return result;
        }
    }

    private static native final double gweather_location_get_distance(long self, long loc2);

    static final LocationLevel getLevel(Location self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_level(pointerOf(self));

            return (LocationLevel) enumFor(LocationLevel.class, result);
        }
    }

    private static native final int gweather_location_get_level(long self);

    static final String getName(Location self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_location_get_name(long self);

    static final Location getParent(Location self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_parent(pointerOf(self));

            return (Location) boxedFor(Location.class, result);
        }
    }

    private static native final long gweather_location_get_parent(long self);

    static final String getSortName(Location self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_sort_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_location_get_sort_name(long self);

    static final Timezone getTimezone(Location self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_timezone(pointerOf(self));

            return (Timezone) boxedFor(Timezone.class, result);
        }
    }

    private static native final long gweather_location_get_timezone(long self);

    static final String getTimezoneStr(Location self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_timezone_str(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_location_get_timezone_str(long self);

    static final Timezone[] getTimezones(Location self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_get_timezones(pointerOf(self));

            return (Timezone[]) boxedArrayFor(Timezone.class, result, new Timezone[result.length]);
        }
    }

    private static native final long[] gweather_location_get_timezones(long self);

    static final boolean hasCoords(Location self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_has_coords(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gweather_location_has_coords(long self);

    static final Location ref(Location self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_location_ref(pointerOf(self));

            return (Location) boxedFor(Location.class, result);
        }
    }

    private static native final long gweather_location_ref(long self);

    @SuppressWarnings("unused")
    static final FIXME serialize(Location self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    static final void unref(Location self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gweather_location_unref(pointerOf(self));
        }
    }

    private static native final void gweather_location_unref(long self);
}

