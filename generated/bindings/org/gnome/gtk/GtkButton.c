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
#include "org_gnome_gtk_GtkButton.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_button_new();

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
Java_org_gnome_gtk_GtkButton_gtk_1button_1new_1from_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jstring _iconName,
	jint _size
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* iconName;
	GtkIconSize size;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar*) bindings_java_getString(env, _iconName);
		if (iconName == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	result = gtk_button_new_from_icon_name(iconName, size);

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_releaseString(iconName);
	}

	// cleanup parameter size

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
Java_org_gnome_gtk_GtkButton_gtk_1button_1new_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jstring _stockId
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* stockId;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_button_new_from_stock(stockId);

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

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
Java_org_gnome_gtk_GtkButton_gtk_1button_1new_1with_1label
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
	result = gtk_button_new_with_label(label);

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
Java_org_gnome_gtk_GtkButton_gtk_1button_1new_1with_1mnemonic
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
	result = gtk_button_new_with_mnemonic(label);

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
Java_org_gnome_gtk_GtkButton_gtk_1button_1clicked
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	gtk_button_clicked(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1enter
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	gtk_button_enter(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloatArray _xalign,
	jfloatArray _yalign
)
{
	GtkButton* self;
	gfloat* xalign;
	gfloat* yalign;

	// convert parameter self
	self = (GtkButton*) _self;

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
	gtk_button_get_alignment(self, xalign, yalign);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1always_1show_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_always_show_image(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1event_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_event_window(self);

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
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1focus_1on_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_focus_on_click(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_image(self);

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
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1image_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPositionType result;
	jint _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_image_position(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1relief
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkReliefStyle result;
	jint _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_relief(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1use_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_use_stock(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1get_1use_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	result = gtk_button_get_use_underline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1leave
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	gtk_button_leave(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1pressed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	gtk_button_pressed(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1released
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkButton* self;

	// convert parameter self
	self = (GtkButton*) _self;

	// call function
	gtk_button_released(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign,
	jfloat _yalign
)
{
	GtkButton* self;
	gfloat xalign;
	gfloat yalign;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// convert parameter yalign
	yalign = (gfloat) _yalign;

	// call function
	gtk_button_set_alignment(self, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter xalign

	// cleanup parameter yalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1always_1show_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _alwaysShow
)
{
	GtkButton* self;
	gboolean alwaysShow;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter alwaysShow
	alwaysShow = (gboolean) _alwaysShow;

	// call function
	gtk_button_set_always_show_image(self, alwaysShow);

	// cleanup parameter self

	// cleanup parameter alwaysShow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1focus_1on_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _focusOnClick
)
{
	GtkButton* self;
	gboolean focusOnClick;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter focusOnClick
	focusOnClick = (gboolean) _focusOnClick;

	// call function
	gtk_button_set_focus_on_click(self, focusOnClick);

	// cleanup parameter self

	// cleanup parameter focusOnClick
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _image
)
{
	GtkButton* self;
	GtkWidget* image;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter image
	image = (GtkWidget*) _image;

	// call function
	gtk_button_set_image(self, image);

	// cleanup parameter self

	// cleanup parameter image
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1image_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkButton* self;
	GtkPositionType position;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter position
	position = (GtkPositionType) _position;

	// call function
	gtk_button_set_image_position(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _label
)
{
	GtkButton* self;
	const gchar* label;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_button_set_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
	bindings_java_releaseString(label);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1relief
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _relief
)
{
	GtkButton* self;
	GtkReliefStyle relief;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter relief
	relief = (GtkReliefStyle) _relief;

	// call function
	gtk_button_set_relief(self, relief);

	// cleanup parameter self

	// cleanup parameter relief
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1use_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useStock
)
{
	GtkButton* self;
	gboolean useStock;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter useStock
	useStock = (gboolean) _useStock;

	// call function
	gtk_button_set_use_stock(self, useStock);

	// cleanup parameter self

	// cleanup parameter useStock
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkButton_gtk_1button_1set_1use_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useUnderline
)
{
	GtkButton* self;
	gboolean useUnderline;

	// convert parameter self
	self = (GtkButton*) _self;

	// convert parameter useUnderline
	useUnderline = (gboolean) _useUnderline;

	// call function
	gtk_button_set_use_underline(self, useUnderline);

	// cleanup parameter self

	// cleanup parameter useUnderline
}
