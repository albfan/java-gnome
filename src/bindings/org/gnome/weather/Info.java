/*
 * java-gnome, a UI library for writing GTK and GNOME programs from Java!
 *
 * Copyright © 2013 Operational Dynamics Consulting, Pty Ltd and Others
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

import org.gnome.glib.Object;

/**
 * Info provides a handy way to access weather conditions and forecasts from a
 * {@link Location}, aggregating multiple different web services.
 * <p>
 * It includes also astronomical data such as sunrise times and moon phases.
 * 
 * @author Guillaume Mazoyer
 * @since 4.2.0
 */
public class Info extends Object
{
    protected Info(long pointer) {
        super(pointer);
    }

    /**
     * Builds a new Info that will provide weather information about location.
     * The returned info will not be ready until the "updated" signal is
     * emitted.
     * 
     * @param location
     *            the desired {@link Location} (null for default).
     * @param forecastType
     *            the type of forecast requested.
     */
    public Info(Location location, ForecastType forecastType) {
        this(GWeatherInfo.createInfo(location/*, forecastType*/));
    }

    /**
     * Similar to {@link #Info(Location, ForecastType)}, but also has a world
     * parameter, that allow controlling the hierarchy of {@link Location} to
     * which location belongs.
     * 
     * @param world
     *            a {@link Location} representing the whole world.
     * @param location
     *            the desired {@link Location} (null for default).
     * @param forecastType
     *            the type of forecast requested.
     */
    public Info(Location world, Location location, ForecastType forecastType) {
        this(0/*GWeatherInfo.createInfoForWorld(world, location, forecastType)*/);
    }

    /**
     * Requests a reload of weather conditions and forecast data from enabled
     * network services. The result is delivered by emitting the
     * {@link Updated} signal. Note that if no network services are enabled,
     * the signal will not be emitted.
     */
    public void update() {
        GWeatherInfo.update(this);
    }

    /**
     * Aborts the update of the current Info.
     */
    public void abort() {
        GWeatherInfo.abort(this);
    }

    /**
     * Checks if the Info is still valid (meaning up to date).
     * 
     * @return true if the Info is valid, false otherwise.
     */
    public boolean isValid() {
        return GWeatherInfo.isValid(this);
    }

    /**
     * Checks if a network error has occurred.
     * 
     * @return true if a network error has occurred, false otherwise.
     */
    public boolean hasNetworkError() {
        return GWeatherInfo.networkError(this);
    }

    /**
     * Returns the {@link Location} for which this Info reports the weather.
     * 
     * @return a {@link Location} object.
     */
    public Location getLocation() {
        return GWeatherInfo.getLocation(this);
    }

    /**
     * Changes Info to report weather for the given {@link Location}.
     * 
     * @param location
     *            a location for which weather is desired.
     */
    public void setLocation(Location location) {
        GWeatherInfo.setLocation(this, location);
    }

    /**
     * Gets the list of forecasts as an array of Info.
     * 
     * @return an array of Info objects for the forecast.
     */
    public Info[] getForecastList() {
        return GWeatherInfo.getForecastList(this);
    }

    /**
     * Gets the name of the {@link Location} the weather is reported for.
     * 
     * @return the name of the {@link Location}.
     */
    public String getLocationName() {
        return GWeatherInfo.getLocationName(this);
    }

    public String getIconName() {
        return GWeatherInfo.getIconName(this);
    }

    /**
     * Gets the weather summary has a human readable string.
     * 
     * @return a human readable string.
     */
    public String getWeatherSummary() {
        return GWeatherInfo.getWeatherSummary(this);
    }

    /**
     * Gets the temperature summary as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getTemperatureSummary() {
        return GWeatherInfo.getTempSummary(this);
    }

    /**
     * Gets the update as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getUpdate() {
        return GWeatherInfo.getUpdate(this);
    }

    /**
     * Gets the sky condition as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getSky() {
        return GWeatherInfo.getSky(this);
    }

    /**
     * Gets the weather conditions as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getConditions() {
        return GWeatherInfo.getConditions(this);
    }

    /**
     * Gets the temperature as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getTemperature() {
        return GWeatherInfo.getTemp(this);
    }

    /**
     * Gets the maximum temperature as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getMaxTemperature() {
        return GWeatherInfo.getTempMax(this);
    }

    /**
     * Gets the minimum temperature as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getMinTemperature() {
        return GWeatherInfo.getTempMin(this);
    }

    /**
     * Gets the dew condition as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getDew() {
        return GWeatherInfo.getDew(this);
    }

    /**
     * Gets the humidity condition as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getHumidity() {
        return GWeatherInfo.getHumidity(this);
    }

    /**
     * Gets the wind condition as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getWind() {
        return GWeatherInfo.getWind(this);
    }

    /**
     * Gets the pressure condition as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getPressure() {
        return GWeatherInfo.getPressure(this);
    }

    /**
     * Gets the visibility condition as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getVisibility() {
        return GWeatherInfo.getVisibility(this);
    }

    /**
     * Gets the apparent condition as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getApparent() {
        return GWeatherInfo.getApparent(this);
    }

    /**
     * Gets the sunrise info as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getSunrise() {
        return GWeatherInfo.getSunrise(this);
    }

    /**
     * Gets the sunset info as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getSunset() {
        return GWeatherInfo.getSunset(this);
    }

    /**
     * Gets the forecast as a human readable string.
     * 
     * @return a human readable string.
     */
    public String getForecast() {
        return ""/*GWeatherInfo.getForecast(this)*/;
    }

    public int nextSunEvent() {
        return GWeatherInfo.nextSunEvent(this);
    }

    public long getValueUpdate() {
        return GWeatherInfoOverride.getValueUpdate(this);
    }

    /**
     * Gets the current sky conditions.
     * 
     * @return the {@link Sky} conditions.
     */
    public Sky getValueSky() {
        return GWeatherInfoOverride.getValueSky(this);
    }

    /**
     * Gets the current weather phenomenon.
     * 
     * @return the {@link ConditionPhenomenon phenomenon}.
     */
    public ConditionPhenomenon getValueConditionPhenomenon() {
        return GWeatherInfoOverride.getValueConditionPhenomenon(this);
    }

    /**
     * Gets the current weather qualifier.
     * 
     * @return the {@link ConditionQualifier qualifier}.
     */
    public ConditionQualifier getValueConditionQualifier() {
        return GWeatherInfoOverride.getValueConditionQualifier(this);
    }

    /**
     * Gets the current temperature.
     * 
     * @param unit
     *            the {@link TemperatureUnit unit} to use.
     * @return a double value which is the temperature for the given unit.
     */
    public double getValueTemperature(TemperatureUnit unit) {
        return GWeatherInfoOverride.getValueTemperature(this, unit);
    }

    /**
     * Gets the maximum temperature.
     * 
     * @param unit
     *            the {@link TemperatureUnit unit} to use.
     * @return a double value which is the temperature for the given unit.
     */
    public double getValueMaxTemperature(TemperatureUnit unit) {
        return GWeatherInfoOverride.getValueTemperatureMax(this, unit);
    }

    /**
     * Gets the minimum temperature.
     * 
     * @param unit
     *            the {@link TemperatureUnit unit} to use.
     * @return a double value which is the temperature for the given unit.
     */
    public double getValueMinTemperature(TemperatureUnit unit) {
        return GWeatherInfoOverride.getValueTemperatureMin(this, unit);
    }

    /**
     * Gets the current dew value.
     * 
     * @param unit
     *            the {@link TemperatureUnit unit} to use.
     * @return a double value which is the dew point.
     */
    public double getValueDew(TemperatureUnit unit) {
        return GWeatherInfoOverride.getValueDew(this, unit);
    }

    /**
     * Gets the apparent temperature.
     * 
     * @param unit
     *            the {@link TemperatureUnit unit} to use.
     * @return a double value which is the apparent temperature.
     */
    public double getValueApparent(TemperatureUnit unit) {
        return GWeatherInfoOverride.getValueApparent(this, unit);
    }

    /**
     * Gets the wind speed in the given unit.
     * 
     * @param unit
     *            the {@link SpeedUnit unit} to use.
     * @return a double value which is the speed of te wind.
     */
    public double getValueWind(SpeedUnit unit) {
        return GWeatherInfoOverride.getValueWind(this, unit);
    }

    /**
     * Gets the direction of the wind.
     * 
     * @return a {@link WindDirection direction}.
     */
    public WindDirection getValueWindDirection() {
        return GWeatherInfoOverride.getValueWindDirection(this);
    }

    /**
     * Gets the pressure in the desired {@link PressureUnit unit}.
     * 
     * @param unit
     *            the {@link PressureUnit unit} to use
     * @return the forecasted pressure.
     */
    public double getValuePressure(PressureUnit unit) {
        return GWeatherInfoOverride.getValuePressure(this, unit);
    }

    /**
     * Gets the distance of visibility expressed in the given
     * {@link DistanceUnit unit}.
     * 
     * @param unit
     *            the {@link DistanceUnit unit} to use.
     * @return the forecasted visibility.
     */
    public double getValueVisibility(DistanceUnit unit) {
        return GWeatherInfoOverride.getValueVisibility(this, unit);
    }

    /**
     * Gets the time of the sunrise.
     * 
     * @return the time of sunrise.
     */
    public long getValueSunrise() {
        return GWeatherInfoOverride.getValueSunrise(this);
    }

    /**
     * Gets the time of the sunset.
     * 
     * @return the time of sunset.
     */
    public long getValueSunset() {
        return GWeatherInfoOverride.getValueSunset(this);
    }

    /**
     * Gets the current Moon phase.
     * 
     * @return an array of double, the first element is the phase expressed as
     *         a percentage of visibility, the second element is the latitude
     *         the Moon is at.
     */
    public double[] getValueMoonphase() {
        return GWeatherInfoOverride.getValueMoonphase(this);
    }

    /**
     * Gets the next upcoming Moon phases.
     * 
     * @return An array of four long values that will hold the returned
     *         values. The values are estimates of the time of the next new,
     *         quarter, full and three-quarter moons
     */
    public long[] getUpcomingMoonphases() {
        return GWeatherInfoOverride.getUpcomingMoonphases(this);
    }

    /**
     * Event generated when an Info has been updated. When this signal is
     * being emitted, the Info object is ready to use and this means that the
     * information is up to date.
     * 
     * @author Guillaume Mazoyer
     * @since 4.2.0
     */
    public interface Updated extends GWeatherInfo.UpdatedSignal
    {
        public void onUpdated(Info source);
    }

    /**
     * Hook up a handler to receive <code>Info.Updated</code> events on this
     * Info.
     * 
     * @param handler
     *            the handler that will be used to process things when
     *            receiving the signal.
     */
    public void connect(Updated handler) {
        GWeatherInfo.connect(this, handler, false);
    }
}
