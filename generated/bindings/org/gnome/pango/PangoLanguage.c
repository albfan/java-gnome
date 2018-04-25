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
#include <pango/pango.h>
#include "bindings_java.h"
#include "org_gnome_pango_PangoLanguage.h"

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoLanguage_pango_1language_1get_1sample_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	PangoLanguage* self;

	// convert parameter self
	self = (PangoLanguage*) _self;

	// call function
	result = pango_language_get_sample_string(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jintArray JNICALL
Java_org_gnome_pango_PangoLanguage_pango_1language_1get_1scripts
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _numScripts
)
{
	PangoScript* result;
	jintArray _result;
	PangoLanguage* self;
	int* numScripts;

	// convert parameter self
	self = (PangoLanguage*) _self;

	// convert parameter numScripts
	if (_numScripts == NULL) {
		numScripts = NULL;
	} else {
		numScripts = (int*) (*env)->GetIntArrayElements(env, _numScripts, NULL);
		if (numScripts == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = pango_language_get_scripts(self, numScripts);

	// cleanup parameter self

	// cleanup parameter numScripts
	if (numScripts != NULL) {
		(*env)->ReleaseIntArrayElements(env, _numScripts, (jint*)numScripts, 0);
	}

	// translate return value to JNI type
	_result = (jintArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLanguage_pango_1language_1includes_1script
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _script
)
{
	gboolean result;
	jboolean _result;
	PangoLanguage* self;
	PangoScript script;

	// convert parameter self
	self = (PangoLanguage*) _self;

	// convert parameter script
	script = (PangoScript) _script;

	// call function
	result = pango_language_includes_script(self, script);

	// cleanup parameter self

	// cleanup parameter script

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLanguage_pango_1language_1matches
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _rangeList
)
{
	gboolean result;
	jboolean _result;
	PangoLanguage* self;
	const char* rangeList;

	// convert parameter self
	self = (PangoLanguage*) _self;

	// convert parameter rangeList
	rangeList = (const char*) bindings_java_getString(env, _rangeList);
	if (rangeList == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = pango_language_matches(self, rangeList);

	// cleanup parameter self

	// cleanup parameter rangeList
	bindings_java_releaseString(rangeList);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoLanguage_pango_1language_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	PangoLanguage* self;

	// convert parameter self
	self = (PangoLanguage*) _self;

	// call function
	result = pango_language_to_string(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}
