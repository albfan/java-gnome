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
#include "org_gnome_gtk_GtkSelectionData.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSelectionData* result;
	jlong _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	gtk_selection_data_free(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1get_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_get_display(self);

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
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1get_1format
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_get_format(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1get_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_get_length(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1get_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_get_pixbuf(self);

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

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1get_1uris
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_get_uris(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1set_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	gboolean result;
	jboolean _result;
	GtkSelectionData* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	result = gtk_selection_data_set_pixbuf(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _str,
	jint _len
)
{
	gboolean result;
	jboolean _result;
	GtkSelectionData* self;
	const gchar* str;
	gint len;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// convert parameter str
	str = (const gchar*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// call function
	result = gtk_selection_data_set_text(self, str, len);

	// cleanup parameter self

	// cleanup parameter str
	bindings_java_releaseString(str);

	// cleanup parameter len

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1set_1uris
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _uris
)
{
	gboolean result;
	jboolean _result;
	GtkSelectionData* self;
	gchar** uris;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// convert parameter uris
	uris = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _uris);
	if (uris == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_selection_data_set_uris(self, uris);

	// cleanup parameter self

	// cleanup parameter uris
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)uris, _uris);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1targets_1include_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _writable
)
{
	gboolean result;
	jboolean _result;
	GtkSelectionData* self;
	gboolean writable;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// convert parameter writable
	writable = (gboolean) _writable;

	// call function
	result = gtk_selection_data_targets_include_image(self, writable);

	// cleanup parameter self

	// cleanup parameter writable

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1targets_1include_1rich_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _buffer
)
{
	gboolean result;
	jboolean _result;
	GtkSelectionData* self;
	GtkTextBuffer* buffer;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// convert parameter buffer
	buffer = (GtkTextBuffer*) _buffer;

	// call function
	result = gtk_selection_data_targets_include_rich_text(self, buffer);

	// cleanup parameter self

	// cleanup parameter buffer

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1targets_1include_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_targets_include_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSelectionData_gtk_1selection_1data_1targets_1include_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSelectionData* self;

	// convert parameter self
	self = (GtkSelectionData*) _self;

	// call function
	result = gtk_selection_data_targets_include_uri(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
