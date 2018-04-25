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
#include "org_gnome_pango_PangoAttrIterator.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttrIterator_pango_1attr_1iterator_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrIterator* result;
	jlong _result;
	PangoAttrIterator* self;

	// convert parameter self
	self = (PangoAttrIterator*) _self;

	// call function
	result = pango_attr_iterator_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttrIterator_pango_1attr_1iterator_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrIterator* self;

	// convert parameter self
	self = (PangoAttrIterator*) _self;

	// call function
	pango_attr_iterator_destroy(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttrIterator_pango_1attr_1iterator_1get
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	PangoAttribute* result;
	jlong _result;
	PangoAttrIterator* self;
	PangoAttrType type;

	// convert parameter self
	self = (PangoAttrIterator*) _self;

	// convert parameter type
	type = (PangoAttrType) _type;

	// call function
	result = pango_attr_iterator_get(self, type);

	// cleanup parameter self

	// cleanup parameter type

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_pango_PangoAttrIterator_pango_1attr_1iterator_1get_1attrs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	PangoAttrIterator* self;

	// convert parameter self
	self = (PangoAttrIterator*) _self;

	// call function
	result = pango_attr_iterator_get_attrs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// cleanup return value
	if (result != NULL) {
		g_slist_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoAttrIterator_pango_1attr_1iterator_1next
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoAttrIterator* self;

	// convert parameter self
	self = (PangoAttrIterator*) _self;

	// call function
	result = pango_attr_iterator_next(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttrIterator_pango_1attr_1iterator_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _start,
	jintArray _end
)
{
	PangoAttrIterator* self;
	gint* start;
	gint* end;

	// convert parameter self
	self = (PangoAttrIterator*) _self;

	// convert parameter start
	if (_start == NULL) {
		start = NULL;
	} else {
		start = (gint*) (*env)->GetIntArrayElements(env, _start, NULL);
		if (start == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter end
	if (_end == NULL) {
		end = NULL;
	} else {
		end = (gint*) (*env)->GetIntArrayElements(env, _end, NULL);
		if (end == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_attr_iterator_range(self, start, end);

	// cleanup parameter self

	// cleanup parameter start
	if (start != NULL) {
		(*env)->ReleaseIntArrayElements(env, _start, (jint*)start, 0);
	}

	// cleanup parameter end
	if (end != NULL) {
		(*env)->ReleaseIntArrayElements(env, _end, (jint*)end, 0);
	}
}
