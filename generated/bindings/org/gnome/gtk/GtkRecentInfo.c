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
#include "org_gnome_gtk_GtkRecentInfo.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1exists
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_exists(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1added
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	time_t result;
	jlong _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_added(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1age
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_age(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1applications
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _length
)
{
	gchar** result;
	jobjectArray _result;
	GtkRecentInfo* self;
	gsize* length;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// convert parameter length
	if (_length == NULL) {
		length = NULL;
	} else {
		length = (gsize*) (*env)->GetLongArrayElements(env, _length, NULL);
		if (length == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_recent_info_get_applications(self, length);

	// cleanup parameter self

	// cleanup parameter length
	if (length != NULL) {
		(*env)->ReleaseLongArrayElements(env, _length, (jlong*)length, 0);
	}

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_description(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1display_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_display_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1groups
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _length
)
{
	gchar** result;
	jobjectArray _result;
	GtkRecentInfo* self;
	gsize* length;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// convert parameter length
	if (_length == NULL) {
		length = NULL;
	} else {
		length = (gsize*) (*env)->GetLongArrayElements(env, _length, NULL);
		if (length == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_recent_info_get_groups(self, length);

	// cleanup parameter self

	// cleanup parameter length
	if (length != NULL) {
		(*env)->ReleaseLongArrayElements(env, _length, (jlong*)length, 0);
	}

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _size
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkRecentInfo* self;
	gint size;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// convert parameter size
	size = (gint) _size;

	// call function
	result = gtk_recent_info_get_icon(self, size);

	// cleanup parameter self

	// cleanup parameter size

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1mime_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_mime_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1modified
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	time_t result;
	jlong _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_modified(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1private_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_private_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1short_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_short_name(self);

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
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_uri(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1uri_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_uri_display(self);

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
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1get_1visited
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	time_t result;
	jlong _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_get_visited(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1has_1application
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _appName
)
{
	gboolean result;
	jboolean _result;
	GtkRecentInfo* self;
	const gchar* appName;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// convert parameter appName
	appName = (const gchar*) bindings_java_getString(env, _appName);
	if (appName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_recent_info_has_application(self, appName);

	// cleanup parameter self

	// cleanup parameter appName
	bindings_java_releaseString(appName);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1has_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _groupName
)
{
	gboolean result;
	jboolean _result;
	GtkRecentInfo* self;
	const gchar* groupName;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// convert parameter groupName
	groupName = (const gchar*) bindings_java_getString(env, _groupName);
	if (groupName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_recent_info_has_group(self, groupName);

	// cleanup parameter self

	// cleanup parameter groupName
	bindings_java_releaseString(groupName);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1is_1local
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_is_local(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1last_1application
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_last_application(self);

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
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1match
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _infoB
)
{
	gboolean result;
	jboolean _result;
	GtkRecentInfo* self;
	GtkRecentInfo* infoB;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// convert parameter infoB
	infoB = (GtkRecentInfo*) _infoB;

	// call function
	result = gtk_recent_info_match(self, infoB);

	// cleanup parameter self

	// cleanup parameter infoB

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentInfo* result;
	jlong _result;
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	result = gtk_recent_info_ref(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentInfo_gtk_1recent_1info_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentInfo* self;

	// convert parameter self
	self = (GtkRecentInfo*) _self;

	// call function
	gtk_recent_info_unref(self);

	// cleanup parameter self
}
