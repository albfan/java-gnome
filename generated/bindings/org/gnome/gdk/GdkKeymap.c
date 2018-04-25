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
#include <gdk/gdk.h>
#include "bindings_java.h"
#include "org_gnome_gdk_GdkKeymap.h"

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1add_1virtual_1modifiers
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _state
)
{
	GdkKeymap* self;
	GdkModifierType* state;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// convert parameter state
	state = (GdkModifierType*) (*env)->GetIntArrayElements(env, _state, NULL);
	if (state == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gdk_keymap_add_virtual_modifiers(self, state);

	// cleanup parameter self

	// cleanup parameter state
	(*env)->ReleaseIntArrayElements(env, _state, (jint*)state, 0);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1caps_1lock_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkKeymap* self;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// call function
	result = gdk_keymap_get_caps_lock_state(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoDirection result;
	jint _result;
	GdkKeymap* self;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// call function
	result = gdk_keymap_get_direction(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1entries_1for_1keyval
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _keyval,
	jlongArray _keys,
	jintArray _nKeys
)
{
	gboolean result;
	jboolean _result;
	GdkKeymap* self;
	guint keyval;
	GdkKeymapKey** keys;
	gint* nKeys;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// convert parameter keys
	if (_keys == NULL) {
		keys = NULL;
	} else {
		keys = (GdkKeymapKey**) bindings_java_convert_jarray_to_gpointer(env, _keys);
		if (keys == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter nKeys
	if (_nKeys == NULL) {
		nKeys = NULL;
	} else {
		nKeys = (gint*) (*env)->GetIntArrayElements(env, _nKeys, NULL);
		if (nKeys == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_keymap_get_entries_for_keyval(self, keyval, keys, nKeys);

	// cleanup parameter self

	// cleanup parameter keyval

	// cleanup parameter keys
	if (keys != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)keys, _keys);
	}

	// cleanup parameter nKeys
	if (nKeys != NULL) {
		(*env)->ReleaseIntArrayElements(env, _nKeys, (jint*)nKeys, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1modifier_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GdkKeymap* self;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// call function
	result = gdk_keymap_get_modifier_state(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1num_1lock_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkKeymap* self;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// call function
	result = gdk_keymap_get_num_lock_state(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1scroll_1lock_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkKeymap* self;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// call function
	result = gdk_keymap_get_scroll_lock_state(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1have_1bidi_1layouts
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkKeymap* self;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// call function
	result = gdk_keymap_have_bidi_layouts(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1lookup_1key
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _key
)
{
	guint result;
	jint _result;
	GdkKeymap* self;
	const GdkKeymapKey* key;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// convert parameter key
	key = (const GdkKeymapKey*) _key;

	// call function
	result = gdk_keymap_lookup_key(self, key);

	// cleanup parameter self

	// cleanup parameter key

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1map_1virtual_1modifiers
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _state
)
{
	gboolean result;
	jboolean _result;
	GdkKeymap* self;
	GdkModifierType* state;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// convert parameter state
	state = (GdkModifierType*) (*env)->GetIntArrayElements(env, _state, NULL);
	if (state == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_keymap_map_virtual_modifiers(self, state);

	// cleanup parameter self

	// cleanup parameter state
	(*env)->ReleaseIntArrayElements(env, _state, (jint*)state, 0);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1translate_1keyboard_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hardwareKeycode,
	jint _state,
	jint _group,
	jintArray _keyval,
	jintArray _effectiveGroup,
	jintArray _level,
	jintArray _consumedModifiers
)
{
	gboolean result;
	jboolean _result;
	GdkKeymap* self;
	guint hardwareKeycode;
	GdkModifierType state;
	gint group;
	guint* keyval;
	gint* effectiveGroup;
	gint* level;
	GdkModifierType* consumedModifiers;

	// convert parameter self
	self = (GdkKeymap*) _self;

	// convert parameter hardwareKeycode
	hardwareKeycode = (guint) _hardwareKeycode;

	// convert parameter state
	state = (GdkModifierType) _state;

	// convert parameter group
	group = (gint) _group;

	// convert parameter keyval
	if (_keyval == NULL) {
		keyval = NULL;
	} else {
		keyval = (guint*) (*env)->GetIntArrayElements(env, _keyval, NULL);
		if (keyval == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter effectiveGroup
	if (_effectiveGroup == NULL) {
		effectiveGroup = NULL;
	} else {
		effectiveGroup = (gint*) (*env)->GetIntArrayElements(env, _effectiveGroup, NULL);
		if (effectiveGroup == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter level
	if (_level == NULL) {
		level = NULL;
	} else {
		level = (gint*) (*env)->GetIntArrayElements(env, _level, NULL);
		if (level == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter consumedModifiers
	if (_consumedModifiers == NULL) {
		consumedModifiers = NULL;
	} else {
		consumedModifiers = (GdkModifierType*) (*env)->GetIntArrayElements(env, _consumedModifiers, NULL);
		if (consumedModifiers == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_keymap_translate_keyboard_state(self, hardwareKeycode, state, group, keyval, effectiveGroup, level, consumedModifiers);

	// cleanup parameter self

	// cleanup parameter hardwareKeycode

	// cleanup parameter state

	// cleanup parameter group

	// cleanup parameter keyval
	if (keyval != NULL) {
		(*env)->ReleaseIntArrayElements(env, _keyval, (jint*)keyval, 0);
	}

	// cleanup parameter effectiveGroup
	if (effectiveGroup != NULL) {
		(*env)->ReleaseIntArrayElements(env, _effectiveGroup, (jint*)effectiveGroup, 0);
	}

	// cleanup parameter level
	if (level != NULL) {
		(*env)->ReleaseIntArrayElements(env, _level, (jint*)level, 0);
	}

	// cleanup parameter consumedModifiers
	if (consumedModifiers != NULL) {
		(*env)->ReleaseIntArrayElements(env, _consumedModifiers, (jint*)consumedModifiers, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1default
(
	JNIEnv* env,
	jclass cls
)
{
	GdkKeymap* result;
	jlong _result;

	// call function
	result = gdk_keymap_get_default();

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
Java_org_gnome_gdk_GdkKeymap_gdk_1keymap_1get_1for_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _display
)
{
	GdkKeymap* result;
	jlong _result;
	GdkDisplay* display;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// call function
	result = gdk_keymap_get_for_display(display);

	// cleanup parameter display

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
