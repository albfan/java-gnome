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
#include <gio/gdesktopappinfo.h>
#include <gio/gfiledescriptorbased.h>
#include <gio/gio.h>
#include <gio/gunixconnection.h>
#include <gio/gunixcredentialsmessage.h>
#include <gio/gunixfdlist.h>
#include <gio/gunixfdmessage.h>
#include <gio/gunixinputstream.h>
#include <gio/gunixmounts.h>
#include <gio/gunixoutputstream.h>
#include <gio/gunixsocketaddress.h>
#include "bindings_java.h"
#include "org_gnome_glib_GApplication.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_glib_GApplication_g_1application_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _applicationId,
	jint _flags
)
{
	GApplication* result;
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
	result = g_application_new(applicationId, flags);

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
Java_org_gnome_glib_GApplication_g_1application_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	g_application_activate(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1application_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_application_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1dbus_1object_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_dbus_object_path(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplicationFlags result;
	jint _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_flags(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1inactivity_1timeout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_inactivity_timeout(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1is_1busy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_is_busy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1is_1registered
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_is_registered(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1is_1remote
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_is_remote(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1resource_1base_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	result = g_application_get_resource_base_path(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1hold
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	g_application_hold(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1mark_1busy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	g_application_mark_busy(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1open
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _files,
	jint _nFiles,
	jstring _hint
)
{
	GApplication* self;
	GFile** files;
	gint nFiles;
	const gchar* hint;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter files
	files = (GFile**) bindings_java_convert_jarray_to_gpointer(env, _files);
	if (files == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter nFiles
	nFiles = (gint) _nFiles;

	// convert parameter hint
	hint = (const gchar*) bindings_java_getString(env, _hint);
	if (hint == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	g_application_open(self, files, nFiles, hint);

	// cleanup parameter self

	// cleanup parameter files
	bindings_java_convert_gpointer_to_jarray(env, (gpointer*)files, _files);

	// cleanup parameter nFiles

	// cleanup parameter hint
	bindings_java_releaseString(hint);
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1quit
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	g_application_quit(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1release
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	g_application_release(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GApplication_g_1application_1run
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _argc,
	jobjectArray _argv
)
{
	int result;
	jint _result;
	GApplication* self;
	int argc;
	char** argv;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter argc
	argc = (int) _argc;

	// convert parameter argv
	if (_argv == NULL) {
		argv = NULL;
	} else {
		argv = (char**) bindings_java_convert_strarray_to_gchararray(env, _argv);
		if (argv == NULL) {
			return  0; // Java Exception already thrown
		}
	}

	// call function
	result = g_application_run(self, argc, argv);

	// cleanup parameter self

	// cleanup parameter argc

	// cleanup parameter argv
	if (argv != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)argv, _argv);
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1application_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _applicationId
)
{
	GApplication* self;
	const gchar* applicationId;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter applicationId
	if (_applicationId == NULL) {
		applicationId = NULL;
	} else {
		applicationId = (const gchar*) bindings_java_getString(env, _applicationId);
		if (applicationId == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	g_application_set_application_id(self, applicationId);

	// cleanup parameter self

	// cleanup parameter applicationId
	if (applicationId != NULL) {
		bindings_java_releaseString(applicationId);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	g_application_set_default(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _flags
)
{
	GApplication* self;
	GApplicationFlags flags;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter flags
	flags = (GApplicationFlags) _flags;

	// call function
	g_application_set_flags(self, flags);

	// cleanup parameter self

	// cleanup parameter flags
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1inactivity_1timeout
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _inactivityTimeout
)
{
	GApplication* self;
	guint inactivityTimeout;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter inactivityTimeout
	inactivityTimeout = (guint) _inactivityTimeout;

	// call function
	g_application_set_inactivity_timeout(self, inactivityTimeout);

	// cleanup parameter self

	// cleanup parameter inactivityTimeout
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1option_1context_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _description
)
{
	GApplication* self;
	const gchar* description;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter description
	if (_description == NULL) {
		description = NULL;
	} else {
		description = (const gchar*) bindings_java_getString(env, _description);
		if (description == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	g_application_set_option_context_description(self, description);

	// cleanup parameter self

	// cleanup parameter description
	if (description != NULL) {
		bindings_java_releaseString(description);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1option_1context_1parameter_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _parameterString
)
{
	GApplication* self;
	const gchar* parameterString;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter parameterString
	if (_parameterString == NULL) {
		parameterString = NULL;
	} else {
		parameterString = (const gchar*) bindings_java_getString(env, _parameterString);
		if (parameterString == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	g_application_set_option_context_parameter_string(self, parameterString);

	// cleanup parameter self

	// cleanup parameter parameterString
	if (parameterString != NULL) {
		bindings_java_releaseString(parameterString);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1option_1context_1summary
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _summary
)
{
	GApplication* self;
	const gchar* summary;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter summary
	if (_summary == NULL) {
		summary = NULL;
	} else {
		summary = (const gchar*) bindings_java_getString(env, _summary);
		if (summary == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	g_application_set_option_context_summary(self, summary);

	// cleanup parameter self

	// cleanup parameter summary
	if (summary != NULL) {
		bindings_java_releaseString(summary);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1set_1resource_1base_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _resourcePath
)
{
	GApplication* self;
	const gchar* resourcePath;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter resourcePath
	if (_resourcePath == NULL) {
		resourcePath = NULL;
	} else {
		resourcePath = (const gchar*) bindings_java_getString(env, _resourcePath);
		if (resourcePath == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	g_application_set_resource_base_path(self, resourcePath);

	// cleanup parameter self

	// cleanup parameter resourcePath
	if (resourcePath != NULL) {
		bindings_java_releaseString(resourcePath);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1unmark_1busy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplication* self;

	// convert parameter self
	self = (GApplication*) _self;

	// call function
	g_application_unmark_busy(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplication_g_1application_1withdraw_1notification
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id
)
{
	GApplication* self;
	const gchar* id;

	// convert parameter self
	self = (GApplication*) _self;

	// convert parameter id
	id = (const gchar*) bindings_java_getString(env, _id);
	if (id == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	g_application_withdraw_notification(self, id);

	// cleanup parameter self

	// cleanup parameter id
	bindings_java_releaseString(id);
}

JNIEXPORT jlong JNICALL
Java_org_gnome_glib_GApplication_g_1application_1get_1default
(
	JNIEnv* env,
	jclass cls
)
{
	GApplication* result;
	jlong _result;

	// call function
	result = g_application_get_default();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GApplication_g_1application_1id_1is_1valid
(
	JNIEnv* env,
	jclass cls,
	jstring _applicationId
)
{
	gboolean result;
	jboolean _result;
	const gchar* applicationId;

	// convert parameter applicationId
	applicationId = (const gchar*) bindings_java_getString(env, _applicationId);
	if (applicationId == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = g_application_id_is_valid(applicationId);

	// cleanup parameter applicationId
	bindings_java_releaseString(applicationId);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
