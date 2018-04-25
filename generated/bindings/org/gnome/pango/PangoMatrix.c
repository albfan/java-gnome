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
#include <pango/pango.h>
#include "bindings_java.h"
#include "org_gnome_pango_PangoMatrix.h"

JNIEXPORT jdouble JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1xx
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// get field value
	result = self->xx;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1set_1xx
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _xx
)
{
	PangoMatrix* self;
	double xx;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter xx
	xx = (double) _xx;

	// set field value
	self->xx = xx;

	// cleanup parameter self

	// cleanup parameter xx
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1xy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// get field value
	result = self->xy;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1set_1xy
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _xy
)
{
	PangoMatrix* self;
	double xy;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter xy
	xy = (double) _xy;

	// set field value
	self->xy = xy;

	// cleanup parameter self

	// cleanup parameter xy
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1yx
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// get field value
	result = self->yx;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1set_1yx
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _yx
)
{
	PangoMatrix* self;
	double yx;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter yx
	yx = (double) _yx;

	// set field value
	self->yx = yx;

	// cleanup parameter self

	// cleanup parameter yx
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1yy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// get field value
	result = self->yy;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1set_1yy
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _yy
)
{
	PangoMatrix* self;
	double yy;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter yy
	yy = (double) _yy;

	// set field value
	self->yy = yy;

	// cleanup parameter self

	// cleanup parameter yy
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1x0
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// get field value
	result = self->x0;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1set_1x0
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x0
)
{
	PangoMatrix* self;
	double x0;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter x0
	x0 = (double) _x0;

	// set field value
	self->x0 = x0;

	// cleanup parameter self

	// cleanup parameter x0
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1y0
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// get field value
	result = self->y0;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1set_1y0
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _y0
)
{
	PangoMatrix* self;
	double y0;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter y0
	y0 = (double) _y0;

	// set field value
	self->y0 = y0;

	// cleanup parameter self

	// cleanup parameter y0
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1concat
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _newMatrix
)
{
	PangoMatrix* self;
	const PangoMatrix* newMatrix;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter newMatrix
	newMatrix = (const PangoMatrix*) _newMatrix;

	// call function
	pango_matrix_concat(self, newMatrix);

	// cleanup parameter self

	// cleanup parameter newMatrix
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoMatrix* result;
	jlong _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// call function
	result = pango_matrix_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// call function
	pango_matrix_free(self);

	// cleanup parameter self
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1font_1scale_1factor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	PangoMatrix* self;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// call function
	result = pango_matrix_get_font_scale_factor(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1get_1font_1scale_1factors
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _xscale,
	jdoubleArray _yscale
)
{
	PangoMatrix* self;
	double* xscale;
	double* yscale;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter xscale
	if (_xscale == NULL) {
		xscale = NULL;
	} else {
		xscale = (double*) (*env)->GetDoubleArrayElements(env, _xscale, NULL);
		if (xscale == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter yscale
	if (_yscale == NULL) {
		yscale = NULL;
	} else {
		yscale = (double*) (*env)->GetDoubleArrayElements(env, _yscale, NULL);
		if (yscale == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_matrix_get_font_scale_factors(self, xscale, yscale);

	// cleanup parameter self

	// cleanup parameter xscale
	if (xscale != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _xscale, (jdouble*)xscale, 0);
	}

	// cleanup parameter yscale
	if (yscale != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _yscale, (jdouble*)yscale, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1rotate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _degrees
)
{
	PangoMatrix* self;
	double degrees;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter degrees
	degrees = (double) _degrees;

	// call function
	pango_matrix_rotate(self, degrees);

	// cleanup parameter self

	// cleanup parameter degrees
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _scaleX,
	jdouble _scaleY
)
{
	PangoMatrix* self;
	double scaleX;
	double scaleY;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter scaleX
	scaleX = (double) _scaleX;

	// convert parameter scaleY
	scaleY = (double) _scaleY;

	// call function
	pango_matrix_scale(self, scaleX, scaleY);

	// cleanup parameter self

	// cleanup parameter scaleX

	// cleanup parameter scaleY
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1transform_1distance
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _dx,
	jdoubleArray _dy
)
{
	PangoMatrix* self;
	double* dx;
	double* dy;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter dx
	dx = (double*) (*env)->GetDoubleArrayElements(env, _dx, NULL);
	if (dx == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter dy
	dy = (double*) (*env)->GetDoubleArrayElements(env, _dy, NULL);
	if (dy == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	pango_matrix_transform_distance(self, dx, dy);

	// cleanup parameter self

	// cleanup parameter dx
	(*env)->ReleaseDoubleArrayElements(env, _dx, (jdouble*)dx, 0);

	// cleanup parameter dy
	(*env)->ReleaseDoubleArrayElements(env, _dy, (jdouble*)dy, 0);
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1transform_1pixel_1rectangle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rect
)
{
	PangoMatrix* self;
	PangoRectangle* rect;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter rect
	rect = (PangoRectangle*) _rect;

	// call function
	pango_matrix_transform_pixel_rectangle(self, rect);

	// cleanup parameter self

	// cleanup parameter rect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1transform_1point
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _x,
	jdoubleArray _y
)
{
	PangoMatrix* self;
	double* x;
	double* y;

	// convert parameter self
	self = (PangoMatrix*) _self;

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
	pango_matrix_transform_point(self, x, y);

	// cleanup parameter self

	// cleanup parameter x
	(*env)->ReleaseDoubleArrayElements(env, _x, (jdouble*)x, 0);

	// cleanup parameter y
	(*env)->ReleaseDoubleArrayElements(env, _y, (jdouble*)y, 0);
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1transform_1rectangle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rect
)
{
	PangoMatrix* self;
	PangoRectangle* rect;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter rect
	rect = (PangoRectangle*) _rect;

	// call function
	pango_matrix_transform_rectangle(self, rect);

	// cleanup parameter self

	// cleanup parameter rect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoMatrix_pango_1matrix_1translate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _tx,
	jdouble _ty
)
{
	PangoMatrix* self;
	double tx;
	double ty;

	// convert parameter self
	self = (PangoMatrix*) _self;

	// convert parameter tx
	tx = (double) _tx;

	// convert parameter ty
	ty = (double) _ty;

	// call function
	pango_matrix_translate(self, tx, ty);

	// cleanup parameter self

	// cleanup parameter tx

	// cleanup parameter ty
}
