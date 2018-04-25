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
#include "org_gnome_pango_PangoAttrList.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1new
(
	JNIEnv* env,
	jclass cls
)
{
	PangoAttrList* result;
	jlong _result;

	// call function
	result = pango_attr_list_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1change
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attr
)
{
	PangoAttrList* self;
	PangoAttribute* attr;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// convert parameter attr
	attr = (PangoAttribute*) _attr;

	// call function
	pango_attr_list_change(self, attr);

	// cleanup parameter self

	// cleanup parameter attr
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrList* result;
	jlong _result;
	PangoAttrList* self;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// call function
	result = pango_attr_list_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1get_1iterator
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrIterator* result;
	jlong _result;
	PangoAttrList* self;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// call function
	result = pango_attr_list_get_iterator(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attr
)
{
	PangoAttrList* self;
	PangoAttribute* attr;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// convert parameter attr
	attr = (PangoAttribute*) _attr;

	// call function
	pango_attr_list_insert(self, attr);

	// cleanup parameter self

	// cleanup parameter attr
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1insert_1before
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attr
)
{
	PangoAttrList* self;
	PangoAttribute* attr;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// convert parameter attr
	attr = (PangoAttribute*) _attr;

	// call function
	pango_attr_list_insert_before(self, attr);

	// cleanup parameter self

	// cleanup parameter attr
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrList* result;
	jlong _result;
	PangoAttrList* self;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// call function
	result = pango_attr_list_ref(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1splice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _other,
	jint _pos,
	jint _len
)
{
	PangoAttrList* self;
	PangoAttrList* other;
	gint pos;
	gint len;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// convert parameter other
	other = (PangoAttrList*) _other;

	// convert parameter pos
	pos = (gint) _pos;

	// convert parameter len
	len = (gint) _len;

	// call function
	pango_attr_list_splice(self, other, pos, len);

	// cleanup parameter self

	// cleanup parameter other

	// cleanup parameter pos

	// cleanup parameter len
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttrList_pango_1attr_1list_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrList* self;

	// convert parameter self
	self = (PangoAttrList*) _self;

	// call function
	pango_attr_list_unref(self);

	// cleanup parameter self
}
