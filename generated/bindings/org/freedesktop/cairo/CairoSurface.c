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
#include <cairo-svg.h>
#include <cairo-pdf.h>
#include "bindings_java.h"
#include "org_freedesktop_cairo_CairoSurface.h"

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_surface_t* self;

	// convert parameter self
	self = (cairo_surface_t*) _self;

	// call function
	cairo_surface_destroy(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1flush
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_surface_t* self;

	// convert parameter self
	self = (cairo_surface_t*) _self;

	// call function
	cairo_surface_flush(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1finish
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_surface_t* self;

	// convert parameter self
	self = (cairo_surface_t*) _self;

	// call function
	cairo_surface_finish(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1write_1to_1png
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	cairo_status_t result;
	jint _result;
	cairo_surface_t* self;
	const char* filename;

	// convert parameter self
	self = (cairo_surface_t*) _self;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0; // Java Exception already thrown
	}

	// call function
	result = cairo_surface_write_to_png(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1create_1similar
(
	JNIEnv* env,
	jclass cls,
	jlong _other,
	jint _content,
	jint _width,
	jint _height
)
{
	cairo_surface_t* result;
	jlong _result;
	cairo_surface_t* other;
	cairo_content_t content;
	int width;
	int height;

	// convert parameter other
	other = (cairo_surface_t*) _other;

	// convert parameter content
	content = (cairo_content_t) _content;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	result = cairo_surface_create_similar(other, content, width, height);

	// cleanup parameter other

	// cleanup parameter content

	// cleanup parameter width

	// cleanup parameter height

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_status_t result;
	jint _result;
	cairo_surface_t* self;

	// convert parameter self
	self = (cairo_surface_t*) _self;

	// call function
	result = cairo_surface_status(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1image_1surface_1create
(
	JNIEnv* env,
	jclass cls,
	jint _format,
	jint _width,
	jint _height
)
{
	cairo_surface_t* result;
	jlong _result;
	cairo_format_t format;
	int width;
	int height;

	// convert parameter format
	format = (cairo_format_t) _format;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	result = cairo_image_surface_create(format, width, height);

	// cleanup parameter format

	// cleanup parameter width

	// cleanup parameter height

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1svg_1surface_1create
(
	JNIEnv* env,
	jclass cls,
	jstring _filename,
	jdouble _widthInPoints,
	jdouble _heightInPoints
)
{
	cairo_surface_t* result;
	jlong _result;
	const char* filename;
	double widthInPoints;
	double heightInPoints;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter widthInPoints
	widthInPoints = (double) _widthInPoints;

	// convert parameter heightInPoints
	heightInPoints = (double) _heightInPoints;

	// call function
	result = cairo_svg_surface_create(filename, widthInPoints, heightInPoints);

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// cleanup parameter widthInPoints

	// cleanup parameter heightInPoints

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1pdf_1surface_1create
(
	JNIEnv* env,
	jclass cls,
	jstring _filename,
	jdouble _widthInPoints,
	jdouble _heightInPoints
)
{
	cairo_surface_t* result;
	jlong _result;
	const char* filename;
	double widthInPoints;
	double heightInPoints;

	// convert parameter filename
	if (_filename == NULL) {
		filename = NULL;
	} else {
		filename = (const char*) bindings_java_getString(env, _filename);
		if (filename == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter widthInPoints
	widthInPoints = (double) _widthInPoints;

	// convert parameter heightInPoints
	heightInPoints = (double) _heightInPoints;

	// call function
	result = cairo_pdf_surface_create(filename, widthInPoints, heightInPoints);

	// cleanup parameter filename
	if (filename != NULL) {
		bindings_java_releaseString(filename);
	}

	// cleanup parameter widthInPoints

	// cleanup parameter heightInPoints

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1show_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_surface_t* self;

	// convert parameter self
	self = (cairo_surface_t*) _self;

	// call function
	cairo_surface_show_page(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoSurface_cairo_1surface_1copy_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_surface_t* self;

	// convert parameter self
	self = (cairo_surface_t*) _self;

	// call function
	cairo_surface_copy_page(self);

	// cleanup parameter self
}
