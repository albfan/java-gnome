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
#include <atk/atk.h>
#include "bindings_java.h"
#include "org_gnome_atk_AtkObject.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1add_1relationship
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _relationship,
	jlong _target
)
{
	gboolean result;
	jboolean _result;
	AtkObject* self;
	AtkRelationType relationship;
	AtkObject* target;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter relationship
	relationship = (AtkRelationType) _relationship;

	// convert parameter target
	target = (AtkObject*) _target;

	// call function
	result = atk_object_add_relationship(self, relationship, target);

	// cleanup parameter self

	// cleanup parameter relationship

	// cleanup parameter target

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_description(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1index_1in_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_index_in_parent(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1layer
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkLayer result;
	jint _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_layer(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1mdi_1zorder
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_mdi_zorder(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1n_1accessible_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_n_accessible_children(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1object_1locale
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_object_locale(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1get_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkObject* result;
	jlong _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_parent(self);

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
Java_org_gnome_atk_AtkObject_atk_1object_1get_1role
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkRole result;
	jint _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_get_role(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1peek_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkObject* result;
	jlong _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_peek_parent(self);

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
Java_org_gnome_atk_AtkObject_atk_1object_1ref_1accessible_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _i
)
{
	AtkObject* result;
	jlong _result;
	AtkObject* self;
	gint i;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter i
	i = (gint) _i;

	// call function
	result = atk_object_ref_accessible_child(self, i);

	// cleanup parameter self

	// cleanup parameter i

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
Java_org_gnome_atk_AtkObject_atk_1object_1ref_1relation_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkRelationSet* result;
	jlong _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_ref_relation_set(self);

	// cleanup parameter self

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
Java_org_gnome_atk_AtkObject_atk_1object_1ref_1state_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkStateSet* result;
	jlong _result;
	AtkObject* self;

	// convert parameter self
	self = (AtkObject*) _self;

	// call function
	result = atk_object_ref_state_set(self);

	// cleanup parameter self

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
Java_org_gnome_atk_AtkObject_atk_1object_1remove_1property_1change_1handler
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _handlerId
)
{
	AtkObject* self;
	guint handlerId;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter handlerId
	handlerId = (guint) _handlerId;

	// call function
	atk_object_remove_property_change_handler(self, handlerId);

	// cleanup parameter self

	// cleanup parameter handlerId
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1remove_1relationship
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _relationship,
	jlong _target
)
{
	gboolean result;
	jboolean _result;
	AtkObject* self;
	AtkRelationType relationship;
	AtkObject* target;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter relationship
	relationship = (AtkRelationType) _relationship;

	// convert parameter target
	target = (AtkObject*) _target;

	// call function
	result = atk_object_remove_relationship(self, relationship, target);

	// cleanup parameter self

	// cleanup parameter relationship

	// cleanup parameter target

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1set_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _description
)
{
	AtkObject* self;
	const gchar* description;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter description
	description = (const gchar*) bindings_java_getString(env, _description);
	if (description == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	atk_object_set_description(self, description);

	// cleanup parameter self

	// cleanup parameter description
	bindings_java_releaseString(description);
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1set_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	AtkObject* self;
	const gchar* name;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	atk_object_set_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1set_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parent
)
{
	AtkObject* self;
	AtkObject* parent;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter parent
	parent = (AtkObject*) _parent;

	// call function
	atk_object_set_parent(self, parent);

	// cleanup parameter self

	// cleanup parameter parent
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkObject_atk_1object_1set_1role
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _role
)
{
	AtkObject* self;
	AtkRole role;

	// convert parameter self
	self = (AtkObject*) _self;

	// convert parameter role
	role = (AtkRole) _role;

	// call function
	atk_object_set_role(self, role);

	// cleanup parameter self

	// cleanup parameter role
}
