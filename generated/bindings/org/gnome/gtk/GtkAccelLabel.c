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
#include "org_gnome_gtk_GtkAccelLabel.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAccelLabel_gtk_1accel_1label_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _string
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* string;

	// convert parameter string
	string = (const gchar*) bindings_java_getString(env, _string);
	if (string == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_accel_label_new(string);

	// cleanup parameter string
	bindings_java_releaseString(string);

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
Java_org_gnome_gtk_GtkAccelLabel_gtk_1accel_1label_1get_1accel
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _acceleratorKey,
	jintArray _acceleratorMods
)
{
	GtkAccelLabel* self;
	guint* acceleratorKey;
	GdkModifierType* acceleratorMods;

	// convert parameter self
	self = (GtkAccelLabel*) _self;

	// convert parameter acceleratorKey
	if (_acceleratorKey == NULL) {
		acceleratorKey = NULL;
	} else {
		acceleratorKey = (guint*) (*env)->GetIntArrayElements(env, _acceleratorKey, NULL);
		if (acceleratorKey == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter acceleratorMods
	if (_acceleratorMods == NULL) {
		acceleratorMods = NULL;
	} else {
		acceleratorMods = (GdkModifierType*) (*env)->GetIntArrayElements(env, _acceleratorMods, NULL);
		if (acceleratorMods == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_accel_label_get_accel(self, acceleratorKey, acceleratorMods);

	// cleanup parameter self

	// cleanup parameter acceleratorKey
	if (acceleratorKey != NULL) {
		(*env)->ReleaseIntArrayElements(env, _acceleratorKey, (jint*)acceleratorKey, 0);
	}

	// cleanup parameter acceleratorMods
	if (acceleratorMods != NULL) {
		(*env)->ReleaseIntArrayElements(env, _acceleratorMods, (jint*)acceleratorMods, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAccelLabel_gtk_1accel_1label_1get_1accel_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkAccelLabel* self;

	// convert parameter self
	self = (GtkAccelLabel*) _self;

	// call function
	result = gtk_accel_label_get_accel_widget(self);

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
Java_org_gnome_gtk_GtkAccelLabel_gtk_1accel_1label_1get_1accel_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkAccelLabel* self;

	// convert parameter self
	self = (GtkAccelLabel*) _self;

	// call function
	result = gtk_accel_label_get_accel_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAccelLabel_gtk_1accel_1label_1refetch
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAccelLabel* self;

	// convert parameter self
	self = (GtkAccelLabel*) _self;

	// call function
	result = gtk_accel_label_refetch(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelLabel_gtk_1accel_1label_1set_1accel
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _acceleratorKey,
	jint _acceleratorMods
)
{
	GtkAccelLabel* self;
	guint acceleratorKey;
	GdkModifierType acceleratorMods;

	// convert parameter self
	self = (GtkAccelLabel*) _self;

	// convert parameter acceleratorKey
	acceleratorKey = (guint) _acceleratorKey;

	// convert parameter acceleratorMods
	acceleratorMods = (GdkModifierType) _acceleratorMods;

	// call function
	gtk_accel_label_set_accel(self, acceleratorKey, acceleratorMods);

	// cleanup parameter self

	// cleanup parameter acceleratorKey

	// cleanup parameter acceleratorMods
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAccelLabel_gtk_1accel_1label_1set_1accel_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelWidget
)
{
	GtkAccelLabel* self;
	GtkWidget* accelWidget;

	// convert parameter self
	self = (GtkAccelLabel*) _self;

	// convert parameter accelWidget
	accelWidget = (GtkWidget*) _accelWidget;

	// call function
	gtk_accel_label_set_accel_widget(self, accelWidget);

	// cleanup parameter self

	// cleanup parameter accelWidget
}
