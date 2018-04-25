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
#include "org_gnome_sourceview_GtkSourceStyleSchemeManager.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkSourceStyleSchemeManager* result;
	jlong _result;

	// call function
	result = gtk_source_style_scheme_manager_new();

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
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1append_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path
)
{
	GtkSourceStyleSchemeManager* self;
	const gchar* path;

	// convert parameter self
	self = (GtkSourceStyleSchemeManager*) _self;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_source_style_scheme_manager_append_search_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1force_1rescan
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceStyleSchemeManager* self;

	// convert parameter self
	self = (GtkSourceStyleSchemeManager*) _self;

	// call function
	gtk_source_style_scheme_manager_force_rescan(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1get_1scheme
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _schemeId
)
{
	GtkSourceStyleScheme* result;
	jlong _result;
	GtkSourceStyleSchemeManager* self;
	const gchar* schemeId;

	// convert parameter self
	self = (GtkSourceStyleSchemeManager*) _self;

	// convert parameter schemeId
	schemeId = (const gchar*) bindings_java_getString(env, _schemeId);
	if (schemeId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_source_style_scheme_manager_get_scheme(self, schemeId);

	// cleanup parameter self

	// cleanup parameter schemeId
	bindings_java_releaseString(schemeId);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1get_1scheme_1ids
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkSourceStyleSchemeManager* self;

	// convert parameter self
	self = (GtkSourceStyleSchemeManager*) _self;

	// call function
	result = gtk_source_style_scheme_manager_get_scheme_ids(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1get_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkSourceStyleSchemeManager* self;

	// convert parameter self
	self = (GtkSourceStyleSchemeManager*) _self;

	// call function
	result = gtk_source_style_scheme_manager_get_search_path(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1prepend_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path
)
{
	GtkSourceStyleSchemeManager* self;
	const gchar* path;

	// convert parameter self
	self = (GtkSourceStyleSchemeManager*) _self;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_source_style_scheme_manager_prepend_search_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1set_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _path
)
{
	GtkSourceStyleSchemeManager* self;
	gchar** path;

	// convert parameter self
	self = (GtkSourceStyleSchemeManager*) _self;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _path);
		if (path == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_source_style_scheme_manager_set_search_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)path, _path);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceStyleSchemeManager_gtk_1source_1style_1scheme_1manager_1get_1default
(
	JNIEnv* env,
	jclass cls
)
{
	GtkSourceStyleSchemeManager* result;
	jlong _result;

	// call function
	result = gtk_source_style_scheme_manager_get_default();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
