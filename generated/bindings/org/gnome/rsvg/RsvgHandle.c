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
#include "org_gnome_rsvg_RsvgHandle.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1new
(
	JNIEnv* env,
	jclass cls
)
{
	RsvgHandle* result;
	jlong _result;

	// call function
	result = rsvg_handle_new();

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
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _fileName
)
{
	RsvgHandle* result;
	jlong _result;
	const gchar* fileName;
	GError* error = NULL;

	// convert parameter fileName
	fileName = (const gchar*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = rsvg_handle_new_from_file(fileName, &error);

	// cleanup parameter fileName
	bindings_java_releaseString(fileName);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1close
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	RsvgHandle* self;
	GError* error = NULL;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// call function
	result = rsvg_handle_close(self, &error);

	// cleanup parameter self

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

JNIEXPORT jstring JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1get_1base_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	RsvgHandle* self;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// call function
	result = rsvg_handle_get_base_uri(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1get_1dimensions
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dimensionData
)
{
	RsvgHandle* self;
	RsvgDimensionData* dimensionData;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter dimensionData
	dimensionData = (RsvgDimensionData*) _dimensionData;

	// call function
	rsvg_handle_get_dimensions(self, dimensionData);

	// cleanup parameter self

	// cleanup parameter dimensionData
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1get_1dimensions_1sub
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dimensionData,
	jstring _id
)
{
	gboolean result;
	jboolean _result;
	RsvgHandle* self;
	RsvgDimensionData* dimensionData;
	const char* id;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter dimensionData
	dimensionData = (RsvgDimensionData*) _dimensionData;

	// convert parameter id
	if (_id == NULL) {
		id = NULL;
	} else {
		id = (const char*) bindings_java_getString(env, _id);
		if (id == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = rsvg_handle_get_dimensions_sub(self, dimensionData, id);

	// cleanup parameter self

	// cleanup parameter dimensionData

	// cleanup parameter id
	if (id != NULL) {
		bindings_java_releaseString(id);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1get_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	RsvgHandle* self;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// call function
	result = rsvg_handle_get_pixbuf(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1get_1pixbuf_1sub
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id
)
{
	GdkPixbuf* result;
	jlong _result;
	RsvgHandle* self;
	const char* id;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter id
	if (_id == NULL) {
		id = NULL;
	} else {
		id = (const char*) bindings_java_getString(env, _id);
		if (id == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = rsvg_handle_get_pixbuf_sub(self, id);

	// cleanup parameter self

	// cleanup parameter id
	if (id != NULL) {
		bindings_java_releaseString(id);
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

JNIEXPORT jboolean JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1has_1sub
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id
)
{
	gboolean result;
	jboolean _result;
	RsvgHandle* self;
	const char* id;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter id
	id = (const char*) bindings_java_getString(env, _id);
	if (id == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = rsvg_handle_has_sub(self, id);

	// cleanup parameter self

	// cleanup parameter id
	bindings_java_releaseString(id);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1internal_1set_1testing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _testing
)
{
	RsvgHandle* self;
	gboolean testing;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter testing
	testing = (gboolean) _testing;

	// call function
	rsvg_handle_internal_set_testing(self, testing);

	// cleanup parameter self

	// cleanup parameter testing
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1render_1cairo
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cr
)
{
	gboolean result;
	jboolean _result;
	RsvgHandle* self;
	cairo_t* cr;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// call function
	result = rsvg_handle_render_cairo(self, cr);

	// cleanup parameter self

	// cleanup parameter cr

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1render_1cairo_1sub
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cr,
	jstring _id
)
{
	gboolean result;
	jboolean _result;
	RsvgHandle* self;
	cairo_t* cr;
	const char* id;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// convert parameter id
	if (_id == NULL) {
		id = NULL;
	} else {
		id = (const char*) bindings_java_getString(env, _id);
		if (id == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = rsvg_handle_render_cairo_sub(self, cr, id);

	// cleanup parameter self

	// cleanup parameter cr

	// cleanup parameter id
	if (id != NULL) {
		bindings_java_releaseString(id);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1set_1base_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _baseUri
)
{
	RsvgHandle* self;
	const char* baseUri;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter baseUri
	baseUri = (const char*) bindings_java_getString(env, _baseUri);
	if (baseUri == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	rsvg_handle_set_base_uri(self, baseUri);

	// cleanup parameter self

	// cleanup parameter baseUri
	bindings_java_releaseString(baseUri);
}

JNIEXPORT void JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1set_1dpi
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _dpi
)
{
	RsvgHandle* self;
	double dpi;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter dpi
	dpi = (double) _dpi;

	// call function
	rsvg_handle_set_dpi(self, dpi);

	// cleanup parameter self

	// cleanup parameter dpi
}

JNIEXPORT void JNICALL
Java_org_gnome_rsvg_RsvgHandle_rsvg_1handle_1set_1dpi_1x_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _dpiX,
	jdouble _dpiY
)
{
	RsvgHandle* self;
	double dpiX;
	double dpiY;

	// convert parameter self
	self = (RsvgHandle*) _self;

	// convert parameter dpiX
	dpiX = (double) _dpiX;

	// convert parameter dpiY
	dpiY = (double) _dpiY;

	// call function
	rsvg_handle_set_dpi_x_y(self, dpiX, dpiY);

	// cleanup parameter self

	// cleanup parameter dpiX

	// cleanup parameter dpiY
}
