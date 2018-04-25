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
import org.gnome.weather.ConditionPhenomenon;
import org.gnome.weather.ConditionQualifier;
import org.gnome.weather.Conditions;
import org.gnome.weather.Plumbing;

final class GWeatherConditions extends Plumbing
{
    private GWeatherConditions() {}

    static final boolean getSignificant(Conditions self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_weather_conditions_get_significant(pointerOf(self));

            return result;
        }
    }

    private static native final boolean g_weather_conditions_get_significant(long self);

    static final void setSignificant(Conditions self, boolean significant) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_weather_conditions_set_significant(pointerOf(self), significant);
        }
    }

    private static native final void g_weather_conditions_set_significant(long self, boolean significant);

    static final ConditionPhenomenon getPhenomenon(Conditions self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_weather_conditions_get_phenomenon(pointerOf(self));

            return (ConditionPhenomenon) enumFor(ConditionPhenomenon.class, result);
        }
    }

    private static native final int g_weather_conditions_get_phenomenon(long self);

    static final void setPhenomenon(Conditions self, ConditionPhenomenon phenomenon) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (phenomenon == null) {
            throw new IllegalArgumentException("phenomenon can't be null");
        }

        synchronized (lock) {
            g_weather_conditions_set_phenomenon(pointerOf(self), numOf(phenomenon));
        }
    }

    private static native final void g_weather_conditions_set_phenomenon(long self, int phenomenon);

    static final ConditionQualifier getQualifier(Conditions self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_weather_conditions_get_qualifier(pointerOf(self));

            return (ConditionQualifier) enumFor(ConditionQualifier.class, result);
        }
    }

    private static native final int g_weather_conditions_get_qualifier(long self);

    static final void setQualifier(Conditions self, ConditionQualifier qualifier) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (qualifier == null) {
            throw new IllegalArgumentException("qualifier can't be null");
        }

        synchronized (lock) {
            g_weather_conditions_set_qualifier(pointerOf(self), numOf(qualifier));
        }
    }

    private static native final void g_weather_conditions_set_qualifier(long self, int qualifier);

    static final String toString(Conditions self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gweather_conditions_to_string(pointerOf(self));

            return result;
        }
    }

    private static native final String gweather_conditions_to_string(long self);

    @SuppressWarnings("unused")
    static final String toStringFull(Conditions self, FIXME options) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GWeatherFormatOptions");
    }
}

