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
#include "org_gnome_pango_PangoItem.h"

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1get_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoItem* self;

	// convert parameter self
	self = (PangoItem*) _self;

	// get field value
	result = self->offset;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1set_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset
)
{
	PangoItem* self;
	gint offset;

	// convert parameter self
	self = (PangoItem*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// set field value
	self->offset = offset;

	// cleanup parameter self

	// cleanup parameter offset
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1get_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoItem* self;

	// convert parameter self
	self = (PangoItem*) _self;

	// get field value
	result = self->length;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1set_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _length
)
{
	PangoItem* self;
	gint length;

	// convert parameter self
	self = (PangoItem*) _self;

	// convert parameter length
	length = (gint) _length;

	// set field value
	self->length = length;

	// cleanup parameter self

	// cleanup parameter length
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1get_1num_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoItem* self;

	// convert parameter self
	self = (PangoItem*) _self;

	// get field value
	result = self->num_chars;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1set_1num_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _numChars
)
{
	PangoItem* self;
	gint numChars;

	// convert parameter self
	self = (PangoItem*) _self;

	// convert parameter numChars
	numChars = (gint) _numChars;

	// set field value
	self->num_chars = numChars;

	// cleanup parameter self

	// cleanup parameter numChars
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1new
(
	JNIEnv* env,
	jclass cls
)
{
	PangoItem* result;
	jlong _result;

	// call function
	result = pango_item_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoItem* result;
	jlong _result;
	PangoItem* self;

	// convert parameter self
	self = (PangoItem*) _self;

	// call function
	result = pango_item_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoItem* self;

	// convert parameter self
	self = (PangoItem*) _self;

	// call function
	pango_item_free(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoItem_pango_1item_1split
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _splitIndex,
	jint _splitOffset
)
{
	PangoItem* result;
	jlong _result;
	PangoItem* self;
	int splitIndex;
	int splitOffset;

	// convert parameter self
	self = (PangoItem*) _self;

	// convert parameter splitIndex
	splitIndex = (int) _splitIndex;

	// convert parameter splitOffset
	splitOffset = (int) _splitOffset;

	// call function
	result = pango_item_split(self, splitIndex, splitOffset);

	// cleanup parameter self

	// cleanup parameter splitIndex

	// cleanup parameter splitOffset

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}
