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
#include <gtksourceview/gtksource.h>
#include "bindings_java.h"
#include "org_gnome_sourceview_GtkSourceLanguage.h"

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1globs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkSourceLanguage* self;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// call function
	result = gtk_source_language_get_globs(self);

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
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1hidden
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceLanguage* self;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// call function
	result = gtk_source_language_get_hidden(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkSourceLanguage* self;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// call function
	result = gtk_source_language_get_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1metadata
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	const gchar* result;
	jstring _result;
	GtkSourceLanguage* self;
	const gchar* name;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_source_language_get_metadata(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1mime_1types
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkSourceLanguage* self;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// call function
	result = gtk_source_language_get_mime_types(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkSourceLanguage* self;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// call function
	result = gtk_source_language_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1section
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkSourceLanguage* self;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// call function
	result = gtk_source_language_get_section(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1style_1fallback
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _styleId
)
{
	const gchar* result;
	jstring _result;
	GtkSourceLanguage* self;
	const gchar* styleId;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// convert parameter styleId
	styleId = (const gchar*) bindings_java_getString(env, _styleId);
	if (styleId == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_source_language_get_style_fallback(self, styleId);

	// cleanup parameter self

	// cleanup parameter styleId
	bindings_java_releaseString(styleId);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1style_1ids
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkSourceLanguage* self;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// call function
	result = gtk_source_language_get_style_ids(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceLanguage_gtk_1source_1language_1get_1style_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _styleId
)
{
	const gchar* result;
	jstring _result;
	GtkSourceLanguage* self;
	const gchar* styleId;

	// convert parameter self
	self = (GtkSourceLanguage*) _self;

	// convert parameter styleId
	styleId = (const gchar*) bindings_java_getString(env, _styleId);
	if (styleId == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_source_language_get_style_name(self, styleId);

	// cleanup parameter self

	// cleanup parameter styleId
	bindings_java_releaseString(styleId);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}
