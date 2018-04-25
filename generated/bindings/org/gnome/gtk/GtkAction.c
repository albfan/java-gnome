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
#include "org_gnome_gtk_GtkAction.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _name,
	jstring _label,
	jstring _tooltip,
	jstring _stockId
)
{
	GtkAction* result;
	jlong _result;
	const gchar* name;
	const gchar* label;
	const gchar* tooltip;
	const gchar* stockId;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter label
	if (_label == NULL) {
		label = NULL;
	} else {
		label = (const gchar*) bindings_java_getString(env, _label);
		if (label == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter tooltip
	if (_tooltip == NULL) {
		tooltip = NULL;
	} else {
		tooltip = (const gchar*) bindings_java_getString(env, _tooltip);
		if (tooltip == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter stockId
	if (_stockId == NULL) {
		stockId = NULL;
	} else {
		stockId = (const gchar*) bindings_java_getString(env, _stockId);
		if (stockId == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_action_new(name, label, tooltip, stockId);

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
	}

	// cleanup parameter tooltip
	if (tooltip != NULL) {
		bindings_java_releaseString(tooltip);
	}

	// cleanup parameter stockId
	if (stockId != NULL) {
		bindings_java_releaseString(stockId);
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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	gtk_action_activate(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1block_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	gtk_action_block_activate(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1connect_1accelerator
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	gtk_action_connect_accelerator(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1create_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconSize
)
{
	GtkWidget* result;
	jlong _result;
	GtkAction* self;
	GtkIconSize iconSize;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter iconSize
	iconSize = (GtkIconSize) _iconSize;

	// call function
	result = gtk_action_create_icon(self, iconSize);

	// cleanup parameter self

	// cleanup parameter iconSize

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
Java_org_gnome_gtk_GtkAction_gtk_1action_1create_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_create_menu(self);

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
Java_org_gnome_gtk_GtkAction_gtk_1action_1create_1menu_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_create_menu_item(self);

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
Java_org_gnome_gtk_GtkAction_gtk_1action_1create_1tool_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_create_tool_item(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1disconnect_1accelerator
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	gtk_action_disconnect_accelerator(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1accel_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_accel_path(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1always_1show_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_always_show_image(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_icon_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1is_1important
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_is_important(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1proxies
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_proxies(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_sensitive(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1short_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_short_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1stock_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_stock_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1tooltip
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_tooltip(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1visible_1horizontal
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_visible_horizontal(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1get_1visible_1vertical
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_get_visible_vertical(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1is_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_is_sensitive(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1is_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	result = gtk_action_is_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelGroup
)
{
	GtkAction* self;
	GtkAccelGroup* accelGroup;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	gtk_action_set_accel_group(self, accelGroup);

	// cleanup parameter self

	// cleanup parameter accelGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1accel_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _accelPath
)
{
	GtkAction* self;
	const gchar* accelPath;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter accelPath
	accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
	if (accelPath == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_action_set_accel_path(self, accelPath);

	// cleanup parameter self

	// cleanup parameter accelPath
	bindings_java_releaseString(accelPath);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1always_1show_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _alwaysShow
)
{
	GtkAction* self;
	gboolean alwaysShow;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter alwaysShow
	alwaysShow = (gboolean) _alwaysShow;

	// call function
	gtk_action_set_always_show_image(self, alwaysShow);

	// cleanup parameter self

	// cleanup parameter alwaysShow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName
)
{
	GtkAction* self;
	const gchar* iconName;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_action_set_icon_name(self, iconName);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1is_1important
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _isImportant
)
{
	GtkAction* self;
	gboolean isImportant;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter isImportant
	isImportant = (gboolean) _isImportant;

	// call function
	gtk_action_set_is_important(self, isImportant);

	// cleanup parameter self

	// cleanup parameter isImportant
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _label
)
{
	GtkAction* self;
	const gchar* label;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_action_set_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
	bindings_java_releaseString(label);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _sensitive
)
{
	GtkAction* self;
	gboolean sensitive;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter sensitive
	sensitive = (gboolean) _sensitive;

	// call function
	gtk_action_set_sensitive(self, sensitive);

	// cleanup parameter self

	// cleanup parameter sensitive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1short_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _shortLabel
)
{
	GtkAction* self;
	const gchar* shortLabel;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter shortLabel
	shortLabel = (const gchar*) bindings_java_getString(env, _shortLabel);
	if (shortLabel == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_action_set_short_label(self, shortLabel);

	// cleanup parameter self

	// cleanup parameter shortLabel
	bindings_java_releaseString(shortLabel);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1stock_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId
)
{
	GtkAction* self;
	const gchar* stockId;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_action_set_stock_id(self, stockId);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1tooltip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _tooltip
)
{
	GtkAction* self;
	const gchar* tooltip;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter tooltip
	tooltip = (const gchar*) bindings_java_getString(env, _tooltip);
	if (tooltip == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_action_set_tooltip(self, tooltip);

	// cleanup parameter self

	// cleanup parameter tooltip
	bindings_java_releaseString(tooltip);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visible
)
{
	GtkAction* self;
	gboolean visible;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter visible
	visible = (gboolean) _visible;

	// call function
	gtk_action_set_visible(self, visible);

	// cleanup parameter self

	// cleanup parameter visible
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1visible_1horizontal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visibleHorizontal
)
{
	GtkAction* self;
	gboolean visibleHorizontal;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter visibleHorizontal
	visibleHorizontal = (gboolean) _visibleHorizontal;

	// call function
	gtk_action_set_visible_horizontal(self, visibleHorizontal);

	// cleanup parameter self

	// cleanup parameter visibleHorizontal
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1set_1visible_1vertical
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visibleVertical
)
{
	GtkAction* self;
	gboolean visibleVertical;

	// convert parameter self
	self = (GtkAction*) _self;

	// convert parameter visibleVertical
	visibleVertical = (gboolean) _visibleVertical;

	// call function
	gtk_action_set_visible_vertical(self, visibleVertical);

	// cleanup parameter self

	// cleanup parameter visibleVertical
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAction_gtk_1action_1unblock_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAction* self;

	// convert parameter self
	self = (GtkAction*) _self;

	// call function
	gtk_action_unblock_activate(self);

	// cleanup parameter self
}
