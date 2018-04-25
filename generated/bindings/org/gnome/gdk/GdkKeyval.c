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
#include "org_gnome_gdk_GdkKeyval.h"

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1name
(
	JNIEnv* env,
	jclass cls,
	jint _keyval
)
{
	gchar* result;
	jstring _result;
	guint keyval;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// call function
	result = gdk_keyval_name(keyval);

	// cleanup parameter keyval

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1from_1name
(
	JNIEnv* env,
	jclass cls,
	jstring _keyvalName
)
{
	guint result;
	jint _result;
	const gchar* keyvalName;

	// convert parameter keyvalName
	keyvalName = (const gchar*) bindings_java_getString(env, _keyvalName);
	if (keyvalName == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gdk_keyval_from_name(keyvalName);

	// cleanup parameter keyvalName
	bindings_java_releaseString(keyvalName);

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1convert_1case
(
	JNIEnv* env,
	jclass cls,
	jint _symbol,
	jintArray _lower,
	jintArray _upper
)
{
	guint symbol;
	guint* lower;
	guint* upper;

	// convert parameter symbol
	symbol = (guint) _symbol;

	// convert parameter lower
	lower = (guint*) (*env)->GetIntArrayElements(env, _lower, NULL);
	if (lower == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter upper
	upper = (guint*) (*env)->GetIntArrayElements(env, _upper, NULL);
	if (upper == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gdk_keyval_convert_case(symbol, lower, upper);

	// cleanup parameter symbol

	// cleanup parameter lower
	(*env)->ReleaseIntArrayElements(env, _lower, (jint*)lower, 0);

	// cleanup parameter upper
	(*env)->ReleaseIntArrayElements(env, _upper, (jint*)upper, 0);
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1to_1upper
(
	JNIEnv* env,
	jclass cls,
	jint _keyval
)
{
	guint result;
	jint _result;
	guint keyval;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// call function
	result = gdk_keyval_to_upper(keyval);

	// cleanup parameter keyval

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1to_1lower
(
	JNIEnv* env,
	jclass cls,
	jint _keyval
)
{
	guint result;
	jint _result;
	guint keyval;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// call function
	result = gdk_keyval_to_lower(keyval);

	// cleanup parameter keyval

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1is_1upper
(
	JNIEnv* env,
	jclass cls,
	jint _keyval
)
{
	gboolean result;
	jboolean _result;
	guint keyval;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// call function
	result = gdk_keyval_is_upper(keyval);

	// cleanup parameter keyval

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1is_1lower
(
	JNIEnv* env,
	jclass cls,
	jint _keyval
)
{
	gboolean result;
	jboolean _result;
	guint keyval;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// call function
	result = gdk_keyval_is_lower(keyval);

	// cleanup parameter keyval

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1keyval_1to_1unicode
(
	JNIEnv* env,
	jclass cls,
	jint _keyval
)
{
	guint32 result;
	jint _result;
	guint keyval;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// call function
	result = gdk_keyval_to_unicode(keyval);

	// cleanup parameter keyval

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkKeyval_gdk_1unicode_1to_1keyval
(
	JNIEnv* env,
	jclass cls,
	jint _wc
)
{
	guint result;
	jint _result;
	guint32 wc;

	// convert parameter wc
	wc = (guint32) _wc;

	// call function
	result = gdk_unicode_to_keyval(wc);

	// cleanup parameter wc

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}
