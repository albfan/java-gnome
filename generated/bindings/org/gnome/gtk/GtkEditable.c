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
#include "org_gnome_gtk_GtkEditable.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1copy_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEditable* self;

	// convert parameter self
	self = (GtkEditable*) _self;

	// call function
	gtk_editable_copy_clipboard(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1cut_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEditable* self;

	// convert parameter self
	self = (GtkEditable*) _self;

	// call function
	gtk_editable_cut_clipboard(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1delete_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEditable* self;

	// convert parameter self
	self = (GtkEditable*) _self;

	// call function
	gtk_editable_delete_selection(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1delete_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startPos,
	jint _endPos
)
{
	GtkEditable* self;
	gint startPos;
	gint endPos;

	// convert parameter self
	self = (GtkEditable*) _self;

	// convert parameter startPos
	startPos = (gint) _startPos;

	// convert parameter endPos
	endPos = (gint) _endPos;

	// call function
	gtk_editable_delete_text(self, startPos, endPos);

	// cleanup parameter self

	// cleanup parameter startPos

	// cleanup parameter endPos
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1get_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startPos,
	jint _endPos
)
{
	gchar* result;
	jstring _result;
	GtkEditable* self;
	gint startPos;
	gint endPos;

	// convert parameter self
	self = (GtkEditable*) _self;

	// convert parameter startPos
	startPos = (gint) _startPos;

	// convert parameter endPos
	endPos = (gint) _endPos;

	// call function
	result = gtk_editable_get_chars(self, startPos, endPos);

	// cleanup parameter self

	// cleanup parameter startPos

	// cleanup parameter endPos

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1get_1editable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEditable* self;

	// convert parameter self
	self = (GtkEditable*) _self;

	// call function
	result = gtk_editable_get_editable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1get_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEditable* self;

	// convert parameter self
	self = (GtkEditable*) _self;

	// call function
	result = gtk_editable_get_position(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1get_1selection_1bounds
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _startPos,
	jintArray _endPos
)
{
	gboolean result;
	jboolean _result;
	GtkEditable* self;
	gint* startPos;
	gint* endPos;

	// convert parameter self
	self = (GtkEditable*) _self;

	// convert parameter startPos
	if (_startPos == NULL) {
		startPos = NULL;
	} else {
		startPos = (gint*) (*env)->GetIntArrayElements(env, _startPos, NULL);
		if (startPos == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter endPos
	if (_endPos == NULL) {
		endPos = NULL;
	} else {
		endPos = (gint*) (*env)->GetIntArrayElements(env, _endPos, NULL);
		if (endPos == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_editable_get_selection_bounds(self, startPos, endPos);

	// cleanup parameter self

	// cleanup parameter startPos
	if (startPos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _startPos, (jint*)startPos, 0);
	}

	// cleanup parameter endPos
	if (endPos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _endPos, (jint*)endPos, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1insert_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _newText,
	jint _newTextLength,
	jintArray _position
)
{
	GtkEditable* self;
	const gchar* newText;
	gint newTextLength;
	gint* position;

	// convert parameter self
	self = (GtkEditable*) _self;

	// convert parameter newText
	newText = (const gchar*) bindings_java_getString(env, _newText);
	if (newText == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter newTextLength
	newTextLength = (gint) _newTextLength;

	// convert parameter position
	position = (gint*) (*env)->GetIntArrayElements(env, _position, NULL);
	if (position == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_editable_insert_text(self, newText, newTextLength, position);

	// cleanup parameter self

	// cleanup parameter newText
	bindings_java_releaseString(newText);

	// cleanup parameter newTextLength

	// cleanup parameter position
	(*env)->ReleaseIntArrayElements(env, _position, (jint*)position, 0);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1paste_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEditable* self;

	// convert parameter self
	self = (GtkEditable*) _self;

	// call function
	gtk_editable_paste_clipboard(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1select_1region
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startPos,
	jint _endPos
)
{
	GtkEditable* self;
	gint startPos;
	gint endPos;

	// convert parameter self
	self = (GtkEditable*) _self;

	// convert parameter startPos
	startPos = (gint) _startPos;

	// convert parameter endPos
	endPos = (gint) _endPos;

	// call function
	gtk_editable_select_region(self, startPos, endPos);

	// cleanup parameter self

	// cleanup parameter startPos

	// cleanup parameter endPos
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1set_1editable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _isEditable
)
{
	GtkEditable* self;
	gboolean isEditable;

	// convert parameter self
	self = (GtkEditable*) _self;

	// convert parameter isEditable
	isEditable = (gboolean) _isEditable;

	// call function
	gtk_editable_set_editable(self, isEditable);

	// cleanup parameter self

	// cleanup parameter isEditable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEditable_gtk_1editable_1set_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkEditable* self;
	gint position;

	// convert parameter self
	self = (GtkEditable*) _self;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_editable_set_position(self, position);

	// cleanup parameter self

	// cleanup parameter position
}
