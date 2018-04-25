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
#include "org_gnome_gtk_GtkAdjustment.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1new
(
	JNIEnv* env,
	jclass cls,
	jdouble _value,
	jdouble _lower,
	jdouble _upper,
	jdouble _stepIncrement,
	jdouble _pageIncrement,
	jdouble _pageSize
)
{
	GtkAdjustment* result;
	jlong _result;
	gdouble value;
	gdouble lower;
	gdouble upper;
	gdouble stepIncrement;
	gdouble pageIncrement;
	gdouble pageSize;

	// convert parameter value
	value = (gdouble) _value;

	// convert parameter lower
	lower = (gdouble) _lower;

	// convert parameter upper
	upper = (gdouble) _upper;

	// convert parameter stepIncrement
	stepIncrement = (gdouble) _stepIncrement;

	// convert parameter pageIncrement
	pageIncrement = (gdouble) _pageIncrement;

	// convert parameter pageSize
	pageSize = (gdouble) _pageSize;

	// call function
	result = gtk_adjustment_new(value, lower, upper, stepIncrement, pageIncrement, pageSize);

	// cleanup parameter value

	// cleanup parameter lower

	// cleanup parameter upper

	// cleanup parameter stepIncrement

	// cleanup parameter pageIncrement

	// cleanup parameter pageSize

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
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	gtk_adjustment_changed(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1clamp_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _lower,
	jdouble _upper
)
{
	GtkAdjustment* self;
	gdouble lower;
	gdouble upper;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter lower
	lower = (gdouble) _lower;

	// convert parameter upper
	upper = (gdouble) _upper;

	// call function
	gtk_adjustment_clamp_page(self, lower, upper);

	// cleanup parameter self

	// cleanup parameter lower

	// cleanup parameter upper
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1configure
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _value,
	jdouble _lower,
	jdouble _upper,
	jdouble _stepIncrement,
	jdouble _pageIncrement,
	jdouble _pageSize
)
{
	GtkAdjustment* self;
	gdouble value;
	gdouble lower;
	gdouble upper;
	gdouble stepIncrement;
	gdouble pageIncrement;
	gdouble pageSize;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter value
	value = (gdouble) _value;

	// convert parameter lower
	lower = (gdouble) _lower;

	// convert parameter upper
	upper = (gdouble) _upper;

	// convert parameter stepIncrement
	stepIncrement = (gdouble) _stepIncrement;

	// convert parameter pageIncrement
	pageIncrement = (gdouble) _pageIncrement;

	// convert parameter pageSize
	pageSize = (gdouble) _pageSize;

	// call function
	gtk_adjustment_configure(self, value, lower, upper, stepIncrement, pageIncrement, pageSize);

	// cleanup parameter self

	// cleanup parameter value

	// cleanup parameter lower

	// cleanup parameter upper

	// cleanup parameter stepIncrement

	// cleanup parameter pageIncrement

	// cleanup parameter pageSize
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1get_1lower
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	result = gtk_adjustment_get_lower(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1get_1minimum_1increment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	result = gtk_adjustment_get_minimum_increment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1get_1page_1increment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	result = gtk_adjustment_get_page_increment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1get_1page_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	result = gtk_adjustment_get_page_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1get_1step_1increment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	result = gtk_adjustment_get_step_increment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1get_1upper
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	result = gtk_adjustment_get_upper(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1get_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	result = gtk_adjustment_get_value(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1set_1lower
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _lower
)
{
	GtkAdjustment* self;
	gdouble lower;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter lower
	lower = (gdouble) _lower;

	// call function
	gtk_adjustment_set_lower(self, lower);

	// cleanup parameter self

	// cleanup parameter lower
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1set_1page_1increment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _pageIncrement
)
{
	GtkAdjustment* self;
	gdouble pageIncrement;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter pageIncrement
	pageIncrement = (gdouble) _pageIncrement;

	// call function
	gtk_adjustment_set_page_increment(self, pageIncrement);

	// cleanup parameter self

	// cleanup parameter pageIncrement
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1set_1page_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _pageSize
)
{
	GtkAdjustment* self;
	gdouble pageSize;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter pageSize
	pageSize = (gdouble) _pageSize;

	// call function
	gtk_adjustment_set_page_size(self, pageSize);

	// cleanup parameter self

	// cleanup parameter pageSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1set_1step_1increment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _stepIncrement
)
{
	GtkAdjustment* self;
	gdouble stepIncrement;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter stepIncrement
	stepIncrement = (gdouble) _stepIncrement;

	// call function
	gtk_adjustment_set_step_increment(self, stepIncrement);

	// cleanup parameter self

	// cleanup parameter stepIncrement
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1set_1upper
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _upper
)
{
	GtkAdjustment* self;
	gdouble upper;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter upper
	upper = (gdouble) _upper;

	// call function
	gtk_adjustment_set_upper(self, upper);

	// cleanup parameter self

	// cleanup parameter upper
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1set_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _value
)
{
	GtkAdjustment* self;
	gdouble value;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// convert parameter value
	value = (gdouble) _value;

	// call function
	gtk_adjustment_set_value(self, value);

	// cleanup parameter self

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAdjustment_gtk_1adjustment_1value_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* self;

	// convert parameter self
	self = (GtkAdjustment*) _self;

	// call function
	gtk_adjustment_value_changed(self);

	// cleanup parameter self
}
