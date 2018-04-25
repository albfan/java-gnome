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
#include "org_gnome_atk_AtkDocument.h"

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkDocument_atk_1document_1get_1attribute_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _attributeName
)
{
	const gchar* result;
	jstring _result;
	AtkDocument* self;
	const gchar* attributeName;

	// convert parameter self
	self = (AtkDocument*) _self;

	// convert parameter attributeName
	attributeName = (const gchar*) bindings_java_getString(env, _attributeName);
	if (attributeName == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = atk_document_get_attribute_value(self, attributeName);

	// cleanup parameter self

	// cleanup parameter attributeName
	bindings_java_releaseString(attributeName);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkDocument_atk_1document_1get_1current_1page_1number
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkDocument* self;

	// convert parameter self
	self = (AtkDocument*) _self;

	// call function
	result = atk_document_get_current_page_number(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkDocument_atk_1document_1get_1document_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	AtkDocument* self;

	// convert parameter self
	self = (AtkDocument*) _self;

	// call function
	result = atk_document_get_document_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkDocument_atk_1document_1get_1locale
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	AtkDocument* self;

	// convert parameter self
	self = (AtkDocument*) _self;

	// call function
	result = atk_document_get_locale(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkDocument_atk_1document_1get_1page_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkDocument* self;

	// convert parameter self
	self = (AtkDocument*) _self;

	// call function
	result = atk_document_get_page_count(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkDocument_atk_1document_1set_1attribute_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _attributeName,
	jstring _attributeValue
)
{
	gboolean result;
	jboolean _result;
	AtkDocument* self;
	const gchar* attributeName;
	const gchar* attributeValue;

	// convert parameter self
	self = (AtkDocument*) _self;

	// convert parameter attributeName
	attributeName = (const gchar*) bindings_java_getString(env, _attributeName);
	if (attributeName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter attributeValue
	attributeValue = (const gchar*) bindings_java_getString(env, _attributeValue);
	if (attributeValue == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = atk_document_set_attribute_value(self, attributeName, attributeValue);

	// cleanup parameter self

	// cleanup parameter attributeName
	bindings_java_releaseString(attributeName);

	// cleanup parameter attributeValue
	bindings_java_releaseString(attributeValue);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
