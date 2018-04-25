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
#include "org_gnome_gtk_GtkSpinButton.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _adjustment,
	jdouble _climbRate,
	jint _digits
)
{
	GtkWidget* result;
	jlong _result;
	GtkAdjustment* adjustment;
	gdouble climbRate;
	guint digits;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// convert parameter climbRate
	climbRate = (gdouble) _climbRate;

	// convert parameter digits
	digits = (guint) _digits;

	// call function
	result = gtk_spin_button_new(adjustment, climbRate, digits);

	// cleanup parameter adjustment

	// cleanup parameter climbRate

	// cleanup parameter digits

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
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1new_1with_1range
(
	JNIEnv* env,
	jclass cls,
	jdouble _min,
	jdouble _max,
	jdouble _step
)
{
	GtkWidget* result;
	jlong _result;
	gdouble min;
	gdouble max;
	gdouble step;

	// convert parameter min
	min = (gdouble) _min;

	// convert parameter max
	max = (gdouble) _max;

	// convert parameter step
	step = (gdouble) _step;

	// call function
	result = gtk_spin_button_new_with_range(min, max, step);

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
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1configure
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment,
	jdouble _climbRate,
	jint _digits
)
{
	GtkSpinButton* self;
	GtkAdjustment* adjustment;
	gdouble climbRate;
	guint digits;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// convert parameter climbRate
	climbRate = (gdouble) _climbRate;

	// convert parameter digits
	digits = (guint) _digits;

	// call function
	gtk_spin_button_configure(self, adjustment, climbRate, digits);

	// cleanup parameter self

	// cleanup parameter adjustment

	// cleanup parameter climbRate

	// cleanup parameter digits
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1adjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_adjustment(self);

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
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1digits
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_digits(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1increments
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _step,
	jdoubleArray _page
)
{
	GtkSpinButton* self;
	gdouble* step;
	gdouble* page;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter step
	if (_step == NULL) {
		step = NULL;
	} else {
		step = (gdouble*) (*env)->GetDoubleArrayElements(env, _step, NULL);
		if (step == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter page
	if (_page == NULL) {
		page = NULL;
	} else {
		page = (gdouble*) (*env)->GetDoubleArrayElements(env, _page, NULL);
		if (page == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_spin_button_get_increments(self, step, page);

	// cleanup parameter self

	// cleanup parameter step
	if (step != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _step, (jdouble*)step, 0);
	}

	// cleanup parameter page
	if (page != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _page, (jdouble*)page, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1numeric
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_numeric(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _min,
	jdoubleArray _max
)
{
	GtkSpinButton* self;
	gdouble* min;
	gdouble* max;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter min
	if (_min == NULL) {
		min = NULL;
	} else {
		min = (gdouble*) (*env)->GetDoubleArrayElements(env, _min, NULL);
		if (min == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter max
	if (_max == NULL) {
		max = NULL;
	} else {
		max = (gdouble*) (*env)->GetDoubleArrayElements(env, _max, NULL);
		if (max == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_spin_button_get_range(self, min, max);

	// cleanup parameter self

	// cleanup parameter min
	if (min != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _min, (jdouble*)min, 0);
	}

	// cleanup parameter max
	if (max != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _max, (jdouble*)max, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1snap_1to_1ticks
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_snap_to_ticks(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1update_1policy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSpinButtonUpdatePolicy result;
	jint _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_update_policy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_value(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1value_1as_1int
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_value_as_int(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1get_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	result = gtk_spin_button_get_wrap(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1adjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkSpinButton* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_spin_button_set_adjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1digits
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _digits
)
{
	GtkSpinButton* self;
	guint digits;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter digits
	digits = (guint) _digits;

	// call function
	gtk_spin_button_set_digits(self, digits);

	// cleanup parameter self

	// cleanup parameter digits
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1increments
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _step,
	jdouble _page
)
{
	GtkSpinButton* self;
	gdouble step;
	gdouble page;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter step
	step = (gdouble) _step;

	// convert parameter page
	page = (gdouble) _page;

	// call function
	gtk_spin_button_set_increments(self, step, page);

	// cleanup parameter self

	// cleanup parameter step

	// cleanup parameter page
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1numeric
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _numeric
)
{
	GtkSpinButton* self;
	gboolean numeric;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter numeric
	numeric = (gboolean) _numeric;

	// call function
	gtk_spin_button_set_numeric(self, numeric);

	// cleanup parameter self

	// cleanup parameter numeric
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _min,
	jdouble _max
)
{
	GtkSpinButton* self;
	gdouble min;
	gdouble max;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter min
	min = (gdouble) _min;

	// convert parameter max
	max = (gdouble) _max;

	// call function
	gtk_spin_button_set_range(self, min, max);

	// cleanup parameter self

	// cleanup parameter min

	// cleanup parameter max
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1snap_1to_1ticks
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _snapToTicks
)
{
	GtkSpinButton* self;
	gboolean snapToTicks;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter snapToTicks
	snapToTicks = (gboolean) _snapToTicks;

	// call function
	gtk_spin_button_set_snap_to_ticks(self, snapToTicks);

	// cleanup parameter self

	// cleanup parameter snapToTicks
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1update_1policy
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _policy
)
{
	GtkSpinButton* self;
	GtkSpinButtonUpdatePolicy policy;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter policy
	policy = (GtkSpinButtonUpdatePolicy) _policy;

	// call function
	gtk_spin_button_set_update_policy(self, policy);

	// cleanup parameter self

	// cleanup parameter policy
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _value
)
{
	GtkSpinButton* self;
	gdouble value;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter value
	value = (gdouble) _value;

	// call function
	gtk_spin_button_set_value(self, value);

	// cleanup parameter self

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1set_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _wrap
)
{
	GtkSpinButton* self;
	gboolean wrap;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter wrap
	wrap = (gboolean) _wrap;

	// call function
	gtk_spin_button_set_wrap(self, wrap);

	// cleanup parameter self

	// cleanup parameter wrap
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1spin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _direction,
	jdouble _increment
)
{
	GtkSpinButton* self;
	GtkSpinType direction;
	gdouble increment;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// convert parameter direction
	direction = (GtkSpinType) _direction;

	// convert parameter increment
	increment = (gdouble) _increment;

	// call function
	gtk_spin_button_spin(self, direction, increment);

	// cleanup parameter self

	// cleanup parameter direction

	// cleanup parameter increment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSpinButton_gtk_1spin_1button_1update
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSpinButton* self;

	// convert parameter self
	self = (GtkSpinButton*) _self;

	// call function
	gtk_spin_button_update(self);

	// cleanup parameter self
}
