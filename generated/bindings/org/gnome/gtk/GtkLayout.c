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
#include "org_gnome_gtk_GtkLayout.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _hadjustment,
	jlong _vadjustment
)
{
	GtkWidget* result;
	jlong _result;
	GtkAdjustment* hadjustment;
	GtkAdjustment* vadjustment;

	// convert parameter hadjustment
	hadjustment = (GtkAdjustment*) _hadjustment;

	// convert parameter vadjustment
	vadjustment = (GtkAdjustment*) _vadjustment;

	// call function
	result = gtk_layout_new(hadjustment, vadjustment);

	// cleanup parameter hadjustment

	// cleanup parameter vadjustment

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
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1get_1bin_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkLayout* self;

	// convert parameter self
	self = (GtkLayout*) _self;

	// call function
	result = gtk_layout_get_bin_window(self);

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
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1get_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkLayout* self;

	// convert parameter self
	self = (GtkLayout*) _self;

	// call function
	result = gtk_layout_get_hadjustment(self);

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
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	GtkLayout* self;
	guint* width;
	guint* height;

	// convert parameter self
	self = (GtkLayout*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (guint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (guint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_layout_get_size(self, width, height);

	// cleanup parameter self

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
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1get_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkLayout* self;

	// convert parameter self
	self = (GtkLayout*) _self;

	// call function
	result = gtk_layout_get_vadjustment(self);

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
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1move
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _childWidget,
	jint _x,
	jint _y
)
{
	GtkLayout* self;
	GtkWidget* childWidget;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkLayout*) _self;

	// convert parameter childWidget
	childWidget = (GtkWidget*) _childWidget;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	gtk_layout_move(self, childWidget, x, y);

	// cleanup parameter self

	// cleanup parameter childWidget

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1put
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _childWidget,
	jint _x,
	jint _y
)
{
	GtkLayout* self;
	GtkWidget* childWidget;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkLayout*) _self;

	// convert parameter childWidget
	childWidget = (GtkWidget*) _childWidget;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	gtk_layout_put(self, childWidget, x, y);

	// cleanup parameter self

	// cleanup parameter childWidget

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1set_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkLayout* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkLayout*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_layout_set_hadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1set_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GtkLayout* self;
	guint width;
	guint height;

	// convert parameter self
	self = (GtkLayout*) _self;

	// convert parameter width
	width = (guint) _width;

	// convert parameter height
	height = (guint) _height;

	// call function
	gtk_layout_set_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLayout_gtk_1layout_1set_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkLayout* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkLayout*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_layout_set_vadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}
