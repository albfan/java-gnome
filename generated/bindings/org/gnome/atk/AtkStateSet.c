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
#include "org_gnome_atk_AtkStateSet.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1new
(
	JNIEnv* env,
	jclass cls
)
{
	AtkStateSet* result;
	jlong _result;

	// call function
	result = atk_state_set_new();

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
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1add_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	gboolean result;
	jboolean _result;
	AtkStateSet* self;
	AtkStateType type;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter type
	type = (AtkStateType) _type;

	// call function
	result = atk_state_set_add_state(self, type);

	// cleanup parameter self

	// cleanup parameter type

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1add_1states
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _types,
	jint _nTypes
)
{
	AtkStateSet* self;
	AtkStateType* types;
	gint nTypes;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter types
	types = (AtkStateType*) (*env)->GetIntArrayElements(env, _types, NULL);
	if (types == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter nTypes
	nTypes = (gint) _nTypes;

	// call function
	atk_state_set_add_states(self, types, nTypes);

	// cleanup parameter self

	// cleanup parameter types
	(*env)->ReleaseIntArrayElements(env, _types, (jint*)types, 0);

	// cleanup parameter nTypes
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1and_1sets
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _compareSet
)
{
	AtkStateSet* result;
	jlong _result;
	AtkStateSet* self;
	AtkStateSet* compareSet;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter compareSet
	compareSet = (AtkStateSet*) _compareSet;

	// call function
	result = atk_state_set_and_sets(self, compareSet);

	// cleanup parameter self

	// cleanup parameter compareSet

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
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1clear_1states
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkStateSet* self;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// call function
	atk_state_set_clear_states(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1contains_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	gboolean result;
	jboolean _result;
	AtkStateSet* self;
	AtkStateType type;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter type
	type = (AtkStateType) _type;

	// call function
	result = atk_state_set_contains_state(self, type);

	// cleanup parameter self

	// cleanup parameter type

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1contains_1states
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _types,
	jint _nTypes
)
{
	gboolean result;
	jboolean _result;
	AtkStateSet* self;
	AtkStateType* types;
	gint nTypes;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter types
	types = (AtkStateType*) (*env)->GetIntArrayElements(env, _types, NULL);
	if (types == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter nTypes
	nTypes = (gint) _nTypes;

	// call function
	result = atk_state_set_contains_states(self, types, nTypes);

	// cleanup parameter self

	// cleanup parameter types
	(*env)->ReleaseIntArrayElements(env, _types, (jint*)types, 0);

	// cleanup parameter nTypes

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1is_1empty
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	AtkStateSet* self;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// call function
	result = atk_state_set_is_empty(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1or_1sets
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _compareSet
)
{
	AtkStateSet* result;
	jlong _result;
	AtkStateSet* self;
	AtkStateSet* compareSet;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter compareSet
	compareSet = (AtkStateSet*) _compareSet;

	// call function
	result = atk_state_set_or_sets(self, compareSet);

	// cleanup parameter self

	// cleanup parameter compareSet

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
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1remove_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	gboolean result;
	jboolean _result;
	AtkStateSet* self;
	AtkStateType type;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter type
	type = (AtkStateType) _type;

	// call function
	result = atk_state_set_remove_state(self, type);

	// cleanup parameter self

	// cleanup parameter type

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkStateSet_atk_1state_1set_1xor_1sets
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _compareSet
)
{
	AtkStateSet* result;
	jlong _result;
	AtkStateSet* self;
	AtkStateSet* compareSet;

	// convert parameter self
	self = (AtkStateSet*) _self;

	// convert parameter compareSet
	compareSet = (AtkStateSet*) _compareSet;

	// call function
	result = atk_state_set_xor_sets(self, compareSet);

	// cleanup parameter self

	// cleanup parameter compareSet

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}
