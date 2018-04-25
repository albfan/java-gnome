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
#include "org_gnome_gtk_GtkApplication.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _applicationId,
	jint _flags
)
{
	GtkApplication* result;
	jlong _result;
	const gchar* applicationId;
	GApplicationFlags flags;

	// convert parameter applicationId
	if (_applicationId == NULL) {
		applicationId = NULL;
	} else {
		applicationId = (const gchar*) bindings_java_getString(env, _applicationId);
		if (applicationId == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter flags
	flags = (GApplicationFlags) _flags;

	// call function
	result = gtk_application_new(applicationId, flags);

	// cleanup parameter applicationId
	if (applicationId != NULL) {
		bindings_java_releaseString(applicationId);
	}

	// cleanup parameter flags

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
Java_org_gnome_gtk_GtkApplication_gtk_1application_1add_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkApplication* self;
	GtkWindow* window;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter window
	window = (GtkWindow*) _window;

	// call function
	gtk_application_add_window(self, window);

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1get_1accels_1for_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _detailedActionName
)
{
	gchar** result;
	jobjectArray _result;
	GtkApplication* self;
	const gchar* detailedActionName;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter detailedActionName
	detailedActionName = (const gchar*) bindings_java_getString(env, _detailedActionName);
	if (detailedActionName == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_application_get_accels_for_action(self, detailedActionName);

	// cleanup parameter self

	// cleanup parameter detailedActionName
	bindings_java_releaseString(detailedActionName);

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1get_1actions_1for_1accel
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _accel
)
{
	gchar** result;
	jobjectArray _result;
	GtkApplication* self;
	const gchar* accel;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter accel
	accel = (const gchar*) bindings_java_getString(env, _accel);
	if (accel == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_application_get_actions_for_accel(self, accel);

	// cleanup parameter self

	// cleanup parameter accel
	bindings_java_releaseString(accel);

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
Java_org_gnome_gtk_GtkApplication_gtk_1application_1get_1active_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* result;
	jlong _result;
	GtkApplication* self;

	// convert parameter self
	self = (GtkApplication*) _self;

	// call function
	result = gtk_application_get_active_window(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1get_1window_1by_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _id
)
{
	GtkWindow* result;
	jlong _result;
	GtkApplication* self;
	guint id;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter id
	id = (guint) _id;

	// call function
	result = gtk_application_get_window_by_id(self, id);

	// cleanup parameter self

	// cleanup parameter id

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1get_1windows
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkApplication* self;

	// convert parameter self
	self = (GtkApplication*) _self;

	// call function
	result = gtk_application_get_windows(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1inhibit
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window,
	jint _flags,
	jstring _reason
)
{
	guint result;
	jint _result;
	GtkApplication* self;
	GtkWindow* window;
	GtkApplicationInhibitFlags flags;
	const gchar* reason;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter window
	window = (GtkWindow*) _window;

	// convert parameter flags
	flags = (GtkApplicationInhibitFlags) _flags;

	// convert parameter reason
	if (_reason == NULL) {
		reason = NULL;
	} else {
		reason = (const gchar*) bindings_java_getString(env, _reason);
		if (reason == NULL) {
			return  0; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_application_inhibit(self, window, flags, reason);

	// cleanup parameter self

	// cleanup parameter window

	// cleanup parameter flags

	// cleanup parameter reason
	if (reason != NULL) {
		bindings_java_releaseString(reason);
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1is_1inhibited
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _flags
)
{
	gboolean result;
	jboolean _result;
	GtkApplication* self;
	GtkApplicationInhibitFlags flags;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter flags
	flags = (GtkApplicationInhibitFlags) _flags;

	// call function
	result = gtk_application_is_inhibited(self, flags);

	// cleanup parameter self

	// cleanup parameter flags

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1list_1action_1descriptions
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkApplication* self;

	// convert parameter self
	self = (GtkApplication*) _self;

	// call function
	result = gtk_application_list_action_descriptions(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1prefers_1app_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkApplication* self;

	// convert parameter self
	self = (GtkApplication*) _self;

	// call function
	result = gtk_application_prefers_app_menu(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1remove_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkApplication* self;
	GtkWindow* window;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter window
	window = (GtkWindow*) _window;

	// call function
	gtk_application_remove_window(self, window);

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1set_1accels_1for_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _detailedActionName,
	jobjectArray _accels
)
{
	GtkApplication* self;
	const gchar* detailedActionName;
	gchar** accels;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter detailedActionName
	detailedActionName = (const gchar*) bindings_java_getString(env, _detailedActionName);
	if (detailedActionName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter accels
	accels = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _accels);
	if (accels == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_application_set_accels_for_action(self, detailedActionName, accels);

	// cleanup parameter self

	// cleanup parameter detailedActionName
	bindings_java_releaseString(detailedActionName);

	// cleanup parameter accels
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)accels, _accels);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkApplication_gtk_1application_1uninhibit
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _cookie
)
{
	GtkApplication* self;
	guint cookie;

	// convert parameter self
	self = (GtkApplication*) _self;

	// convert parameter cookie
	cookie = (guint) _cookie;

	// call function
	gtk_application_uninhibit(self, cookie);

	// cleanup parameter self

	// cleanup parameter cookie
}
