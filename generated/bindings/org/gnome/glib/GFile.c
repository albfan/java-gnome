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
#include "org_gnome_glib_GFile.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_glib_GFile_g_1file_1dup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GFile* result;
	jlong _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_dup(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GFile_g_1file_1equal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _file2
)
{
	gboolean result;
	jboolean _result;
	GFile* self;
	GFile* file2;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter file2
	file2 = (GFile*) _file2;

	// call function
	result = g_file_equal(self, file2);

	// cleanup parameter self

	// cleanup parameter file2

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GFile_g_1file_1get_1basename
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_get_basename(self);

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
Java_org_gnome_glib_GFile_g_1file_1get_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GFile* result;
	jlong _result;
	GFile* self;
	const char* name;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter name
	name = (const char*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_get_child(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

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
Java_org_gnome_glib_GFile_g_1file_1get_1child_1for_1display_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _displayName
)
{
	GFile* result;
	jlong _result;
	GFile* self;
	const char* displayName;
	GError* error = NULL;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter displayName
	displayName = (const char*) bindings_java_getString(env, _displayName);
	if (displayName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_get_child_for_display_name(self, displayName, &error);

	// cleanup parameter self

	// cleanup parameter displayName
	bindings_java_releaseString(displayName);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return 0L;
	}

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
Java_org_gnome_glib_GFile_g_1file_1get_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GFile* result;
	jlong _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_get_parent(self);

	// cleanup parameter self

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
Java_org_gnome_glib_GFile_g_1file_1get_1parse_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_get_parse_name(self);

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
Java_org_gnome_glib_GFile_g_1file_1get_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_get_path(self);

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
Java_org_gnome_glib_GFile_g_1file_1get_1relative_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _descendant
)
{
	char* result;
	jstring _result;
	GFile* self;
	GFile* descendant;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter descendant
	descendant = (GFile*) _descendant;

	// call function
	result = g_file_get_relative_path(self, descendant);

	// cleanup parameter self

	// cleanup parameter descendant

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
Java_org_gnome_glib_GFile_g_1file_1get_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_get_uri(self);

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
Java_org_gnome_glib_GFile_g_1file_1get_1uri_1scheme
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_get_uri_scheme(self);

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
Java_org_gnome_glib_GFile_g_1file_1has_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parent
)
{
	gboolean result;
	jboolean _result;
	GFile* self;
	GFile* parent;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter parent
	parent = (GFile*) _parent;

	// call function
	result = g_file_has_parent(self, parent);

	// cleanup parameter self

	// cleanup parameter parent

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GFile_g_1file_1has_1prefix
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _prefix
)
{
	gboolean result;
	jboolean _result;
	GFile* self;
	GFile* prefix;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter prefix
	prefix = (GFile*) _prefix;

	// call function
	result = g_file_has_prefix(self, prefix);

	// cleanup parameter self

	// cleanup parameter prefix

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GFile_g_1file_1has_1uri_1scheme
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uriScheme
)
{
	gboolean result;
	jboolean _result;
	GFile* self;
	const char* uriScheme;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter uriScheme
	uriScheme = (const char*) bindings_java_getString(env, _uriScheme);
	if (uriScheme == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = g_file_has_uri_scheme(self, uriScheme);

	// cleanup parameter self

	// cleanup parameter uriScheme
	bindings_java_releaseString(uriScheme);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GFile_g_1file_1hash
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_hash(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GFile_g_1file_1is_1native
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_is_native(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_glib_GFile_g_1file_1peek_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_peek_path(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_glib_GFile_g_1file_1resolve_1relative_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _relativePath
)
{
	GFile* result;
	jlong _result;
	GFile* self;
	const char* relativePath;

	// convert parameter self
	self = (GFile*) _self;

	// convert parameter relativePath
	relativePath = (const char*) bindings_java_getString(env, _relativePath);
	if (relativePath == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_resolve_relative_path(self, relativePath);

	// cleanup parameter self

	// cleanup parameter relativePath
	bindings_java_releaseString(relativePath);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_glib_GFile_g_1file_1supports_1thread_1contexts
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GFile* self;

	// convert parameter self
	self = (GFile*) _self;

	// call function
	result = g_file_supports_thread_contexts(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_glib_GFile_g_1file_1new_1build_1filename
(
	JNIEnv* env,
	jclass cls,
	jstring _firstElement
)
{
	GFile* result;
	jlong _result;
	const gchar* firstElement;

	// convert parameter firstElement
	firstElement = (const gchar*) bindings_java_getString(env, _firstElement);
	if (firstElement == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_new_build_filename(firstElement, NULL);

	// cleanup parameter firstElement
	bindings_java_releaseString(firstElement);

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
Java_org_gnome_glib_GFile_g_1file_1new_1for_1commandline_1arg
(
	JNIEnv* env,
	jclass cls,
	jstring _arg
)
{
	GFile* result;
	jlong _result;
	const char* arg;

	// convert parameter arg
	arg = (const char*) bindings_java_getString(env, _arg);
	if (arg == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_new_for_commandline_arg(arg);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_glib_GFile_g_1file_1new_1for_1commandline_1arg_1and_1cwd
(
	JNIEnv* env,
	jclass cls,
	jstring _arg,
	jstring _cwd
)
{
	GFile* result;
	jlong _result;
	const gchar* arg;
	const gchar* cwd;

	// convert parameter arg
	arg = (const gchar*) bindings_java_getString(env, _arg);
	if (arg == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter cwd
	cwd = (const gchar*) bindings_java_getString(env, _cwd);
	if (cwd == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_new_for_commandline_arg_and_cwd(arg, cwd);

	// cleanup parameter arg
	bindings_java_releaseString(arg);

	// cleanup parameter cwd
	bindings_java_releaseString(cwd);

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
Java_org_gnome_glib_GFile_g_1file_1new_1for_1path
(
	JNIEnv* env,
	jclass cls,
	jstring _path
)
{
	GFile* result;
	jlong _result;
	const char* path;

	// convert parameter path
	path = (const char*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_new_for_path(path);

	// cleanup parameter path
	bindings_java_releaseString(path);

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
Java_org_gnome_glib_GFile_g_1file_1new_1for_1uri
(
	JNIEnv* env,
	jclass cls,
	jstring _uri
)
{
	GFile* result;
	jlong _result;
	const char* uri;

	// convert parameter uri
	uri = (const char*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_new_for_uri(uri);

	// cleanup parameter uri
	bindings_java_releaseString(uri);

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
Java_org_gnome_glib_GFile_g_1file_1parse_1name
(
	JNIEnv* env,
	jclass cls,
	jstring _parseName
)
{
	GFile* result;
	jlong _result;
	const char* parseName;

	// convert parameter parseName
	parseName = (const char*) bindings_java_getString(env, _parseName);
	if (parseName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = g_file_parse_name(parseName);

	// cleanup parameter parseName
	bindings_java_releaseString(parseName);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}
