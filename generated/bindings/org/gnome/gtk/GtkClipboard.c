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
#include "org_gnome_gtk_GtkClipboard.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1clear
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	gtk_clipboard_clear(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1get_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_get_display(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1get_1owner
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GObject* result;
	jlong _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_get_owner(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1set_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	GtkClipboard* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_clipboard_set_image(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _len
)
{
	GtkClipboard* self;
	const gchar* text;
	gint len;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// call function
	gtk_clipboard_set_text(self, text, len);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1store
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	gtk_clipboard_store(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1wait_1for_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_wait_for_image(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1wait_1for_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_wait_for_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1wait_1for_1uris
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_wait_for_uris(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1wait_1is_1image_1available
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_wait_is_image_available(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1wait_1is_1rich_1text_1available
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _buffer
)
{
	gboolean result;
	jboolean _result;
	GtkClipboard* self;
	GtkTextBuffer* buffer;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// convert parameter buffer
	buffer = (GtkTextBuffer*) _buffer;

	// call function
	result = gtk_clipboard_wait_is_rich_text_available(self, buffer);

	// cleanup parameter self

	// cleanup parameter buffer

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1wait_1is_1text_1available
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_wait_is_text_available(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1wait_1is_1uris_1available
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkClipboard* self;

	// convert parameter self
	self = (GtkClipboard*) _self;

	// call function
	result = gtk_clipboard_wait_is_uris_available(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkClipboard_gtk_1clipboard_1get_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _display
)
{
	GtkClipboard* result;
	jlong _result;
	GdkDisplay* display;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// call function
	result = gtk_clipboard_get_default(display);

	// cleanup parameter display

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
