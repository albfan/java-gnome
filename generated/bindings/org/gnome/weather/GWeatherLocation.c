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

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

#define GWEATHER_I_KNOW_THIS_IS_UNSTABLE

#include <jni.h>
#include <gtk/gtk.h>
#include <libgweather/gweather.h>
#include <libgweather/gweather.h>
#include "bindings_java.h"
#include "org_gnome_weather_GWeatherLocation.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1new_1detached
(
	JNIEnv* env,
	jclass cls,
	jstring _name,
	jstring _icao,
	jdouble _latitude,
	jdouble _longitude
)
{
	GWeatherLocation* result;
	jlong _result;
	const char* name;
	const char* icao;
	gdouble latitude;
	gdouble longitude;

	// convert parameter name
	name = (const char*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter icao
	if (_icao == NULL) {
		icao = NULL;
	} else {
		icao = (const char*) bindings_java_getString(env, _icao);
		if (icao == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter latitude
	latitude = (gdouble) _latitude;

	// convert parameter longitude
	longitude = (gdouble) _longitude;

	// call function
	result = gweather_location_new_detached(name, icao, latitude, longitude);

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter icao
	if (icao != NULL) {
		bindings_java_releaseString(icao);
	}

	// cleanup parameter latitude

	// cleanup parameter longitude

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1equal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _two
)
{
	gboolean result;
	jboolean _result;
	GWeatherLocation* self;
	GWeatherLocation* two;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// convert parameter two
	two = (GWeatherLocation*) _two;

	// call function
	result = gweather_location_equal(self, two);

	// cleanup parameter self

	// cleanup parameter two

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1find_1by_1country_1code
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _countryCode
)
{
	GWeatherLocation* result;
	jlong _result;
	GWeatherLocation* self;
	const gchar* countryCode;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// convert parameter countryCode
	countryCode = (const gchar*) bindings_java_getString(env, _countryCode);
	if (countryCode == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gweather_location_find_by_country_code(self, countryCode);

	// cleanup parameter self

	// cleanup parameter countryCode
	bindings_java_releaseString(countryCode);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1find_1by_1station_1code
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stationCode
)
{
	GWeatherLocation* result;
	jlong _result;
	GWeatherLocation* self;
	const gchar* stationCode;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// convert parameter stationCode
	stationCode = (const gchar*) bindings_java_getString(env, _stationCode);
	if (stationCode == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gweather_location_find_by_station_code(self, stationCode);

	// cleanup parameter self

	// cleanup parameter stationCode
	bindings_java_releaseString(stationCode);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1find_1nearest_1city
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _lat,
	jdouble _lon
)
{
	GWeatherLocation* result;
	jlong _result;
	GWeatherLocation* self;
	double lat;
	double lon;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// convert parameter lat
	lat = (double) _lat;

	// convert parameter lon
	lon = (double) _lon;

	// call function
	result = gweather_location_find_nearest_city(self, lat, lon);

	// cleanup parameter self

	// cleanup parameter lat

	// cleanup parameter lon

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1free_1timezones
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _zones
)
{
	GWeatherLocation* self;
	GWeatherTimezone** zones;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// convert parameter zones
	zones = (GWeatherTimezone**) bindings_java_convert_jarray_to_gpointer(env, _zones);
	if (zones == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gweather_location_free_timezones(self, zones);

	// cleanup parameter self

	// cleanup parameter zones
	bindings_java_convert_gpointer_to_jarray(env, (gpointer*)zones, _zones);
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherLocation** result;
	jlongArray _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_children(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1city_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_city_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1code
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_code(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _latitude,
	jdoubleArray _longitude
)
{
	GWeatherLocation* self;
	double* latitude;
	double* longitude;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// convert parameter latitude
	if (_latitude == NULL) {
		latitude = NULL;
	} else {
		latitude = (double*) (*env)->GetDoubleArrayElements(env, _latitude, NULL);
		if (latitude == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter longitude
	if (_longitude == NULL) {
		longitude = NULL;
	} else {
		longitude = (double*) (*env)->GetDoubleArrayElements(env, _longitude, NULL);
		if (longitude == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gweather_location_get_coords(self, latitude, longitude);

	// cleanup parameter self

	// cleanup parameter latitude
	if (latitude != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _latitude, (jdouble*)latitude, 0);
	}

	// cleanup parameter longitude
	if (longitude != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _longitude, (jdouble*)longitude, 0);
	}
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1country
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_country(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1country_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_country_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1distance
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _loc2
)
{
	double result;
	jdouble _result;
	GWeatherLocation* self;
	GWeatherLocation* loc2;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// convert parameter loc2
	loc2 = (GWeatherLocation*) _loc2;

	// call function
	result = gweather_location_get_distance(self, loc2);

	// cleanup parameter self

	// cleanup parameter loc2

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherLocationLevel result;
	jint _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_level(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherLocation* result;
	jlong _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_parent(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1sort_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_sort_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1timezone
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherTimezone* result;
	jlong _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_timezone(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1timezone_1str
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_timezone_str(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1get_1timezones
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherTimezone** result;
	jlongArray _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_get_timezones(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1has_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_has_coords(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherLocation* result;
	jlong _result;
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	result = gweather_location_ref(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherLocation_gweather_1location_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherLocation* self;

	// convert parameter self
	self = (GWeatherLocation*) _self;

	// call function
	gweather_location_unref(self);

	// cleanup parameter self
}
