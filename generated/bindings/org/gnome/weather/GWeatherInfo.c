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
#include <libgweather/gweather-weather.h>
#include "bindings_java.h"
#include "org_gnome_weather_GWeatherInfo.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _location
)
{
	GWeatherInfo* result;
	jlong _result;
	GWeatherLocation* location;

	// convert parameter location
	location = (GWeatherLocation*) _location;

	// call function
	result = gweather_info_new(location);

	// cleanup parameter location

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1abort
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	gweather_info_abort(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1apparent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_apparent(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1attribution
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_attribution(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1conditions
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_conditions(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1dew
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_dew(self);

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

JNIEXPORT jlongArray JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1forecast_1list
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_forecast_list(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1humidity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_humidity(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_icon_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1location
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const GWeatherLocation* result;
	jlong _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_location(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1location_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_location_name(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1pressure
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_pressure(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1radar
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbufAnimation* result;
	jlong _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_radar(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1sky
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_sky(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1sunrise
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_sunrise(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1sunset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_sunset(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1symbolic_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_symbolic_icon_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1temp
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_temp(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1temp_1max
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_temp_max(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1temp_1min
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_temp_min(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1temp_1summary
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_temp_summary(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1update
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_update(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1apparent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble* value;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherTemperatureUnit) _unit;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_apparent(self, unit, value);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1conditions
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _phenomenon,
	jintArray _qualifier
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherConditionPhenomenon* phenomenon;
	GWeatherConditionQualifier* qualifier;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter phenomenon
	if (_phenomenon == NULL) {
		phenomenon = NULL;
	} else {
		phenomenon = (GWeatherConditionPhenomenon*) (*env)->GetIntArrayElements(env, _phenomenon, NULL);
		if (phenomenon == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter qualifier
	if (_qualifier == NULL) {
		qualifier = NULL;
	} else {
		qualifier = (GWeatherConditionQualifier*) (*env)->GetIntArrayElements(env, _qualifier, NULL);
		if (qualifier == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_conditions(self, phenomenon, qualifier);

	// cleanup parameter self

	// cleanup parameter phenomenon
	if (phenomenon != NULL) {
		(*env)->ReleaseIntArrayElements(env, _phenomenon, (jint*)phenomenon, 0);
	}

	// cleanup parameter qualifier
	if (qualifier != NULL) {
		(*env)->ReleaseIntArrayElements(env, _qualifier, (jint*)qualifier, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1dew
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble* value;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherTemperatureUnit) _unit;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_dew(self, unit, value);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1pressure
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherPressureUnit unit;
	gdouble* value;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherPressureUnit) _unit;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_pressure(self, unit, value);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1sky
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _sky
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherSky* sky;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter sky
	if (_sky == NULL) {
		sky = NULL;
	} else {
		sky = (GWeatherSky*) (*env)->GetIntArrayElements(env, _sky, NULL);
		if (sky == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_sky(self, sky);

	// cleanup parameter self

	// cleanup parameter sky
	if (sky != NULL) {
		(*env)->ReleaseIntArrayElements(env, _sky, (jint*)sky, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1temp
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble* value;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherTemperatureUnit) _unit;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_temp(self, unit, value);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1temp_1max
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble* value;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherTemperatureUnit) _unit;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_temp_max(self, unit, value);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1temp_1min
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherTemperatureUnit unit;
	gdouble* value;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherTemperatureUnit) _unit;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_temp_min(self, unit, value);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1visibility
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherDistanceUnit unit;
	gdouble* value;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherDistanceUnit) _unit;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_visibility(self, unit, value);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1value_1wind
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit,
	jdoubleArray _speed,
	jintArray _direction
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;
	GWeatherSpeedUnit unit;
	gdouble* speed;
	GWeatherWindDirection* direction;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter unit
	unit = (GWeatherSpeedUnit) _unit;

	// convert parameter speed
	if (_speed == NULL) {
		speed = NULL;
	} else {
		speed = (gdouble*) (*env)->GetDoubleArrayElements(env, _speed, NULL);
		if (speed == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter direction
	if (_direction == NULL) {
		direction = NULL;
	} else {
		direction = (GWeatherWindDirection*) (*env)->GetIntArrayElements(env, _direction, NULL);
		if (direction == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gweather_info_get_value_wind(self, unit, speed, direction);

	// cleanup parameter self

	// cleanup parameter unit

	// cleanup parameter speed
	if (speed != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _speed, (jdouble*)speed, 0);
	}

	// cleanup parameter direction
	if (direction != NULL) {
		(*env)->ReleaseIntArrayElements(env, _direction, (jint*)direction, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1visibility
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_visibility(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1weather_1summary
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_weather_summary(self);

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
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1get_1wind
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_get_wind(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1is_1daytime
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_is_daytime(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1is_1valid
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_is_valid(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1network_1error
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_network_error(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1next_1sun_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	result = gweather_info_next_sun_event(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1set_1location
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _location
)
{
	GWeatherInfo* self;
	GWeatherLocation* location;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// convert parameter location
	location = (GWeatherLocation*) _location;

	// call function
	gweather_info_set_location(self, location);

	// cleanup parameter self

	// cleanup parameter location
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1update
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherInfo* self;

	// convert parameter self
	self = (GWeatherInfo*) _self;

	// call function
	gweather_info_update(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherInfo_gweather_1info_1store_1cache
(
	JNIEnv* env,
	jclass cls
)
{

	// call function
	gweather_info_store_cache();
}
