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
#include "org_gnome_gtk_GtkMenuItem.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_menu_item_new();

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
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1new_1with_1label
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
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_menu_item_new_with_label(label);

	// cleanup parameter label
	bindings_java_releaseString(label);

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
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1new_1with_1mnemonic
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
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_menu_item_new_with_mnemonic(label);

	// cleanup parameter label
	bindings_java_releaseString(label);

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
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	gtk_menu_item_activate(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1deselect
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	gtk_menu_item_deselect(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1get_1accel_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	result = gtk_menu_item_get_accel_path(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1get_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	result = gtk_menu_item_get_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1get_1reserve_1indicator
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	result = gtk_menu_item_get_reserve_indicator(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1get_1right_1justified
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	result = gtk_menu_item_get_right_justified(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1get_1submenu
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	result = gtk_menu_item_get_submenu(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1get_1use_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	result = gtk_menu_item_get_use_underline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1select
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenuItem* self;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// call function
	gtk_menu_item_select(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1set_1accel_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _accelPath
)
{
	GtkMenuItem* self;
	const gchar* accelPath;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter accelPath
	if (_accelPath == NULL) {
		accelPath = NULL;
	} else {
		accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
		if (accelPath == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_menu_item_set_accel_path(self, accelPath);

	// cleanup parameter self

	// cleanup parameter accelPath
	if (accelPath != NULL) {
		bindings_java_releaseString(accelPath);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1set_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _label
)
{
	GtkMenuItem* self;
	const gchar* label;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_menu_item_set_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
	bindings_java_releaseString(label);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1set_1reserve_1indicator
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _reserve
)
{
	GtkMenuItem* self;
	gboolean reserve;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter reserve
	reserve = (gboolean) _reserve;

	// call function
	gtk_menu_item_set_reserve_indicator(self, reserve);

	// cleanup parameter self

	// cleanup parameter reserve
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1set_1right_1justified
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _rightJustified
)
{
	GtkMenuItem* self;
	gboolean rightJustified;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter rightJustified
	rightJustified = (gboolean) _rightJustified;

	// call function
	gtk_menu_item_set_right_justified(self, rightJustified);

	// cleanup parameter self

	// cleanup parameter rightJustified
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1set_1submenu
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _submenu
)
{
	GtkMenuItem* self;
	GtkWidget* submenu;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter submenu
	submenu = (GtkWidget*) _submenu;

	// call function
	gtk_menu_item_set_submenu(self, submenu);

	// cleanup parameter self

	// cleanup parameter submenu
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1set_1use_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkMenuItem* self;
	gboolean setting;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_menu_item_set_use_underline(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1toggle_1size_1allocate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _allocation
)
{
	GtkMenuItem* self;
	gint allocation;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter allocation
	allocation = (gint) _allocation;

	// call function
	gtk_menu_item_toggle_size_allocate(self, allocation);

	// cleanup parameter self

	// cleanup parameter allocation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuItem_gtk_1menu_1item_1toggle_1size_1request
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _requisition
)
{
	GtkMenuItem* self;
	gint* requisition;

	// convert parameter self
	self = (GtkMenuItem*) _self;

	// convert parameter requisition
	requisition = (gint*) (*env)->GetIntArrayElements(env, _requisition, NULL);
	if (requisition == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_menu_item_toggle_size_request(self, requisition);

	// cleanup parameter self

	// cleanup parameter requisition
	(*env)->ReleaseIntArrayElements(env, _requisition, (jint*)requisition, 0);
}
