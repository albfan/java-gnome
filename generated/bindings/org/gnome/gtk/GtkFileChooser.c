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
#include "org_gnome_gtk_GtkFileChooser.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1add_1choice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id,
	jstring _label,
	jobjectArray _options,
	jobjectArray _optionLabels
)
{
	GtkFileChooser* self;
	const char* id;
	const char* label;
	char** options;
	char** optionLabels;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter id
	id = (const char*) bindings_java_getString(env, _id);
	if (id == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter label
	label = (const char*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter options
	if (_options == NULL) {
		options = NULL;
	} else {
		options = (char**) bindings_java_convert_strarray_to_gchararray(env, _options);
		if (options == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter optionLabels
	if (_optionLabels == NULL) {
		optionLabels = NULL;
	} else {
		optionLabels = (char**) bindings_java_convert_strarray_to_gchararray(env, _optionLabels);
		if (optionLabels == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_file_chooser_add_choice(self, id, label, options, optionLabels);

	// cleanup parameter self

	// cleanup parameter id
	bindings_java_releaseString(id);

	// cleanup parameter label
	bindings_java_releaseString(label);

	// cleanup parameter options
	if (options != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)options, _options);
	}

	// cleanup parameter optionLabels
	if (optionLabels != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)optionLabels, _optionLabels);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1add_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filter
)
{
	GtkFileChooser* self;
	GtkFileFilter* filter;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter filter
	filter = (GtkFileFilter*) _filter;

	// call function
	gtk_file_chooser_add_filter(self, filter);

	// cleanup parameter self

	// cleanup parameter filter
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1add_1shortcut_1folder
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _folder
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* folder;
	GError* error = NULL;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter folder
	folder = (const char*) bindings_java_getString(env, _folder);
	if (folder == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_add_shortcut_folder(self, folder, &error);

	// cleanup parameter self

	// cleanup parameter folder
	bindings_java_releaseString(folder);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1add_1shortcut_1folder_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* uri;
	GError* error = NULL;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter uri
	uri = (const char*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_add_shortcut_folder_uri(self, uri, &error);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkFileChooserAction result;
	jint _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_action(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1choice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id
)
{
	const char* result;
	jstring _result;
	GtkFileChooser* self;
	const char* id;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter id
	id = (const char*) bindings_java_getString(env, _id);
	if (id == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_get_choice(self, id);

	// cleanup parameter self

	// cleanup parameter id
	bindings_java_releaseString(id);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1create_1folders
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_create_folders(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1current_1folder
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_current_folder(self);

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
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1current_1folder_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_current_folder_uri(self);

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
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1current_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_current_name(self);

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
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1do_1overwrite_1confirmation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_do_overwrite_confirmation(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1extra_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_extra_widget(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_filename(self);

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
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkFileFilter* result;
	jlong _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_filter(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1local_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_local_only(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1preview_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_preview_filename(self);

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
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1preview_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_preview_uri(self);

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
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1preview_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_preview_widget(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1preview_1widget_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_preview_widget_active(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1select_1multiple
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_select_multiple(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1show_1hidden
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_show_hidden(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_uri(self);

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
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1get_1use_1preview_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_get_use_preview_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1list_1filters
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	result = gtk_file_chooser_list_filters(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1remove_1choice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id
)
{
	GtkFileChooser* self;
	const char* id;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter id
	id = (const char*) bindings_java_getString(env, _id);
	if (id == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_file_chooser_remove_choice(self, id);

	// cleanup parameter self

	// cleanup parameter id
	bindings_java_releaseString(id);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1remove_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filter
)
{
	GtkFileChooser* self;
	GtkFileFilter* filter;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter filter
	filter = (GtkFileFilter*) _filter;

	// call function
	gtk_file_chooser_remove_filter(self, filter);

	// cleanup parameter self

	// cleanup parameter filter
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1remove_1shortcut_1folder
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _folder
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* folder;
	GError* error = NULL;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter folder
	folder = (const char*) bindings_java_getString(env, _folder);
	if (folder == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_remove_shortcut_folder(self, folder, &error);

	// cleanup parameter self

	// cleanup parameter folder
	bindings_java_releaseString(folder);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1remove_1shortcut_1folder_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* uri;
	GError* error = NULL;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter uri
	uri = (const char*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_remove_shortcut_folder_uri(self, uri, &error);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1select_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	gtk_file_chooser_select_all(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1select_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* filename;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_select_filename(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1select_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* uri;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter uri
	uri = (const char*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_select_uri(self, uri);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _action
)
{
	GtkFileChooser* self;
	GtkFileChooserAction action;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter action
	action = (GtkFileChooserAction) _action;

	// call function
	gtk_file_chooser_set_action(self, action);

	// cleanup parameter self

	// cleanup parameter action
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1choice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id,
	jstring _option
)
{
	GtkFileChooser* self;
	const char* id;
	const char* option;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter id
	id = (const char*) bindings_java_getString(env, _id);
	if (id == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter option
	option = (const char*) bindings_java_getString(env, _option);
	if (option == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_file_chooser_set_choice(self, id, option);

	// cleanup parameter self

	// cleanup parameter id
	bindings_java_releaseString(id);

	// cleanup parameter option
	bindings_java_releaseString(option);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1create_1folders
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _createFolders
)
{
	GtkFileChooser* self;
	gboolean createFolders;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter createFolders
	createFolders = (gboolean) _createFolders;

	// call function
	gtk_file_chooser_set_create_folders(self, createFolders);

	// cleanup parameter self

	// cleanup parameter createFolders
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1current_1folder
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const gchar* filename;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_set_current_folder(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1current_1folder_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const gchar* uri;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter uri
	uri = (const gchar*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_set_current_folder_uri(self, uri);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1current_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkFileChooser* self;
	const gchar* name;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_file_chooser_set_current_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1do_1overwrite_1confirmation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _doOverwriteConfirmation
)
{
	GtkFileChooser* self;
	gboolean doOverwriteConfirmation;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter doOverwriteConfirmation
	doOverwriteConfirmation = (gboolean) _doOverwriteConfirmation;

	// call function
	gtk_file_chooser_set_do_overwrite_confirmation(self, doOverwriteConfirmation);

	// cleanup parameter self

	// cleanup parameter doOverwriteConfirmation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1extra_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _extraWidget
)
{
	GtkFileChooser* self;
	GtkWidget* extraWidget;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter extraWidget
	extraWidget = (GtkWidget*) _extraWidget;

	// call function
	gtk_file_chooser_set_extra_widget(self, extraWidget);

	// cleanup parameter self

	// cleanup parameter extraWidget
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* filename;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_set_filename(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filter
)
{
	GtkFileChooser* self;
	GtkFileFilter* filter;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter filter
	filter = (GtkFileFilter*) _filter;

	// call function
	gtk_file_chooser_set_filter(self, filter);

	// cleanup parameter self

	// cleanup parameter filter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1local_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _localOnly
)
{
	GtkFileChooser* self;
	gboolean localOnly;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter localOnly
	localOnly = (gboolean) _localOnly;

	// call function
	gtk_file_chooser_set_local_only(self, localOnly);

	// cleanup parameter self

	// cleanup parameter localOnly
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1preview_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _previewWidget
)
{
	GtkFileChooser* self;
	GtkWidget* previewWidget;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter previewWidget
	previewWidget = (GtkWidget*) _previewWidget;

	// call function
	gtk_file_chooser_set_preview_widget(self, previewWidget);

	// cleanup parameter self

	// cleanup parameter previewWidget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1preview_1widget_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _active
)
{
	GtkFileChooser* self;
	gboolean active;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter active
	active = (gboolean) _active;

	// call function
	gtk_file_chooser_set_preview_widget_active(self, active);

	// cleanup parameter self

	// cleanup parameter active
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1select_1multiple
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _selectMultiple
)
{
	GtkFileChooser* self;
	gboolean selectMultiple;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter selectMultiple
	selectMultiple = (gboolean) _selectMultiple;

	// call function
	gtk_file_chooser_set_select_multiple(self, selectMultiple);

	// cleanup parameter self

	// cleanup parameter selectMultiple
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1show_1hidden
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showHidden
)
{
	GtkFileChooser* self;
	gboolean showHidden;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter showHidden
	showHidden = (gboolean) _showHidden;

	// call function
	gtk_file_chooser_set_show_hidden(self, showHidden);

	// cleanup parameter self

	// cleanup parameter showHidden
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	gboolean result;
	jboolean _result;
	GtkFileChooser* self;
	const char* uri;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter uri
	uri = (const char*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_file_chooser_set_uri(self, uri);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1set_1use_1preview_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useLabel
)
{
	GtkFileChooser* self;
	gboolean useLabel;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter useLabel
	useLabel = (gboolean) _useLabel;

	// call function
	gtk_file_chooser_set_use_preview_label(self, useLabel);

	// cleanup parameter self

	// cleanup parameter useLabel
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1unselect_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkFileChooser* self;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// call function
	gtk_file_chooser_unselect_all(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1unselect_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	GtkFileChooser* self;
	const char* filename;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_file_chooser_unselect_filename(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFileChooser_gtk_1file_1chooser_1unselect_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	GtkFileChooser* self;
	const char* uri;

	// convert parameter self
	self = (GtkFileChooser*) _self;

	// convert parameter uri
	uri = (const char*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_file_chooser_unselect_uri(self, uri);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);
}
