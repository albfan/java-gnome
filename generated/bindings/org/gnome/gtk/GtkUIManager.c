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
#include "org_gnome_gtk_GtkUIManager.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkUIManager* result;
	jlong _result;

	// call function
	result = gtk_ui_manager_new();

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
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1add_1ui
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _mergeId,
	jstring _path,
	jstring _name,
	jstring _action,
	jint _type,
	jboolean _top
)
{
	GtkUIManager* self;
	guint mergeId;
	const gchar* path;
	const gchar* name;
	const gchar* action;
	GtkUIManagerItemType type;
	gboolean top;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter mergeId
	mergeId = (guint) _mergeId;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter action
	if (_action == NULL) {
		action = NULL;
	} else {
		action = (const gchar*) bindings_java_getString(env, _action);
		if (action == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter type
	type = (GtkUIManagerItemType) _type;

	// convert parameter top
	top = (gboolean) _top;

	// call function
	gtk_ui_manager_add_ui(self, mergeId, path, name, action, type, top);

	// cleanup parameter self

	// cleanup parameter mergeId

	// cleanup parameter path
	bindings_java_releaseString(path);

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter action
	if (action != NULL) {
		bindings_java_releaseString(action);
	}

	// cleanup parameter type

	// cleanup parameter top
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1add_1ui_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	guint result;
	jint _result;
	GtkUIManager* self;
	const gchar* filename;
	GError* error = NULL;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_ui_manager_add_ui_from_file(self, filename, &error);

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
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1add_1ui_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _resourcePath
)
{
	guint result;
	jint _result;
	GtkUIManager* self;
	const gchar* resourcePath;
	GError* error = NULL;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter resourcePath
	resourcePath = (const gchar*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_ui_manager_add_ui_from_resource(self, resourcePath, &error);

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
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1add_1ui_1from_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _buffer,
	jint _length
)
{
	guint result;
	jint _result;
	GtkUIManager* self;
	const gchar* buffer;
	gssize length;
	GError* error = NULL;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter buffer
	buffer = (const gchar*) bindings_java_getString(env, _buffer);
	if (buffer == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter length
	length = (gssize) _length;

	// call function
	result = gtk_ui_manager_add_ui_from_string(self, buffer, length, &error);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1ensure_1update
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkUIManager* self;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// call function
	gtk_ui_manager_ensure_update(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1get_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAccelGroup* result;
	jlong _result;
	GtkUIManager* self;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// call function
	result = gtk_ui_manager_get_accel_group(self);

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
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1get_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path
)
{
	GtkAction* result;
	jlong _result;
	GtkUIManager* self;
	const gchar* path;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_ui_manager_get_action(self, path);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);

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
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1get_1action_1groups
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkUIManager* self;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// call function
	result = gtk_ui_manager_get_action_groups(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1get_1add_1tearoffs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkUIManager* self;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// call function
	result = gtk_ui_manager_get_add_tearoffs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1get_1toplevels
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _types
)
{
	GSList* result;
	jlongArray _result;
	GtkUIManager* self;
	GtkUIManagerItemType types;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter types
	types = (GtkUIManagerItemType) _types;

	// call function
	result = gtk_ui_manager_get_toplevels(self, types);

	// cleanup parameter self

	// cleanup parameter types

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1get_1ui
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkUIManager* self;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// call function
	result = gtk_ui_manager_get_ui(self);

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
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1get_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path
)
{
	GtkWidget* result;
	jlong _result;
	GtkUIManager* self;
	const gchar* path;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_ui_manager_get_widget(self, path);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);

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
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1insert_1action_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _actionGroup,
	jint _pos
)
{
	GtkUIManager* self;
	GtkActionGroup* actionGroup;
	gint pos;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter actionGroup
	actionGroup = (GtkActionGroup*) _actionGroup;

	// convert parameter pos
	pos = (gint) _pos;

	// call function
	gtk_ui_manager_insert_action_group(self, actionGroup, pos);

	// cleanup parameter self

	// cleanup parameter actionGroup

	// cleanup parameter pos
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1new_1merge_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkUIManager* self;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// call function
	result = gtk_ui_manager_new_merge_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1remove_1action_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _actionGroup
)
{
	GtkUIManager* self;
	GtkActionGroup* actionGroup;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter actionGroup
	actionGroup = (GtkActionGroup*) _actionGroup;

	// call function
	gtk_ui_manager_remove_action_group(self, actionGroup);

	// cleanup parameter self

	// cleanup parameter actionGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1remove_1ui
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _mergeId
)
{
	GtkUIManager* self;
	guint mergeId;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter mergeId
	mergeId = (guint) _mergeId;

	// call function
	gtk_ui_manager_remove_ui(self, mergeId);

	// cleanup parameter self

	// cleanup parameter mergeId
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkUIManager_gtk_1ui_1manager_1set_1add_1tearoffs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _addTearoffs
)
{
	GtkUIManager* self;
	gboolean addTearoffs;

	// convert parameter self
	self = (GtkUIManager*) _self;

	// convert parameter addTearoffs
	addTearoffs = (gboolean) _addTearoffs;

	// call function
	gtk_ui_manager_set_add_tearoffs(self, addTearoffs);

	// cleanup parameter self

	// cleanup parameter addTearoffs
}
