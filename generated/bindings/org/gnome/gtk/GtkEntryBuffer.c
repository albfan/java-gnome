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
#include "org_gnome_gtk_GtkEntryBuffer.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _initialChars,
	jint _nInitialChars
)
{
	GtkEntryBuffer* result;
	jlong _result;
	const gchar* initialChars;
	gint nInitialChars;

	// convert parameter initialChars
	if (_initialChars == NULL) {
		initialChars = NULL;
	} else {
		initialChars = (const gchar*) bindings_java_getString(env, _initialChars);
		if (initialChars == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter nInitialChars
	nInitialChars = (gint) _nInitialChars;

	// call function
	result = gtk_entry_buffer_new(initialChars, nInitialChars);

	// cleanup parameter initialChars
	if (initialChars != NULL) {
		bindings_java_releaseString(initialChars);
	}

	// cleanup parameter nInitialChars

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1delete_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position,
	jint _nChars
)
{
	guint result;
	jint _result;
	GtkEntryBuffer* self;
	guint position;
	gint nChars;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// convert parameter position
	position = (guint) _position;

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	result = gtk_entry_buffer_delete_text(self, position, nChars);

	// cleanup parameter self

	// cleanup parameter position

	// cleanup parameter nChars

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1emit_1deleted_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position,
	jint _nChars
)
{
	GtkEntryBuffer* self;
	guint position;
	guint nChars;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// convert parameter position
	position = (guint) _position;

	// convert parameter nChars
	nChars = (guint) _nChars;

	// call function
	gtk_entry_buffer_emit_deleted_text(self, position, nChars);

	// cleanup parameter self

	// cleanup parameter position

	// cleanup parameter nChars
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1emit_1inserted_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position,
	jstring _chars,
	jint _nChars
)
{
	GtkEntryBuffer* self;
	guint position;
	const gchar* chars;
	guint nChars;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// convert parameter position
	position = (guint) _position;

	// convert parameter chars
	chars = (const gchar*) bindings_java_getString(env, _chars);
	if (chars == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter nChars
	nChars = (guint) _nChars;

	// call function
	gtk_entry_buffer_emit_inserted_text(self, position, chars, nChars);

	// cleanup parameter self

	// cleanup parameter position

	// cleanup parameter chars
	bindings_java_releaseString(chars);

	// cleanup parameter nChars
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1get_1bytes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gsize result;
	jlong _result;
	GtkEntryBuffer* self;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// call function
	result = gtk_entry_buffer_get_bytes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1get_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkEntryBuffer* self;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// call function
	result = gtk_entry_buffer_get_length(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1get_1max_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEntryBuffer* self;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// call function
	result = gtk_entry_buffer_get_max_length(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1get_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkEntryBuffer* self;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// call function
	result = gtk_entry_buffer_get_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1insert_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position,
	jstring _chars,
	jint _nChars
)
{
	guint result;
	jint _result;
	GtkEntryBuffer* self;
	guint position;
	const gchar* chars;
	gint nChars;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// convert parameter position
	position = (guint) _position;

	// convert parameter chars
	chars = (const gchar*) bindings_java_getString(env, _chars);
	if (chars == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	result = gtk_entry_buffer_insert_text(self, position, chars, nChars);

	// cleanup parameter self

	// cleanup parameter position

	// cleanup parameter chars
	bindings_java_releaseString(chars);

	// cleanup parameter nChars

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1set_1max_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _maxLength
)
{
	GtkEntryBuffer* self;
	gint maxLength;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// convert parameter maxLength
	maxLength = (gint) _maxLength;

	// call function
	gtk_entry_buffer_set_max_length(self, maxLength);

	// cleanup parameter self

	// cleanup parameter maxLength
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryBuffer_gtk_1entry_1buffer_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _chars,
	jint _nChars
)
{
	GtkEntryBuffer* self;
	const gchar* chars;
	gint nChars;

	// convert parameter self
	self = (GtkEntryBuffer*) _self;

	// convert parameter chars
	chars = (const gchar*) bindings_java_getString(env, _chars);
	if (chars == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	gtk_entry_buffer_set_text(self, chars, nChars);

	// cleanup parameter self

	// cleanup parameter chars
	bindings_java_releaseString(chars);

	// cleanup parameter nChars
}
