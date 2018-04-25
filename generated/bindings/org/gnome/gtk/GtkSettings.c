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

#include <jni.h>
#include <gtk/gtk.h>
#include <gtk/gtk-a11y.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include "bindings_java.h"
#include "org_gnome_gtk_GtkSettings.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSettings_gtk_1settings_1reset_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkSettings* self;
	const gchar* name;

	// convert parameter self
	self = (GtkSettings*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_settings_reset_property(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSettings_gtk_1settings_1set_1double_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jdouble _vDouble,
	jstring _origin
)
{
	GtkSettings* self;
	const gchar* name;
	gdouble vDouble;
	const gchar* origin;

	// convert parameter self
	self = (GtkSettings*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter vDouble
	vDouble = (gdouble) _vDouble;

	// convert parameter origin
	origin = (const gchar*) bindings_java_getString(env, _origin);
	if (origin == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_settings_set_double_property(self, name, vDouble, origin);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter vDouble

	// cleanup parameter origin
	bindings_java_releaseString(origin);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSettings_gtk_1settings_1set_1long_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jlong _vLong,
	jstring _origin
)
{
	GtkSettings* self;
	const gchar* name;
	glong vLong;
	const gchar* origin;

	// convert parameter self
	self = (GtkSettings*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter vLong
	vLong = (glong) _vLong;

	// convert parameter origin
	origin = (const gchar*) bindings_java_getString(env, _origin);
	if (origin == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_settings_set_long_property(self, name, vLong, origin);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter vLong

	// cleanup parameter origin
	bindings_java_releaseString(origin);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSettings_gtk_1settings_1set_1string_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jstring _vString,
	jstring _origin
)
{
	GtkSettings* self;
	const gchar* name;
	const gchar* vString;
	const gchar* origin;

	// convert parameter self
	self = (GtkSettings*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter vString
	vString = (const gchar*) bindings_java_getString(env, _vString);
	if (vString == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter origin
	origin = (const gchar*) bindings_java_getString(env, _origin);
	if (origin == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_settings_set_string_property(self, name, vString, origin);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter vString
	bindings_java_releaseString(vString);

	// cleanup parameter origin
	bindings_java_releaseString(origin);
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSettings_gtk_1settings_1get_1default
(
	JNIEnv* env,
	jclass cls
)
{
	GtkSettings* result;
	jlong _result;

	// call function
	result = gtk_settings_get_default();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSettings_gtk_1settings_1get_1for_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _screen
)
{
	GtkSettings* result;
	jlong _result;
	GdkScreen* screen;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	result = gtk_settings_get_for_screen(screen);

	// cleanup parameter screen

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
