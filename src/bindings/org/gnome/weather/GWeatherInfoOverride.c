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

#define GWEATHER_I_KNOW_THIS_IS_UNSTABLE

#include <jni.h>
#include <gtk/gtk.h>
#include <libgweather/gweather.h>
#include "bindings_java.h"
#include "org_gnome_weather_GWeatherInfoOverride.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1update
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	time_t result;
	jlong _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;

	valid = gweather_info_get_value_update(self, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jlong) result;

	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1sky
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	GWeatherSky result;
	jint _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;

	valid = gweather_info_get_value_sky(self, &result);

	if (!valid) {
		result = GWEATHER_SKY_INVALID;
	}

	_result = (jint) result;

	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1condition_1phenomenon
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	GWeatherConditionPhenomenon result;
	GWeatherConditionQualifier useless;
	jint _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;

	valid = gweather_info_get_value_conditions(self, &result, &useless);
	
	if (!valid) {
		result = GWEATHER_PHENOMENON_INVALID;
	}

	_result = (jint) result;

	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1condition_1qualifier
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	GWeatherConditionPhenomenon useless;
	GWeatherConditionQualifier result;
	jint _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;

	valid = gweather_info_get_value_conditions(self, &useless, &result);
	
	if (!valid) {
		result = GWEATHER_QUALIFIER_INVALID;
	}

	_result = (jint) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1temperature
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherTemperatureUnit) _unit;

	valid = gweather_info_get_value_temp(self, unit, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1temperature_1min
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherTemperatureUnit) _unit;

	valid = gweather_info_get_value_temp_min(self, unit, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1temperature_1max
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherTemperatureUnit) _unit;

	valid = gweather_info_get_value_temp_max(self, unit, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1dew
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherTemperatureUnit) _unit;

	valid = gweather_info_get_value_dew(self, unit, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1apparent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherTemperatureUnit) _unit;

	valid = gweather_info_get_value_apparent(self, unit, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1wind
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherSpeedUnit unit;
	GWeatherWindDirection useless;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherSpeedUnit) _unit;

	valid = gweather_info_get_value_wind(self, unit, &result, &useless);
	
	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1wind_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	GWeatherWindDirection result;
        jint _result;
	gdouble useless;
	gboolean valid;

	self = (GWeatherInfo*) _self;

	valid = gweather_info_get_value_wind(self, GWEATHER_SPEED_UNIT_DEFAULT, &useless, &result);
	
	if (!valid) {
		result = GWEATHER_WIND_INVALID;
	}

	_result = (jint) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1pressure
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherPressureUnit unit;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherPressureUnit) _unit;

	valid = gweather_info_get_value_pressure(self, unit, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1visibility
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GWeatherInfo* self;
	GWeatherDistanceUnit unit;
	gdouble result;
	jdouble _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	unit = (GWeatherDistanceUnit) _unit;

	valid = gweather_info_get_value_visibility(self, unit, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jdouble) result;

	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1sunrise
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	time_t result;
	jlong _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;

	valid = gweather_info_get_value_sunrise(self, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jlong) result;

	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1sunset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	time_t result;
	jlong _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;

	valid = gweather_info_get_value_sunset(self, &result);

	if (!valid) {
		result = -1;
	}

	_result = (jlong) result;

	return _result;
}

JNIEXPORT jdoubleArray JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1value_1moonphase
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	gdouble result1;
	gdouble result2;
	jdoubleArray result;
	jdouble* _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	result = (*env)->NewDoubleArray(env, 2);
	_result = (*env)->GetDoubleArrayElements(env, result, 0);

	valid = gweather_info_get_value_moonphase(self, &result1, &result2);

	if (!valid) {
		result1 = -1;
		result2 = -1;
	}

	_result[0] = (jdouble) result1;
	_result[1] = (jdouble) result2;

	(*env)->SetDoubleArrayRegion(env, result, 0, 2, _result);

	g_free(_result);

	return result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_weather_GWeatherInfoOverride_weather_1info_1get_1upcoming_1moonphases
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;
	time_t* phases;
	jlongArray result;
	jlong* _result;
	gboolean valid;

	self = (GWeatherInfo*) _self;
	result = (*env)->NewLongArray(env, 4);
	_result = (*env)->GetLongArrayElements(env, result, 0);

	valid = gweather_info_get_upcoming_moonphases(self, &phases);

	if (!valid) {
		phases[0] = -1;
		phases[1] = -1;
		phases[2] = -1;
		phases[3] = -1;
	}

	_result[0] = phases[0];
	_result[1] = phases[1];
	_result[2] = phases[2];
	_result[3] = phases[3];

	(*env)->SetLongArrayRegion(env, result, 0, 4, _result);

	g_free(_result);

	return result;
}
