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
#include "org_gnome_gdk_GdkCursor.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1new
(
	JNIEnv* env,
	jclass cls,
	jint _cursorType
)
{
	GdkCursor* result;
	jlong _result;
	GdkCursorType cursorType;

	// convert parameter cursorType
	cursorType = (GdkCursorType) _cursorType;

	// call function
	result = gdk_cursor_new(cursorType);

	// cleanup parameter cursorType

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
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1new_1for_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _display,
	jint _cursorType
)
{
	GdkCursor* result;
	jlong _result;
	GdkDisplay* display;
	GdkCursorType cursorType;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// convert parameter cursorType
	cursorType = (GdkCursorType) _cursorType;

	// call function
	result = gdk_cursor_new_for_display(display, cursorType);

	// cleanup parameter display

	// cleanup parameter cursorType

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
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1new_1from_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _display,
	jstring _name
)
{
	GdkCursor* result;
	jlong _result;
	GdkDisplay* display;
	const gchar* name;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_cursor_new_from_name(display, name);

	// cleanup parameter display

	// cleanup parameter name
	bindings_java_releaseString(name);

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
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1new_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _display,
	jlong _pixbuf,
	jint _x,
	jint _y
)
{
	GdkCursor* result;
	jlong _result;
	GdkDisplay* display;
	GdkPixbuf* pixbuf;
	gint x;
	gint y;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gdk_cursor_new_from_pixbuf(display, pixbuf, x, y);

	// cleanup parameter display

	// cleanup parameter pixbuf

	// cleanup parameter x

	// cleanup parameter y

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
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1new_1from_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _display,
	jlong _surface,
	jdouble _x,
	jdouble _y
)
{
	GdkCursor* result;
	jlong _result;
	GdkDisplay* display;
	cairo_surface_t* surface;
	gdouble x;
	gdouble y;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// convert parameter surface
	surface = (cairo_surface_t*) _surface;

	// convert parameter x
	x = (gdouble) _x;

	// convert parameter y
	y = (gdouble) _y;

	// call function
	result = gdk_cursor_new_from_surface(display, surface, x, y);

	// cleanup parameter display

	// cleanup parameter surface

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1get_1cursor_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkCursorType result;
	jint _result;
	GdkCursor* self;

	// convert parameter self
	self = (GdkCursor*) _self;

	// call function
	result = gdk_cursor_get_cursor_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1get_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GdkCursor* self;

	// convert parameter self
	self = (GdkCursor*) _self;

	// call function
	result = gdk_cursor_get_display(self);

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
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1get_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkCursor* self;

	// convert parameter self
	self = (GdkCursor*) _self;

	// call function
	result = gdk_cursor_get_image(self);

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
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1get_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _xHot,
	jdoubleArray _yHot
)
{
	cairo_surface_t* result;
	jlong _result;
	GdkCursor* self;
	gdouble* xHot;
	gdouble* yHot;

	// convert parameter self
	self = (GdkCursor*) _self;

	// convert parameter xHot
	if (_xHot == NULL) {
		xHot = NULL;
	} else {
		xHot = (gdouble*) (*env)->GetDoubleArrayElements(env, _xHot, NULL);
		if (xHot == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter yHot
	if (_yHot == NULL) {
		yHot = NULL;
	} else {
		yHot = (gdouble*) (*env)->GetDoubleArrayElements(env, _yHot, NULL);
		if (yHot == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_cursor_get_surface(self, xHot, yHot);

	// cleanup parameter self

	// cleanup parameter xHot
	if (xHot != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _xHot, (jdouble*)xHot, 0);
	}

	// cleanup parameter yHot
	if (yHot != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _yHot, (jdouble*)yHot, 0);
	}

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkCursor* result;
	jlong _result;
	GdkCursor* self;

	// convert parameter self
	self = (GdkCursor*) _self;

	// call function
	result = gdk_cursor_ref(self);

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
Java_org_gnome_gdk_GdkCursor_gdk_1cursor_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkCursor* self;

	// convert parameter self
	self = (GdkCursor*) _self;

	// call function
	gdk_cursor_unref(self);

	// cleanup parameter self
}
