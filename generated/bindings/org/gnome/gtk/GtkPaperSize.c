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
#include "org_gnome_gtk_GtkPaperSize.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _name
)
{
	GtkPaperSize* result;
	jlong _result;
	const gchar* name;

	// convert parameter name
	if (_name == NULL) {
		name = NULL;
	} else {
		name = (const gchar*) bindings_java_getString(env, _name);
		if (name == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_paper_size_new(name);

	// cleanup parameter name
	if (name != NULL) {
		bindings_java_releaseString(name);
	}

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1new_1custom
(
	JNIEnv* env,
	jclass cls,
	jstring _name,
	jstring _displayName,
	jdouble _width,
	jdouble _height,
	jint _unit
)
{
	GtkPaperSize* result;
	jlong _result;
	const gchar* name;
	const gchar* displayName;
	gdouble width;
	gdouble height;
	GtkUnit unit;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter displayName
	displayName = (const gchar*) bindings_java_getString(env, _displayName);
	if (displayName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter width
	width = (gdouble) _width;

	// convert parameter height
	height = (gdouble) _height;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_paper_size_new_custom(name, displayName, width, height, unit);

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter displayName
	bindings_java_releaseString(displayName);

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1new_1from_1ipp
(
	JNIEnv* env,
	jclass cls,
	jstring _ippName,
	jdouble _width,
	jdouble _height
)
{
	GtkPaperSize* result;
	jlong _result;
	const gchar* ippName;
	gdouble width;
	gdouble height;

	// convert parameter ippName
	ippName = (const gchar*) bindings_java_getString(env, _ippName);
	if (ippName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter width
	width = (gdouble) _width;

	// convert parameter height
	height = (gdouble) _height;

	// call function
	result = gtk_paper_size_new_from_ipp(ippName, width, height);

	// cleanup parameter ippName
	bindings_java_releaseString(ippName);

	// cleanup parameter width

	// cleanup parameter height

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1new_1from_1ppd
(
	JNIEnv* env,
	jclass cls,
	jstring _ppdName,
	jstring _ppdDisplayName,
	jdouble _width,
	jdouble _height
)
{
	GtkPaperSize* result;
	jlong _result;
	const gchar* ppdName;
	const gchar* ppdDisplayName;
	gdouble width;
	gdouble height;

	// convert parameter ppdName
	ppdName = (const gchar*) bindings_java_getString(env, _ppdName);
	if (ppdName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter ppdDisplayName
	ppdDisplayName = (const gchar*) bindings_java_getString(env, _ppdDisplayName);
	if (ppdDisplayName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter width
	width = (gdouble) _width;

	// convert parameter height
	height = (gdouble) _height;

	// call function
	result = gtk_paper_size_new_from_ppd(ppdName, ppdDisplayName, width, height);

	// cleanup parameter ppdName
	bindings_java_releaseString(ppdName);

	// cleanup parameter ppdDisplayName
	bindings_java_releaseString(ppdDisplayName);

	// cleanup parameter width

	// cleanup parameter height

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPaperSize* result;
	jlong _result;
	GtkPaperSize* self;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// call function
	result = gtk_paper_size_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPaperSize* self;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// call function
	gtk_paper_size_free(self);

	// cleanup parameter self
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1default_1bottom_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPaperSize* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_paper_size_get_default_bottom_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1default_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPaperSize* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_paper_size_get_default_left_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1default_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPaperSize* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_paper_size_get_default_right_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1default_1top_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPaperSize* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_paper_size_get_default_top_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1display_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPaperSize* self;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// call function
	result = gtk_paper_size_get_display_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPaperSize* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_paper_size_get_height(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPaperSize* self;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// call function
	result = gtk_paper_size_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1ppd_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPaperSize* self;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// call function
	result = gtk_paper_size_get_ppd_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkPaperSize* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_paper_size_get_width(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1is_1custom
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPaperSize* self;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// call function
	result = gtk_paper_size_is_custom(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1is_1equal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _size2
)
{
	gboolean result;
	jboolean _result;
	GtkPaperSize* self;
	GtkPaperSize* size2;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter size2
	size2 = (GtkPaperSize*) _size2;

	// call function
	result = gtk_paper_size_is_equal(self, size2);

	// cleanup parameter self

	// cleanup parameter size2

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1is_1ipp
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPaperSize* self;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// call function
	result = gtk_paper_size_is_ipp(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPaperSize_gtk_1paper_1size_1set_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _width,
	jdouble _height,
	jint _unit
)
{
	GtkPaperSize* self;
	gdouble width;
	gdouble height;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPaperSize*) _self;

	// convert parameter width
	width = (gdouble) _width;

	// convert parameter height
	height = (gdouble) _height;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_paper_size_set_size(self, width, height, unit);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter unit
}
