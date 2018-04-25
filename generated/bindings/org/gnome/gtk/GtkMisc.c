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
#include "org_gnome_gtk_GtkMisc.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMisc_gtk_1misc_1get_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloatArray _xalign,
	jfloatArray _yalign
)
{
	GtkMisc* self;
	gfloat* xalign;
	gfloat* yalign;

	// convert parameter self
	self = (GtkMisc*) _self;

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
	gtk_misc_get_alignment(self, xalign, yalign);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMisc_gtk_1misc_1get_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _xpad,
	jintArray _ypad
)
{
	GtkMisc* self;
	gint* xpad;
	gint* ypad;

	// convert parameter self
	self = (GtkMisc*) _self;

	// convert parameter xpad
	if (_xpad == NULL) {
		xpad = NULL;
	} else {
		xpad = (gint*) (*env)->GetIntArrayElements(env, _xpad, NULL);
		if (xpad == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter ypad
	if (_ypad == NULL) {
		ypad = NULL;
	} else {
		ypad = (gint*) (*env)->GetIntArrayElements(env, _ypad, NULL);
		if (ypad == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_misc_get_padding(self, xpad, ypad);

	// cleanup parameter self

	// cleanup parameter xpad
	if (xpad != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xpad, (jint*)xpad, 0);
	}

	// cleanup parameter ypad
	if (ypad != NULL) {
		(*env)->ReleaseIntArrayElements(env, _ypad, (jint*)ypad, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMisc_gtk_1misc_1set_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign,
	jfloat _yalign
)
{
	GtkMisc* self;
	gfloat xalign;
	gfloat yalign;

	// convert parameter self
	self = (GtkMisc*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// convert parameter yalign
	yalign = (gfloat) _yalign;

	// call function
	gtk_misc_set_alignment(self, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter xalign

	// cleanup parameter yalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMisc_gtk_1misc_1set_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _xpad,
	jint _ypad
)
{
	GtkMisc* self;
	gint xpad;
	gint ypad;

	// convert parameter self
	self = (GtkMisc*) _self;

	// convert parameter xpad
	xpad = (gint) _xpad;

	// convert parameter ypad
	ypad = (gint) _ypad;

	// call function
	gtk_misc_set_padding(self, xpad, ypad);

	// cleanup parameter self

	// cleanup parameter xpad

	// cleanup parameter ypad
}
