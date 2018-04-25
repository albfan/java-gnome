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
#include "org_gnome_gtk_GtkRadioMenuItem.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1new
(
	JNIEnv* env,
	jclass cls,
	jlongArray _group
)
{
	GtkWidget* result;
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
	result = gtk_radio_menu_item_new(group);

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
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1new_1from_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _radioGroupMember
)
{
	GtkWidget* result;
	jlong _result;
	GtkRadioMenuItem* radioGroupMember;

	// convert parameter radioGroupMember
	radioGroupMember = (GtkRadioMenuItem*) _radioGroupMember;

	// call function
	result = gtk_radio_menu_item_new_from_widget(radioGroupMember);

	// cleanup parameter radioGroupMember

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
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1new_1with_1label
(
	JNIEnv* env,
	jclass cls,
	jlongArray _group,
	jstring _label
)
{
	GtkWidget* result;
	jlong _result;
	GSList* group;
	const gchar* label;

	// convert parameter group
	if (_group == NULL) {
		group = NULL;
	} else {
		group = (GSList*) bindings_java_convert_jarray_to_gslist(env, _group);
		if (group == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_radio_menu_item_new_with_label(group, label);

	// cleanup parameter group
	if (group != NULL) {
		g_slist_free(group);
	}

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
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1new_1with_1label_1from_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _radioGroupMember,
	jstring _label
)
{
	GtkWidget* result;
	jlong _result;
	GtkRadioMenuItem* radioGroupMember;
	const gchar* label;

	// convert parameter radioGroupMember
	radioGroupMember = (GtkRadioMenuItem*) _radioGroupMember;

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_radio_menu_item_new_with_label_from_widget(radioGroupMember, label);

	// cleanup parameter radioGroupMember

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
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1new_1with_1mnemonic
(
	JNIEnv* env,
	jclass cls,
	jlongArray _group,
	jstring _label
)
{
	GtkWidget* result;
	jlong _result;
	GSList* group;
	const gchar* label;

	// convert parameter group
	if (_group == NULL) {
		group = NULL;
	} else {
		group = (GSList*) bindings_java_convert_jarray_to_gslist(env, _group);
		if (group == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_radio_menu_item_new_with_mnemonic(group, label);

	// cleanup parameter group
	if (group != NULL) {
		g_slist_free(group);
	}

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
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1new_1with_1mnemonic_1from_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _radioGroupMember,
	jstring _label
)
{
	GtkWidget* result;
	jlong _result;
	GtkRadioMenuItem* radioGroupMember;
	const gchar* label;

	// convert parameter radioGroupMember
	radioGroupMember = (GtkRadioMenuItem*) _radioGroupMember;

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_radio_menu_item_new_with_mnemonic_from_widget(radioGroupMember, label);

	// cleanup parameter radioGroupMember

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

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1get_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GtkRadioMenuItem* self;

	// convert parameter self
	self = (GtkRadioMenuItem*) _self;

	// call function
	result = gtk_radio_menu_item_get_group(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1join_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _groupSource
)
{
	GtkRadioMenuItem* self;
	GtkRadioMenuItem* groupSource;

	// convert parameter self
	self = (GtkRadioMenuItem*) _self;

	// convert parameter groupSource
	groupSource = (GtkRadioMenuItem*) _groupSource;

	// call function
	gtk_radio_menu_item_join_group(self, groupSource);

	// cleanup parameter self

	// cleanup parameter groupSource
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRadioMenuItem_gtk_1radio_1menu_1item_1set_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _group
)
{
	GtkRadioMenuItem* self;
	GSList* group;

	// convert parameter self
	self = (GtkRadioMenuItem*) _self;

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
	gtk_radio_menu_item_set_group(self, group);

	// cleanup parameter self

	// cleanup parameter group
	if (group != NULL) {
		g_slist_free(group);
	}
}
