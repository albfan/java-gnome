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
#include "org_gnome_gtk_GtkComboBox.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_combo_box_new();

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
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1new_1with_1entry
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_combo_box_new_with_entry();

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
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1new_1with_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _model
)
{
	GtkWidget* result;
	jlong _result;
	GtkTreeModel* model;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	result = gtk_combo_box_new_with_model(model);

	// cleanup parameter model

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
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1new_1with_1model_1and_1entry
(
	JNIEnv* env,
	jclass cls,
	jlong _model
)
{
	GtkWidget* result;
	jlong _result;
	GtkTreeModel* model;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	result = gtk_combo_box_new_with_model_and_entry(model);

	// cleanup parameter model

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_active(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1active_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_active_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1active_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkComboBox* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_combo_box_get_active_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1add_1tearoffs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_add_tearoffs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1button_1sensitivity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSensitivityType result;
	jint _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_button_sensitivity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1column_1span_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_column_span_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1entry_1text_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_entry_text_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1focus_1on_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_focus_on_click(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1has_1entry
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_has_entry(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1id_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_id_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_model(self);

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
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1popup_1accessible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkObject* result;
	jlong _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_popup_accessible(self);

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
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1popup_1fixed_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_popup_fixed_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1row_1span_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_row_span_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_title(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1get_1wrap_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	result = gtk_combo_box_get_wrap_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1popdown
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	gtk_combo_box_popdown(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1popup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkComboBox* self;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// call function
	gtk_combo_box_popup(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1popup_1for_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GtkComboBox* self;
	GdkDevice* device;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	gtk_combo_box_popup_for_device(self, device);

	// cleanup parameter self

	// cleanup parameter device
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	GtkComboBox* self;
	gint index;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter index
	index = (gint) _index;

	// call function
	gtk_combo_box_set_active(self, index);

	// cleanup parameter self

	// cleanup parameter index
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1active_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _activeId
)
{
	gboolean result;
	jboolean _result;
	GtkComboBox* self;
	const gchar* activeId;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter activeId
	if (_activeId == NULL) {
		activeId = NULL;
	} else {
		activeId = (const gchar*) bindings_java_getString(env, _activeId);
		if (activeId == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_combo_box_set_active_id(self, activeId);

	// cleanup parameter self

	// cleanup parameter activeId
	if (activeId != NULL) {
		bindings_java_releaseString(activeId);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1active_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkComboBox* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_combo_box_set_active_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1add_1tearoffs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _addTearoffs
)
{
	GtkComboBox* self;
	gboolean addTearoffs;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter addTearoffs
	addTearoffs = (gboolean) _addTearoffs;

	// call function
	gtk_combo_box_set_add_tearoffs(self, addTearoffs);

	// cleanup parameter self

	// cleanup parameter addTearoffs
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1button_1sensitivity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _sensitivity
)
{
	GtkComboBox* self;
	GtkSensitivityType sensitivity;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter sensitivity
	sensitivity = (GtkSensitivityType) _sensitivity;

	// call function
	gtk_combo_box_set_button_sensitivity(self, sensitivity);

	// cleanup parameter self

	// cleanup parameter sensitivity
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1column_1span_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _columnSpan
)
{
	GtkComboBox* self;
	gint columnSpan;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter columnSpan
	columnSpan = (gint) _columnSpan;

	// call function
	gtk_combo_box_set_column_span_column(self, columnSpan);

	// cleanup parameter self

	// cleanup parameter columnSpan
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1entry_1text_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _textColumn
)
{
	GtkComboBox* self;
	gint textColumn;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter textColumn
	textColumn = (gint) _textColumn;

	// call function
	gtk_combo_box_set_entry_text_column(self, textColumn);

	// cleanup parameter self

	// cleanup parameter textColumn
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1focus_1on_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _focusOnClick
)
{
	GtkComboBox* self;
	gboolean focusOnClick;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter focusOnClick
	focusOnClick = (gboolean) _focusOnClick;

	// call function
	gtk_combo_box_set_focus_on_click(self, focusOnClick);

	// cleanup parameter self

	// cleanup parameter focusOnClick
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1id_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _idColumn
)
{
	GtkComboBox* self;
	gint idColumn;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter idColumn
	idColumn = (gint) _idColumn;

	// call function
	gtk_combo_box_set_id_column(self, idColumn);

	// cleanup parameter self

	// cleanup parameter idColumn
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _model
)
{
	GtkComboBox* self;
	GtkTreeModel* model;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	gtk_combo_box_set_model(self, model);

	// cleanup parameter self

	// cleanup parameter model
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1popup_1fixed_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _fixed
)
{
	GtkComboBox* self;
	gboolean fixed;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter fixed
	fixed = (gboolean) _fixed;

	// call function
	gtk_combo_box_set_popup_fixed_width(self, fixed);

	// cleanup parameter self

	// cleanup parameter fixed
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1row_1span_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _rowSpan
)
{
	GtkComboBox* self;
	gint rowSpan;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter rowSpan
	rowSpan = (gint) _rowSpan;

	// call function
	gtk_combo_box_set_row_span_column(self, rowSpan);

	// cleanup parameter self

	// cleanup parameter rowSpan
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GtkComboBox* self;
	const gchar* title;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_combo_box_set_title(self, title);

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBox_gtk_1combo_1box_1set_1wrap_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	GtkComboBox* self;
	gint width;

	// convert parameter self
	self = (GtkComboBox*) _self;

	// convert parameter width
	width = (gint) _width;

	// call function
	gtk_combo_box_set_wrap_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}
