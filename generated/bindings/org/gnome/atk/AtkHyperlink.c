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
#include "org_gnome_atk_AtkHyperlink.h"

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1get_1end_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkHyperlink* self;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// call function
	result = atk_hyperlink_get_end_index(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1get_1n_1anchors
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkHyperlink* self;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// call function
	result = atk_hyperlink_get_n_anchors(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1get_1object
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _i
)
{
	AtkObject* result;
	jlong _result;
	AtkHyperlink* self;
	gint i;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// convert parameter i
	i = (gint) _i;

	// call function
	result = atk_hyperlink_get_object(self, i);

	// cleanup parameter self

	// cleanup parameter i

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
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1get_1start_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkHyperlink* self;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// call function
	result = atk_hyperlink_get_start_index(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1get_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _i
)
{
	gchar* result;
	jstring _result;
	AtkHyperlink* self;
	gint i;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// convert parameter i
	i = (gint) _i;

	// call function
	result = atk_hyperlink_get_uri(self, i);

	// cleanup parameter self

	// cleanup parameter i

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1is_1inline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	AtkHyperlink* self;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// call function
	result = atk_hyperlink_is_inline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1is_1selected_1link
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	AtkHyperlink* self;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// call function
	result = atk_hyperlink_is_selected_link(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkHyperlink_atk_1hyperlink_1is_1valid
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	AtkHyperlink* self;

	// convert parameter self
	self = (AtkHyperlink*) _self;

	// call function
	result = atk_hyperlink_is_valid(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
