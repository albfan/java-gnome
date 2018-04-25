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
#include <gdk/gdk.h>
#include "bindings_java.h"
#include "org_gnome_gdk_GdkScreen.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1active_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_active_window(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_display(self);

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
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1font_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const cairo_font_options_t* result;
	jlong _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_font_options(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1height_1mm
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_height_mm(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1at_1point
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	gint result;
	jint _result;
	GdkScreen* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gdk_screen_get_monitor_at_point(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1at_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	gint result;
	jint _result;
	GdkScreen* self;
	GdkWindow* window;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// call function
	result = gdk_screen_get_monitor_at_window(self, window);

	// cleanup parameter self

	// cleanup parameter window

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1geometry
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitorNum,
	jlong _dest
)
{
	GdkScreen* self;
	gint monitorNum;
	GdkRectangle* dest;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter monitorNum
	monitorNum = (gint) _monitorNum;

	// convert parameter dest
	dest = (GdkRectangle*) _dest;

	// call function
	gdk_screen_get_monitor_geometry(self, monitorNum, dest);

	// cleanup parameter self

	// cleanup parameter monitorNum

	// cleanup parameter dest
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1height_1mm
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitorNum
)
{
	gint result;
	jint _result;
	GdkScreen* self;
	gint monitorNum;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter monitorNum
	monitorNum = (gint) _monitorNum;

	// call function
	result = gdk_screen_get_monitor_height_mm(self, monitorNum);

	// cleanup parameter self

	// cleanup parameter monitorNum

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1plug_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitorNum
)
{
	gchar* result;
	jstring _result;
	GdkScreen* self;
	gint monitorNum;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter monitorNum
	monitorNum = (gint) _monitorNum;

	// call function
	result = gdk_screen_get_monitor_plug_name(self, monitorNum);

	// cleanup parameter self

	// cleanup parameter monitorNum

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1scale_1factor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitorNum
)
{
	gint result;
	jint _result;
	GdkScreen* self;
	gint monitorNum;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter monitorNum
	monitorNum = (gint) _monitorNum;

	// call function
	result = gdk_screen_get_monitor_scale_factor(self, monitorNum);

	// cleanup parameter self

	// cleanup parameter monitorNum

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1width_1mm
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitorNum
)
{
	gint result;
	jint _result;
	GdkScreen* self;
	gint monitorNum;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter monitorNum
	monitorNum = (gint) _monitorNum;

	// call function
	result = gdk_screen_get_monitor_width_mm(self, monitorNum);

	// cleanup parameter self

	// cleanup parameter monitorNum

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1monitor_1workarea
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitorNum,
	jlong _dest
)
{
	GdkScreen* self;
	gint monitorNum;
	GdkRectangle* dest;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter monitorNum
	monitorNum = (gint) _monitorNum;

	// convert parameter dest
	dest = (GdkRectangle*) _dest;

	// call function
	gdk_screen_get_monitor_workarea(self, monitorNum, dest);

	// cleanup parameter self

	// cleanup parameter monitorNum

	// cleanup parameter dest
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1n_1monitors
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_n_monitors(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1number
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_number(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1primary_1monitor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_primary_monitor(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1resolution
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_resolution(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1rgba_1visual
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkVisual* result;
	jlong _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_rgba_visual(self);

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
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1root_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_root_window(self);

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
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1setting
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jlong _value
)
{
	gboolean result;
	jboolean _result;
	GdkScreen* self;
	const gchar* name;
	GValue* value;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter value
	value = (GValue*) _value;

	// call function
	result = gdk_screen_get_setting(self, name, value);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter value

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1system_1visual
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkVisual* result;
	jlong _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_system_visual(self);

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
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1toplevel_1windows
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_toplevel_windows(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1width_1mm
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_width_mm(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1window_1stack
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_get_window_stack(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1is_1composited
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_is_composited(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1list_1visuals
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_list_visuals(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1make_1display_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GdkScreen* self;

	// convert parameter self
	self = (GdkScreen*) _self;

	// call function
	result = gdk_screen_make_display_name(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1set_1font_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _options
)
{
	GdkScreen* self;
	const cairo_font_options_t* options;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter options
	options = (const cairo_font_options_t*) _options;

	// call function
	gdk_screen_set_font_options(self, options);

	// cleanup parameter self

	// cleanup parameter options
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1set_1resolution
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _dpi
)
{
	GdkScreen* self;
	gdouble dpi;

	// convert parameter self
	self = (GdkScreen*) _self;

	// convert parameter dpi
	dpi = (gdouble) _dpi;

	// call function
	gdk_screen_set_resolution(self, dpi);

	// cleanup parameter self

	// cleanup parameter dpi
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1get_1default
(
	JNIEnv* env,
	jclass cls
)
{
	GdkScreen* result;
	jlong _result;

	// call function
	result = gdk_screen_get_default();

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
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1height
(
	JNIEnv* env,
	jclass cls
)
{
	gint result;
	jint _result;

	// call function
	result = gdk_screen_height();

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1height_1mm
(
	JNIEnv* env,
	jclass cls
)
{
	gint result;
	jint _result;

	// call function
	result = gdk_screen_height_mm();

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1width
(
	JNIEnv* env,
	jclass cls
)
{
	gint result;
	jint _result;

	// call function
	result = gdk_screen_width();

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkScreen_gdk_1screen_1width_1mm
(
	JNIEnv* env,
	jclass cls
)
{
	gint result;
	jint _result;

	// call function
	result = gdk_screen_width_mm();

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}
