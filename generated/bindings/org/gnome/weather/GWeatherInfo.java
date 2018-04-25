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
import org.gnome.gdk.PixbufAnimation;
import org.gnome.glib.Signal;
import org.gnome.weather.ConditionPhenomenon;
import org.gnome.weather.ConditionQualifier;
import org.gnome.weather.DistanceUnit;
import org.gnome.weather.Info;
import org.gnome.weather.Location;
import org.gnome.weather.Plumbing;
import org.gnome.weather.PressureUnit;
import org.gnome.weather.Sky;
import org.gnome.weather.SpeedUnit;
import org.gnome.weather.TemperatureUnit;
import org.gnome.weather.WindDirection;

final class GWeatherInfo extends Plumbing
{
    private GWeatherInfo() {}

    static final long createInfo(Location location) {
        long result;

        synchronized (lock) {
            result = gweather_info_new(pointerOf(location));

            return result;
        }
    }

    private static native final long gweather_info_new(long location);

    static final void abort(Info self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gweather_info_abort(pointerOf(self));
        }
    }

    private static native final void gweather_info_abort(long self);

    static final String getApparent(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_apparent(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_apparent(long self);

    static final String getAttribution(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_attribution(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_attribution(long self);

    static final String getConditions(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_conditions(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_conditions(long self);

    static final String getDew(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_dew(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_dew(long self);

    @SuppressWarnings("unused")
    static final FIXME getEnabledProviders(Info self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GWeatherProvider");
    }

    static final Info[] getForecastList(Info self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_forecast_list(pointerOf(self));

            return (Info[]) objectArrayFor(result, new Info[result.length]);
        }
    }

    private static native final long[] gweather_info_get_forecast_list(long self);

    static final String getHumidity(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_humidity(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_humidity(long self);

    static final String getIconName(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_icon_name(long self);

    static final org.gnome.weather.Location getLocation(Info self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_location(pointerOf(self));

            return (org.gnome.weather.Location) boxedFor(org.gnome.weather.Location.class, result);
        }
    }

    private static native final long gweather_info_get_location(long self);

    static final String getLocationName(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_location_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_location_name(long self);

    static final String getPressure(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_pressure(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_pressure(long self);

    static final PixbufAnimation getRadar(Info self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_radar(pointerOf(self));

            return (PixbufAnimation) objectFor(result);
        }
    }

    private static native final long gweather_info_get_radar(long self);

    static final String getSky(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_sky(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_sky(long self);

    static final String getSunrise(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_sunrise(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_sunrise(long self);

    static final String getSunset(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_sunset(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_sunset(long self);

    static final String getSymbolicIconName(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_symbolic_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_symbolic_icon_name(long self);

    static final String getTemp(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_temp(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_temp(long self);

    static final String getTempMax(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_temp_max(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_temp_max(long self);

    static final String getTempMin(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_temp_min(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_temp_min(long self);

    static final String getTempSummary(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_temp_summary(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_temp_summary(long self);

    @SuppressWarnings("unused")
    static final boolean getUpcomingMoonphases(Info self, FIXME phases) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("time_t*");
    }

    static final String getUpdate(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_update(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_update(long self);

    static final boolean getValueApparent(Info self, TemperatureUnit unit, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_value_apparent(pointerOf(self), numOf(unit), value);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_apparent(long self, int unit, double[] value);

    static final boolean getValueConditions(Info self, ConditionPhenomenon[] phenomenon, ConditionQualifier[] qualifier) {
        boolean result;
        int[] _phenomenon;
        int[] _qualifier;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _phenomenon = numsOf(phenomenon);

        _qualifier = numsOf(qualifier);

        synchronized (lock) {
            result = gweather_info_get_value_conditions(pointerOf(self), _phenomenon, _qualifier);
            fillEnumArray(ConditionPhenomenon.class, phenomenon, _phenomenon);
            fillEnumArray(ConditionQualifier.class, qualifier, _qualifier);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_conditions(long self, int[] phenomenon, int[] qualifier);

    static final boolean getValueDew(Info self, TemperatureUnit unit, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_value_dew(pointerOf(self), numOf(unit), value);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_dew(long self, int unit, double[] value);

    @SuppressWarnings("unused")
    static final boolean getValueMoonphase(Info self, FIXME value, FIXME lat) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GWeatherMoonPhase*");
    }

    static final boolean getValuePressure(Info self, PressureUnit unit, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_value_pressure(pointerOf(self), numOf(unit), value);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_pressure(long self, int unit, double[] value);

    static final boolean getValueSky(Info self, Sky[] sky) {
        boolean result;
        int[] _sky;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _sky = numsOf(sky);

        synchronized (lock) {
            result = gweather_info_get_value_sky(pointerOf(self), _sky);
            fillEnumArray(Sky.class, sky, _sky);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_sky(long self, int[] sky);

    @SuppressWarnings("unused")
    static final boolean getValueSunrise(Info self, FIXME value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("time_t*");
    }

    @SuppressWarnings("unused")
    static final boolean getValueSunset(Info self, FIXME value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("time_t*");
    }

    static final boolean getValueTemp(Info self, TemperatureUnit unit, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_value_temp(pointerOf(self), numOf(unit), value);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_temp(long self, int unit, double[] value);

    static final boolean getValueTempMax(Info self, TemperatureUnit unit, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_value_temp_max(pointerOf(self), numOf(unit), value);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_temp_max(long self, int unit, double[] value);

    static final boolean getValueTempMin(Info self, TemperatureUnit unit, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_value_temp_min(pointerOf(self), numOf(unit), value);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_temp_min(long self, int unit, double[] value);

    @SuppressWarnings("unused")
    static final boolean getValueUpdate(Info self, FIXME value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("time_t*");
    }

    static final boolean getValueVisibility(Info self, DistanceUnit unit, double[] value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_value_visibility(pointerOf(self), numOf(unit), value);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_visibility(long self, int unit, double[] value);

    static final boolean getValueWind(Info self, SpeedUnit unit, double[] speed, WindDirection[] direction) {
        boolean result;
        int[] _direction;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        _direction = numsOf(direction);

        synchronized (lock) {
            result = gweather_info_get_value_wind(pointerOf(self), numOf(unit), speed, _direction);
            fillEnumArray(WindDirection.class, direction, _direction);

            return result;
        }
    }

    private static native final boolean gweather_info_get_value_wind(long self, int unit, double[] speed, int[] direction);

    static final String getVisibility(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_visibility(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_visibility(long self);

    static final String getWeatherSummary(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_weather_summary(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_weather_summary(long self);

    static final String getWind(Info self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_get_wind(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_info_get_wind(long self);

    static final boolean isDaytime(Info self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_is_daytime(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gweather_info_is_daytime(long self);

    static final boolean isValid(Info self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_is_valid(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gweather_info_is_valid(long self);

    static final boolean networkError(Info self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_network_error(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gweather_info_network_error(long self);

    static final int nextSunEvent(Info self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_info_next_sun_event(pointerOf(self));

            return result;
        }
    }

    private static native final int gweather_info_next_sun_event(long self);

    @SuppressWarnings("unused")
    static final void setEnabledProviders(Info self, FIXME providers) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GWeatherProvider");
    }

    static final void setLocation(Info self, Location location) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gweather_info_set_location(pointerOf(self), pointerOf(location));
        }
    }

    private static native final void gweather_info_set_location(long self, long location);

    static final void update(Info self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gweather_info_update(pointerOf(self));
        }
    }

    private static native final void gweather_info_update(long self);

    static final void storeCache() {
        synchronized (lock) {
            gweather_info_store_cache();
        }
    }

    private static native final void gweather_info_store_cache();

    interface UpdatedSignal extends Signal
    {
        void onUpdated(Info source);
    }

    static final void connect(Info self, GWeatherInfo.UpdatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GWeatherInfo.class, "updated", after);
    }

    protected static final void receiveUpdated(Signal handler, long source) {
        ((GWeatherInfo.UpdatedSignal) handler).onUpdated((Info) objectFor(source));
    }
}

