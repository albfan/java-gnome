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
#include <librsvg/rsvg.h>
#include "bindings_java.h"
#include "org_freedesktop_cairo_CairoContext.h"

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1create
(
	JNIEnv* env,
	jclass cls,
	jlong _target
)
{
	cairo_t* result;
	jlong _result;
	cairo_surface_t* target;

	// convert parameter target
	target = (cairo_surface_t*) _target;

	// call function
	result = cairo_create(target);

	// cleanup parameter target

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_destroy(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1save
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_save(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1restore
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_restore(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1clip
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_clip(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1clip_1preserve
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_clip_preserve(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1stroke
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_stroke(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1stroke_1preserve
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_stroke_preserve(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1rotate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _rad
)
{
	cairo_t* self;
	double rad;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter rad
	rad = (double) _rad;

	// call function
	cairo_rotate(self, rad);

	// cleanup parameter self

	// cleanup parameter rad
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1translate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _tx,
	jdouble _ty
)
{
	cairo_t* self;
	double tx;
	double ty;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter tx
	tx = (double) _tx;

	// convert parameter ty
	ty = (double) _ty;

	// call function
	cairo_translate(self, tx, ty);

	// cleanup parameter self

	// cleanup parameter tx

	// cleanup parameter ty
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _sx,
	jdouble _sy
)
{
	cairo_t* self;
	double sx;
	double sy;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter sx
	sx = (double) _sx;

	// convert parameter sy
	sy = (double) _sy;

	// call function
	cairo_scale(self, sx, sy);

	// cleanup parameter self

	// cleanup parameter sx

	// cleanup parameter sy
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1source_1rgb
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _red,
	jdouble _green,
	jdouble _blue
)
{
	cairo_t* self;
	double red;
	double green;
	double blue;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter red
	red = (double) _red;

	// convert parameter green
	green = (double) _green;

	// convert parameter blue
	blue = (double) _blue;

	// call function
	cairo_set_source_rgb(self, red, green, blue);

	// cleanup parameter self

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1source_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _red,
	jdouble _green,
	jdouble _blue,
	jdouble _alpha
)
{
	cairo_t* self;
	double red;
	double green;
	double blue;
	double alpha;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter red
	red = (double) _red;

	// convert parameter green
	green = (double) _green;

	// convert parameter blue
	blue = (double) _blue;

	// convert parameter alpha
	alpha = (double) _alpha;

	// call function
	cairo_set_source_rgba(self, red, green, blue, alpha);

	// cleanup parameter self

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue

	// cleanup parameter alpha
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1line_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y
)
{
	cairo_t* self;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	cairo_line_to(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1rel_1line_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y
)
{
	cairo_t* self;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	cairo_rel_line_to(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1line_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _width
)
{
	cairo_t* self;
	double width;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter width
	width = (double) _width;

	// call function
	cairo_set_line_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT jdouble JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1get_1line_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	result = cairo_get_line_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1antialias
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _antialias
)
{
	cairo_t* self;
	cairo_antialias_t antialias;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter antialias
	antialias = (cairo_antialias_t) _antialias;

	// call function
	cairo_set_antialias(self, antialias);

	// cleanup parameter self

	// cleanup parameter antialias
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1move_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y
)
{
	cairo_t* self;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	cairo_move_to(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1rel_1move_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y
)
{
	cairo_t* self;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	cairo_rel_move_to(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1rectangle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y,
	jdouble _width,
	jdouble _height
)
{
	cairo_t* self;
	double x;
	double y;
	double width;
	double height;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// convert parameter width
	width = (double) _width;

	// convert parameter height
	height = (double) _height;

	// call function
	cairo_rectangle(self, x, y, width, height);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1arc
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _xc,
	jdouble _yc,
	jdouble _radius,
	jdouble _angle1,
	jdouble _angle2
)
{
	cairo_t* self;
	double xc;
	double yc;
	double radius;
	double angle1;
	double angle2;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter xc
	xc = (double) _xc;

	// convert parameter yc
	yc = (double) _yc;

	// convert parameter radius
	radius = (double) _radius;

	// convert parameter angle1
	angle1 = (double) _angle1;

	// convert parameter angle2
	angle2 = (double) _angle2;

	// call function
	cairo_arc(self, xc, yc, radius, angle1, angle2);

	// cleanup parameter self

	// cleanup parameter xc

	// cleanup parameter yc

	// cleanup parameter radius

	// cleanup parameter angle1

	// cleanup parameter angle2
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1arc_1negative
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _xc,
	jdouble _yc,
	jdouble _radius,
	jdouble _angle1,
	jdouble _angle2
)
{
	cairo_t* self;
	double xc;
	double yc;
	double radius;
	double angle1;
	double angle2;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter xc
	xc = (double) _xc;

	// convert parameter yc
	yc = (double) _yc;

	// convert parameter radius
	radius = (double) _radius;

	// convert parameter angle1
	angle1 = (double) _angle1;

	// convert parameter angle2
	angle2 = (double) _angle2;

	// call function
	cairo_arc_negative(self, xc, yc, radius, angle1, angle2);

	// cleanup parameter self

	// cleanup parameter xc

	// cleanup parameter yc

	// cleanup parameter radius

	// cleanup parameter angle1

	// cleanup parameter angle2
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1fill
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_fill(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1fill_1preserve
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_fill_preserve(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_pango_1cairo_1show_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _layout
)
{
	cairo_t* self;
	PangoLayout* layout;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter layout
	layout = (PangoLayout*) _layout;

	// call function
	pango_cairo_show_layout(self, layout);

	// cleanup parameter self

	// cleanup parameter layout
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_pango_1cairo_1update_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _layout
)
{
	cairo_t* self;
	PangoLayout* layout;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter layout
	layout = (PangoLayout*) _layout;

	// call function
	pango_cairo_update_layout(self, layout);

	// cleanup parameter self

	// cleanup parameter layout
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_pango_1cairo_1show_1layout_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _line
)
{
	cairo_t* self;
	PangoLayoutLine* line;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter line
	line = (PangoLayoutLine*) _line;

	// call function
	pango_cairo_show_layout_line(self, line);

	// cleanup parameter self

	// cleanup parameter line
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1get_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_pattern_t* result;
	jlong _result;
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	result = cairo_get_source(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_status_t result;
	jint _result;
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	result = cairo_status(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1get_1target
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_surface_t* result;
	jlong _result;
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	result = cairo_get_target(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1operator
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _op
)
{
	cairo_t* self;
	cairo_operator_t op;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter op
	op = (cairo_operator_t) _op;

	// call function
	cairo_set_operator(self, op);

	// cleanup parameter self

	// cleanup parameter op
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1paint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_paint(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1paint_1with_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _alpha
)
{
	cairo_t* self;
	double alpha;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter alpha
	alpha = (double) _alpha;

	// call function
	cairo_paint_with_alpha(self, alpha);

	// cleanup parameter self

	// cleanup parameter alpha
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pattern
)
{
	cairo_t* self;
	cairo_pattern_t* pattern;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter pattern
	pattern = (cairo_pattern_t*) _pattern;

	// call function
	cairo_set_source(self, pattern);

	// cleanup parameter self

	// cleanup parameter pattern
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1mask
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pattern
)
{
	cairo_t* self;
	cairo_pattern_t* pattern;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter pattern
	pattern = (cairo_pattern_t*) _pattern;

	// call function
	cairo_mask(self, pattern);

	// cleanup parameter self

	// cleanup parameter pattern
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1mask_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _surface,
	jdouble _x,
	jdouble _y
)
{
	cairo_t* self;
	cairo_surface_t* surface;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter surface
	surface = (cairo_surface_t*) _surface;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	cairo_mask_surface(self, surface, x, y);

	// cleanup parameter self

	// cleanup parameter surface

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1source_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _surface,
	jdouble _x,
	jdouble _y
)
{
	cairo_t* self;
	cairo_surface_t* surface;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter surface
	surface = (cairo_surface_t*) _surface;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	cairo_set_source_surface(self, surface, x, y);

	// cleanup parameter self

	// cleanup parameter surface

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1get_1current_1point
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _x,
	jdoubleArray _y
)
{
	cairo_t* self;
	double* x;
	double* y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double*) (*env)->GetDoubleArrayElements(env, _x, NULL);
	if (x == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter y
	y = (double*) (*env)->GetDoubleArrayElements(env, _y, NULL);
	if (y == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	cairo_get_current_point(self, x, y);

	// cleanup parameter self

	// cleanup parameter x
	(*env)->ReleaseDoubleArrayElements(env, _x, (jdouble*)x, 0);

	// cleanup parameter y
	(*env)->ReleaseDoubleArrayElements(env, _y, (jdouble*)y, 0);
}

JNIEXPORT jstring JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1status_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jint _status
)
{
	const char* result;
	jstring _result;
	cairo_status_t status;

	// convert parameter status
	status = (cairo_status_t) _status;

	// call function
	result = cairo_status_to_string(status);

	// cleanup parameter status

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1transform
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _matrix
)
{
	cairo_t* self;
	cairo_matrix_t* matrix;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter matrix
	matrix = (cairo_matrix_t*) _matrix;

	// call function
	cairo_transform(self, matrix);

	// cleanup parameter self

	// cleanup parameter matrix
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1dash
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _dashes,
	jint _numDashes,
	jdouble _offset
)
{
	cairo_t* self;
	const double* dashes;
	int numDashes;
	double offset;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter dashes
	dashes = (const double*) (*env)->GetDoubleArrayElements(env, _dashes, NULL);
	if (dashes == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter numDashes
	numDashes = (int) _numDashes;

	// convert parameter offset
	offset = (double) _offset;

	// call function
	cairo_set_dash(self, dashes, numDashes, offset);

	// cleanup parameter self

	// cleanup parameter dashes
	(*env)->ReleaseDoubleArrayElements(env, _dashes, (jdouble*)dashes, 0);

	// cleanup parameter numDashes

	// cleanup parameter offset
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_rsvg_1handle_1render_1cairo
(
	JNIEnv* env,
	jclass cls,
	jlong _handle,
	jlong _cr
)
{
	RsvgHandle* handle;
	cairo_t* cr;

	// convert parameter handle
	handle = (RsvgHandle*) _handle;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// call function
	rsvg_handle_render_cairo(handle, cr);

	// cleanup parameter handle

	// cleanup parameter cr
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1close_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_close_path(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1new_1sub_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* self;

	// convert parameter self
	self = (cairo_t*) _self;

	// call function
	cairo_new_sub_path(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1in_1fill
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y
)
{
	cairo_bool_t result;
	jboolean _result;
	cairo_t* self;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	result = cairo_in_fill(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1in_1stroke
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x,
	jdouble _y
)
{
	cairo_bool_t result;
	jboolean _result;
	cairo_t* self;
	double x;
	double y;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter x
	x = (double) _x;

	// convert parameter y
	y = (double) _y;

	// call function
	result = cairo_in_stroke(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoContext_cairo_1set_1fill_1rule
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _fillRule
)
{
	cairo_t* self;
	cairo_fill_rule_t fillRule;

	// convert parameter self
	self = (cairo_t*) _self;

	// convert parameter fillRule
	fillRule = (cairo_fill_rule_t) _fillRule;

	// call function
	cairo_set_fill_rule(self, fillRule);

	// cleanup parameter self

	// cleanup parameter fillRule
}
