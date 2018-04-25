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
#include "org_gnome_gtk_GtkRadioToolButton.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRadioToolButton_gtk_1radio_1tool_1button_1new
(
	JNIEnv* env,
	jclass cls,
	jlongArray _group
)
{
	GtkToolItem* result;
	jlong _result;
	GSList* group;

	// convert parameter group
	if (_group == NULL) {
		group = NULL;
	} else {
		group = (GSList*) bindings_java_convert_jarray_to_gslist(env, _group);
		if (group == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_radio_tool_button_new(group);

	// cleanup parameter group
	if (group != NULL) {
		g_slist_free(group);
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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRadioToolButton_gtk_1radio_1tool_1button_1new_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jlongArray _group,
	jstring _stockId
)
{
	GtkToolItem* result;
	jlong _result;
	GSList* group;
	const gchar* stockId;

	// convert parameter group
	if (_group == NULL) {
		group = NULL;
	} else {
		group = (GSList*) bindings_java_convert_jarray_to_gslist(env, _group);
		if (group == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_radio_tool_button_new_from_stock(group, stockId);

	// cleanup parameter group
	if (group != NULL) {
		g_slist_free(group);
	}

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
Java_org_gnome_gtk_GtkRadioToolButton_gtk_1radio_1tool_1button_1new_1from_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _group
)
{
	GtkToolItem* result;
	jlong _result;
	GtkRadioToolButton* group;

	// convert parameter group
	group = (GtkRadioToolButton*) _group;

	// call function
	result = gtk_radio_tool_button_new_from_widget(group);

	// cleanup parameter group

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
Java_org_gnome_gtk_GtkRadioToolButton_gtk_1radio_1tool_1button_1new_1with_1stock_1from_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _group,
	jstring _stockId
)
{
	GtkToolItem* result;
	jlong _result;
	GtkRadioToolButton* group;
	const gchar* stockId;

	// convert parameter group
	group = (GtkRadioToolButton*) _group;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_radio_tool_button_new_with_stock_from_widget(group, stockId);

	// cleanup parameter group

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

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkRadioToolButton_gtk_1radio_1tool_1button_1get_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GtkRadioToolButton* self;

	// convert parameter self
	self = (GtkRadioToolButton*) _self;

	// call function
	result = gtk_radio_tool_button_get_group(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRadioToolButton_gtk_1radio_1tool_1button_1set_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _group
)
{
	GtkRadioToolButton* self;
	GSList* group;

	// convert parameter self
	self = (GtkRadioToolButton*) _self;

	// convert parameter group
	if (_group == NULL) {
		group = NULL;
	} else {
		group = (GSList*) bindings_java_convert_jarray_to_gslist(env, _group);
		if (group == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_radio_tool_button_set_group(self, group);

	// cleanup parameter self

	// cleanup parameter group
	if (group != NULL) {
		g_slist_free(group);
	}
}
