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
#include "bindings_java.h"
#include "org_freedesktop_cairo_CairoPattern.h"

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_pattern_t* self;

	// convert parameter self
	self = (cairo_pattern_t*) _self;

	// call function
	cairo_pattern_destroy(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1reference
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_pattern_t* result;
	jlong _result;
	cairo_pattern_t* self;

	// convert parameter self
	self = (cairo_pattern_t*) _self;

	// call function
	result = cairo_pattern_reference(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1create_1for_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _surface
)
{
	cairo_pattern_t* result;
	jlong _result;
	cairo_surface_t* surface;

	// convert parameter surface
	surface = (cairo_surface_t*) _surface;

	// call function
	result = cairo_pattern_create_for_surface(surface);

	// cleanup parameter surface

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1create_1rgba
(
	JNIEnv* env,
	jclass cls,
	jdouble _red,
	jdouble _green,
	jdouble _blue,
	jdouble _alpha
)
{
	cairo_pattern_t* result;
	jlong _result;
	double red;
	double green;
	double blue;
	double alpha;

	// convert parameter red
	red = (double) _red;

	// convert parameter green
	green = (double) _green;

	// convert parameter blue
	blue = (double) _blue;

	// convert parameter alpha
	alpha = (double) _alpha;

	// call function
	result = cairo_pattern_create_rgba(red, green, blue, alpha);

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue

	// cleanup parameter alpha

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1create_1linear
(
	JNIEnv* env,
	jclass cls,
	jdouble _x0,
	jdouble _y0,
	jdouble _x1,
	jdouble _y1
)
{
	cairo_pattern_t* result;
	jlong _result;
	double x0;
	double y0;
	double x1;
	double y1;

	// convert parameter x0
	x0 = (double) _x0;

	// convert parameter y0
	y0 = (double) _y0;

	// convert parameter x1
	x1 = (double) _x1;

	// convert parameter y1
	y1 = (double) _y1;

	// call function
	result = cairo_pattern_create_linear(x0, y0, x1, y1);

	// cleanup parameter x0

	// cleanup parameter y0

	// cleanup parameter x1

	// cleanup parameter y1

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1create_1radial
(
	JNIEnv* env,
	jclass cls,
	jdouble _cx0,
	jdouble _cy0,
	jdouble _radius0,
	jdouble _cx1,
	jdouble _cy1,
	jdouble _radius1
)
{
	cairo_pattern_t* result;
	jlong _result;
	double cx0;
	double cy0;
	double radius0;
	double cx1;
	double cy1;
	double radius1;

	// convert parameter cx0
	cx0 = (double) _cx0;

	// convert parameter cy0
	cy0 = (double) _cy0;

	// convert parameter radius0
	radius0 = (double) _radius0;

	// convert parameter cx1
	cx1 = (double) _cx1;

	// convert parameter cy1
	cy1 = (double) _cy1;

	// convert parameter radius1
	radius1 = (double) _radius1;

	// call function
	result = cairo_pattern_create_radial(cx0, cy0, radius0, cx1, cy1, radius1);

	// cleanup parameter cx0

	// cleanup parameter cy0

	// cleanup parameter radius0

	// cleanup parameter cx1

	// cleanup parameter cy1

	// cleanup parameter radius1

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1add_1color_1stop_1rgb
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _offset,
	jdouble _red,
	jdouble _green,
	jdouble _blue
)
{
	cairo_pattern_t* self;
	double offset;
	double red;
	double green;
	double blue;

	// convert parameter self
	self = (cairo_pattern_t*) _self;

	// convert parameter offset
	offset = (double) _offset;

	// convert parameter red
	red = (double) _red;

	// convert parameter green
	green = (double) _green;

	// convert parameter blue
	blue = (double) _blue;

	// call function
	cairo_pattern_add_color_stop_rgb(self, offset, red, green, blue);

	// cleanup parameter self

	// cleanup parameter offset

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1add_1color_1stop_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _offset,
	jdouble _red,
	jdouble _green,
	jdouble _blue,
	jdouble _alpha
)
{
	cairo_pattern_t* self;
	double offset;
	double red;
	double green;
	double blue;
	double alpha;

	// convert parameter self
	self = (cairo_pattern_t*) _self;

	// convert parameter offset
	offset = (double) _offset;

	// convert parameter red
	red = (double) _red;

	// convert parameter green
	green = (double) _green;

	// convert parameter blue
	blue = (double) _blue;

	// convert parameter alpha
	alpha = (double) _alpha;

	// call function
	cairo_pattern_add_color_stop_rgba(self, offset, red, green, blue, alpha);

	// cleanup parameter self

	// cleanup parameter offset

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue

	// cleanup parameter alpha
}

JNIEXPORT jint JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_status_t result;
	jint _result;
	cairo_pattern_t* self;

	// convert parameter self
	self = (cairo_pattern_t*) _self;

	// call function
	result = cairo_pattern_status(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1set_1extend
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _extend
)
{
	cairo_pattern_t* self;
	cairo_extend_t extend;

	// convert parameter self
	self = (cairo_pattern_t*) _self;

	// convert parameter extend
	extend = (cairo_extend_t) _extend;

	// call function
	cairo_pattern_set_extend(self, extend);

	// cleanup parameter self

	// cleanup parameter extend
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoPattern_cairo_1pattern_1set_1filter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _filter
)
{
	cairo_pattern_t* self;
	cairo_filter_t filter;

	// convert parameter self
	self = (cairo_pattern_t*) _self;

	// convert parameter filter
	filter = (cairo_filter_t) _filter;

	// call function
	cairo_pattern_set_filter(self, filter);

	// cleanup parameter self

	// cleanup parameter filter
}
