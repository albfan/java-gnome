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
#include "org_gnome_gtk_GtkActionGroup.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _name
)
{
	GtkActionGroup* result;
	jlong _result;
	const gchar* name;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_action_group_new(name);

	// cleanup parameter name
	bindings_java_releaseString(name);

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
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1add_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _action
)
{
	GtkActionGroup* self;
	GtkAction* action;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter action
	action = (GtkAction*) _action;

	// call function
	gtk_action_group_add_action(self, action);

	// cleanup parameter self

	// cleanup parameter action
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1add_1action_1with_1accel
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _action,
	jstring _accelerator
)
{
	GtkActionGroup* self;
	GtkAction* action;
	const gchar* accelerator;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter action
	action = (GtkAction*) _action;

	// convert parameter accelerator
	if (_accelerator == NULL) {
		accelerator = NULL;
	} else {
		accelerator = (const gchar*) bindings_java_getString(env, _accelerator);
		if (accelerator == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_action_group_add_action_with_accel(self, action, accelerator);

	// cleanup parameter self

	// cleanup parameter action

	// cleanup parameter accelerator
	if (accelerator != NULL) {
		bindings_java_releaseString(accelerator);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1get_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAccelGroup* result;
	jlong _result;
	GtkActionGroup* self;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// call function
	result = gtk_action_group_get_accel_group(self);

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
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1get_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _actionName
)
{
	GtkAction* result;
	jlong _result;
	GtkActionGroup* self;
	const gchar* actionName;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter actionName
	actionName = (const gchar*) bindings_java_getString(env, _actionName);
	if (actionName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_action_group_get_action(self, actionName);

	// cleanup parameter self

	// cleanup parameter actionName
	bindings_java_releaseString(actionName);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkActionGroup* self;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// call function
	result = gtk_action_group_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1get_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkActionGroup* self;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// call function
	result = gtk_action_group_get_sensitive(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1get_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkActionGroup* self;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// call function
	result = gtk_action_group_get_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1list_1actions
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkActionGroup* self;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// call function
	result = gtk_action_group_list_actions(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1remove_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _action
)
{
	GtkActionGroup* self;
	GtkAction* action;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter action
	action = (GtkAction*) _action;

	// call function
	gtk_action_group_remove_action(self, action);

	// cleanup parameter self

	// cleanup parameter action
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1set_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelGroup
)
{
	GtkActionGroup* self;
	GtkAccelGroup* accelGroup;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	gtk_action_group_set_accel_group(self, accelGroup);

	// cleanup parameter self

	// cleanup parameter accelGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1set_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _sensitive
)
{
	GtkActionGroup* self;
	gboolean sensitive;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter sensitive
	sensitive = (gboolean) _sensitive;

	// call function
	gtk_action_group_set_sensitive(self, sensitive);

	// cleanup parameter self

	// cleanup parameter sensitive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1set_1translation_1domain
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _domain
)
{
	GtkActionGroup* self;
	const gchar* domain;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter domain
	if (_domain == NULL) {
		domain = NULL;
	} else {
		domain = (const gchar*) bindings_java_getString(env, _domain);
		if (domain == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_action_group_set_translation_domain(self, domain);

	// cleanup parameter self

	// cleanup parameter domain
	if (domain != NULL) {
		bindings_java_releaseString(domain);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1set_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visible
)
{
	GtkActionGroup* self;
	gboolean visible;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter visible
	visible = (gboolean) _visible;

	// call function
	gtk_action_group_set_visible(self, visible);

	// cleanup parameter self

	// cleanup parameter visible
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkActionGroup_gtk_1action_1group_1translate_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _string
)
{
	const gchar* result;
	jstring _result;
	GtkActionGroup* self;
	const gchar* string;

	// convert parameter self
	self = (GtkActionGroup*) _self;

	// convert parameter string
	string = (const gchar*) bindings_java_getString(env, _string);
	if (string == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_action_group_translate_string(self, string);

	// cleanup parameter self

	// cleanup parameter string
	bindings_java_releaseString(string);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}
