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
#include "org_gnome_gtk_GtkImage.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_image_new();

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1animation
(
	JNIEnv* env,
	jclass cls,
	jlong _animation
)
{
	GtkWidget* result;
	jlong _result;
	GdkPixbufAnimation* animation;

	// convert parameter animation
	animation = (GdkPixbufAnimation*) _animation;

	// call function
	result = gtk_image_new_from_animation(animation);

	// cleanup parameter animation

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _filename
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* filename;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_image_new_from_file(filename);

	// cleanup parameter filename
	bindings_java_releaseString(filename);

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jstring _iconName,
	jint _size
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* iconName;
	GtkIconSize size;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar*) bindings_java_getString(env, _iconName);
		if (iconName == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	result = gtk_image_new_from_icon_name(iconName, size);

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_releaseString(iconName);
	}

	// cleanup parameter size

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1icon_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _iconSet,
	jint _size
)
{
	GtkWidget* result;
	jlong _result;
	GtkIconSet* iconSet;
	GtkIconSize size;

	// convert parameter iconSet
	iconSet = (GtkIconSet*) _iconSet;

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	result = gtk_image_new_from_icon_set(iconSet, size);

	// cleanup parameter iconSet

	// cleanup parameter size

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _pixbuf
)
{
	GtkWidget* result;
	jlong _result;
	GdkPixbuf* pixbuf;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	result = gtk_image_new_from_pixbuf(pixbuf);

	// cleanup parameter pixbuf

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jstring _resourcePath
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* resourcePath;

	// convert parameter resourcePath
	resourcePath = (const gchar*) bindings_java_getString(env, _resourcePath);
	if (resourcePath == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_image_new_from_resource(resourcePath);

	// cleanup parameter resourcePath
	bindings_java_releaseString(resourcePath);

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jstring _stockId,
	jint _size
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* stockId;
	GtkIconSize size;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	result = gtk_image_new_from_stock(stockId, size);

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// cleanup parameter size

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1new_1from_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _surface
)
{
	GtkWidget* result;
	jlong _result;
	cairo_surface_t* surface;

	// convert parameter surface
	surface = (cairo_surface_t*) _surface;

	// call function
	result = gtk_image_new_from_surface(surface);

	// cleanup parameter surface

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1clear
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkImage* self;

	// convert parameter self
	self = (GtkImage*) _self;

	// call function
	gtk_image_clear(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1get_1animation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbufAnimation* result;
	jlong _result;
	GtkImage* self;

	// convert parameter self
	self = (GtkImage*) _self;

	// call function
	result = gtk_image_get_animation(self);

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1get_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _iconName,
	jintArray _size
)
{
	GtkImage* self;
	const gchar** iconName;
	GtkIconSize* size;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar**) bindings_java_convert_strarray_to_gchararray(env, _iconName);
		if (iconName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter size
	if (_size == NULL) {
		size = NULL;
	} else {
		size = (GtkIconSize*) (*env)->GetIntArrayElements(env, _size, NULL);
		if (size == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_image_get_icon_name(self, iconName, size);

	// cleanup parameter self

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)iconName, _iconName);
	}

	// cleanup parameter size
	if (size != NULL) {
		(*env)->ReleaseIntArrayElements(env, _size, (jint*)size, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1get_1icon_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _iconSet,
	jintArray _size
)
{
	GtkImage* self;
	GtkIconSet** iconSet;
	GtkIconSize* size;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter iconSet
	if (_iconSet == NULL) {
		iconSet = NULL;
	} else {
		iconSet = (GtkIconSet**) bindings_java_convert_jarray_to_gpointer(env, _iconSet);
		if (iconSet == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter size
	if (_size == NULL) {
		size = NULL;
	} else {
		size = (GtkIconSize*) (*env)->GetIntArrayElements(env, _size, NULL);
		if (size == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_image_get_icon_set(self, iconSet, size);

	// cleanup parameter self

	// cleanup parameter iconSet
	if (iconSet != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)iconSet, _iconSet);
	}

	// cleanup parameter size
	if (size != NULL) {
		(*env)->ReleaseIntArrayElements(env, _size, (jint*)size, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1get_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkImage* self;

	// convert parameter self
	self = (GtkImage*) _self;

	// call function
	result = gtk_image_get_pixbuf(self);

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
Java_org_gnome_gtk_GtkImage_gtk_1image_1get_1pixel_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkImage* self;

	// convert parameter self
	self = (GtkImage*) _self;

	// call function
	result = gtk_image_get_pixel_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1get_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _stockId,
	jintArray _size
)
{
	GtkImage* self;
	gchar** stockId;
	GtkIconSize* size;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter stockId
	if (_stockId == NULL) {
		stockId = NULL;
	} else {
		stockId = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _stockId);
		if (stockId == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter size
	if (_size == NULL) {
		size = NULL;
	} else {
		size = (GtkIconSize*) (*env)->GetIntArrayElements(env, _size, NULL);
		if (size == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_image_get_stock(self, stockId, size);

	// cleanup parameter self

	// cleanup parameter stockId
	if (stockId != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)stockId, _stockId);
	}

	// cleanup parameter size
	if (size != NULL) {
		(*env)->ReleaseIntArrayElements(env, _size, (jint*)size, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1get_1storage_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkImageType result;
	jint _result;
	GtkImage* self;

	// convert parameter self
	self = (GtkImage*) _self;

	// call function
	result = gtk_image_get_storage_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1animation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _animation
)
{
	GtkImage* self;
	GdkPixbufAnimation* animation;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter animation
	animation = (GdkPixbufAnimation*) _animation;

	// call function
	gtk_image_set_from_animation(self, animation);

	// cleanup parameter self

	// cleanup parameter animation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	GtkImage* self;
	const gchar* filename;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter filename
	if (_filename == NULL) {
		filename = NULL;
	} else {
		filename = (const gchar*) bindings_java_getString(env, _filename);
		if (filename == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_image_set_from_file(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	if (filename != NULL) {
		bindings_java_releaseString(filename);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName,
	jint _size
)
{
	GtkImage* self;
	const gchar* iconName;
	GtkIconSize size;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar*) bindings_java_getString(env, _iconName);
		if (iconName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	gtk_image_set_from_icon_name(self, iconName, size);

	// cleanup parameter self

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_releaseString(iconName);
	}

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1icon_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iconSet,
	jint _size
)
{
	GtkImage* self;
	GtkIconSet* iconSet;
	GtkIconSize size;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter iconSet
	iconSet = (GtkIconSet*) _iconSet;

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	gtk_image_set_from_icon_set(self, iconSet, size);

	// cleanup parameter self

	// cleanup parameter iconSet

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	GtkImage* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_image_set_from_pixbuf(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1resource
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _resourcePath
)
{
	GtkImage* self;
	const gchar* resourcePath;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter resourcePath
	if (_resourcePath == NULL) {
		resourcePath = NULL;
	} else {
		resourcePath = (const gchar*) bindings_java_getString(env, _resourcePath);
		if (resourcePath == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_image_set_from_resource(self, resourcePath);

	// cleanup parameter self

	// cleanup parameter resourcePath
	if (resourcePath != NULL) {
		bindings_java_releaseString(resourcePath);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId,
	jint _size
)
{
	GtkImage* self;
	const gchar* stockId;
	GtkIconSize size;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	gtk_image_set_from_stock(self, stockId, size);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1from_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _surface
)
{
	GtkImage* self;
	cairo_surface_t* surface;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter surface
	surface = (cairo_surface_t*) _surface;

	// call function
	gtk_image_set_from_surface(self, surface);

	// cleanup parameter self

	// cleanup parameter surface
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImage_gtk_1image_1set_1pixel_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixelSize
)
{
	GtkImage* self;
	gint pixelSize;

	// convert parameter self
	self = (GtkImage*) _self;

	// convert parameter pixelSize
	pixelSize = (gint) _pixelSize;

	// call function
	gtk_image_set_pixel_size(self, pixelSize);

	// cleanup parameter self

	// cleanup parameter pixelSize
}
