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
#include "bindings_java.h"
#include "org_gnome_glib_GlibMisc.h"

JNIEXPORT void JNICALL
Java_org_gnome_glib_GlibMisc_g_1set_1prgname
(
	JNIEnv* env,
	jclass cls,
	jstring _prgname
)
{
	const gchar* prgname;

	// convert parameter prgname
	prgname = (const gchar*) bindings_java_getString(env, _prgname);
	if (prgname == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	g_set_prgname(prgname);

	// cleanup parameter prgname
	bindings_java_releaseString(prgname);
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1prgname
(
	JNIEnv* env,
	jclass cls
)
{
	gchar* result;
	jstring _result;

	// call function
	result = g_get_prgname();

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1user_1config_1dir
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar* result;
	jstring _result;

	// call function
	result = g_get_user_config_dir();

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1user_1name
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar* result;
	jstring _result;

	// call function
	result = g_get_user_name();

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1user_1cache_1dir
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar* result;
	jstring _result;

	// call function
	result = g_get_user_cache_dir();

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1user_1data_1dir
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar* result;
	jstring _result;

	// call function
	result = g_get_user_data_dir();

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1user_1special_1dir
(
	JNIEnv* env,
	jclass cls,
	jint _directory
)
{
	const gchar* result;
	jstring _result;
	GUserDirectory directory;

	// convert parameter directory
	directory = (GUserDirectory) _directory;

	// call function
	result = g_get_user_special_dir(directory);

	// cleanup parameter directory

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1real_1name
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar* result;
	jstring _result;

	// call function
	result = g_get_real_name();

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_glib_GlibMisc_g_1reload_1user_1special_1dirs_1cache
(
	JNIEnv* env,
	jclass cls
)
{

	// call function
	g_reload_user_special_dirs_cache();
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1system_1data_1dirs
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar** result;
	jobjectArray _result;

	// call function
	result = g_get_system_data_dirs();

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_glib_GlibMisc_g_1get_1system_1config_1dirs
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar** result;
	jobjectArray _result;

	// call function
	result = g_get_system_config_dirs();

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GlibMisc_g_1format_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _size
)
{
	gchar* result;
	jstring _result;
	guint64 size;

	// convert parameter size
	size = (guint64) _size;

	// call function
	result = g_format_size(size);

	// cleanup parameter size

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
Java_org_gnome_glib_GlibMisc_g_1format_1size_1full
(
	JNIEnv* env,
	jclass cls,
	jlong _size,
	jint _flags
)
{
	gchar* result;
	jstring _result;
	guint64 size;
	GFormatSizeFlags flags;

	// convert parameter size
	size = (guint64) _size;

	// convert parameter flags
	flags = (GFormatSizeFlags) _flags;

	// call function
	result = g_format_size_full(size, flags);

	// cleanup parameter size

	// cleanup parameter flags

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
Java_org_gnome_glib_GlibMisc_g_1format_1size_1for_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _size
)
{
	char* result;
	jstring _result;
	goffset size;

	// convert parameter size
	size = (goffset) _size;

	// call function
	result = g_format_size_for_display(size);

	// cleanup parameter size

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
Java_org_gnome_glib_GlibMisc_g_1markup_1escape_1text
(
	JNIEnv* env,
	jclass cls,
	jstring _text,
	jint _len
)
{
	char* result;
	jstring _result;
	const gchar* text;
	gssize len;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return NULL; // Java Exception already thrown
	}

	// convert parameter len
	len = (gssize) _len;

	// call function
	result = g_markup_escape_text(text, len);

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}
