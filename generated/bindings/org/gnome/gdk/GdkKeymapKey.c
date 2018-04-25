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
#include "org_gnome_gdk_GdkKeymapKey.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeymapKey_gdk_1keymap_1key_1get_1keycode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GdkKeymapKey* self;

	// convert parameter self
	self = (GdkKeymapKey*) _self;

	// get field value
	result = self->keycode;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkKeymapKey_gdk_1keymap_1key_1set_1keycode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _keycode
)
{
	GdkKeymapKey* self;
	guint keycode;

	// convert parameter self
	self = (GdkKeymapKey*) _self;

	// convert parameter keycode
	keycode = (guint) _keycode;

	// set field value
	self->keycode = keycode;

	// cleanup parameter self

	// cleanup parameter keycode
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeymapKey_gdk_1keymap_1key_1get_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkKeymapKey* self;

	// convert parameter self
	self = (GdkKeymapKey*) _self;

	// get field value
	result = self->group;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkKeymapKey_gdk_1keymap_1key_1set_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _group
)
{
	GdkKeymapKey* self;
	gint group;

	// convert parameter self
	self = (GdkKeymapKey*) _self;

	// convert parameter group
	group = (gint) _group;

	// set field value
	self->group = group;

	// cleanup parameter self

	// cleanup parameter group
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeymapKey_gdk_1keymap_1key_1get_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkKeymapKey* self;

	// convert parameter self
	self = (GdkKeymapKey*) _self;

	// get field value
	result = self->level;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkKeymapKey_gdk_1keymap_1key_1set_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _level
)
{
	GdkKeymapKey* self;
	gint level;

	// convert parameter self
	self = (GdkKeymapKey*) _self;

	// convert parameter level
	level = (gint) _level;

	// set field value
	self->level = level;

	// cleanup parameter self

	// cleanup parameter level
}
