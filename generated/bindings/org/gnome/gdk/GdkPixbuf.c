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
#include <gdk-pixbuf/gdk-pixbuf.h>
#include "bindings_java.h"
#include "org_gnome_gdk_GdkPixbuf.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new
(
	JNIEnv* env,
	jclass cls,
	jint _colorspace,
	jboolean _hasAlpha,
	jint _bitsPerSample,
	jint _width,
	jint _height
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkColorspace colorspace;
	gboolean hasAlpha;
	int bitsPerSample;
	int width;
	int height;

	// convert parameter colorspace
	colorspace = (GdkColorspace) _colorspace;

	// convert parameter hasAlpha
	hasAlpha = (gboolean) _hasAlpha;

	// convert parameter bitsPerSample
	bitsPerSample = (int) _bitsPerSample;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	result = gdk_pixbuf_new(colorspace, hasAlpha, bitsPerSample, width, height);

	// cleanup parameter colorspace

	// cleanup parameter hasAlpha

	// cleanup parameter bitsPerSample

	// cleanup parameter width

	// cleanup parameter height

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _filename
)
{
	GdkPixbuf* result;
	jlong _result;
	const char* filename;
	GError* error = NULL;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_new_from_file(filename, &error);

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0L;
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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new_1from_1file_1at_1scale
(
	JNIEnv* env,
	jclass cls,
	jstring _filename,
	jint _width,
	jint _height,
	jboolean _preserveAspectRatio
)
{
	GdkPixbuf* result;
	jlong _result;
	const char* filename;
	int width;
	int height;
	gboolean preserveAspectRatio;
	GError* error = NULL;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// convert parameter preserveAspectRatio
	preserveAspectRatio = (gboolean) _preserveAspectRatio;

	// call function
	result = gdk_pixbuf_new_from_file_at_scale(filename, width, height, preserveAspectRatio, &error);

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter preserveAspectRatio

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0L;
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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new_1from_1file_1at_1size
(
	JNIEnv* env,
	jclass cls,
	jstring _filename,
	jint _width,
	jint _height
)
{
	GdkPixbuf* result;
	jlong _result;
	const char* filename;
	int width;
	int height;
	GError* error = NULL;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	result = gdk_pixbuf_new_from_file_at_size(filename, width, height, &error);

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// cleanup parameter width

	// cleanup parameter height

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0L;
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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jstring _resourcePath
)
{
	GdkPixbuf* result;
	jlong _result;
	const char* resourcePath;
	GError* error = NULL;

	// convert parameter resourcePath
	resourcePath = (const char*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_new_from_resource(resourcePath, &error);

	// cleanup parameter resourcePath
	bindings_java_releaseString(resourcePath);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0L;
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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new_1from_1resource_1at_1scale
(
	JNIEnv* env,
	jclass cls,
	jstring _resourcePath,
	jint _width,
	jint _height,
	jboolean _preserveAspectRatio
)
{
	GdkPixbuf* result;
	jlong _result;
	const char* resourcePath;
	int width;
	int height;
	gboolean preserveAspectRatio;
	GError* error = NULL;

	// convert parameter resourcePath
	resourcePath = (const char*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// convert parameter preserveAspectRatio
	preserveAspectRatio = (gboolean) _preserveAspectRatio;

	// call function
	result = gdk_pixbuf_new_from_resource_at_scale(resourcePath, width, height, preserveAspectRatio, &error);

	// cleanup parameter resourcePath
	bindings_java_releaseString(resourcePath);

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter preserveAspectRatio

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  0L;
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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new_1from_1xpm_1data
(
	JNIEnv* env,
	jclass cls,
	jobjectArray _data
)
{
	GdkPixbuf* result;
	jlong _result;
	char** data;

	// convert parameter data
	data = (char**) bindings_java_convert_strarray_to_gchararray(env, _data);
	if (data == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_new_from_xpm_data(data);

	// cleanup parameter data
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)data, _data);

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1add_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _substituteColor,
	jchar _r,
	jchar _g,
	jchar _b
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;
	gboolean substituteColor;
	guchar r;
	guchar g;
	guchar b;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter substituteColor
	substituteColor = (gboolean) _substituteColor;

	// convert parameter r
	r = (guchar) _r;

	// convert parameter g
	g = (guchar) _g;

	// convert parameter b
	b = (guchar) _b;

	// call function
	result = gdk_pixbuf_add_alpha(self, substituteColor, r, g, b);

	// cleanup parameter self

	// cleanup parameter substituteColor

	// cleanup parameter r

	// cleanup parameter g

	// cleanup parameter b

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1apply_1embedded_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_apply_embedded_orientation(self);

	// cleanup parameter self

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1composite
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dest,
	jint _destX,
	jint _destY,
	jint _destWidth,
	jint _destHeight,
	jdouble _offsetX,
	jdouble _offsetY,
	jdouble _scaleX,
	jdouble _scaleY,
	jint _interpType,
	jint _overallAlpha
)
{
	GdkPixbuf* self;
	GdkPixbuf* dest;
	int destX;
	int destY;
	int destWidth;
	int destHeight;
	double offsetX;
	double offsetY;
	double scaleX;
	double scaleY;
	GdkInterpType interpType;
	int overallAlpha;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter dest
	dest = (GdkPixbuf*) _dest;

	// convert parameter destX
	destX = (int) _destX;

	// convert parameter destY
	destY = (int) _destY;

	// convert parameter destWidth
	destWidth = (int) _destWidth;

	// convert parameter destHeight
	destHeight = (int) _destHeight;

	// convert parameter offsetX
	offsetX = (double) _offsetX;

	// convert parameter offsetY
	offsetY = (double) _offsetY;

	// convert parameter scaleX
	scaleX = (double) _scaleX;

	// convert parameter scaleY
	scaleY = (double) _scaleY;

	// convert parameter interpType
	interpType = (GdkInterpType) _interpType;

	// convert parameter overallAlpha
	overallAlpha = (int) _overallAlpha;

	// call function
	gdk_pixbuf_composite(self, dest, destX, destY, destWidth, destHeight, offsetX, offsetY, scaleX, scaleY, interpType, overallAlpha);

	// cleanup parameter self

	// cleanup parameter dest

	// cleanup parameter destX

	// cleanup parameter destY

	// cleanup parameter destWidth

	// cleanup parameter destHeight

	// cleanup parameter offsetX

	// cleanup parameter offsetY

	// cleanup parameter scaleX

	// cleanup parameter scaleY

	// cleanup parameter interpType

	// cleanup parameter overallAlpha
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1composite_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dest,
	jint _destX,
	jint _destY,
	jint _destWidth,
	jint _destHeight,
	jdouble _offsetX,
	jdouble _offsetY,
	jdouble _scaleX,
	jdouble _scaleY,
	jint _interpType,
	jint _overallAlpha,
	jint _checkX,
	jint _checkY,
	jint _checkSize,
	jint _color1,
	jint _color2
)
{
	GdkPixbuf* self;
	GdkPixbuf* dest;
	int destX;
	int destY;
	int destWidth;
	int destHeight;
	double offsetX;
	double offsetY;
	double scaleX;
	double scaleY;
	GdkInterpType interpType;
	int overallAlpha;
	int checkX;
	int checkY;
	int checkSize;
	guint32 color1;
	guint32 color2;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter dest
	dest = (GdkPixbuf*) _dest;

	// convert parameter destX
	destX = (int) _destX;

	// convert parameter destY
	destY = (int) _destY;

	// convert parameter destWidth
	destWidth = (int) _destWidth;

	// convert parameter destHeight
	destHeight = (int) _destHeight;

	// convert parameter offsetX
	offsetX = (double) _offsetX;

	// convert parameter offsetY
	offsetY = (double) _offsetY;

	// convert parameter scaleX
	scaleX = (double) _scaleX;

	// convert parameter scaleY
	scaleY = (double) _scaleY;

	// convert parameter interpType
	interpType = (GdkInterpType) _interpType;

	// convert parameter overallAlpha
	overallAlpha = (int) _overallAlpha;

	// convert parameter checkX
	checkX = (int) _checkX;

	// convert parameter checkY
	checkY = (int) _checkY;

	// convert parameter checkSize
	checkSize = (int) _checkSize;

	// convert parameter color1
	color1 = (guint32) _color1;

	// convert parameter color2
	color2 = (guint32) _color2;

	// call function
	gdk_pixbuf_composite_color(self, dest, destX, destY, destWidth, destHeight, offsetX, offsetY, scaleX, scaleY, interpType, overallAlpha, checkX, checkY, checkSize, color1, color2);

	// cleanup parameter self

	// cleanup parameter dest

	// cleanup parameter destX

	// cleanup parameter destY

	// cleanup parameter destWidth

	// cleanup parameter destHeight

	// cleanup parameter offsetX

	// cleanup parameter offsetY

	// cleanup parameter scaleX

	// cleanup parameter scaleY

	// cleanup parameter interpType

	// cleanup parameter overallAlpha

	// cleanup parameter checkX

	// cleanup parameter checkY

	// cleanup parameter checkSize

	// cleanup parameter color1

	// cleanup parameter color2
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1composite_1color_1simple
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _destWidth,
	jint _destHeight,
	jint _interpType,
	jint _overallAlpha,
	jint _checkSize,
	jint _color1,
	jint _color2
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;
	int destWidth;
	int destHeight;
	GdkInterpType interpType;
	int overallAlpha;
	int checkSize;
	guint32 color1;
	guint32 color2;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter destWidth
	destWidth = (int) _destWidth;

	// convert parameter destHeight
	destHeight = (int) _destHeight;

	// convert parameter interpType
	interpType = (GdkInterpType) _interpType;

	// convert parameter overallAlpha
	overallAlpha = (int) _overallAlpha;

	// convert parameter checkSize
	checkSize = (int) _checkSize;

	// convert parameter color1
	color1 = (guint32) _color1;

	// convert parameter color2
	color2 = (guint32) _color2;

	// call function
	result = gdk_pixbuf_composite_color_simple(self, destWidth, destHeight, interpType, overallAlpha, checkSize, color1, color2);

	// cleanup parameter self

	// cleanup parameter destWidth

	// cleanup parameter destHeight

	// cleanup parameter interpType

	// cleanup parameter overallAlpha

	// cleanup parameter checkSize

	// cleanup parameter color1

	// cleanup parameter color2

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_copy(self);

	// cleanup parameter self

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1copy_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _srcX,
	jint _srcY,
	jint _width,
	jint _height,
	jlong _destPixbuf,
	jint _destX,
	jint _destY
)
{
	GdkPixbuf* self;
	int srcX;
	int srcY;
	int width;
	int height;
	GdkPixbuf* destPixbuf;
	int destX;
	int destY;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter srcX
	srcX = (int) _srcX;

	// convert parameter srcY
	srcY = (int) _srcY;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// convert parameter destPixbuf
	destPixbuf = (GdkPixbuf*) _destPixbuf;

	// convert parameter destX
	destX = (int) _destX;

	// convert parameter destY
	destY = (int) _destY;

	// call function
	gdk_pixbuf_copy_area(self, srcX, srcY, width, height, destPixbuf, destX, destY);

	// cleanup parameter self

	// cleanup parameter srcX

	// cleanup parameter srcY

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter destPixbuf

	// cleanup parameter destX

	// cleanup parameter destY
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1copy_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _destPixbuf
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;
	GdkPixbuf* destPixbuf;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter destPixbuf
	destPixbuf = (GdkPixbuf*) _destPixbuf;

	// call function
	result = gdk_pixbuf_copy_options(self, destPixbuf);

	// cleanup parameter self

	// cleanup parameter destPixbuf

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1fill
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixel
)
{
	GdkPixbuf* self;
	guint32 pixel;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter pixel
	pixel = (guint32) _pixel;

	// call function
	gdk_pixbuf_fill(self, pixel);

	// cleanup parameter self

	// cleanup parameter pixel
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1flip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _horizontal
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;
	gboolean horizontal;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter horizontal
	horizontal = (gboolean) _horizontal;

	// call function
	result = gdk_pixbuf_flip(self, horizontal);

	// cleanup parameter self

	// cleanup parameter horizontal

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1bits_1per_1sample
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_bits_per_sample(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1byte_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gsize result;
	jlong _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_byte_length(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1colorspace
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkColorspace result;
	jint _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_colorspace(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1has_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_has_alpha(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1n_1channels
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_n_channels(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1option
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	const gchar* result;
	jstring _result;
	GdkPixbuf* self;
	const gchar* key;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_get_option(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1rowstride
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_rowstride(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1new_1subpixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _srcX,
	jint _srcY,
	jint _width,
	jint _height
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;
	int srcX;
	int srcY;
	int width;
	int height;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter srcX
	srcX = (int) _srcX;

	// convert parameter srcY
	srcY = (int) _srcY;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	result = gdk_pixbuf_new_subpixbuf(self, srcX, srcY, width, height);

	// cleanup parameter self

	// cleanup parameter srcX

	// cleanup parameter srcY

	// cleanup parameter width

	// cleanup parameter height

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	result = gdk_pixbuf_ref(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1remove_1option
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;
	const gchar* key;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_remove_option(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1rotate_1simple
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _angle
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;
	GdkPixbufRotation angle;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter angle
	angle = (GdkPixbufRotation) _angle;

	// call function
	result = gdk_pixbuf_rotate_simple(self, angle);

	// cleanup parameter self

	// cleanup parameter angle

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
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1saturate_1and_1pixelate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dest,
	jfloat _saturation,
	jboolean _pixelate
)
{
	GdkPixbuf* self;
	GdkPixbuf* dest;
	gfloat saturation;
	gboolean pixelate;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter dest
	dest = (GdkPixbuf*) _dest;

	// convert parameter saturation
	saturation = (gfloat) _saturation;

	// convert parameter pixelate
	pixelate = (gboolean) _pixelate;

	// call function
	gdk_pixbuf_saturate_and_pixelate(self, dest, saturation, pixelate);

	// cleanup parameter self

	// cleanup parameter dest

	// cleanup parameter saturation

	// cleanup parameter pixelate
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1save
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename,
	jstring _type
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;
	const char* filename;
	const char* type;
	GError* error = NULL;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter type
	type = (const char*) bindings_java_getString(env, _type);
	if (type == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_save(self, filename, type, &error, NULL);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// cleanup parameter type
	bindings_java_releaseString(type);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1save_1to_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _buffer,
	jlongArray _bufferSize,
	jstring _type
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;
	gchar** buffer;
	gsize* bufferSize;
	const char* type;
	GError* error = NULL;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter buffer
	if (_buffer == NULL) {
		buffer = NULL;
	} else {
		buffer = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _buffer);
		if (buffer == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter bufferSize
	if (_bufferSize == NULL) {
		bufferSize = NULL;
	} else {
		bufferSize = (gsize*) (*env)->GetLongArrayElements(env, _bufferSize, NULL);
		if (bufferSize == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter type
	type = (const char*) bindings_java_getString(env, _type);
	if (type == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_save_to_buffer(self, buffer, bufferSize, type, &error, NULL);

	// cleanup parameter self

	// cleanup parameter buffer
	if (buffer != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)buffer, _buffer);
	}

	// cleanup parameter bufferSize
	if (bufferSize != NULL) {
		(*env)->ReleaseLongArrayElements(env, _bufferSize, (jlong*)bufferSize, 0);
	}

	// cleanup parameter type
	bindings_java_releaseString(type);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1save_1to_1bufferv
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _buffer,
	jlongArray _bufferSize,
	jstring _type,
	jobjectArray _optionKeys,
	jobjectArray _optionValues
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;
	gchar** buffer;
	gsize* bufferSize;
	const char* type;
	char** optionKeys;
	char** optionValues;
	GError* error = NULL;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter buffer
	if (_buffer == NULL) {
		buffer = NULL;
	} else {
		buffer = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _buffer);
		if (buffer == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter bufferSize
	if (_bufferSize == NULL) {
		bufferSize = NULL;
	} else {
		bufferSize = (gsize*) (*env)->GetLongArrayElements(env, _bufferSize, NULL);
		if (bufferSize == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter type
	type = (const char*) bindings_java_getString(env, _type);
	if (type == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter optionKeys
	optionKeys = (char**) bindings_java_convert_strarray_to_gchararray(env, _optionKeys);
	if (optionKeys == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter optionValues
	optionValues = (char**) bindings_java_convert_strarray_to_gchararray(env, _optionValues);
	if (optionValues == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_save_to_bufferv(self, buffer, bufferSize, type, optionKeys, optionValues, &error);

	// cleanup parameter self

	// cleanup parameter buffer
	if (buffer != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)buffer, _buffer);
	}

	// cleanup parameter bufferSize
	if (bufferSize != NULL) {
		(*env)->ReleaseLongArrayElements(env, _bufferSize, (jlong*)bufferSize, 0);
	}

	// cleanup parameter type
	bindings_java_releaseString(type);

	// cleanup parameter optionKeys
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)optionKeys, _optionKeys);

	// cleanup parameter optionValues
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)optionValues, _optionValues);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1savev
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename,
	jstring _type,
	jobjectArray _optionKeys,
	jobjectArray _optionValues
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;
	const char* filename;
	const char* type;
	char** optionKeys;
	char** optionValues;
	GError* error = NULL;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter type
	type = (const char*) bindings_java_getString(env, _type);
	if (type == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter optionKeys
	optionKeys = (char**) bindings_java_convert_strarray_to_gchararray(env, _optionKeys);
	if (optionKeys == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter optionValues
	optionValues = (char**) bindings_java_convert_strarray_to_gchararray(env, _optionValues);
	if (optionValues == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_savev(self, filename, type, optionKeys, optionValues, &error);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// cleanup parameter type
	bindings_java_releaseString(type);

	// cleanup parameter optionKeys
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)optionKeys, _optionKeys);

	// cleanup parameter optionValues
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)optionValues, _optionValues);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dest,
	jint _destX,
	jint _destY,
	jint _destWidth,
	jint _destHeight,
	jdouble _offsetX,
	jdouble _offsetY,
	jdouble _scaleX,
	jdouble _scaleY,
	jint _interpType
)
{
	GdkPixbuf* self;
	GdkPixbuf* dest;
	int destX;
	int destY;
	int destWidth;
	int destHeight;
	double offsetX;
	double offsetY;
	double scaleX;
	double scaleY;
	GdkInterpType interpType;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter dest
	dest = (GdkPixbuf*) _dest;

	// convert parameter destX
	destX = (int) _destX;

	// convert parameter destY
	destY = (int) _destY;

	// convert parameter destWidth
	destWidth = (int) _destWidth;

	// convert parameter destHeight
	destHeight = (int) _destHeight;

	// convert parameter offsetX
	offsetX = (double) _offsetX;

	// convert parameter offsetY
	offsetY = (double) _offsetY;

	// convert parameter scaleX
	scaleX = (double) _scaleX;

	// convert parameter scaleY
	scaleY = (double) _scaleY;

	// convert parameter interpType
	interpType = (GdkInterpType) _interpType;

	// call function
	gdk_pixbuf_scale(self, dest, destX, destY, destWidth, destHeight, offsetX, offsetY, scaleX, scaleY, interpType);

	// cleanup parameter self

	// cleanup parameter dest

	// cleanup parameter destX

	// cleanup parameter destY

	// cleanup parameter destWidth

	// cleanup parameter destHeight

	// cleanup parameter offsetX

	// cleanup parameter offsetY

	// cleanup parameter scaleX

	// cleanup parameter scaleY

	// cleanup parameter interpType
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1scale_1simple
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _destWidth,
	jint _destHeight,
	jint _interpType
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbuf* self;
	int destWidth;
	int destHeight;
	GdkInterpType interpType;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter destWidth
	destWidth = (int) _destWidth;

	// convert parameter destHeight
	destHeight = (int) _destHeight;

	// convert parameter interpType
	interpType = (GdkInterpType) _interpType;

	// call function
	result = gdk_pixbuf_scale_simple(self, destWidth, destHeight, interpType);

	// cleanup parameter self

	// cleanup parameter destWidth

	// cleanup parameter destHeight

	// cleanup parameter interpType

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1set_1option
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jstring _value
)
{
	gboolean result;
	jboolean _result;
	GdkPixbuf* self;
	const gchar* key;
	const gchar* value;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter value
	value = (const gchar*) bindings_java_getString(env, _value);
	if (value == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_set_option(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
	bindings_java_releaseString(value);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* self;

	// convert parameter self
	self = (GdkPixbuf*) _self;

	// call function
	gdk_pixbuf_unref(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbuf_gdk_1pixbuf_1calculate_1rowstride
(
	JNIEnv* env,
	jclass cls,
	jint _colorspace,
	jboolean _hasAlpha,
	jint _bitsPerSample,
	jint _width,
	jint _height
)
{
	gint result;
	jint _result;
	GdkColorspace colorspace;
	gboolean hasAlpha;
	int bitsPerSample;
	int width;
	int height;

	// convert parameter colorspace
	colorspace = (GdkColorspace) _colorspace;

	// convert parameter hasAlpha
	hasAlpha = (gboolean) _hasAlpha;

	// convert parameter bitsPerSample
	bitsPerSample = (int) _bitsPerSample;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	result = gdk_pixbuf_calculate_rowstride(colorspace, hasAlpha, bitsPerSample, width, height);

	// cleanup parameter colorspace

	// cleanup parameter hasAlpha

	// cleanup parameter bitsPerSample

	// cleanup parameter width

	// cleanup parameter height

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}
