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
#include "org_gnome_gtk_GtkIconInfo.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1new_1for_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _iconTheme,
	jlong _pixbuf
)
{
	GtkIconInfo* result;
	jlong _result;
	GtkIconTheme* iconTheme;
	GdkPixbuf* pixbuf;

	// convert parameter iconTheme
	iconTheme = (GtkIconTheme*) _iconTheme;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	result = gtk_icon_info_new_for_pixbuf(iconTheme, pixbuf);

	// cleanup parameter iconTheme

	// cleanup parameter pixbuf

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
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconInfo* result;
	jlong _result;
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_copy(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	gtk_icon_info_free(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1get_1attach_1points
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _points,
	jintArray _nPoints
)
{
	gboolean result;
	jboolean _result;
	GtkIconInfo* self;
	GdkPoint** points;
	gint* nPoints;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// convert parameter points
	if (_points == NULL) {
		points = NULL;
	} else {
		points = (GdkPoint**) bindings_java_convert_jarray_to_gpointer(env, _points);
		if (points == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter nPoints
	if (_nPoints == NULL) {
		nPoints = NULL;
	} else {
		nPoints = (gint*) (*env)->GetIntArrayElements(env, _nPoints, NULL);
		if (nPoints == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_icon_info_get_attach_points(self, points, nPoints);

	// cleanup parameter self

	// cleanup parameter points
	if (points != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)points, _points);
	}

	// cleanup parameter nPoints
	if (nPoints != NULL) {
		(*env)->ReleaseIntArrayElements(env, _nPoints, (jint*)nPoints, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1get_1base_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_get_base_scale(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1get_1base_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_get_base_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1get_1builtin_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_get_builtin_pixbuf(self);

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
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1get_1display_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_get_display_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1get_1embedded_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rectangle
)
{
	gboolean result;
	jboolean _result;
	GtkIconInfo* self;
	GdkRectangle* rectangle;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// convert parameter rectangle
	rectangle = (GdkRectangle*) _rectangle;

	// call function
	result = gtk_icon_info_get_embedded_rect(self, rectangle);

	// cleanup parameter self

	// cleanup parameter rectangle

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1get_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_get_filename(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1is_1symbolic
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkIconInfo* self;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_is_symbolic(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1load_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconInfo* self;
	GError* error = NULL;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// call function
	result = gtk_icon_info_load_icon(self, &error);

	// cleanup parameter self

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
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1load_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _forWindow
)
{
	cairo_surface_t* result;
	jlong _result;
	GtkIconInfo* self;
	GdkWindow* forWindow;
	GError* error = NULL;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// convert parameter forWindow
	forWindow = (GdkWindow*) _forWindow;

	// call function
	result = gtk_icon_info_load_surface(self, forWindow, &error);

	// cleanup parameter self

	// cleanup parameter forWindow

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
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1load_1symbolic
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _fg,
	jlong _successColor,
	jlong _warningColor,
	jlong _errorColor,
	jbooleanArray _wasSymbolic
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconInfo* self;
	const GdkRGBA* fg;
	const GdkRGBA* successColor;
	const GdkRGBA* warningColor;
	const GdkRGBA* errorColor;
	gboolean* wasSymbolic;
	GError* error = NULL;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// convert parameter fg
	fg = (const GdkRGBA*) _fg;

	// convert parameter successColor
	successColor = (const GdkRGBA*) _successColor;

	// convert parameter warningColor
	warningColor = (const GdkRGBA*) _warningColor;

	// convert parameter errorColor
	errorColor = (const GdkRGBA*) _errorColor;

	// convert parameter wasSymbolic
	if (_wasSymbolic == NULL) {
		wasSymbolic = NULL;
	} else {
		wasSymbolic = (gboolean*) (*env)->GetBooleanArrayElements(env, _wasSymbolic, NULL);
		if (wasSymbolic == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_icon_info_load_symbolic(self, fg, successColor, warningColor, errorColor, wasSymbolic, &error);

	// cleanup parameter self

	// cleanup parameter fg

	// cleanup parameter successColor

	// cleanup parameter warningColor

	// cleanup parameter errorColor

	// cleanup parameter wasSymbolic
	if (wasSymbolic != NULL) {
		(*env)->ReleaseBooleanArrayElements(env, _wasSymbolic, (jboolean*)wasSymbolic, 0);
	}

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
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1load_1symbolic_1for_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _context,
	jbooleanArray _wasSymbolic
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconInfo* self;
	GtkStyleContext* context;
	gboolean* wasSymbolic;
	GError* error = NULL;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// convert parameter context
	context = (GtkStyleContext*) _context;

	// convert parameter wasSymbolic
	if (_wasSymbolic == NULL) {
		wasSymbolic = NULL;
	} else {
		wasSymbolic = (gboolean*) (*env)->GetBooleanArrayElements(env, _wasSymbolic, NULL);
		if (wasSymbolic == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_icon_info_load_symbolic_for_context(self, context, wasSymbolic, &error);

	// cleanup parameter self

	// cleanup parameter context

	// cleanup parameter wasSymbolic
	if (wasSymbolic != NULL) {
		(*env)->ReleaseBooleanArrayElements(env, _wasSymbolic, (jboolean*)wasSymbolic, 0);
	}

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconInfo_gtk_1icon_1info_1set_1raw_1coordinates
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _rawCoordinates
)
{
	GtkIconInfo* self;
	gboolean rawCoordinates;

	// convert parameter self
	self = (GtkIconInfo*) _self;

	// convert parameter rawCoordinates
	rawCoordinates = (gboolean) _rawCoordinates;

	// call function
	gtk_icon_info_set_raw_coordinates(self, rawCoordinates);

	// cleanup parameter self

	// cleanup parameter rawCoordinates
}
