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
#include "org_gnome_atk_AtkTextRange.h"

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkTextRange_atk_1text_1range_1get_1start_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkTextRange* self;

	// convert parameter self
	self = (AtkTextRange*) _self;

	// get field value
	result = self->start_offset;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTextRange_atk_1text_1range_1set_1start_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startOffset
)
{
	AtkTextRange* self;
	gint startOffset;

	// convert parameter self
	self = (AtkTextRange*) _self;

	// convert parameter startOffset
	startOffset = (gint) _startOffset;

	// set field value
	self->start_offset = startOffset;

	// cleanup parameter self

	// cleanup parameter startOffset
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkTextRange_atk_1text_1range_1get_1end_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkTextRange* self;

	// convert parameter self
	self = (AtkTextRange*) _self;

	// get field value
	result = self->end_offset;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTextRange_atk_1text_1range_1set_1end_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _endOffset
)
{
	AtkTextRange* self;
	gint endOffset;

	// convert parameter self
	self = (AtkTextRange*) _self;

	// convert parameter endOffset
	endOffset = (gint) _endOffset;

	// set field value
	self->end_offset = endOffset;

	// cleanup parameter self

	// cleanup parameter endOffset
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkTextRange_atk_1text_1range_1get_1content
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	AtkTextRange* self;

	// convert parameter self
	self = (AtkTextRange*) _self;

	// get field value
	result = self->content;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTextRange_atk_1text_1range_1set_1content
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _content
)
{
	AtkTextRange* self;
	gchar* content;

	// convert parameter self
	self = (AtkTextRange*) _self;

	// convert parameter content
	content = (gchar*) bindings_java_getString(env, _content);
	if (content == NULL) {
		return; // Java Exception already thrown
	}

	// set field value
	self->content = content;

	// cleanup parameter self

	// cleanup parameter content
	bindings_java_releaseString(content);
}
