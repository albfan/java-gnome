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
#include "org_gnome_gtk_GtkIconTheme.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkIconTheme* result;
	jlong _result;

	// call function
	result = gtk_icon_theme_new();

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
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1add_1resource_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path
)
{
	GtkIconTheme* self;
	const gchar* path;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_icon_theme_add_resource_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1append_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path
)
{
	GtkIconTheme* self;
	const gchar* path;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_icon_theme_append_search_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1choose_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconNames,
	jint _size,
	jint _flags
)
{
	GtkIconInfo* result;
	jlong _result;
	GtkIconTheme* self;
	gchar* iconNames;
	gint size;
	GtkIconLookupFlags flags;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconNames
	iconNames = (gchar*) bindings_java_getString(env, _iconNames);
	if (iconNames == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter flags
	flags = (GtkIconLookupFlags) _flags;

	// call function
	result = gtk_icon_theme_choose_icon(self, iconNames, size, flags);

	// cleanup parameter self

	// cleanup parameter iconNames
	bindings_java_releaseString(iconNames);

	// cleanup parameter size

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1choose_1icon_1for_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconNames,
	jint _size,
	jint _scale,
	jint _flags
)
{
	GtkIconInfo* result;
	jlong _result;
	GtkIconTheme* self;
	gchar* iconNames;
	gint size;
	gint scale;
	GtkIconLookupFlags flags;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconNames
	iconNames = (gchar*) bindings_java_getString(env, _iconNames);
	if (iconNames == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter scale
	scale = (gint) _scale;

	// convert parameter flags
	flags = (GtkIconLookupFlags) _flags;

	// call function
	result = gtk_icon_theme_choose_icon_for_scale(self, iconNames, size, scale, flags);

	// cleanup parameter self

	// cleanup parameter iconNames
	bindings_java_releaseString(iconNames);

	// cleanup parameter size

	// cleanup parameter scale

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

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1get_1example_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	GtkIconTheme* self;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// call function
	result = gtk_icon_theme_get_example_icon_name(self);

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

JNIEXPORT jintArray JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1get_1icon_1sizes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName
)
{
	gint* result;
	jintArray _result;
	GtkIconTheme* self;
	const gchar* iconName;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_icon_theme_get_icon_sizes(self, iconName);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// translate return value to JNI type
	_result = (jintArray) NULL;

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1get_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _path,
	jintArray _nElements
)
{
	GtkIconTheme* self;
	gchar** path;
	gint* nElements;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _path);
		if (path == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter nElements
	if (_nElements == NULL) {
		nElements = NULL;
	} else {
		nElements = (gint*) (*env)->GetIntArrayElements(env, _nElements, NULL);
		if (nElements == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_icon_theme_get_search_path(self, path, nElements);

	// cleanup parameter self

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)path, _path);
	}

	// cleanup parameter nElements
	if (nElements != NULL) {
		(*env)->ReleaseIntArrayElements(env, _nElements, (jint*)nElements, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1has_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName
)
{
	gboolean result;
	jboolean _result;
	GtkIconTheme* self;
	const gchar* iconName;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_icon_theme_has_icon(self, iconName);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1load_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName,
	jint _size,
	jint _flags
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconTheme* self;
	const gchar* iconName;
	gint size;
	GtkIconLookupFlags flags;
	GError* error = NULL;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter flags
	flags = (GtkIconLookupFlags) _flags;

	// call function
	result = gtk_icon_theme_load_icon(self, iconName, size, flags, &error);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// cleanup parameter size

	// cleanup parameter flags

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
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1load_1icon_1for_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName,
	jint _size,
	jint _scale,
	jint _flags
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconTheme* self;
	const gchar* iconName;
	gint size;
	gint scale;
	GtkIconLookupFlags flags;
	GError* error = NULL;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter scale
	scale = (gint) _scale;

	// convert parameter flags
	flags = (GtkIconLookupFlags) _flags;

	// call function
	result = gtk_icon_theme_load_icon_for_scale(self, iconName, size, scale, flags, &error);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// cleanup parameter size

	// cleanup parameter scale

	// cleanup parameter flags

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
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1load_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName,
	jint _size,
	jint _scale,
	jlong _forWindow,
	jint _flags
)
{
	cairo_surface_t* result;
	jlong _result;
	GtkIconTheme* self;
	const gchar* iconName;
	gint size;
	gint scale;
	GdkWindow* forWindow;
	GtkIconLookupFlags flags;
	GError* error = NULL;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter scale
	scale = (gint) _scale;

	// convert parameter forWindow
	forWindow = (GdkWindow*) _forWindow;

	// convert parameter flags
	flags = (GtkIconLookupFlags) _flags;

	// call function
	result = gtk_icon_theme_load_surface(self, iconName, size, scale, forWindow, flags, &error);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// cleanup parameter size

	// cleanup parameter scale

	// cleanup parameter forWindow

	// cleanup parameter flags

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return 0L;
	}

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1lookup_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName,
	jint _size,
	jint _flags
)
{
	GtkIconInfo* result;
	jlong _result;
	GtkIconTheme* self;
	const gchar* iconName;
	gint size;
	GtkIconLookupFlags flags;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter flags
	flags = (GtkIconLookupFlags) _flags;

	// call function
	result = gtk_icon_theme_lookup_icon(self, iconName, size, flags);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// cleanup parameter size

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1lookup_1icon_1for_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName,
	jint _size,
	jint _scale,
	jint _flags
)
{
	GtkIconInfo* result;
	jlong _result;
	GtkIconTheme* self;
	const gchar* iconName;
	gint size;
	gint scale;
	GtkIconLookupFlags flags;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter scale
	scale = (gint) _scale;

	// convert parameter flags
	flags = (GtkIconLookupFlags) _flags;

	// call function
	result = gtk_icon_theme_lookup_icon_for_scale(self, iconName, size, scale, flags);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// cleanup parameter size

	// cleanup parameter scale

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
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1prepend_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path
)
{
	GtkIconTheme* self;
	const gchar* path;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_icon_theme_prepend_search_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1rescan_1if_1needed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkIconTheme* self;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// call function
	result = gtk_icon_theme_rescan_if_needed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1set_1custom_1theme
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _themeName
)
{
	GtkIconTheme* self;
	const gchar* themeName;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter themeName
	if (_themeName == NULL) {
		themeName = NULL;
	} else {
		themeName = (const gchar*) bindings_java_getString(env, _themeName);
		if (themeName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_icon_theme_set_custom_theme(self, themeName);

	// cleanup parameter self

	// cleanup parameter themeName
	if (themeName != NULL) {
		bindings_java_releaseString(themeName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1set_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen
)
{
	GtkIconTheme* self;
	GdkScreen* screen;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	gtk_icon_theme_set_screen(self, screen);

	// cleanup parameter self

	// cleanup parameter screen
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1set_1search_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _path,
	jint _nElements
)
{
	GtkIconTheme* self;
	gchar* path;
	gint nElements;

	// convert parameter self
	self = (GtkIconTheme*) _self;

	// convert parameter path
	path = (gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter nElements
	nElements = (gint) _nElements;

	// call function
	gtk_icon_theme_set_search_path(self, path, nElements);

	// cleanup parameter self

	// cleanup parameter path
	bindings_java_releaseString(path);

	// cleanup parameter nElements
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1add_1builtin_1icon
(
	JNIEnv* env,
	jclass cls,
	jstring _iconName,
	jint _size,
	jlong _pixbuf
)
{
	const gchar* iconName;
	gint size;
	GdkPixbuf* pixbuf;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter size
	size = (gint) _size;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_icon_theme_add_builtin_icon(iconName, size, pixbuf);

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

	// cleanup parameter size

	// cleanup parameter pixbuf
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1get_1default
(
	JNIEnv* env,
	jclass cls
)
{
	GtkIconTheme* result;
	jlong _result;

	// call function
	result = gtk_icon_theme_get_default();

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
Java_org_gnome_gtk_GtkIconTheme_gtk_1icon_1theme_1get_1for_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _screen
)
{
	GtkIconTheme* result;
	jlong _result;
	GdkScreen* screen;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	result = gtk_icon_theme_get_for_screen(screen);

	// cleanup parameter screen

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
