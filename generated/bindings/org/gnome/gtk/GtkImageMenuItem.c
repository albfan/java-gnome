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
#include "org_gnome_gtk_GtkImageMenuItem.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_image_menu_item_new();

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
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1new_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jstring _stockId,
	jlong _accelGroup
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* stockId;
	GtkAccelGroup* accelGroup;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	result = gtk_image_menu_item_new_from_stock(stockId, accelGroup);

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// cleanup parameter accelGroup

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
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1new_1with_1label
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
	result = gtk_image_menu_item_new_with_label(label);

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
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1new_1with_1mnemonic
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
	result = gtk_image_menu_item_new_with_mnemonic(label);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1get_1always_1show_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkImageMenuItem* self;

	// convert parameter self
	self = (GtkImageMenuItem*) _self;

	// call function
	result = gtk_image_menu_item_get_always_show_image(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1get_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkImageMenuItem* self;

	// convert parameter self
	self = (GtkImageMenuItem*) _self;

	// call function
	result = gtk_image_menu_item_get_image(self);

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
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1get_1use_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkImageMenuItem* self;

	// convert parameter self
	self = (GtkImageMenuItem*) _self;

	// call function
	result = gtk_image_menu_item_get_use_stock(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1set_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelGroup
)
{
	GtkImageMenuItem* self;
	GtkAccelGroup* accelGroup;

	// convert parameter self
	self = (GtkImageMenuItem*) _self;

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	gtk_image_menu_item_set_accel_group(self, accelGroup);

	// cleanup parameter self

	// cleanup parameter accelGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1set_1always_1show_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _alwaysShow
)
{
	GtkImageMenuItem* self;
	gboolean alwaysShow;

	// convert parameter self
	self = (GtkImageMenuItem*) _self;

	// convert parameter alwaysShow
	alwaysShow = (gboolean) _alwaysShow;

	// call function
	gtk_image_menu_item_set_always_show_image(self, alwaysShow);

	// cleanup parameter self

	// cleanup parameter alwaysShow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1set_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _image
)
{
	GtkImageMenuItem* self;
	GtkWidget* image;

	// convert parameter self
	self = (GtkImageMenuItem*) _self;

	// convert parameter image
	image = (GtkWidget*) _image;

	// call function
	gtk_image_menu_item_set_image(self, image);

	// cleanup parameter self

	// cleanup parameter image
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkImageMenuItem_gtk_1image_1menu_1item_1set_1use_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useStock
)
{
	GtkImageMenuItem* self;
	gboolean useStock;

	// convert parameter self
	self = (GtkImageMenuItem*) _self;

	// convert parameter useStock
	useStock = (gboolean) _useStock;

	// call function
	gtk_image_menu_item_set_use_stock(self, useStock);

	// cleanup parameter self

	// cleanup parameter useStock
}
