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
#include "bindings_java.h"
#include "org_gnome_atk_AtkValue.h"

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1get_1current_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _value
)
{
	AtkValue* self;
	GValue* value;

	// convert parameter self
	self = (AtkValue*) _self;

	// convert parameter value
	value = (GValue*) _value;

	// call function
	atk_value_get_current_value(self, value);

	// cleanup parameter self

	// cleanup parameter value
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1get_1increment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	AtkValue* self;

	// convert parameter self
	self = (AtkValue*) _self;

	// call function
	result = atk_value_get_increment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1get_1maximum_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _value
)
{
	AtkValue* self;
	GValue* value;

	// convert parameter self
	self = (AtkValue*) _self;

	// convert parameter value
	value = (GValue*) _value;

	// call function
	atk_value_get_maximum_value(self, value);

	// cleanup parameter self

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1get_1minimum_1increment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _value
)
{
	AtkValue* self;
	GValue* value;

	// convert parameter self
	self = (AtkValue*) _self;

	// convert parameter value
	value = (GValue*) _value;

	// call function
	atk_value_get_minimum_increment(self, value);

	// cleanup parameter self

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1get_1minimum_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _value
)
{
	AtkValue* self;
	GValue* value;

	// convert parameter self
	self = (AtkValue*) _self;

	// convert parameter value
	value = (GValue*) _value;

	// call function
	atk_value_get_minimum_value(self, value);

	// cleanup parameter self

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1get_1value_1and_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _value,
	jobjectArray _text
)
{
	AtkValue* self;
	gdouble* value;
	gchar** text;

	// convert parameter self
	self = (AtkValue*) _self;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter text
	if (_text == NULL) {
		text = NULL;
	} else {
		text = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _text);
		if (text == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	atk_value_get_value_and_text(self, value, text);

	// cleanup parameter self

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// cleanup parameter text
	if (text != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)text, _text);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1set_1current_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _value
)
{
	gboolean result;
	jboolean _result;
	AtkValue* self;
	const GValue* value;

	// convert parameter self
	self = (AtkValue*) _self;

	// convert parameter value
	value = (const GValue*) _value;

	// call function
	result = atk_value_set_current_value(self, value);

	// cleanup parameter self

	// cleanup parameter value

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkValue_atk_1value_1set_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _newValue
)
{
	AtkValue* self;
	const gdouble newValue;

	// convert parameter self
	self = (AtkValue*) _self;

	// convert parameter newValue
	newValue = (const gdouble) _newValue;

	// call function
	atk_value_set_value(self, newValue);

	// cleanup parameter self

	// cleanup parameter newValue
}
