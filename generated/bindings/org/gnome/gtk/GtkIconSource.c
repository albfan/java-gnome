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
#include "org_gnome_gtk_GtkIconSource.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkIconSource* result;
	jlong _result;

	// call function
	result = gtk_icon_source_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSource* result;
	jlong _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	gtk_icon_source_free(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextDirection result;
	jint _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_direction(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1direction_1wildcarded
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_direction_wildcarded(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_filename(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_icon_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_pixbuf(self);

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
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSize result;
	jint _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1size_1wildcarded
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_size_wildcarded(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1get_1state_1wildcarded
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkIconSource* self;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// call function
	result = gtk_icon_source_get_state_wildcarded(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _direction
)
{
	GtkIconSource* self;
	GtkTextDirection direction;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter direction
	direction = (GtkTextDirection) _direction;

	// call function
	gtk_icon_source_set_direction(self, direction);

	// cleanup parameter self

	// cleanup parameter direction
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1direction_1wildcarded
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkIconSource* self;
	gboolean setting;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_icon_source_set_direction_wildcarded(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	GtkIconSource* self;
	const gchar* filename;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_icon_source_set_filename(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName
)
{
	GtkIconSource* self;
	const gchar* iconName;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar*) bindings_java_getString(env, _iconName);
		if (iconName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_icon_source_set_icon_name(self, iconName);

	// cleanup parameter self

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_releaseString(iconName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	GtkIconSource* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_icon_source_set_pixbuf(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _size
)
{
	GtkIconSource* self;
	GtkIconSize size;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	gtk_icon_source_set_size(self, size);

	// cleanup parameter self

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1size_1wildcarded
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkIconSource* self;
	gboolean setting;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_icon_source_set_size_wildcarded(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSource_gtk_1icon_1source_1set_1state_1wildcarded
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkIconSource* self;
	gboolean setting;

	// convert parameter self
	self = (GtkIconSource*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_icon_source_set_state_wildcarded(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}
