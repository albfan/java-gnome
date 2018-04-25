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
#include "org_gnome_gdk_GdkGeometry.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1min_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->min_width;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1min_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _minWidth
)
{
	GdkGeometry* self;
	gint minWidth;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter minWidth
	minWidth = (gint) _minWidth;

	// set field value
	self->min_width = minWidth;

	// cleanup parameter self

	// cleanup parameter minWidth
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1min_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->min_height;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1min_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _minHeight
)
{
	GdkGeometry* self;
	gint minHeight;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter minHeight
	minHeight = (gint) _minHeight;

	// set field value
	self->min_height = minHeight;

	// cleanup parameter self

	// cleanup parameter minHeight
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1max_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->max_width;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1max_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _maxWidth
)
{
	GdkGeometry* self;
	gint maxWidth;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter maxWidth
	maxWidth = (gint) _maxWidth;

	// set field value
	self->max_width = maxWidth;

	// cleanup parameter self

	// cleanup parameter maxWidth
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1max_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->max_height;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1max_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _maxHeight
)
{
	GdkGeometry* self;
	gint maxHeight;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter maxHeight
	maxHeight = (gint) _maxHeight;

	// set field value
	self->max_height = maxHeight;

	// cleanup parameter self

	// cleanup parameter maxHeight
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1base_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->base_width;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1base_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _baseWidth
)
{
	GdkGeometry* self;
	gint baseWidth;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter baseWidth
	baseWidth = (gint) _baseWidth;

	// set field value
	self->base_width = baseWidth;

	// cleanup parameter self

	// cleanup parameter baseWidth
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1base_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->base_height;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1base_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _baseHeight
)
{
	GdkGeometry* self;
	gint baseHeight;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter baseHeight
	baseHeight = (gint) _baseHeight;

	// set field value
	self->base_height = baseHeight;

	// cleanup parameter self

	// cleanup parameter baseHeight
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1width_1inc
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->width_inc;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1width_1inc
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _widthInc
)
{
	GdkGeometry* self;
	gint widthInc;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter widthInc
	widthInc = (gint) _widthInc;

	// set field value
	self->width_inc = widthInc;

	// cleanup parameter self

	// cleanup parameter widthInc
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1height_1inc
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->height_inc;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1height_1inc
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _heightInc
)
{
	GdkGeometry* self;
	gint heightInc;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter heightInc
	heightInc = (gint) _heightInc;

	// set field value
	self->height_inc = heightInc;

	// cleanup parameter self

	// cleanup parameter heightInc
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1min_1aspect
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->min_aspect;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1min_1aspect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _minAspect
)
{
	GdkGeometry* self;
	gdouble minAspect;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter minAspect
	minAspect = (gdouble) _minAspect;

	// set field value
	self->min_aspect = minAspect;

	// cleanup parameter self

	// cleanup parameter minAspect
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1max_1aspect
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->max_aspect;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1max_1aspect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _maxAspect
)
{
	GdkGeometry* self;
	gdouble maxAspect;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter maxAspect
	maxAspect = (gdouble) _maxAspect;

	// set field value
	self->max_aspect = maxAspect;

	// cleanup parameter self

	// cleanup parameter maxAspect
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1get_1win_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkGravity result;
	jint _result;
	GdkGeometry* self;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// get field value
	result = self->win_gravity;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkGeometry_gdk_1geometry_1set_1win_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _winGravity
)
{
	GdkGeometry* self;
	GdkGravity winGravity;

	// convert parameter self
	self = (GdkGeometry*) _self;

	// convert parameter winGravity
	winGravity = (GdkGravity) _winGravity;

	// set field value
	self->win_gravity = winGravity;

	// cleanup parameter self

	// cleanup parameter winGravity
}
