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
#include "org_gnome_weather_GWeatherConditions.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherConditions_g_1weather_1conditions_1get_1significant
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GWeatherConditions* self;

	// convert parameter self
	self = (GWeatherConditions*) _self;

	// get field value
	result = self->significant;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherConditions_g_1weather_1conditions_1set_1significant
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _significant
)
{
	GWeatherConditions* self;
	gboolean significant;

	// convert parameter self
	self = (GWeatherConditions*) _self;

	// convert parameter significant
	significant = (gboolean) _significant;

	// set field value
	self->significant = significant;

	// cleanup parameter self

	// cleanup parameter significant
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherConditions_g_1weather_1conditions_1get_1phenomenon
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherConditionPhenomenon result;
	jint _result;
	GWeatherConditions* self;

	// convert parameter self
	self = (GWeatherConditions*) _self;

	// get field value
	result = self->phenomenon;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherConditions_g_1weather_1conditions_1set_1phenomenon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _phenomenon
)
{
	GWeatherConditions* self;
	GWeatherConditionPhenomenon phenomenon;

	// convert parameter self
	self = (GWeatherConditions*) _self;

	// convert parameter phenomenon
	phenomenon = (GWeatherConditionPhenomenon) _phenomenon;

	// set field value
	self->phenomenon = phenomenon;

	// cleanup parameter self

	// cleanup parameter phenomenon
}

JNIEXPORT jint JNICALL
Java_org_gnome_weather_GWeatherConditions_g_1weather_1conditions_1get_1qualifier
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherConditionQualifier result;
	jint _result;
	GWeatherConditions* self;

	// convert parameter self
	self = (GWeatherConditions*) _self;

	// get field value
	result = self->qualifier;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherConditions_g_1weather_1conditions_1set_1qualifier
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _qualifier
)
{
	GWeatherConditions* self;
	GWeatherConditionQualifier qualifier;

	// convert parameter self
	self = (GWeatherConditions*) _self;

	// convert parameter qualifier
	qualifier = (GWeatherConditionQualifier) _qualifier;

	// set field value
	self->qualifier = qualifier;

	// cleanup parameter self

	// cleanup parameter qualifier
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherConditions_gweather_1conditions_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GWeatherConditions* self;

	// convert parameter self
	self = (GWeatherConditions*) _self;

	// call function
	result = gweather_conditions_to_string(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}
