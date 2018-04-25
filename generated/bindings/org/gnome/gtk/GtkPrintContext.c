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
#include "org_gnome_gtk_GtkPrintContext.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1create_1pango_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoContext* result;
	jlong _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_create_pango_context(self);

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
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1create_1pango_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_create_pango_layout(self);

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
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1cairo_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_t* result;
	jlong _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_get_cairo_context(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1dpi_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_get_dpi_x(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1dpi_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_get_dpi_y(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1hard_1margins
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _top,
	jdoubleArray _bottom,
	jdoubleArray _left,
	jdoubleArray _right
)
{
	gboolean result;
	jboolean _result;
	GtkPrintContext* self;
	gdouble* top;
	gdouble* bottom;
	gdouble* left;
	gdouble* right;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// convert parameter top
	if (_top == NULL) {
		top = NULL;
	} else {
		top = (gdouble*) (*env)->GetDoubleArrayElements(env, _top, NULL);
		if (top == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter bottom
	if (_bottom == NULL) {
		bottom = NULL;
	} else {
		bottom = (gdouble*) (*env)->GetDoubleArrayElements(env, _bottom, NULL);
		if (bottom == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter left
	if (_left == NULL) {
		left = NULL;
	} else {
		left = (gdouble*) (*env)->GetDoubleArrayElements(env, _left, NULL);
		if (left == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter right
	if (_right == NULL) {
		right = NULL;
	} else {
		right = (gdouble*) (*env)->GetDoubleArrayElements(env, _right, NULL);
		if (right == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_print_context_get_hard_margins(self, top, bottom, left, right);

	// cleanup parameter self

	// cleanup parameter top
	if (top != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _top, (jdouble*)top, 0);
	}

	// cleanup parameter bottom
	if (bottom != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _bottom, (jdouble*)bottom, 0);
	}

	// cleanup parameter left
	if (left != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _left, (jdouble*)left, 0);
	}

	// cleanup parameter right
	if (right != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _right, (jdouble*)right, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_get_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1page_1setup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPageSetup* result;
	jlong _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_get_page_setup(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1pango_1fontmap
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontMap* result;
	jlong _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_get_pango_fontmap(self);

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

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkPrintContext* self;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// call function
	result = gtk_print_context_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintContext_gtk_1print_1context_1set_1cairo_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cr,
	jdouble _dpiX,
	jdouble _dpiY
)
{
	GtkPrintContext* self;
	cairo_t* cr;
	double dpiX;
	double dpiY;

	// convert parameter self
	self = (GtkPrintContext*) _self;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// convert parameter dpiX
	dpiX = (double) _dpiX;

	// convert parameter dpiY
	dpiY = (double) _dpiY;

	// call function
	gtk_print_context_set_cairo_context(self, cr, dpiX, dpiY);

	// cleanup parameter self

	// cleanup parameter cr

	// cleanup parameter dpiX

	// cleanup parameter dpiY
}
