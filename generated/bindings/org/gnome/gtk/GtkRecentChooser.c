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
#include "org_gnome_gtk_GtkRecentChooser.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1add_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filter
)
{
	GtkRecentChooser* self;
	GtkRecentFilter* filter;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter filter
	filter = (GtkRecentFilter*) _filter;

	// call function
	gtk_recent_chooser_add_filter(self, filter);

	// cleanup parameter self

	// cleanup parameter filter
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1current_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentInfo* result;
	jlong _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_current_item(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1current_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_current_uri(self);

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
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentFilter* result;
	jlong _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_filter(self);

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

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1items
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_items(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// cleanup return value
	if (result != NULL) {
		g_list_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1limit
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_limit(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1local_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_local_only(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1select_1multiple
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_select_multiple(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1show_1icons
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_show_icons(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1show_1not_1found
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_show_not_found(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1show_1private
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_show_private(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1show_1tips
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_show_tips(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1sort_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentSortType result;
	jint _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_get_sort_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1get_1uris
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _length
)
{
	gchar** result;
	jobjectArray _result;
	GtkRecentChooser* self;
	gsize* length;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter length
	if (_length == NULL) {
		length = NULL;
	} else {
		length = (gsize*) (*env)->GetLongArrayElements(env, _length, NULL);
		if (length == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_recent_chooser_get_uris(self, length);

	// cleanup parameter self

	// cleanup parameter length
	if (length != NULL) {
		(*env)->ReleaseLongArrayElements(env, _length, (jlong*)length, 0);
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

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1list_1filters
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	result = gtk_recent_chooser_list_filters(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1remove_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filter
)
{
	GtkRecentChooser* self;
	GtkRecentFilter* filter;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter filter
	filter = (GtkRecentFilter*) _filter;

	// call function
	gtk_recent_chooser_remove_filter(self, filter);

	// cleanup parameter self

	// cleanup parameter filter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1select_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	gtk_recent_chooser_select_all(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1select_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;
	const gchar* uri;
	GError* error = NULL;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter uri
	uri = (const gchar*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_recent_chooser_select_uri(self, uri, &error);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1current_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	gboolean result;
	jboolean _result;
	GtkRecentChooser* self;
	const gchar* uri;
	GError* error = NULL;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter uri
	uri = (const gchar*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_recent_chooser_set_current_uri(self, uri, &error);

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
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filter
)
{
	GtkRecentChooser* self;
	GtkRecentFilter* filter;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter filter
	filter = (GtkRecentFilter*) _filter;

	// call function
	gtk_recent_chooser_set_filter(self, filter);

	// cleanup parameter self

	// cleanup parameter filter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1limit
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _limit
)
{
	GtkRecentChooser* self;
	gint limit;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter limit
	limit = (gint) _limit;

	// call function
	gtk_recent_chooser_set_limit(self, limit);

	// cleanup parameter self

	// cleanup parameter limit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1local_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _localOnly
)
{
	GtkRecentChooser* self;
	gboolean localOnly;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter localOnly
	localOnly = (gboolean) _localOnly;

	// call function
	gtk_recent_chooser_set_local_only(self, localOnly);

	// cleanup parameter self

	// cleanup parameter localOnly
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1select_1multiple
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _selectMultiple
)
{
	GtkRecentChooser* self;
	gboolean selectMultiple;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter selectMultiple
	selectMultiple = (gboolean) _selectMultiple;

	// call function
	gtk_recent_chooser_set_select_multiple(self, selectMultiple);

	// cleanup parameter self

	// cleanup parameter selectMultiple
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1show_1icons
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showIcons
)
{
	GtkRecentChooser* self;
	gboolean showIcons;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter showIcons
	showIcons = (gboolean) _showIcons;

	// call function
	gtk_recent_chooser_set_show_icons(self, showIcons);

	// cleanup parameter self

	// cleanup parameter showIcons
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1show_1not_1found
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showNotFound
)
{
	GtkRecentChooser* self;
	gboolean showNotFound;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter showNotFound
	showNotFound = (gboolean) _showNotFound;

	// call function
	gtk_recent_chooser_set_show_not_found(self, showNotFound);

	// cleanup parameter self

	// cleanup parameter showNotFound
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1show_1private
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showPrivate
)
{
	GtkRecentChooser* self;
	gboolean showPrivate;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter showPrivate
	showPrivate = (gboolean) _showPrivate;

	// call function
	gtk_recent_chooser_set_show_private(self, showPrivate);

	// cleanup parameter self

	// cleanup parameter showPrivate
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1show_1tips
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showTips
)
{
	GtkRecentChooser* self;
	gboolean showTips;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter showTips
	showTips = (gboolean) _showTips;

	// call function
	gtk_recent_chooser_set_show_tips(self, showTips);

	// cleanup parameter self

	// cleanup parameter showTips
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1set_1sort_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _sortType
)
{
	GtkRecentChooser* self;
	GtkRecentSortType sortType;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter sortType
	sortType = (GtkRecentSortType) _sortType;

	// call function
	gtk_recent_chooser_set_sort_type(self, sortType);

	// cleanup parameter self

	// cleanup parameter sortType
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1unselect_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentChooser* self;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// call function
	gtk_recent_chooser_unselect_all(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentChooser_gtk_1recent_1chooser_1unselect_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	GtkRecentChooser* self;
	const gchar* uri;

	// convert parameter self
	self = (GtkRecentChooser*) _self;

	// convert parameter uri
	uri = (const gchar*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_recent_chooser_unselect_uri(self, uri);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);
}
