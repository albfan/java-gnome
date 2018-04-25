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
#include "org_gnome_gtk_GtkScaleButton.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1new
(
	JNIEnv* env,
	jclass cls,
	jint _size,
	jdouble _min,
	jdouble _max,
	jdouble _step,
	jobjectArray _icons
)
{
	GtkWidget* result;
	jlong _result;
	GtkIconSize size;
	gdouble min;
	gdouble max;
	gdouble step;
	gchar** icons;

	// convert parameter size
	size = (GtkIconSize) _size;

	// convert parameter min
	min = (gdouble) _min;

	// convert parameter max
	max = (gdouble) _max;

	// convert parameter step
	step = (gdouble) _step;

	// convert parameter icons
	if (_icons == NULL) {
		icons = NULL;
	} else {
		icons = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _icons);
		if (icons == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_scale_button_new(size, min, max, step, icons);

	// cleanup parameter size

	// cleanup parameter min

	// cleanup parameter max

	// cleanup parameter step

	// cleanup parameter icons
	if (icons != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)icons, _icons);
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
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1get_1adjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkScaleButton* self;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// call function
	result = gtk_scale_button_get_adjustment(self);

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
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1get_1minus_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkScaleButton* self;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// call function
	result = gtk_scale_button_get_minus_button(self);

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
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1get_1plus_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkScaleButton* self;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// call function
	result = gtk_scale_button_get_plus_button(self);

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
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1get_1popup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkScaleButton* self;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// call function
	result = gtk_scale_button_get_popup(self);

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

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1get_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkScaleButton* self;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// call function
	result = gtk_scale_button_get_value(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1set_1adjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkScaleButton* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_scale_button_set_adjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1set_1icons
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _icons
)
{
	GtkScaleButton* self;
	gchar** icons;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// convert parameter icons
	icons = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _icons);
	if (icons == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_scale_button_set_icons(self, icons);

	// cleanup parameter self

	// cleanup parameter icons
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)icons, _icons);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScaleButton_gtk_1scale_1button_1set_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _value
)
{
	GtkScaleButton* self;
	gdouble value;

	// convert parameter self
	self = (GtkScaleButton*) _self;

	// convert parameter value
	value = (gdouble) _value;

	// call function
	gtk_scale_button_set_value(self, value);

	// cleanup parameter self

	// cleanup parameter value
}
