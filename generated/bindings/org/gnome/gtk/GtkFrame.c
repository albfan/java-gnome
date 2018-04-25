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
#include "org_gnome_gtk_GtkFrame.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _label
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* label;

	// convert parameter label
	if (_label == NULL) {
		label = NULL;
	} else {
		label = (const gchar*) bindings_java_getString(env, _label);
		if (label == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_frame_new(label);

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
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

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1get_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkFrame* self;

	// convert parameter self
	self = (GtkFrame*) _self;

	// call function
	result = gtk_frame_get_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1get_1label_1align
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloatArray _xalign,
	jfloatArray _yalign
)
{
	GtkFrame* self;
	gfloat* xalign;
	gfloat* yalign;

	// convert parameter self
	self = (GtkFrame*) _self;

	// convert parameter xalign
	if (_xalign == NULL) {
		xalign = NULL;
	} else {
		xalign = (gfloat*) (*env)->GetFloatArrayElements(env, _xalign, NULL);
		if (xalign == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter yalign
	if (_yalign == NULL) {
		yalign = NULL;
	} else {
		yalign = (gfloat*) (*env)->GetFloatArrayElements(env, _yalign, NULL);
		if (yalign == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_frame_get_label_align(self, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter xalign
	if (xalign != NULL) {
		(*env)->ReleaseFloatArrayElements(env, _xalign, (jfloat*)xalign, 0);
	}

	// cleanup parameter yalign
	if (yalign != NULL) {
		(*env)->ReleaseFloatArrayElements(env, _yalign, (jfloat*)yalign, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1get_1label_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFrame* self;

	// convert parameter self
	self = (GtkFrame*) _self;

	// call function
	result = gtk_frame_get_label_widget(self);

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
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1get_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkShadowType result;
	jint _result;
	GtkFrame* self;

	// convert parameter self
	self = (GtkFrame*) _self;

	// call function
	result = gtk_frame_get_shadow_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1set_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _label
)
{
	GtkFrame* self;
	const gchar* label;

	// convert parameter self
	self = (GtkFrame*) _self;

	// convert parameter label
	if (_label == NULL) {
		label = NULL;
	} else {
		label = (const gchar*) bindings_java_getString(env, _label);
		if (label == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_frame_set_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1set_1label_1align
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign,
	jfloat _yalign
)
{
	GtkFrame* self;
	gfloat xalign;
	gfloat yalign;

	// convert parameter self
	self = (GtkFrame*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// convert parameter yalign
	yalign = (gfloat) _yalign;

	// call function
	gtk_frame_set_label_align(self, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter xalign

	// cleanup parameter yalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1set_1label_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _labelWidget
)
{
	GtkFrame* self;
	GtkWidget* labelWidget;

	// convert parameter self
	self = (GtkFrame*) _self;

	// convert parameter labelWidget
	labelWidget = (GtkWidget*) _labelWidget;

	// call function
	gtk_frame_set_label_widget(self, labelWidget);

	// cleanup parameter self

	// cleanup parameter labelWidget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFrame_gtk_1frame_1set_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GtkFrame* self;
	GtkShadowType type;

	// convert parameter self
	self = (GtkFrame*) _self;

	// convert parameter type
	type = (GtkShadowType) _type;

	// call function
	gtk_frame_set_shadow_type(self, type);

	// cleanup parameter self

	// cleanup parameter type
}
