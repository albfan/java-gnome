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
#include "org_gnome_gtk_GtkAlignment.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAlignment_gtk_1alignment_1new
(
	JNIEnv* env,
	jclass cls,
	jfloat _xalign,
	jfloat _yalign,
	jfloat _xscale,
	jfloat _yscale
)
{
	GtkWidget* result;
	jlong _result;
	gfloat xalign;
	gfloat yalign;
	gfloat xscale;
	gfloat yscale;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// convert parameter yalign
	yalign = (gfloat) _yalign;

	// convert parameter xscale
	xscale = (gfloat) _xscale;

	// convert parameter yscale
	yscale = (gfloat) _yscale;

	// call function
	result = gtk_alignment_new(xalign, yalign, xscale, yscale);

	// cleanup parameter xalign

	// cleanup parameter yalign

	// cleanup parameter xscale

	// cleanup parameter yscale

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
Java_org_gnome_gtk_GtkAlignment_gtk_1alignment_1get_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _paddingTop,
	jintArray _paddingBottom,
	jintArray _paddingLeft,
	jintArray _paddingRight
)
{
	GtkAlignment* self;
	guint* paddingTop;
	guint* paddingBottom;
	guint* paddingLeft;
	guint* paddingRight;

	// convert parameter self
	self = (GtkAlignment*) _self;

	// convert parameter paddingTop
	if (_paddingTop == NULL) {
		paddingTop = NULL;
	} else {
		paddingTop = (guint*) (*env)->GetIntArrayElements(env, _paddingTop, NULL);
		if (paddingTop == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter paddingBottom
	if (_paddingBottom == NULL) {
		paddingBottom = NULL;
	} else {
		paddingBottom = (guint*) (*env)->GetIntArrayElements(env, _paddingBottom, NULL);
		if (paddingBottom == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter paddingLeft
	if (_paddingLeft == NULL) {
		paddingLeft = NULL;
	} else {
		paddingLeft = (guint*) (*env)->GetIntArrayElements(env, _paddingLeft, NULL);
		if (paddingLeft == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter paddingRight
	if (_paddingRight == NULL) {
		paddingRight = NULL;
	} else {
		paddingRight = (guint*) (*env)->GetIntArrayElements(env, _paddingRight, NULL);
		if (paddingRight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_alignment_get_padding(self, paddingTop, paddingBottom, paddingLeft, paddingRight);

	// cleanup parameter self

	// cleanup parameter paddingTop
	if (paddingTop != NULL) {
		(*env)->ReleaseIntArrayElements(env, _paddingTop, (jint*)paddingTop, 0);
	}

	// cleanup parameter paddingBottom
	if (paddingBottom != NULL) {
		(*env)->ReleaseIntArrayElements(env, _paddingBottom, (jint*)paddingBottom, 0);
	}

	// cleanup parameter paddingLeft
	if (paddingLeft != NULL) {
		(*env)->ReleaseIntArrayElements(env, _paddingLeft, (jint*)paddingLeft, 0);
	}

	// cleanup parameter paddingRight
	if (paddingRight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _paddingRight, (jint*)paddingRight, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAlignment_gtk_1alignment_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign,
	jfloat _yalign,
	jfloat _xscale,
	jfloat _yscale
)
{
	GtkAlignment* self;
	gfloat xalign;
	gfloat yalign;
	gfloat xscale;
	gfloat yscale;

	// convert parameter self
	self = (GtkAlignment*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// convert parameter yalign
	yalign = (gfloat) _yalign;

	// convert parameter xscale
	xscale = (gfloat) _xscale;

	// convert parameter yscale
	yscale = (gfloat) _yscale;

	// call function
	gtk_alignment_set(self, xalign, yalign, xscale, yscale);

	// cleanup parameter self

	// cleanup parameter xalign

	// cleanup parameter yalign

	// cleanup parameter xscale

	// cleanup parameter yscale
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAlignment_gtk_1alignment_1set_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _paddingTop,
	jint _paddingBottom,
	jint _paddingLeft,
	jint _paddingRight
)
{
	GtkAlignment* self;
	guint paddingTop;
	guint paddingBottom;
	guint paddingLeft;
	guint paddingRight;

	// convert parameter self
	self = (GtkAlignment*) _self;

	// convert parameter paddingTop
	paddingTop = (guint) _paddingTop;

	// convert parameter paddingBottom
	paddingBottom = (guint) _paddingBottom;

	// convert parameter paddingLeft
	paddingLeft = (guint) _paddingLeft;

	// convert parameter paddingRight
	paddingRight = (guint) _paddingRight;

	// call function
	gtk_alignment_set_padding(self, paddingTop, paddingBottom, paddingLeft, paddingRight);

	// cleanup parameter self

	// cleanup parameter paddingTop

	// cleanup parameter paddingBottom

	// cleanup parameter paddingLeft

	// cleanup parameter paddingRight
}
