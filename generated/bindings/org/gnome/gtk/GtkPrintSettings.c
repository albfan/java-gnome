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
#include "org_gnome_gtk_GtkPrintSettings.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkPrintSettings* result;
	jlong _result;

	// call function
	result = gtk_print_settings_new();

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
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _fileName
)
{
	GtkPrintSettings* result;
	jlong _result;
	const gchar* fileName;
	GError* error = NULL;

	// convert parameter fileName
	fileName = (const gchar*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_new_from_file(fileName, &error);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintSettings* result;
	jlong _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_copy(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	const gchar* result;
	jstring _result;
	GtkPrintSettings* self;
	const gchar* key;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_get(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1bool
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	gboolean result;
	jboolean _result;
	GtkPrintSettings* self;
	const gchar* key;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_get_bool(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1collate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_collate(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1default_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_default_source(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1dither
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_dither(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1double
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	gdouble result;
	jdouble _result;
	GtkPrintSettings* self;
	const gchar* key;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  0L; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_get_double(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1double_1with_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jdouble _def
)
{
	gdouble result;
	jdouble _result;
	GtkPrintSettings* self;
	const gchar* key;
	gdouble def;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  0L; // Java Exception already thrown
	}

	// convert parameter def
	def = (gdouble) _def;

	// call function
	result = gtk_print_settings_get_double_with_default(self, key, def);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter def

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1duplex
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintDuplex result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_duplex(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1finishings
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_finishings(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1int
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	gint result;
	jint _result;
	GtkPrintSettings* self;
	const gchar* key;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_get_int(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1int_1with_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jint _def
)
{
	gint result;
	jint _result;
	GtkPrintSettings* self;
	const gchar* key;
	gint def;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter def
	def = (gint) _def;

	// call function
	result = gtk_print_settings_get_int_with_default(self, key, def);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter def

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPrintSettings* self;
	const gchar* key;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  0L; // Java Exception already thrown
	}

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_print_settings_get_length(self, key, unit);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1media_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_media_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1n_1copies
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_n_copies(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1number_1up
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_number_up(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPageOrientation result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_orientation(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1output_1bin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_output_bin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1page_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPageSet result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_page_set(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1paper_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPrintSettings* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_print_settings_get_paper_height(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1paper_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPaperSize* result;
	jlong _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_paper_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1paper_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPrintSettings* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_print_settings_get_paper_width(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1print_1pages
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintPages result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_print_pages(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1printer
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_printer(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1printer_1lpi
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_printer_lpi(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1quality
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintQuality result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_quality(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1resolution
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_resolution(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1resolution_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_resolution_x(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1resolution_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_resolution_y(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1reverse
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_reverse(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_scale(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1get_1use_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPrintSettings* self;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// call function
	result = gtk_print_settings_get_use_color(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1has_1key
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	gboolean result;
	jboolean _result;
	GtkPrintSettings* self;
	const gchar* key;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_has_key(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1load_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fileName
)
{
	gboolean result;
	jboolean _result;
	GtkPrintSettings* self;
	const gchar* fileName;
	GError* error = NULL;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter fileName
	fileName = (const gchar*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_load_file(self, fileName, &error);

	// cleanup parameter self

	// cleanup parameter fileName
	bindings_java_releaseString(fileName);

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
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jstring _value
)
{
	GtkPrintSettings* self;
	const gchar* key;
	const gchar* value;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (const gchar*) bindings_java_getString(env, _value);
		if (value == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_print_settings_set(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
	if (value != NULL) {
		bindings_java_releaseString(value);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1bool
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jboolean _value
)
{
	GtkPrintSettings* self;
	const gchar* key;
	gboolean value;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (gboolean) _value;

	// call function
	gtk_print_settings_set_bool(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1collate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _collate
)
{
	GtkPrintSettings* self;
	gboolean collate;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter collate
	collate = (gboolean) _collate;

	// call function
	gtk_print_settings_set_collate(self, collate);

	// cleanup parameter self

	// cleanup parameter collate
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1default_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _defaultSource
)
{
	GtkPrintSettings* self;
	const gchar* defaultSource;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter defaultSource
	defaultSource = (const gchar*) bindings_java_getString(env, _defaultSource);
	if (defaultSource == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_settings_set_default_source(self, defaultSource);

	// cleanup parameter self

	// cleanup parameter defaultSource
	bindings_java_releaseString(defaultSource);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1dither
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _dither
)
{
	GtkPrintSettings* self;
	const gchar* dither;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter dither
	dither = (const gchar*) bindings_java_getString(env, _dither);
	if (dither == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_settings_set_dither(self, dither);

	// cleanup parameter self

	// cleanup parameter dither
	bindings_java_releaseString(dither);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1double
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jdouble _value
)
{
	GtkPrintSettings* self;
	const gchar* key;
	gdouble value;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (gdouble) _value;

	// call function
	gtk_print_settings_set_double(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1duplex
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _duplex
)
{
	GtkPrintSettings* self;
	GtkPrintDuplex duplex;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter duplex
	duplex = (GtkPrintDuplex) _duplex;

	// call function
	gtk_print_settings_set_duplex(self, duplex);

	// cleanup parameter self

	// cleanup parameter duplex
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1finishings
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _finishings
)
{
	GtkPrintSettings* self;
	const gchar* finishings;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter finishings
	finishings = (const gchar*) bindings_java_getString(env, _finishings);
	if (finishings == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_settings_set_finishings(self, finishings);

	// cleanup parameter self

	// cleanup parameter finishings
	bindings_java_releaseString(finishings);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1int
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jint _value
)
{
	GtkPrintSettings* self;
	const gchar* key;
	gint value;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (gint) _value;

	// call function
	gtk_print_settings_set_int(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jdouble _value,
	jint _unit
)
{
	GtkPrintSettings* self;
	const gchar* key;
	gdouble value;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (gdouble) _value;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_print_settings_set_length(self, key, value, unit);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1media_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _mediaType
)
{
	GtkPrintSettings* self;
	const gchar* mediaType;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter mediaType
	mediaType = (const gchar*) bindings_java_getString(env, _mediaType);
	if (mediaType == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_settings_set_media_type(self, mediaType);

	// cleanup parameter self

	// cleanup parameter mediaType
	bindings_java_releaseString(mediaType);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1n_1copies
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _numCopies
)
{
	GtkPrintSettings* self;
	gint numCopies;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter numCopies
	numCopies = (gint) _numCopies;

	// call function
	gtk_print_settings_set_n_copies(self, numCopies);

	// cleanup parameter self

	// cleanup parameter numCopies
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1number_1up
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _numberUp
)
{
	GtkPrintSettings* self;
	gint numberUp;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter numberUp
	numberUp = (gint) _numberUp;

	// call function
	gtk_print_settings_set_number_up(self, numberUp);

	// cleanup parameter self

	// cleanup parameter numberUp
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _orientation
)
{
	GtkPrintSettings* self;
	GtkPageOrientation orientation;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter orientation
	orientation = (GtkPageOrientation) _orientation;

	// call function
	gtk_print_settings_set_orientation(self, orientation);

	// cleanup parameter self

	// cleanup parameter orientation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1output_1bin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _outputBin
)
{
	GtkPrintSettings* self;
	const gchar* outputBin;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter outputBin
	outputBin = (const gchar*) bindings_java_getString(env, _outputBin);
	if (outputBin == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_settings_set_output_bin(self, outputBin);

	// cleanup parameter self

	// cleanup parameter outputBin
	bindings_java_releaseString(outputBin);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1page_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pageSet
)
{
	GtkPrintSettings* self;
	GtkPageSet pageSet;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter pageSet
	pageSet = (GtkPageSet) _pageSet;

	// call function
	gtk_print_settings_set_page_set(self, pageSet);

	// cleanup parameter self

	// cleanup parameter pageSet
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1paper_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _height,
	jint _unit
)
{
	GtkPrintSettings* self;
	gdouble height;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter height
	height = (gdouble) _height;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_print_settings_set_paper_height(self, height, unit);

	// cleanup parameter self

	// cleanup parameter height

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1paper_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _paperSize
)
{
	GtkPrintSettings* self;
	GtkPaperSize* paperSize;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter paperSize
	paperSize = (GtkPaperSize*) _paperSize;

	// call function
	gtk_print_settings_set_paper_size(self, paperSize);

	// cleanup parameter self

	// cleanup parameter paperSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1paper_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _width,
	jint _unit
)
{
	GtkPrintSettings* self;
	gdouble width;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter width
	width = (gdouble) _width;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_print_settings_set_paper_width(self, width, unit);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1print_1pages
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pages
)
{
	GtkPrintSettings* self;
	GtkPrintPages pages;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter pages
	pages = (GtkPrintPages) _pages;

	// call function
	gtk_print_settings_set_print_pages(self, pages);

	// cleanup parameter self

	// cleanup parameter pages
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1printer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _printer
)
{
	GtkPrintSettings* self;
	const gchar* printer;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter printer
	printer = (const gchar*) bindings_java_getString(env, _printer);
	if (printer == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_settings_set_printer(self, printer);

	// cleanup parameter self

	// cleanup parameter printer
	bindings_java_releaseString(printer);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1printer_1lpi
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _lpi
)
{
	GtkPrintSettings* self;
	gdouble lpi;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter lpi
	lpi = (gdouble) _lpi;

	// call function
	gtk_print_settings_set_printer_lpi(self, lpi);

	// cleanup parameter self

	// cleanup parameter lpi
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1quality
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _quality
)
{
	GtkPrintSettings* self;
	GtkPrintQuality quality;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter quality
	quality = (GtkPrintQuality) _quality;

	// call function
	gtk_print_settings_set_quality(self, quality);

	// cleanup parameter self

	// cleanup parameter quality
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1resolution
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _resolution
)
{
	GtkPrintSettings* self;
	gint resolution;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter resolution
	resolution = (gint) _resolution;

	// call function
	gtk_print_settings_set_resolution(self, resolution);

	// cleanup parameter self

	// cleanup parameter resolution
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1resolution_1xy
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _resolutionX,
	jint _resolutionY
)
{
	GtkPrintSettings* self;
	gint resolutionX;
	gint resolutionY;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter resolutionX
	resolutionX = (gint) _resolutionX;

	// convert parameter resolutionY
	resolutionY = (gint) _resolutionY;

	// call function
	gtk_print_settings_set_resolution_xy(self, resolutionX, resolutionY);

	// cleanup parameter self

	// cleanup parameter resolutionX

	// cleanup parameter resolutionY
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1reverse
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _reverse
)
{
	GtkPrintSettings* self;
	gboolean reverse;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter reverse
	reverse = (gboolean) _reverse;

	// call function
	gtk_print_settings_set_reverse(self, reverse);

	// cleanup parameter self

	// cleanup parameter reverse
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _scale
)
{
	GtkPrintSettings* self;
	gdouble scale;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter scale
	scale = (gdouble) _scale;

	// call function
	gtk_print_settings_set_scale(self, scale);

	// cleanup parameter self

	// cleanup parameter scale
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1set_1use_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useColor
)
{
	GtkPrintSettings* self;
	gboolean useColor;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter useColor
	useColor = (gboolean) _useColor;

	// call function
	gtk_print_settings_set_use_color(self, useColor);

	// cleanup parameter self

	// cleanup parameter useColor
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1to_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fileName
)
{
	gboolean result;
	jboolean _result;
	GtkPrintSettings* self;
	const gchar* fileName;
	GError* error = NULL;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter fileName
	fileName = (const gchar*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_print_settings_to_file(self, fileName, &error);

	// cleanup parameter self

	// cleanup parameter fileName
	bindings_java_releaseString(fileName);

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
Java_org_gnome_gtk_GtkPrintSettings_gtk_1print_1settings_1unset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	GtkPrintSettings* self;
	const gchar* key;

	// convert parameter self
	self = (GtkPrintSettings*) _self;

	// convert parameter key
	key = (const gchar*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_settings_unset(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);
}
