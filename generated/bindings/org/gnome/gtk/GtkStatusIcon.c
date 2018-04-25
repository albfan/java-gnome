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
#include "org_gnome_gtk_GtkStatusIcon.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkStatusIcon* result;
	jlong _result;

	// call function
	result = gtk_status_icon_new();

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _filename
)
{
	GtkStatusIcon* result;
	jlong _result;
	const gchar* filename;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_status_icon_new_from_file(filename);

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1new_1from_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jstring _iconName
)
{
	GtkStatusIcon* result;
	jlong _result;
	const gchar* iconName;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_status_icon_new_from_icon_name(iconName);

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1new_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _pixbuf
)
{
	GtkStatusIcon* result;
	jlong _result;
	GdkPixbuf* pixbuf;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	result = gtk_status_icon_new_from_pixbuf(pixbuf);

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1new_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jstring _stockId
)
{
	GtkStatusIcon* result;
	jlong _result;
	const gchar* stockId;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_status_icon_new_from_stock(stockId);

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1geometry
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _screen,
	jlong _area,
	jintArray _orientation
)
{
	gboolean result;
	jboolean _result;
	GtkStatusIcon* self;
	GdkScreen** screen;
	GdkRectangle* area;
	GtkOrientation* orientation;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter screen
	if (_screen == NULL) {
		screen = NULL;
	} else {
		screen = (GdkScreen**) bindings_java_convert_jarray_to_gpointer(env, _screen);
		if (screen == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter area
	area = (GdkRectangle*) _area;

	// convert parameter orientation
	if (_orientation == NULL) {
		orientation = NULL;
	} else {
		orientation = (GtkOrientation*) (*env)->GetIntArrayElements(env, _orientation, NULL);
		if (orientation == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_status_icon_get_geometry(self, screen, area, orientation);

	// cleanup parameter self

	// cleanup parameter screen
	if (screen != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)screen, _screen);
	}

	// cleanup parameter area

	// cleanup parameter orientation
	if (orientation != NULL) {
		(*env)->ReleaseIntArrayElements(env, _orientation, (jint*)orientation, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1has_1tooltip
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_has_tooltip(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_icon_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_pixbuf(self);

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_screen(self);

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

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_stock(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1storage_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkImageType result;
	jint _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_storage_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_title(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_tooltip_markup(self);

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_tooltip_text(self);

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
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1get_1x11_1window_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint32 result;
	jint _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_get_x11_window_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1is_1embedded
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkStatusIcon* self;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// call function
	result = gtk_status_icon_is_embedded(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	GtkStatusIcon* self;
	const gchar* filename;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_status_icon_set_from_file(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1from_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName
)
{
	GtkStatusIcon* self;
	const gchar* iconName;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_status_icon_set_from_icon_name(self, iconName);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	GtkStatusIcon* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_status_icon_set_from_pixbuf(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId
)
{
	GtkStatusIcon* self;
	const gchar* stockId;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_status_icon_set_from_stock(self, stockId);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1has_1tooltip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hasTooltip
)
{
	GtkStatusIcon* self;
	gboolean hasTooltip;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter hasTooltip
	hasTooltip = (gboolean) _hasTooltip;

	// call function
	gtk_status_icon_set_has_tooltip(self, hasTooltip);

	// cleanup parameter self

	// cleanup parameter hasTooltip
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkStatusIcon* self;
	const gchar* name;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_status_icon_set_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen
)
{
	GtkStatusIcon* self;
	GdkScreen* screen;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	gtk_status_icon_set_screen(self, screen);

	// cleanup parameter self

	// cleanup parameter screen
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GtkStatusIcon* self;
	const gchar* title;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_status_icon_set_title(self, title);

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _markup
)
{
	GtkStatusIcon* self;
	const gchar* markup;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter markup
	if (_markup == NULL) {
		markup = NULL;
	} else {
		markup = (const gchar*) bindings_java_getString(env, _markup);
		if (markup == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_status_icon_set_tooltip_markup(self, markup);

	// cleanup parameter self

	// cleanup parameter markup
	if (markup != NULL) {
		bindings_java_releaseString(markup);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkStatusIcon* self;
	const gchar* text;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_status_icon_set_tooltip_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusIcon_gtk_1status_1icon_1set_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visible
)
{
	GtkStatusIcon* self;
	gboolean visible;

	// convert parameter self
	self = (GtkStatusIcon*) _self;

	// convert parameter visible
	visible = (gboolean) _visible;

	// call function
	gtk_status_icon_set_visible(self, visible);

	// cleanup parameter self

	// cleanup parameter visible
}
