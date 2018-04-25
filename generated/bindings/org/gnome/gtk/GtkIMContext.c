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
#include <gtk/gtk-a11y.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include "bindings_java.h"
#include "org_gnome_gtk_GtkIMContext.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1delete_1surrounding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset,
	jint _nChars
)
{
	gboolean result;
	jboolean _result;
	GtkIMContext* self;
	gint offset;
	gint nChars;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	result = gtk_im_context_delete_surrounding(self, offset, nChars);

	// cleanup parameter self

	// cleanup parameter offset

	// cleanup parameter nChars

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1filter_1keypress
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GtkIMContext* self;
	GdkEventKey* event;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter event
	event = (GdkEventKey*) _event;

	// call function
	result = gtk_im_context_filter_keypress(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1focus_1in
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIMContext* self;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// call function
	gtk_im_context_focus_in(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1focus_1out
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIMContext* self;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// call function
	gtk_im_context_focus_out(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1get_1preedit_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _str,
	jlongArray _attrs,
	jintArray _cursorPos
)
{
	GtkIMContext* self;
	gchar** str;
	PangoAttrList** attrs;
	gint* cursorPos;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter str
	if (_str == NULL) {
		str = NULL;
	} else {
		str = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _str);
		if (str == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter attrs
	if (_attrs == NULL) {
		attrs = NULL;
	} else {
		attrs = (PangoAttrList**) bindings_java_convert_jarray_to_gpointer(env, _attrs);
		if (attrs == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter cursorPos
	if (_cursorPos == NULL) {
		cursorPos = NULL;
	} else {
		cursorPos = (gint*) (*env)->GetIntArrayElements(env, _cursorPos, NULL);
		if (cursorPos == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_im_context_get_preedit_string(self, str, attrs, cursorPos);

	// cleanup parameter self

	// cleanup parameter str
	if (str != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)str, _str);
	}

	// cleanup parameter attrs
	if (attrs != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)attrs, _attrs);
	}

	// cleanup parameter cursorPos
	if (cursorPos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _cursorPos, (jint*)cursorPos, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1get_1surrounding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _text,
	jintArray _cursorIndex
)
{
	gboolean result;
	jboolean _result;
	GtkIMContext* self;
	gchar** text;
	gint* cursorIndex;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter text
	if (_text == NULL) {
		text = NULL;
	} else {
		text = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _text);
		if (text == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter cursorIndex
	if (_cursorIndex == NULL) {
		cursorIndex = NULL;
	} else {
		cursorIndex = (gint*) (*env)->GetIntArrayElements(env, _cursorIndex, NULL);
		if (cursorIndex == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_im_context_get_surrounding(self, text, cursorIndex);

	// cleanup parameter self

	// cleanup parameter text
	if (text != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)text, _text);
	}

	// cleanup parameter cursorIndex
	if (cursorIndex != NULL) {
		(*env)->ReleaseIntArrayElements(env, _cursorIndex, (jint*)cursorIndex, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1reset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIMContext* self;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// call function
	gtk_im_context_reset(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1set_1client_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkIMContext* self;
	GdkWindow* window;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// call function
	gtk_im_context_set_client_window(self, window);

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1set_1cursor_1location
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _area
)
{
	GtkIMContext* self;
	const GdkRectangle* area;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter area
	area = (const GdkRectangle*) _area;

	// call function
	gtk_im_context_set_cursor_location(self, area);

	// cleanup parameter self

	// cleanup parameter area
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1set_1surrounding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _len,
	jint _cursorIndex
)
{
	GtkIMContext* self;
	const gchar* text;
	gint len;
	gint cursorIndex;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// convert parameter cursorIndex
	cursorIndex = (gint) _cursorIndex;

	// call function
	gtk_im_context_set_surrounding(self, text, len, cursorIndex);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len

	// cleanup parameter cursorIndex
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIMContext_gtk_1im_1context_1set_1use_1preedit
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _usePreedit
)
{
	GtkIMContext* self;
	gboolean usePreedit;

	// convert parameter self
	self = (GtkIMContext*) _self;

	// convert parameter usePreedit
	usePreedit = (gboolean) _usePreedit;

	// call function
	gtk_im_context_set_use_preedit(self, usePreedit);

	// cleanup parameter self

	// cleanup parameter usePreedit
}
