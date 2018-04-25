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
#include "org_gnome_gtk_GtkRange.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1adjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_adjustment(self);

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
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1fill_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_fill_level(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1flippable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_flippable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1inverted
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_inverted(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1lower_1stepper_1sensitivity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSensitivityType result;
	jint _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_lower_stepper_sensitivity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1min_1slider_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_min_slider_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1range_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rangeRect
)
{
	GtkRange* self;
	GdkRectangle* rangeRect;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter rangeRect
	rangeRect = (GdkRectangle*) _rangeRect;

	// call function
	gtk_range_get_range_rect(self, rangeRect);

	// cleanup parameter self

	// cleanup parameter rangeRect
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1restrict_1to_1fill_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_restrict_to_fill_level(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1round_1digits
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_round_digits(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1show_1fill_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_show_fill_level(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1slider_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _sliderStart,
	jintArray _sliderEnd
)
{
	GtkRange* self;
	gint* sliderStart;
	gint* sliderEnd;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter sliderStart
	if (_sliderStart == NULL) {
		sliderStart = NULL;
	} else {
		sliderStart = (gint*) (*env)->GetIntArrayElements(env, _sliderStart, NULL);
		if (sliderStart == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter sliderEnd
	if (_sliderEnd == NULL) {
		sliderEnd = NULL;
	} else {
		sliderEnd = (gint*) (*env)->GetIntArrayElements(env, _sliderEnd, NULL);
		if (sliderEnd == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_range_get_slider_range(self, sliderStart, sliderEnd);

	// cleanup parameter self

	// cleanup parameter sliderStart
	if (sliderStart != NULL) {
		(*env)->ReleaseIntArrayElements(env, _sliderStart, (jint*)sliderStart, 0);
	}

	// cleanup parameter sliderEnd
	if (sliderEnd != NULL) {
		(*env)->ReleaseIntArrayElements(env, _sliderEnd, (jint*)sliderEnd, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1slider_1size_1fixed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_slider_size_fixed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1upper_1stepper_1sensitivity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSensitivityType result;
	jint _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_upper_stepper_sensitivity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1get_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkRange* self;

	// convert parameter self
	self = (GtkRange*) _self;

	// call function
	result = gtk_range_get_value(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1adjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkRange* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_range_set_adjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1fill_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _fillLevel
)
{
	GtkRange* self;
	gdouble fillLevel;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter fillLevel
	fillLevel = (gdouble) _fillLevel;

	// call function
	gtk_range_set_fill_level(self, fillLevel);

	// cleanup parameter self

	// cleanup parameter fillLevel
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1flippable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _flippable
)
{
	GtkRange* self;
	gboolean flippable;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter flippable
	flippable = (gboolean) _flippable;

	// call function
	gtk_range_set_flippable(self, flippable);

	// cleanup parameter self

	// cleanup parameter flippable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1increments
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _step,
	jdouble _page
)
{
	GtkRange* self;
	gdouble step;
	gdouble page;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter step
	step = (gdouble) _step;

	// convert parameter page
	page = (gdouble) _page;

	// call function
	gtk_range_set_increments(self, step, page);

	// cleanup parameter self

	// cleanup parameter step

	// cleanup parameter page
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1inverted
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkRange* self;
	gboolean setting;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_range_set_inverted(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1lower_1stepper_1sensitivity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _sensitivity
)
{
	GtkRange* self;
	GtkSensitivityType sensitivity;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter sensitivity
	sensitivity = (GtkSensitivityType) _sensitivity;

	// call function
	gtk_range_set_lower_stepper_sensitivity(self, sensitivity);

	// cleanup parameter self

	// cleanup parameter sensitivity
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1min_1slider_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _minSize
)
{
	GtkRange* self;
	gint minSize;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter minSize
	minSize = (gint) _minSize;

	// call function
	gtk_range_set_min_slider_size(self, minSize);

	// cleanup parameter self

	// cleanup parameter minSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _min,
	jdouble _max
)
{
	GtkRange* self;
	gdouble min;
	gdouble max;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter min
	min = (gdouble) _min;

	// convert parameter max
	max = (gdouble) _max;

	// call function
	gtk_range_set_range(self, min, max);

	// cleanup parameter self

	// cleanup parameter min

	// cleanup parameter max
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1restrict_1to_1fill_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _restrictToFillLevel
)
{
	GtkRange* self;
	gboolean restrictToFillLevel;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter restrictToFillLevel
	restrictToFillLevel = (gboolean) _restrictToFillLevel;

	// call function
	gtk_range_set_restrict_to_fill_level(self, restrictToFillLevel);

	// cleanup parameter self

	// cleanup parameter restrictToFillLevel
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1round_1digits
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _roundDigits
)
{
	GtkRange* self;
	gint roundDigits;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter roundDigits
	roundDigits = (gint) _roundDigits;

	// call function
	gtk_range_set_round_digits(self, roundDigits);

	// cleanup parameter self

	// cleanup parameter roundDigits
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1show_1fill_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showFillLevel
)
{
	GtkRange* self;
	gboolean showFillLevel;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter showFillLevel
	showFillLevel = (gboolean) _showFillLevel;

	// call function
	gtk_range_set_show_fill_level(self, showFillLevel);

	// cleanup parameter self

	// cleanup parameter showFillLevel
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1slider_1size_1fixed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _sizeFixed
)
{
	GtkRange* self;
	gboolean sizeFixed;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter sizeFixed
	sizeFixed = (gboolean) _sizeFixed;

	// call function
	gtk_range_set_slider_size_fixed(self, sizeFixed);

	// cleanup parameter self

	// cleanup parameter sizeFixed
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1upper_1stepper_1sensitivity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _sensitivity
)
{
	GtkRange* self;
	GtkSensitivityType sensitivity;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter sensitivity
	sensitivity = (GtkSensitivityType) _sensitivity;

	// call function
	gtk_range_set_upper_stepper_sensitivity(self, sensitivity);

	// cleanup parameter self

	// cleanup parameter sensitivity
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRange_gtk_1range_1set_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _value
)
{
	GtkRange* self;
	gdouble value;

	// convert parameter self
	self = (GtkRange*) _self;

	// convert parameter value
	value = (gdouble) _value;

	// call function
	gtk_range_set_value(self, value);

	// cleanup parameter self

	// cleanup parameter value
}
