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
#include "org_freedesktop_enchant_EnchantDict.h"

JNIEXPORT jint JNICALL
Java_org_freedesktop_enchant_EnchantDict_enchant_1dict_1check
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _word,
	jint _len
)
{
	int result;
	jint _result;
	EnchantDict* self;
	const char* word;
	gssize len;

	// convert parameter self
	self = (EnchantDict*) _self;

	// convert parameter word
	word = (const char*) bindings_java_getString(env, _word);
	if (word == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter len
	len = (gssize) _len;

	// call function
	result = enchant_dict_check(self, word, len);

	// cleanup parameter self

	// cleanup parameter word
	bindings_java_releaseString(word);

	// cleanup parameter len

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_freedesktop_enchant_EnchantDict_enchant_1dict_1suggest
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _word,
	jint _len,
	jlongArray _outNSuggs
)
{
	char** result;
	jobjectArray _result;
	EnchantDict* self;
	const char* word;
	gssize len;
	gsize* outNSuggs;

	// convert parameter self
	self = (EnchantDict*) _self;

	// convert parameter word
	word = (const char*) bindings_java_getString(env, _word);
	if (word == NULL) {
		return NULL; // Java Exception already thrown
	}

	// convert parameter len
	len = (gssize) _len;

	// convert parameter outNSuggs
	if (_outNSuggs == NULL) {
		outNSuggs = NULL;
	} else {
		outNSuggs = (gsize*) (*env)->GetLongArrayElements(env, _outNSuggs, NULL);
		if (outNSuggs == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = enchant_dict_suggest(self, word, len, outNSuggs);

	// cleanup parameter self

	// cleanup parameter word
	bindings_java_releaseString(word);

	// cleanup parameter len

	// cleanup parameter outNSuggs
	if (outNSuggs != NULL) {
		(*env)->ReleaseLongArrayElements(env, _outNSuggs, (jlong*)outNSuggs, 0);
	}

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_enchant_EnchantDict_enchant_1dict_1add
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _word,
	jint _len
)
{
	EnchantDict* self;
	const char* word;
	gssize len;

	// convert parameter self
	self = (EnchantDict*) _self;

	// convert parameter word
	word = (const char*) bindings_java_getString(env, _word);
	if (word == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gssize) _len;

	// call function
	enchant_dict_add(self, word, len);

	// cleanup parameter self

	// cleanup parameter word
	bindings_java_releaseString(word);

	// cleanup parameter len
}

JNIEXPORT void JNICALL
Java_org_freedesktop_enchant_EnchantDict_enchant_1dict_1remove
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _word,
	jint _len
)
{
	EnchantDict* self;
	const char* word;
	gssize len;

	// convert parameter self
	self = (EnchantDict*) _self;

	// convert parameter word
	word = (const char*) bindings_java_getString(env, _word);
	if (word == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gssize) _len;

	// call function
	enchant_dict_remove(self, word, len);

	// cleanup parameter self

	// cleanup parameter word
	bindings_java_releaseString(word);

	// cleanup parameter len
}
