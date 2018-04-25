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

import org.gnome.glib.Boxed;

/**
 * Object representing a location. This is used to retrieve the {@link Info
 * information} about it. Locations can have different {@link LocationLevel
 * levels}.
 * 
 * @author Guillaume Mazoyer
 * @since 4.2.0
 */
public class Location extends Boxed
{
    protected Location(long pointer) {
        super(pointer);
    }

    /**
     * Creates a new Location of type {@link LocationLevel#WORLD WORLD},
     * representing a hierarchy containing all of the locations.
     * 
     * <p>
     * If useRegions is true, the immediate children of the returned location
     * will be {@link LocationLevel#REGION REGION} nodes, representing the
     * top-level "regions" (the continents and a few other divisions), and the
     * country-level nodes will be the children of the regions. If useRegions
     * is false, the regions will be skipped, and the children of the returned
     * location will be the {@link LocationLevel#COUNTRY COUNTRY} nodes.
     * 
     * @param useRegions
     *            whether or not to divide the world into regions
     */
    public Location(boolean useRegions) {
        this(0/*GWeatherLocation.createLocationWorld(useRegions)*/);
    }

    @Override
    protected void release() {
        GWeatherLocation.unref(this);
    }

    /**
     * Retrieves the weather station identifier by the given station code.
     * Note that multiple instances of the same weather station can exist in
     * the database, and this function will return any of them, so this not
     * usually what you want.
     * 
     * @param code
     *            a 4 letter METAR code.
     * @return a weather station level Location, or null if none exists in the
     *         database.
     */
    public Location findByStationCode(String code) {
        return GWeatherLocation.findByStationCode(this, code);
    }

    /**
     * Gets the Location's level.
     * 
     * @return a level from {@link LocationLevel#WORLD WORLD} to
     *         {@link LocationLevel#STATION STATION}.
     */
    public LocationLevel getLevel() {
        return GWeatherLocation.getLevel(this);
    }

    /**
     * Gets the Location's parent Location.
     * 
     * @return parent, or null if the current Location is a
     *         {@link LocationLevel#WORLD WORLD} node.
     */
    public Location getParent() {
        return GWeatherLocation.getParent(this);
    }

    /**
     * Gets an array of Location's children.
     * 
     * @return the Location's children.
     */
    public Location[] getChildren() {
        return GWeatherLocation.getChildren(this);
    }

    /**
     * Gets Location's name, localized into the current language.
     * 
     * @return the name of the Location.
     */
    public String getName() {
        return GWeatherLocation.getName(this);
    }

    /**
     * Gets Location's "sort name", which is the name after having that you
     * can use to sort locations, or to compare user input against a location
     * name.
     * 
     * @return the Location's sort name.
     */
    public String getSortName() {
        return GWeatherLocation.getSortName(this);
    }

    /**
     * Determines the distance in kilometers between two Locations.
     * 
     * @param other
     *            the second Location.
     * @return the distance between the current Location and the other one.
     */
    public double getDistance(Location other) {
        return GWeatherLocation.getDistance(this, other);
    }

    /**
     * Gets the ISO 3166 country code of the Location.
     * 
     * @return country code (or null if the Location is a region or
     *         world-level location).
     */
    public String getCountry() {
        return GWeatherLocation.getCountry(this);
    }

    /**
     * Gets the {@link Timezone} associated with the Location, if known.
     * 
     * @return the {@link Timezone}, or null.
     */
    public Timezone getTimezone() {
        return GWeatherLocation.getTimezone(this);
    }

    /**
     * Gets an array of all {@link Timezone} associated with any locations
     * under this Location.
     * 
     * @return an array of {@link Timezone}.
     */
    public Timezone[] getTimezones() {
        return GWeatherLocation.getTimezones(this);
    }

    /**
     * Gets the METAR station code associated with a
     * {@link LocationLevel#STATION STATION} Location.
     * 
     * @return a METAR station code, or null.
     */
    public String getCode() {
        return GWeatherLocation.getCode(this);
    }

    /**
     * For a {@link LocationLevel#CITY} location, this is equivalent to
     * {@link #getName()}. For a {@link LocationLevel#STATION STATION}
     * location, it is equivalent to calling {@link #getName()} on the
     * location's parent. For other locations it will return null.
     * 
     * @return the city name, or null.
     */
    public String getCityName() {
        return GWeatherLocation.getCityName(this);
    }
}
