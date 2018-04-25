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
#include "org_gnome_gdk_GdkPixbufAnimation.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _filename
)
{
	GdkPixbufAnimation* result;
	jlong _result;
	const char* filename;
	GError* error = NULL;

	// convert parameter filename
	filename = (const char*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_animation_new_from_file(filename, &error);

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
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1new_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jstring _resourcePath
)
{
	GdkPixbufAnimation* result;
	jlong _result;
	const char* resourcePath;
	GError* error = NULL;

	// convert parameter resourcePath
	resourcePath = (const char*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_pixbuf_animation_new_from_resource(resourcePath, &error);

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

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkPixbufAnimation* self;

	// convert parameter self
	self = (GdkPixbufAnimation*) _self;

	// call function
	result = gdk_pixbuf_animation_get_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1get_1static_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GdkPixbufAnimation* self;

	// convert parameter self
	self = (GdkPixbufAnimation*) _self;

	// call function
	result = gdk_pixbuf_animation_get_static_image(self);

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
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkPixbufAnimation* self;

	// convert parameter self
	self = (GdkPixbufAnimation*) _self;

	// call function
	result = gdk_pixbuf_animation_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1is_1static_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkPixbufAnimation* self;

	// convert parameter self
	self = (GdkPixbufAnimation*) _self;

	// call function
	result = gdk_pixbuf_animation_is_static_image(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbufAnimation* result;
	jlong _result;
	GdkPixbufAnimation* self;

	// convert parameter self
	self = (GdkPixbufAnimation*) _self;

	// call function
	result = gdk_pixbuf_animation_ref(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkPixbufAnimation_gdk_1pixbuf_1animation_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbufAnimation* self;

	// convert parameter self
	self = (GdkPixbufAnimation*) _self;

	// call function
	gdk_pixbuf_animation_unref(self);

	// cleanup parameter self
}
