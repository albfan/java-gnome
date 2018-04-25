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
#include "org_gnome_gtk_GtkAccelMap.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1add_1entry
(
	JNIEnv* env,
	jclass cls,
	jstring _accelPath,
	jint _accelKey,
	jint _accelMods
)
{
	const gchar* accelPath;
	guint accelKey;
	GdkModifierType accelMods;

	// convert parameter accelPath
	accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
	if (accelPath == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter accelKey
	accelKey = (guint) _accelKey;

	// convert parameter accelMods
	accelMods = (GdkModifierType) _accelMods;

	// call function
	gtk_accel_map_add_entry(accelPath, accelKey, accelMods);

	// cleanup parameter accelPath
	bindings_java_releaseString(accelPath);

	// cleanup parameter accelKey

	// cleanup parameter accelMods
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1add_1filter
(
	JNIEnv* env,
	jclass cls,
	jstring _filterPattern
)
{
	const gchar* filterPattern;

	// convert parameter filterPattern
	filterPattern = (const gchar*) bindings_java_getString(env, _filterPattern);
	if (filterPattern == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_accel_map_add_filter(filterPattern);

	// cleanup parameter filterPattern
	bindings_java_releaseString(filterPattern);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1change_1entry
(
	JNIEnv* env,
	jclass cls,
	jstring _accelPath,
	jint _accelKey,
	jint _accelMods,
	jboolean _replace
)
{
	gboolean result;
	jboolean _result;
	const gchar* accelPath;
	guint accelKey;
	GdkModifierType accelMods;
	gboolean replace;

	// convert parameter accelPath
	accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
	if (accelPath == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter accelKey
	accelKey = (guint) _accelKey;

	// convert parameter accelMods
	accelMods = (GdkModifierType) _accelMods;

	// convert parameter replace
	replace = (gboolean) _replace;

	// call function
	result = gtk_accel_map_change_entry(accelPath, accelKey, accelMods, replace);

	// cleanup parameter accelPath
	bindings_java_releaseString(accelPath);

	// cleanup parameter accelKey

	// cleanup parameter accelMods

	// cleanup parameter replace

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1get
(
	JNIEnv* env,
	jclass cls
)
{
	GtkAccelMap* result;
	jlong _result;

	// call function
	result = gtk_accel_map_get();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1load
(
	JNIEnv* env,
	jclass cls,
	jstring _fileName
)
{
	const gchar* fileName;

	// convert parameter fileName
	fileName = (const gchar*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_accel_map_load(fileName);

	// cleanup parameter fileName
	bindings_java_releaseString(fileName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1load_1fd
(
	JNIEnv* env,
	jclass cls,
	jint _fd
)
{
	gint fd;

	// convert parameter fd
	fd = (gint) _fd;

	// call function
	gtk_accel_map_load_fd(fd);

	// cleanup parameter fd
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1lock_1path
(
	JNIEnv* env,
	jclass cls,
	jstring _accelPath
)
{
	const gchar* accelPath;

	// convert parameter accelPath
	accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
	if (accelPath == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_accel_map_lock_path(accelPath);

	// cleanup parameter accelPath
	bindings_java_releaseString(accelPath);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1lookup_1entry
(
	JNIEnv* env,
	jclass cls,
	jstring _accelPath,
	jlong _key
)
{
	gboolean result;
	jboolean _result;
	const gchar* accelPath;
	GtkAccelKey* key;

	// convert parameter accelPath
	accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
	if (accelPath == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter key
	key = (GtkAccelKey*) _key;

	// call function
	result = gtk_accel_map_lookup_entry(accelPath, key);

	// cleanup parameter accelPath
	bindings_java_releaseString(accelPath);

	// cleanup parameter key

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1save
(
	JNIEnv* env,
	jclass cls,
	jstring _fileName
)
{
	const gchar* fileName;

	// convert parameter fileName
	fileName = (const gchar*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_accel_map_save(fileName);

	// cleanup parameter fileName
	bindings_java_releaseString(fileName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1save_1fd
(
	JNIEnv* env,
	jclass cls,
	jint _fd
)
{
	gint fd;

	// convert parameter fd
	fd = (gint) _fd;

	// call function
	gtk_accel_map_save_fd(fd);

	// cleanup parameter fd
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelMap_gtk_1accel_1map_1unlock_1path
(
	JNIEnv* env,
	jclass cls,
	jstring _accelPath
)
{
	const gchar* accelPath;

	// convert parameter accelPath
	accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
	if (accelPath == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_accel_map_unlock_path(accelPath);

	// cleanup parameter accelPath
	bindings_java_releaseString(accelPath);
}
