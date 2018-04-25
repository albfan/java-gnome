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
#include <enchant.h>
#include "bindings_java.h"
#include "org_freedesktop_enchant_EnchantBroker.h"

JNIEXPORT jlong JNICALL
Java_org_freedesktop_enchant_EnchantBroker_enchant_1broker_1init
(
	JNIEnv* env,
	jclass cls
)
{
	EnchantBroker* result;
	jlong _result;

	// call function
	result = enchant_broker_init();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_enchant_EnchantBroker_enchant_1broker_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	EnchantBroker* self;

	// convert parameter self
	self = (EnchantBroker*) _self;

	// call function
	enchant_broker_free(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_freedesktop_enchant_EnchantBroker_enchant_1broker_1dict_1exists
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _tag
)
{
	int result;
	jint _result;
	EnchantBroker* self;
	const char* tag;

	// convert parameter self
	self = (EnchantBroker*) _self;

	// convert parameter tag
	tag = (const char*) bindings_java_getString(env, _tag);
	if (tag == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = enchant_broker_dict_exists(self, tag);

	// cleanup parameter self

	// cleanup parameter tag
	bindings_java_releaseString(tag);

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_enchant_EnchantBroker_enchant_1broker_1free_1dict
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dict
)
{
	EnchantBroker* self;
	EnchantDict* dict;

	// convert parameter self
	self = (EnchantBroker*) _self;

	// convert parameter dict
	dict = (EnchantDict*) _dict;

	// call function
	enchant_broker_free_dict(self, dict);

	// cleanup parameter self

	// cleanup parameter dict
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_enchant_EnchantBroker_enchant_1broker_1request_1dict
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _tag
)
{
	EnchantDict* result;
	jlong _result;
	EnchantBroker* self;
	const char* tag;

	// convert parameter self
	self = (EnchantBroker*) _self;

	// convert parameter tag
	tag = (const char*) bindings_java_getString(env, _tag);
	if (tag == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = enchant_broker_request_dict(self, tag);

	// cleanup parameter self

	// cleanup parameter tag
	bindings_java_releaseString(tag);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_freedesktop_enchant_EnchantBroker_enchant_1broker_1request_1pwl_1dict
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _pwl
)
{
	EnchantDict* result;
	jlong _result;
	EnchantBroker* self;
	const char* pwl;

	// convert parameter self
	self = (EnchantBroker*) _self;

	// convert parameter pwl
	pwl = (const char*) bindings_java_getString(env, _pwl);
	if (pwl == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = enchant_broker_request_pwl_dict(self, pwl);

	// cleanup parameter self

	// cleanup parameter pwl
	bindings_java_releaseString(pwl);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}
