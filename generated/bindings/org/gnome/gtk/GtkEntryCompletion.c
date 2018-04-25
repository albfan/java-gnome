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
#include "org_gnome_gtk_GtkEntryCompletion.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkEntryCompletion* result;
	jlong _result;

	// call function
	result = gtk_entry_completion_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1complete
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	gtk_entry_completion_complete(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1compute_1prefix
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key
)
{
	gchar* result;
	jstring _result;
	GtkEntryCompletion* self;
	const char* key;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter key
	key = (const char*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return NULL; // Java Exception already thrown
	}

	// call function
	result = gtk_entry_completion_compute_prefix(self, key);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1delete_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	GtkEntryCompletion* self;
	gint index;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter index
	index = (gint) _index;

	// call function
	gtk_entry_completion_delete_action(self, index);

	// cleanup parameter self

	// cleanup parameter index
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1completion_1prefix
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_completion_prefix(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1entry
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_entry(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1inline_1completion
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_inline_completion(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1inline_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_inline_selection(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1minimum_1key_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_minimum_key_length(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_model(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1popup_1completion
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_popup_completion(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1popup_1set_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_popup_set_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1popup_1single_1match
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_popup_single_match(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1get_1text_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	result = gtk_entry_completion_get_text_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1insert_1action_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jstring _markup
)
{
	GtkEntryCompletion* self;
	gint index;
	const gchar* markup;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter index
	index = (gint) _index;

	// convert parameter markup
	markup = (const gchar*) bindings_java_getString(env, _markup);
	if (markup == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_entry_completion_insert_action_markup(self, index, markup);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter markup
	bindings_java_releaseString(markup);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1insert_1action_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jstring _text
)
{
	GtkEntryCompletion* self;
	gint index;
	const gchar* text;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter index
	index = (gint) _index;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_entry_completion_insert_action_text(self, index, text);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1insert_1prefix
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntryCompletion* self;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// call function
	gtk_entry_completion_insert_prefix(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1inline_1completion
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _inlineCompletion
)
{
	GtkEntryCompletion* self;
	gboolean inlineCompletion;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter inlineCompletion
	inlineCompletion = (gboolean) _inlineCompletion;

	// call function
	gtk_entry_completion_set_inline_completion(self, inlineCompletion);

	// cleanup parameter self

	// cleanup parameter inlineCompletion
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1inline_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _inlineSelection
)
{
	GtkEntryCompletion* self;
	gboolean inlineSelection;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter inlineSelection
	inlineSelection = (gboolean) _inlineSelection;

	// call function
	gtk_entry_completion_set_inline_selection(self, inlineSelection);

	// cleanup parameter self

	// cleanup parameter inlineSelection
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1minimum_1key_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _length
)
{
	GtkEntryCompletion* self;
	gint length;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter length
	length = (gint) _length;

	// call function
	gtk_entry_completion_set_minimum_key_length(self, length);

	// cleanup parameter self

	// cleanup parameter length
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _model
)
{
	GtkEntryCompletion* self;
	GtkTreeModel* model;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	gtk_entry_completion_set_model(self, model);

	// cleanup parameter self

	// cleanup parameter model
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1popup_1completion
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _popupCompletion
)
{
	GtkEntryCompletion* self;
	gboolean popupCompletion;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter popupCompletion
	popupCompletion = (gboolean) _popupCompletion;

	// call function
	gtk_entry_completion_set_popup_completion(self, popupCompletion);

	// cleanup parameter self

	// cleanup parameter popupCompletion
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1popup_1set_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _popupSetWidth
)
{
	GtkEntryCompletion* self;
	gboolean popupSetWidth;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter popupSetWidth
	popupSetWidth = (gboolean) _popupSetWidth;

	// call function
	gtk_entry_completion_set_popup_set_width(self, popupSetWidth);

	// cleanup parameter self

	// cleanup parameter popupSetWidth
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1popup_1single_1match
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _popupSingleMatch
)
{
	GtkEntryCompletion* self;
	gboolean popupSingleMatch;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter popupSingleMatch
	popupSingleMatch = (gboolean) _popupSingleMatch;

	// call function
	gtk_entry_completion_set_popup_single_match(self, popupSingleMatch);

	// cleanup parameter self

	// cleanup parameter popupSingleMatch
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntryCompletion_gtk_1entry_1completion_1set_1text_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkEntryCompletion* self;
	gint column;

	// convert parameter self
	self = (GtkEntryCompletion*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_entry_completion_set_text_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}
