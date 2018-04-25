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
#include "org_gnome_gtk_GtkScale.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1new
(
	JNIEnv* env,
	jclass cls,
	jint _orientation,
	jlong _adjustment
)
{
	GtkWidget* result;
	jlong _result;
	GtkOrientation orientation;
	GtkAdjustment* adjustment;

	// convert parameter orientation
	orientation = (GtkOrientation) _orientation;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	result = gtk_scale_new(orientation, adjustment);

	// cleanup parameter orientation

	// cleanup parameter adjustment

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
Java_org_gnome_gtk_GtkScale_gtk_1scale_1new_1with_1range
(
	JNIEnv* env,
	jclass cls,
	jint _orientation,
	jdouble _min,
	jdouble _max,
	jdouble _step
)
{
	GtkWidget* result;
	jlong _result;
	GtkOrientation orientation;
	gdouble min;
	gdouble max;
	gdouble step;

	// convert parameter orientation
	orientation = (GtkOrientation) _orientation;

	// convert parameter min
	min = (gdouble) _min;

	// convert parameter max
	max = (gdouble) _max;

	// convert parameter step
	step = (gdouble) _step;

	// call function
	result = gtk_scale_new_with_range(orientation, min, max, step);

	// cleanup parameter orientation

	// cleanup parameter min

	// cleanup parameter max

	// cleanup parameter step

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
Java_org_gnome_gtk_GtkScale_gtk_1scale_1add_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _value,
	jint _position,
	jstring _markup
)
{
	GtkScale* self;
	gdouble value;
	GtkPositionType position;
	const gchar* markup;

	// convert parameter self
	self = (GtkScale*) _self;

	// convert parameter value
	value = (gdouble) _value;

	// convert parameter position
	position = (GtkPositionType) _position;

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
	gtk_scale_add_mark(self, value, position, markup);

	// cleanup parameter self

	// cleanup parameter value

	// cleanup parameter position

	// cleanup parameter markup
	if (markup != NULL) {
		bindings_java_releaseString(markup);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1clear_1marks
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkScale* self;

	// convert parameter self
	self = (GtkScale*) _self;

	// call function
	gtk_scale_clear_marks(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1get_1digits
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkScale* self;

	// convert parameter self
	self = (GtkScale*) _self;

	// call function
	result = gtk_scale_get_digits(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1get_1draw_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkScale* self;

	// convert parameter self
	self = (GtkScale*) _self;

	// call function
	result = gtk_scale_get_draw_value(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1get_1has_1origin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkScale* self;

	// convert parameter self
	self = (GtkScale*) _self;

	// call function
	result = gtk_scale_get_has_origin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1get_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	GtkScale* self;

	// convert parameter self
	self = (GtkScale*) _self;

	// call function
	result = gtk_scale_get_layout(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1get_1layout_1offsets
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y
)
{
	GtkScale* self;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GtkScale*) _self;

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
	gtk_scale_get_layout_offsets(self, x, y);

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
Java_org_gnome_gtk_GtkScale_gtk_1scale_1get_1value_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPositionType result;
	jint _result;
	GtkScale* self;

	// convert parameter self
	self = (GtkScale*) _self;

	// call function
	result = gtk_scale_get_value_pos(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1set_1digits
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _digits
)
{
	GtkScale* self;
	gint digits;

	// convert parameter self
	self = (GtkScale*) _self;

	// convert parameter digits
	digits = (gint) _digits;

	// call function
	gtk_scale_set_digits(self, digits);

	// cleanup parameter self

	// cleanup parameter digits
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1set_1draw_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _drawValue
)
{
	GtkScale* self;
	gboolean drawValue;

	// convert parameter self
	self = (GtkScale*) _self;

	// convert parameter drawValue
	drawValue = (gboolean) _drawValue;

	// call function
	gtk_scale_set_draw_value(self, drawValue);

	// cleanup parameter self

	// cleanup parameter drawValue
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1set_1has_1origin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hasOrigin
)
{
	GtkScale* self;
	gboolean hasOrigin;

	// convert parameter self
	self = (GtkScale*) _self;

	// convert parameter hasOrigin
	hasOrigin = (gboolean) _hasOrigin;

	// call function
	gtk_scale_set_has_origin(self, hasOrigin);

	// cleanup parameter self

	// cleanup parameter hasOrigin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScale_gtk_1scale_1set_1value_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pos
)
{
	GtkScale* self;
	GtkPositionType pos;

	// convert parameter self
	self = (GtkScale*) _self;

	// convert parameter pos
	pos = (GtkPositionType) _pos;

	// call function
	gtk_scale_set_value_pos(self, pos);

	// cleanup parameter self

	// cleanup parameter pos
}
