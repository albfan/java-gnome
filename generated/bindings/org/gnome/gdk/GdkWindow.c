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
#include "org_gnome_gdk_GdkWindow.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _parent,
	jlong _attributes,
	jint _attributesMask
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* parent;
	GdkWindowAttr* attributes;
	gint attributesMask;

	// convert parameter parent
	parent = (GdkWindow*) _parent;

	// convert parameter attributes
	attributes = (GdkWindowAttr*) _attributes;

	// convert parameter attributesMask
	attributesMask = (gint) _attributesMask;

	// call function
	result = gdk_window_new(parent, attributes, attributesMask);

	// cleanup parameter parent

	// cleanup parameter attributes

	// cleanup parameter attributesMask

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1beep
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_beep(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1begin_1move_1drag
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _button,
	jint _rootX,
	jint _rootY,
	jint _timestamp
)
{
	GdkWindow* self;
	gint button;
	gint rootX;
	gint rootY;
	guint32 timestamp;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter button
	button = (gint) _button;

	// convert parameter rootX
	rootX = (gint) _rootX;

	// convert parameter rootY
	rootY = (gint) _rootY;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gdk_window_begin_move_drag(self, button, rootX, rootY, timestamp);

	// cleanup parameter self

	// cleanup parameter button

	// cleanup parameter rootX

	// cleanup parameter rootY

	// cleanup parameter timestamp
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1begin_1move_1drag_1for_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jint _button,
	jint _rootX,
	jint _rootY,
	jint _timestamp
)
{
	GdkWindow* self;
	GdkDevice* device;
	gint button;
	gint rootX;
	gint rootY;
	guint32 timestamp;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter button
	button = (gint) _button;

	// convert parameter rootX
	rootX = (gint) _rootX;

	// convert parameter rootY
	rootY = (gint) _rootY;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gdk_window_begin_move_drag_for_device(self, device, button, rootX, rootY, timestamp);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter button

	// cleanup parameter rootX

	// cleanup parameter rootY

	// cleanup parameter timestamp
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1begin_1paint_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rectangle
)
{
	GdkWindow* self;
	const GdkRectangle* rectangle;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter rectangle
	rectangle = (const GdkRectangle*) _rectangle;

	// call function
	gdk_window_begin_paint_rect(self, rectangle);

	// cleanup parameter self

	// cleanup parameter rectangle
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1begin_1resize_1drag
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _edge,
	jint _button,
	jint _rootX,
	jint _rootY,
	jint _timestamp
)
{
	GdkWindow* self;
	GdkWindowEdge edge;
	gint button;
	gint rootX;
	gint rootY;
	guint32 timestamp;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter edge
	edge = (GdkWindowEdge) _edge;

	// convert parameter button
	button = (gint) _button;

	// convert parameter rootX
	rootX = (gint) _rootX;

	// convert parameter rootY
	rootY = (gint) _rootY;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gdk_window_begin_resize_drag(self, edge, button, rootX, rootY, timestamp);

	// cleanup parameter self

	// cleanup parameter edge

	// cleanup parameter button

	// cleanup parameter rootX

	// cleanup parameter rootY

	// cleanup parameter timestamp
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1begin_1resize_1drag_1for_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _edge,
	jlong _device,
	jint _button,
	jint _rootX,
	jint _rootY,
	jint _timestamp
)
{
	GdkWindow* self;
	GdkWindowEdge edge;
	GdkDevice* device;
	gint button;
	gint rootX;
	gint rootY;
	guint32 timestamp;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter edge
	edge = (GdkWindowEdge) _edge;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter button
	button = (gint) _button;

	// convert parameter rootX
	rootX = (gint) _rootX;

	// convert parameter rootY
	rootY = (gint) _rootY;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gdk_window_begin_resize_drag_for_device(self, edge, device, button, rootX, rootY, timestamp);

	// cleanup parameter self

	// cleanup parameter edge

	// cleanup parameter device

	// cleanup parameter button

	// cleanup parameter rootX

	// cleanup parameter rootY

	// cleanup parameter timestamp
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1configure_1finished
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_configure_finished(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1coords_1from_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _parentX,
	jdouble _parentY,
	jdoubleArray _x,
	jdoubleArray _y
)
{
	GdkWindow* self;
	gdouble parentX;
	gdouble parentY;
	gdouble* x;
	gdouble* y;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter parentX
	parentX = (gdouble) _parentX;

	// convert parameter parentY
	parentY = (gdouble) _parentY;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gdouble*) (*env)->GetDoubleArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gdouble*) (*env)->GetDoubleArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_coords_from_parent(self, parentX, parentY, x, y);

	// cleanup parameter self

	// cleanup parameter parentX

	// cleanup parameter parentY

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _x, (jdouble*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _y, (jdouble*)y, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1coords_1to_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y,
	jdoubleArray _parentX,
	jdoubleArray _parentY
)
{
	GdkWindow* self;
	gdouble x;
	gdouble y;
	gdouble* parentX;
	gdouble* parentY;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	x = (gdouble) _x;

	// convert parameter y
	y = (gdouble) _y;

	// convert parameter parentX
	if (_parentX == NULL) {
		parentX = NULL;
	} else {
		parentX = (gdouble*) (*env)->GetDoubleArrayElements(env, _parentX, NULL);
		if (parentX == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter parentY
	if (_parentY == NULL) {
		parentY = NULL;
	} else {
		parentY = (gdouble*) (*env)->GetDoubleArrayElements(env, _parentY, NULL);
		if (parentY == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_coords_to_parent(self, x, y, parentX, parentY);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter parentX
	if (parentX != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _parentX, (jdouble*)parentX, 0);
	}

	// cleanup parameter parentY
	if (parentY != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _parentY, (jdouble*)parentY, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1create_1similar_1image_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _format,
	jint _width,
	jint _height,
	jint _scale
)
{
	cairo_surface_t* result;
	jlong _result;
	GdkWindow* self;
	cairo_format_t format;
	int width;
	int height;
	int scale;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter format
	format = (cairo_format_t) _format;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// convert parameter scale
	scale = (int) _scale;

	// call function
	result = gdk_window_create_similar_image_surface(self, format, width, height, scale);

	// cleanup parameter self

	// cleanup parameter format

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter scale

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1create_1similar_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _content,
	jint _width,
	jint _height
)
{
	cairo_surface_t* result;
	jlong _result;
	GdkWindow* self;
	cairo_content_t content;
	int width;
	int height;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter content
	content = (cairo_content_t) _content;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	result = gdk_window_create_similar_surface(self, content, width, height);

	// cleanup parameter self

	// cleanup parameter content

	// cleanup parameter width

	// cleanup parameter height

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1deiconify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_deiconify(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_destroy(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1enable_1synchronized_1configure
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_enable_synchronized_configure(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1end_1paint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_end_paint(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1ensure_1native
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_ensure_native(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1flush
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_flush(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _timestamp
)
{
	GdkWindow* self;
	guint32 timestamp;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gdk_window_focus(self, timestamp);

	// cleanup parameter self

	// cleanup parameter timestamp
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1freeze_1toplevel_1updates_1libgtk_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_freeze_toplevel_updates_libgtk_only(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1freeze_1updates
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_freeze_updates(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1fullscreen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_fullscreen(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1fullscreen_1on_1monitor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitor
)
{
	GdkWindow* self;
	gint monitor;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter monitor
	monitor = (gint) _monitor;

	// call function
	gdk_window_fullscreen_on_monitor(self, monitor);

	// cleanup parameter self

	// cleanup parameter monitor
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1geometry_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_geometry_changed(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1accept_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_accept_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1background_1pattern
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_pattern_t* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_background_pattern(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_children(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1composited
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_composited(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkCursor* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_cursor(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1device_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GdkCursor* result;
	jlong _result;
	GdkWindow* self;
	GdkDevice* device;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	result = gdk_window_get_device_cursor(self, device);

	// cleanup parameter self

	// cleanup parameter device

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1device_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GdkEventMask result;
	jint _result;
	GdkWindow* self;
	GdkDevice* device;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	result = gdk_window_get_device_events(self, device);

	// cleanup parameter self

	// cleanup parameter device

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1device_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jintArray _x,
	jintArray _y,
	jintArray _mask
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;
	GdkDevice* device;
	gint* x;
	gint* y;
	GdkModifierType* mask;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter mask
	if (_mask == NULL) {
		mask = NULL;
	} else {
		mask = (GdkModifierType*) (*env)->GetIntArrayElements(env, _mask, NULL);
		if (mask == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_window_get_device_position(self, device, x, y, mask);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// cleanup parameter mask
	if (mask != NULL) {
		(*env)->ReleaseIntArrayElements(env, _mask, (jint*)mask, 0);
	}

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1device_1position_1double
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jdoubleArray _x,
	jdoubleArray _y,
	jintArray _mask
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;
	GdkDevice* device;
	gdouble* x;
	gdouble* y;
	GdkModifierType* mask;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gdouble*) (*env)->GetDoubleArrayElements(env, _x, NULL);
		if (x == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gdouble*) (*env)->GetDoubleArrayElements(env, _y, NULL);
		if (y == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter mask
	if (_mask == NULL) {
		mask = NULL;
	} else {
		mask = (GdkModifierType*) (*env)->GetIntArrayElements(env, _mask, NULL);
		if (mask == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_window_get_device_position_double(self, device, x, y, mask);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _x, (jdouble*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _y, (jdouble*)y, 0);
	}

	// cleanup parameter mask
	if (mask != NULL) {
		(*env)->ReleaseIntArrayElements(env, _mask, (jint*)mask, 0);
	}

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_display(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1drag_1protocol
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _target
)
{
	GdkDragProtocol result;
	jint _result;
	GdkWindow* self;
	GdkWindow** target;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter target
	if (_target == NULL) {
		target = NULL;
	} else {
		target = (GdkWindow**) bindings_java_convert_jarray_to_gpointer(env, _target);
		if (target == NULL) {
			return 0; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_window_get_drag_protocol(self, target);

	// cleanup parameter self

	// cleanup parameter target
	if (target != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)target, _target);
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1effective_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_effective_parent(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1effective_1toplevel
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_effective_toplevel(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1event_1compression
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_event_compression(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEventMask result;
	jint _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_events(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1focus_1on_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_focus_on_map(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1frame_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rect
)
{
	GdkWindow* self;
	GdkRectangle* rect;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter rect
	rect = (GdkRectangle*) _rect;

	// call function
	gdk_window_get_frame_extents(self, rect);

	// cleanup parameter self

	// cleanup parameter rect
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1geometry
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y,
	jintArray _width,
	jintArray _height
)
{
	GdkWindow* self;
	gint* x;
	gint* y;
	gint* width;
	gint* height;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (gint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_get_geometry(self, x, y, width, height);

	// cleanup parameter self

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_group(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1modal_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_modal_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1origin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y
)
{
	gint result;
	jint _result;
	GdkWindow* self;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return  0; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return  0; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_window_get_origin(self, x, y);

	// cleanup parameter self

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_parent(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1pass_1through
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_pass_through(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1pointer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y,
	jintArray _mask
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;
	gint* x;
	gint* y;
	GdkModifierType* mask;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter mask
	if (_mask == NULL) {
		mask = NULL;
	} else {
		mask = (GdkModifierType*) (*env)->GetIntArrayElements(env, _mask, NULL);
		if (mask == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_window_get_pointer(self, x, y, mask);

	// cleanup parameter self

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// cleanup parameter mask
	if (mask != NULL) {
		(*env)->ReleaseIntArrayElements(env, _mask, (jint*)mask, 0);
	}

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y
)
{
	GdkWindow* self;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_get_position(self, x, y);

	// cleanup parameter self

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1root_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jintArray _rootX,
	jintArray _rootY
)
{
	GdkWindow* self;
	gint x;
	gint y;
	gint* rootX;
	gint* rootY;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter rootX
	if (_rootX == NULL) {
		rootX = NULL;
	} else {
		rootX = (gint*) (*env)->GetIntArrayElements(env, _rootX, NULL);
		if (rootX == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter rootY
	if (_rootY == NULL) {
		rootY = NULL;
	} else {
		rootY = (gint*) (*env)->GetIntArrayElements(env, _rootY, NULL);
		if (rootY == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_get_root_coords(self, x, y, rootX, rootY);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter rootX
	if (rootX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _rootX, (jint*)rootX, 0);
	}

	// cleanup parameter rootY
	if (rootY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _rootY, (jint*)rootY, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1root_1origin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y
)
{
	GdkWindow* self;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_get_root_origin(self, x, y);

	// cleanup parameter self

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1scale_1factor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_scale_factor(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_screen(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1source_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _source
)
{
	GdkEventMask result;
	jint _result;
	GdkWindow* self;
	GdkInputSource source;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter source
	source = (GdkInputSource) _source;

	// call function
	result = gdk_window_get_source_events(self, source);

	// cleanup parameter self

	// cleanup parameter source

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindowState result;
	jint _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_state(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1support_1multidevice
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_support_multidevice(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1toplevel
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_toplevel(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1type_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindowTypeHint result;
	jint _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_type_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1visual
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkVisual* result;
	jlong _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_visual(self);

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1get_1window_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindowType result;
	jint _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_get_window_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1has_1native
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_has_native(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1hide
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_hide(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1iconify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_iconify(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1invalidate_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rect,
	jboolean _invalidateChildren
)
{
	GdkWindow* self;
	const GdkRectangle* rect;
	gboolean invalidateChildren;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter rect
	rect = (const GdkRectangle*) _rect;

	// convert parameter invalidateChildren
	invalidateChildren = (gboolean) _invalidateChildren;

	// call function
	gdk_window_invalidate_rect(self, rect, invalidateChildren);

	// cleanup parameter self

	// cleanup parameter rect

	// cleanup parameter invalidateChildren
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1is_1destroyed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_is_destroyed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1is_1input_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_is_input_only(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1is_1shaped
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_is_shaped(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1is_1viewable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_is_viewable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1is_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_is_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1lower
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_lower(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1mark_1paint_1from_1clip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cr
)
{
	GdkWindow* self;
	cairo_t* cr;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// call function
	gdk_window_mark_paint_from_clip(self, cr);

	// cleanup parameter self

	// cleanup parameter cr
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1maximize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_maximize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1merge_1child_1input_1shapes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_merge_child_input_shapes(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1merge_1child_1shapes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_merge_child_shapes(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1move
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	GdkWindow* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	gdk_window_move(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1move_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _width,
	jint _height
)
{
	GdkWindow* self;
	gint x;
	gint y;
	gint width;
	gint height;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gdk_window_move_resize(self, x, y, width, height);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1peek_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	result = gdk_window_peek_children(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1process_1updates
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _updateChildren
)
{
	GdkWindow* self;
	gboolean updateChildren;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter updateChildren
	updateChildren = (gboolean) _updateChildren;

	// call function
	gdk_window_process_updates(self, updateChildren);

	// cleanup parameter self

	// cleanup parameter updateChildren
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1raise
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_raise(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1register_1dnd
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_register_dnd(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1reparent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _newParent,
	jint _x,
	jint _y
)
{
	GdkWindow* self;
	GdkWindow* newParent;
	gint x;
	gint y;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter newParent
	newParent = (GdkWindow*) _newParent;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	gdk_window_reparent(self, newParent, x, y);

	// cleanup parameter self

	// cleanup parameter newParent

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GdkWindow* self;
	gint width;
	gint height;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gdk_window_resize(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1restack
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _sibling,
	jboolean _above
)
{
	GdkWindow* self;
	GdkWindow* sibling;
	gboolean above;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter sibling
	sibling = (GdkWindow*) _sibling;

	// convert parameter above
	above = (gboolean) _above;

	// call function
	gdk_window_restack(self, sibling, above);

	// cleanup parameter self

	// cleanup parameter sibling

	// cleanup parameter above
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1scroll
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _dx,
	jint _dy
)
{
	GdkWindow* self;
	gint dx;
	gint dy;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter dx
	dx = (gint) _dx;

	// convert parameter dy
	dy = (gint) _dy;

	// call function
	gdk_window_scroll(self, dx, dy);

	// cleanup parameter self

	// cleanup parameter dx

	// cleanup parameter dy
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1accept_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _acceptFocus
)
{
	GdkWindow* self;
	gboolean acceptFocus;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter acceptFocus
	acceptFocus = (gboolean) _acceptFocus;

	// call function
	gdk_window_set_accept_focus(self, acceptFocus);

	// cleanup parameter self

	// cleanup parameter acceptFocus
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1background_1pattern
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pattern
)
{
	GdkWindow* self;
	cairo_pattern_t* pattern;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter pattern
	pattern = (cairo_pattern_t*) _pattern;

	// call function
	gdk_window_set_background_pattern(self, pattern);

	// cleanup parameter self

	// cleanup parameter pattern
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1background_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rgba
)
{
	GdkWindow* self;
	const GdkRGBA* rgba;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter rgba
	rgba = (const GdkRGBA*) _rgba;

	// call function
	gdk_window_set_background_rgba(self, rgba);

	// cleanup parameter self

	// cleanup parameter rgba
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1child_1input_1shapes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_set_child_input_shapes(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1child_1shapes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_set_child_shapes(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1composited
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _composited
)
{
	GdkWindow* self;
	gboolean composited;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter composited
	composited = (gboolean) _composited;

	// call function
	gdk_window_set_composited(self, composited);

	// cleanup parameter self

	// cleanup parameter composited
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cursor
)
{
	GdkWindow* self;
	GdkCursor* cursor;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter cursor
	cursor = (GdkCursor*) _cursor;

	// call function
	gdk_window_set_cursor(self, cursor);

	// cleanup parameter self

	// cleanup parameter cursor
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1device_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jlong _cursor
)
{
	GdkWindow* self;
	GdkDevice* device;
	GdkCursor* cursor;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter cursor
	cursor = (GdkCursor*) _cursor;

	// call function
	gdk_window_set_device_cursor(self, device, cursor);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter cursor
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1device_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jint _eventMask
)
{
	GdkWindow* self;
	GdkDevice* device;
	GdkEventMask eventMask;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter eventMask
	eventMask = (GdkEventMask) _eventMask;

	// call function
	gdk_window_set_device_events(self, device, eventMask);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter eventMask
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1event_1compression
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _eventCompression
)
{
	GdkWindow* self;
	gboolean eventCompression;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter eventCompression
	eventCompression = (gboolean) _eventCompression;

	// call function
	gdk_window_set_event_compression(self, eventCompression);

	// cleanup parameter self

	// cleanup parameter eventCompression
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _eventMask
)
{
	GdkWindow* self;
	GdkEventMask eventMask;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter eventMask
	eventMask = (GdkEventMask) _eventMask;

	// call function
	gdk_window_set_events(self, eventMask);

	// cleanup parameter self

	// cleanup parameter eventMask
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1focus_1on_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _focusOnMap
)
{
	GdkWindow* self;
	gboolean focusOnMap;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter focusOnMap
	focusOnMap = (gboolean) _focusOnMap;

	// call function
	gdk_window_set_focus_on_map(self, focusOnMap);

	// cleanup parameter self

	// cleanup parameter focusOnMap
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1geometry_1hints
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _geometry,
	jint _geomMask
)
{
	GdkWindow* self;
	const GdkGeometry* geometry;
	GdkWindowHints geomMask;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter geometry
	geometry = (const GdkGeometry*) _geometry;

	// convert parameter geomMask
	geomMask = (GdkWindowHints) _geomMask;

	// call function
	gdk_window_set_geometry_hints(self, geometry, geomMask);

	// cleanup parameter self

	// cleanup parameter geometry

	// cleanup parameter geomMask
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _leader
)
{
	GdkWindow* self;
	GdkWindow* leader;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter leader
	leader = (GdkWindow*) _leader;

	// call function
	gdk_window_set_group(self, leader);

	// cleanup parameter self

	// cleanup parameter leader
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GdkWindow* self;
	const gchar* name;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter name
	if (_name == NULL) {
		name = NULL;
	} else {
		name = (const gchar*) bindings_java_getString(env, _name);
		if (name == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_set_icon_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	if (name != NULL) {
		bindings_java_releaseString(name);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1keep_1above
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GdkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gdk_window_set_keep_above(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1keep_1below
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GdkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gdk_window_set_keep_below(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1modal_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _modal
)
{
	GdkWindow* self;
	gboolean modal;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter modal
	modal = (gboolean) _modal;

	// call function
	gdk_window_set_modal_hint(self, modal);

	// cleanup parameter self

	// cleanup parameter modal
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1opacity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _opacity
)
{
	GdkWindow* self;
	gdouble opacity;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter opacity
	opacity = (gdouble) _opacity;

	// call function
	gdk_window_set_opacity(self, opacity);

	// cleanup parameter self

	// cleanup parameter opacity
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1override_1redirect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _overrideRedirect
)
{
	GdkWindow* self;
	gboolean overrideRedirect;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter overrideRedirect
	overrideRedirect = (gboolean) _overrideRedirect;

	// call function
	gdk_window_set_override_redirect(self, overrideRedirect);

	// cleanup parameter self

	// cleanup parameter overrideRedirect
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1pass_1through
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _passThrough
)
{
	GdkWindow* self;
	gboolean passThrough;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter passThrough
	passThrough = (gboolean) _passThrough;

	// call function
	gdk_window_set_pass_through(self, passThrough);

	// cleanup parameter self

	// cleanup parameter passThrough
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1role
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _role
)
{
	GdkWindow* self;
	const gchar* role;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter role
	role = (const gchar*) bindings_java_getString(env, _role);
	if (role == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gdk_window_set_role(self, role);

	// cleanup parameter self

	// cleanup parameter role
	bindings_java_releaseString(role);
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1shadow_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _left,
	jint _right,
	jint _top,
	jint _bottom
)
{
	GdkWindow* self;
	gint left;
	gint right;
	gint top;
	gint bottom;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter left
	left = (gint) _left;

	// convert parameter right
	right = (gint) _right;

	// convert parameter top
	top = (gint) _top;

	// convert parameter bottom
	bottom = (gint) _bottom;

	// call function
	gdk_window_set_shadow_width(self, left, right, top, bottom);

	// cleanup parameter self

	// cleanup parameter left

	// cleanup parameter right

	// cleanup parameter top

	// cleanup parameter bottom
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1skip_1pager_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _skipsPager
)
{
	GdkWindow* self;
	gboolean skipsPager;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter skipsPager
	skipsPager = (gboolean) _skipsPager;

	// call function
	gdk_window_set_skip_pager_hint(self, skipsPager);

	// cleanup parameter self

	// cleanup parameter skipsPager
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1skip_1taskbar_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _skipsTaskbar
)
{
	GdkWindow* self;
	gboolean skipsTaskbar;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter skipsTaskbar
	skipsTaskbar = (gboolean) _skipsTaskbar;

	// call function
	gdk_window_set_skip_taskbar_hint(self, skipsTaskbar);

	// cleanup parameter self

	// cleanup parameter skipsTaskbar
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1source_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _source,
	jint _eventMask
)
{
	GdkWindow* self;
	GdkInputSource source;
	GdkEventMask eventMask;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter source
	source = (GdkInputSource) _source;

	// convert parameter eventMask
	eventMask = (GdkEventMask) _eventMask;

	// call function
	gdk_window_set_source_events(self, source, eventMask);

	// cleanup parameter self

	// cleanup parameter source

	// cleanup parameter eventMask
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1startup_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _startupId
)
{
	GdkWindow* self;
	const gchar* startupId;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter startupId
	startupId = (const gchar*) bindings_java_getString(env, _startupId);
	if (startupId == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gdk_window_set_startup_id(self, startupId);

	// cleanup parameter self

	// cleanup parameter startupId
	bindings_java_releaseString(startupId);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1static_1gravities
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useStatic
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;
	gboolean useStatic;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter useStatic
	useStatic = (gboolean) _useStatic;

	// call function
	result = gdk_window_set_static_gravities(self, useStatic);

	// cleanup parameter self

	// cleanup parameter useStatic

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1support_1multidevice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _supportMultidevice
)
{
	GdkWindow* self;
	gboolean supportMultidevice;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter supportMultidevice
	supportMultidevice = (gboolean) _supportMultidevice;

	// call function
	gdk_window_set_support_multidevice(self, supportMultidevice);

	// cleanup parameter self

	// cleanup parameter supportMultidevice
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GdkWindow* self;
	const gchar* title;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gdk_window_set_title(self, title);

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1transient_1for
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parent
)
{
	GdkWindow* self;
	GdkWindow* parent;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter parent
	parent = (GdkWindow*) _parent;

	// call function
	gdk_window_set_transient_for(self, parent);

	// cleanup parameter self

	// cleanup parameter parent
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1type_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hint
)
{
	GdkWindow* self;
	GdkWindowTypeHint hint;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter hint
	hint = (GdkWindowTypeHint) _hint;

	// call function
	gdk_window_set_type_hint(self, hint);

	// cleanup parameter self

	// cleanup parameter hint
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1urgency_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _urgent
)
{
	GdkWindow* self;
	gboolean urgent;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter urgent
	urgent = (gboolean) _urgent;

	// call function
	gdk_window_set_urgency_hint(self, urgent);

	// cleanup parameter self

	// cleanup parameter urgent
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1show
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_show(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1show_1unraised
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_show_unraised(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1show_1window_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GdkWindow* self;
	GdkEvent* event;

	// convert parameter self
	self = (GdkWindow*) _self;

	// convert parameter event
	event = (GdkEvent*) _event;

	// call function
	result = gdk_window_show_window_menu(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1stick
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_stick(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1thaw_1toplevel_1updates_1libgtk_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_thaw_toplevel_updates_libgtk_only(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1thaw_1updates
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_thaw_updates(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1unfullscreen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_unfullscreen(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1unmaximize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_unmaximize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1unstick
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_unstick(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1withdraw
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* self;

	// convert parameter self
	self = (GdkWindow*) _self;

	// call function
	gdk_window_withdraw(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1at_1pointer
(
	JNIEnv* env,
	jclass cls,
	jintArray _winX,
	jintArray _winY
)
{
	GdkWindow* result;
	jlong _result;
	gint* winX;
	gint* winY;

	// convert parameter winX
	if (_winX == NULL) {
		winX = NULL;
	} else {
		winX = (gint*) (*env)->GetIntArrayElements(env, _winX, NULL);
		if (winX == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter winY
	if (_winY == NULL) {
		winY = NULL;
	} else {
		winY = (gint*) (*env)->GetIntArrayElements(env, _winY, NULL);
		if (winY == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_window_at_pointer(winX, winY);

	// cleanup parameter winX
	if (winX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _winX, (jint*)winX, 0);
	}

	// cleanup parameter winY
	if (winY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _winY, (jint*)winY, 0);
	}

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
Java_org_gnome_gdk_GdkWindow_gdk_1window_1constrain_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _geometry,
	jint _flags,
	jint _width,
	jint _height,
	jintArray _newWidth,
	jintArray _newHeight
)
{
	GdkGeometry* geometry;
	GdkWindowHints flags;
	gint width;
	gint height;
	gint* newWidth;
	gint* newHeight;

	// convert parameter geometry
	geometry = (GdkGeometry*) _geometry;

	// convert parameter flags
	flags = (GdkWindowHints) _flags;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// convert parameter newWidth
	if (_newWidth == NULL) {
		newWidth = NULL;
	} else {
		newWidth = (gint*) (*env)->GetIntArrayElements(env, _newWidth, NULL);
		if (newWidth == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter newHeight
	if (_newHeight == NULL) {
		newHeight = NULL;
	} else {
		newHeight = (gint*) (*env)->GetIntArrayElements(env, _newHeight, NULL);
		if (newHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_window_constrain_size(geometry, flags, width, height, newWidth, newHeight);

	// cleanup parameter geometry

	// cleanup parameter flags

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter newWidth
	if (newWidth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _newWidth, (jint*)newWidth, 0);
	}

	// cleanup parameter newHeight
	if (newHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _newHeight, (jint*)newHeight, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1process_1all_1updates
(
	JNIEnv* env,
	jclass cls
)
{

	// call function
	gdk_window_process_all_updates();
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindow_gdk_1window_1set_1debug_1updates
(
	JNIEnv* env,
	jclass cls,
	jboolean _setting
)
{
	gboolean setting;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gdk_window_set_debug_updates(setting);

	// cleanup parameter setting
}
