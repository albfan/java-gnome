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
#include <libgweather/gweather-location-entry.h>
#include "bindings_java.h"
#include "org_gnome_weather_GWeatherLocationEntry.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocationEntry_gweather_1location_1entry_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _top
)
{
	GtkWidget* result;
	jlong _result;
	GWeatherLocation* top;

	// convert parameter top
	top = (GWeatherLocation*) _top;

	// call function
	result = gweather_location_entry_new(top);

	// cleanup parameter top

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_weather_GWeatherLocationEntry_gweather_1location_1entry_1get_1location
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GWeatherLocation* result;
	jlong _result;
	GWeatherLocationEntry* self;

	// convert parameter self
	self = (GWeatherLocationEntry*) _self;

	// call function
	result = gweather_location_entry_get_location(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherLocationEntry_gweather_1location_1entry_1has_1custom_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GWeatherLocationEntry* self;

	// convert parameter self
	self = (GWeatherLocationEntry*) _self;

	// call function
	result = gweather_location_entry_has_custom_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_weather_GWeatherLocationEntry_gweather_1location_1entry_1set_1city
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _cityName,
	jstring _code
)
{
	gboolean result;
	jboolean _result;
	GWeatherLocationEntry* self;
	const char* cityName;
	const char* code;

	// convert parameter self
	self = (GWeatherLocationEntry*) _self;

	// convert parameter cityName
	if (_cityName == NULL) {
		cityName = NULL;
	} else {
		cityName = (const char*) bindings_java_getString(env, _cityName);
		if (cityName == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter code
	code = (const char*) bindings_java_getString(env, _code);
	if (code == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gweather_location_entry_set_city(self, cityName, code);

	// cleanup parameter self

	// cleanup parameter cityName
	if (cityName != NULL) {
		bindings_java_releaseString(cityName);
	}

	// cleanup parameter code
	bindings_java_releaseString(code);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_weather_GWeatherLocationEntry_gweather_1location_1entry_1set_1location
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _loc
)
{
	GWeatherLocationEntry* self;
	GWeatherLocation* loc;

	// convert parameter self
	self = (GWeatherLocationEntry*) _self;

	// convert parameter loc
	loc = (GWeatherLocation*) _loc;

	// call function
	gweather_location_entry_set_location(self, loc);

	// cleanup parameter self

	// cleanup parameter loc
}
