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
#include "org_gnome_glib_GApplicationCommandLine.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1create_1file_1for_1arg
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _arg
)
{
	GFile* result;
	jlong _result;
	GApplicationCommandLine* self;
	const gchar* arg;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// convert parameter arg
	arg = (const gchar*) bindings_java_getString(env, _arg);
	if (arg == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_application_command_line_create_file_for_arg(self, arg);

	// cleanup parameter self

	// cleanup parameter arg
	bindings_java_releaseString(arg);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1get_1arguments
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _argc
)
{
	gchar** result;
	jobjectArray _result;
	GApplicationCommandLine* self;
	int* argc;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// convert parameter argc
	if (_argc == NULL) {
		argc = NULL;
	} else {
		argc = (int*) (*env)->GetIntArrayElements(env, _argc, NULL);
		if (argc == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = g_application_command_line_get_arguments(self, argc);

	// cleanup parameter self

	// cleanup parameter argc
	if (argc != NULL) {
		(*env)->ReleaseIntArrayElements(env, _argc, (jint*)argc, 0);
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
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1get_1cwd
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GApplicationCommandLine* self;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// call function
	result = g_application_command_line_get_cwd(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1get_1environ
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GApplicationCommandLine* self;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// call function
	result = g_application_command_line_get_environ(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1get_1exit_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GApplicationCommandLine* self;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// call function
	result = g_application_command_line_get_exit_status(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1get_1is_1remote
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GApplicationCommandLine* self;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// call function
	result = g_application_command_line_get_is_remote(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1getenv
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	const gchar* result;
	jstring _result;
	GApplicationCommandLine* self;
	const gchar* name;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = g_application_command_line_getenv(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1print
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _format
)
{
	GApplicationCommandLine* self;
	const gchar* format;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// convert parameter format
	format = (const gchar*) bindings_java_getString(env, _format);
	if (format == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	g_application_command_line_print(self, format, NULL);

	// cleanup parameter self

	// cleanup parameter format
	bindings_java_releaseString(format);
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1printerr
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _format
)
{
	GApplicationCommandLine* self;
	const gchar* format;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// convert parameter format
	format = (const gchar*) bindings_java_getString(env, _format);
	if (format == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	g_application_command_line_printerr(self, format, NULL);

	// cleanup parameter self

	// cleanup parameter format
	bindings_java_releaseString(format);
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1application_1command_1line_1set_1exit_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _exitStatus
)
{
	GApplicationCommandLine* self;
	int exitStatus;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// convert parameter exitStatus
	exitStatus = (int) _exitStatus;

	// call function
	g_application_command_line_set_exit_status(self, exitStatus);

	// cleanup parameter self

	// cleanup parameter exitStatus
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GApplicationCommandLine_g_1object_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GApplicationCommandLine* self;

	// convert parameter self
	self = (GApplicationCommandLine*) _self;

	// call function
	g_object_unref(self);

	// cleanup parameter self
}
