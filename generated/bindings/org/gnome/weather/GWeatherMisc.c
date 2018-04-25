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
#include <libgweather/gweather-weather.h>
#include "bindings_java.h"
#include "org_gnome_weather_GWeatherMisc.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherMisc_gweather_1timezone_1get_1utc
(
	JNIEnv* env,
	jclass cls
)
{
	GWeatherTimezone* result;
	jlong _result;

	// call function
	result = gweather_timezone_get_utc();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherMisc_gweather_1sky_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jint _sky
)
{
	const gchar* result;
	jstring _result;
	GWeatherSky sky;

	// convert parameter sky
	sky = (GWeatherSky) _sky;

	// call function
	result = gweather_sky_to_string(sky);

	// cleanup parameter sky

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_weather_GWeatherMisc_gweather_1wind_1direction_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jint _sky
)
{
	const gchar* result;
	jstring _result;
	GWeatherWindDirection sky;

	// convert parameter sky
	sky = (GWeatherWindDirection) _sky;

	// call function
	result = gweather_wind_direction_to_string(sky);

	// cleanup parameter sky

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}
