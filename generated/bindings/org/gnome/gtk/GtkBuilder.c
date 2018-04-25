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
#include "org_gnome_gtk_GtkBuilder.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkBuilder* result;
	jlong _result;

	// call function
	result = gtk_builder_new();

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
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _filename
)
{
	GtkBuilder* result;
	jlong _result;
	const gchar* filename;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_new_from_file(filename);

	// cleanup parameter filename
	bindings_java_releaseString(filename);

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
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1new_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jstring _resourcePath
)
{
	GtkBuilder* result;
	jlong _result;
	const gchar* resourcePath;

	// convert parameter resourcePath
	resourcePath = (const gchar*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_new_from_resource(resourcePath);

	// cleanup parameter resourcePath
	bindings_java_releaseString(resourcePath);

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
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1new_1from_1string
(
	JNIEnv* env,
	jclass cls,
	jstring _string,
	jint _length
)
{
	GtkBuilder* result;
	jlong _result;
	const gchar* string;
	gssize length;

	// convert parameter string
	string = (const gchar*) bindings_java_getString(env, _string);
	if (string == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter length
	length = (gssize) _length;

	// call function
	result = gtk_builder_new_from_string(string, length);

	// cleanup parameter string
	bindings_java_releaseString(string);

	// cleanup parameter length

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1add_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	guint result;
	jint _result;
	GtkBuilder* self;
	const gchar* filename;
	GError* error = NULL;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_add_from_file(self, filename, &error);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0;
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1add_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _resourcePath
)
{
	guint result;
	jint _result;
	GtkBuilder* self;
	const gchar* resourcePath;
	GError* error = NULL;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter resourcePath
	resourcePath = (const gchar*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_add_from_resource(self, resourcePath, &error);

	// cleanup parameter self

	// cleanup parameter resourcePath
	bindings_java_releaseString(resourcePath);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0;
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1add_1from_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _buffer,
	jlong _length
)
{
	guint result;
	jint _result;
	GtkBuilder* self;
	const gchar* buffer;
	gsize length;
	GError* error = NULL;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter buffer
	buffer = (const gchar*) bindings_java_getString(env, _buffer);
	if (buffer == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter length
	length = (gsize) _length;

	// call function
	result = gtk_builder_add_from_string(self, buffer, length, &error);

	// cleanup parameter self

	// cleanup parameter buffer
	bindings_java_releaseString(buffer);

	// cleanup parameter length

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0;
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1add_1objects_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename,
	jobjectArray _objectIds
)
{
	guint result;
	jint _result;
	GtkBuilder* self;
	const gchar* filename;
	gchar** objectIds;
	GError* error = NULL;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter objectIds
	objectIds = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _objectIds);
	if (objectIds == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_add_objects_from_file(self, filename, objectIds, &error);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// cleanup parameter objectIds
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)objectIds, _objectIds);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0;
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1add_1objects_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _resourcePath,
	jobjectArray _objectIds
)
{
	guint result;
	jint _result;
	GtkBuilder* self;
	const gchar* resourcePath;
	gchar** objectIds;
	GError* error = NULL;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter resourcePath
	resourcePath = (const gchar*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter objectIds
	objectIds = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _objectIds);
	if (objectIds == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_add_objects_from_resource(self, resourcePath, objectIds, &error);

	// cleanup parameter self

	// cleanup parameter resourcePath
	bindings_java_releaseString(resourcePath);

	// cleanup parameter objectIds
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)objectIds, _objectIds);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0;
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1add_1objects_1from_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _buffer,
	jlong _length,
	jobjectArray _objectIds
)
{
	guint result;
	jint _result;
	GtkBuilder* self;
	const gchar* buffer;
	gsize length;
	gchar** objectIds;
	GError* error = NULL;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter buffer
	buffer = (const gchar*) bindings_java_getString(env, _buffer);
	if (buffer == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter length
	length = (gsize) _length;

	// convert parameter objectIds
	objectIds = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _objectIds);
	if (objectIds == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_add_objects_from_string(self, buffer, length, objectIds, &error);

	// cleanup parameter self

	// cleanup parameter buffer
	bindings_java_releaseString(buffer);

	// cleanup parameter length

	// cleanup parameter objectIds
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)objectIds, _objectIds);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0;
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1expose_1object
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jlong _object
)
{
	GtkBuilder* self;
	const gchar* name;
	GObject* object;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter object
	object = (GObject*) _object;

	// call function
	gtk_builder_expose_object(self, name, object);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter object
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1get_1application
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkApplication* result;
	jlong _result;
	GtkBuilder* self;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// call function
	result = gtk_builder_get_application(self);

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
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1get_1object
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GObject* result;
	jlong _result;
	GtkBuilder* self;
	const gchar* name;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_builder_get_object(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

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
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1get_1objects
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GtkBuilder* self;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// call function
	result = gtk_builder_get_objects(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1get_1translation_1domain
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkBuilder* self;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// call function
	result = gtk_builder_get_translation_domain(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1set_1application
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _application
)
{
	GtkBuilder* self;
	GtkApplication* application;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter application
	application = (GtkApplication*) _application;

	// call function
	gtk_builder_set_application(self, application);

	// cleanup parameter self

	// cleanup parameter application
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBuilder_gtk_1builder_1set_1translation_1domain
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _domain
)
{
	GtkBuilder* self;
	const gchar* domain;

	// convert parameter self
	self = (GtkBuilder*) _self;

	// convert parameter domain
	if (_domain == NULL) {
		domain = NULL;
	} else {
		domain = (const gchar*) bindings_java_getString(env, _domain);
		if (domain == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_builder_set_translation_domain(self, domain);

	// cleanup parameter self

	// cleanup parameter domain
	if (domain != NULL) {
		bindings_java_releaseString(domain);
	}
}
