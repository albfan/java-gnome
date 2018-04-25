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
#include "org_gnome_gtk_GtkPageSetup.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkPageSetup* result;
	jlong _result;

	// call function
	result = gtk_page_setup_new();

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
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1new_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _fileName
)
{
	GtkPageSetup* result;
	jlong _result;
	const gchar* fileName;
	GError* error = NULL;

	// convert parameter fileName
	fileName = (const gchar*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_page_setup_new_from_file(fileName, &error);

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
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPageSetup* result;
	jlong _result;
	GtkPageSetup* self;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// call function
	result = gtk_page_setup_copy(self);

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

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1bottom_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_bottom_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_left_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPageOrientation result;
	jint _result;
	GtkPageSetup* self;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// call function
	result = gtk_page_setup_get_orientation(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1page_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_page_height(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1page_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_page_width(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1paper_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_paper_height(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1paper_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPaperSize* result;
	jlong _result;
	GtkPageSetup* self;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// call function
	result = gtk_page_setup_get_paper_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1paper_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_paper_width(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_right_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1get_1top_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPageSetup* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_page_setup_get_top_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1load_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fileName
)
{
	gboolean result;
	jboolean _result;
	GtkPageSetup* self;
	const char* fileName;
	GError* error = NULL;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter fileName
	fileName = (const char*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_page_setup_load_file(self, fileName, &error);

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
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1set_1bottom_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkPageSetup* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_page_setup_set_bottom_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1set_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkPageSetup* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_page_setup_set_left_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1set_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _orientation
)
{
	GtkPageSetup* self;
	GtkPageOrientation orientation;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter orientation
	orientation = (GtkPageOrientation) _orientation;

	// call function
	gtk_page_setup_set_orientation(self, orientation);

	// cleanup parameter self

	// cleanup parameter orientation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1set_1paper_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _size
)
{
	GtkPageSetup* self;
	GtkPaperSize* size;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter size
	size = (GtkPaperSize*) _size;

	// call function
	gtk_page_setup_set_paper_size(self, size);

	// cleanup parameter self

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1set_1paper_1size_1and_1default_1margins
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _size
)
{
	GtkPageSetup* self;
	GtkPaperSize* size;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter size
	size = (GtkPaperSize*) _size;

	// call function
	gtk_page_setup_set_paper_size_and_default_margins(self, size);

	// cleanup parameter self

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1set_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkPageSetup* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_page_setup_set_right_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1set_1top_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkPageSetup* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_page_setup_set_top_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPageSetup_gtk_1page_1setup_1to_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fileName
)
{
	gboolean result;
	jboolean _result;
	GtkPageSetup* self;
	const char* fileName;
	GError* error = NULL;

	// convert parameter self
	self = (GtkPageSetup*) _self;

	// convert parameter fileName
	fileName = (const char*) bindings_java_getString(env, _fileName);
	if (fileName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_page_setup_to_file(self, fileName, &error);

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
