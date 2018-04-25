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
#include "org_gnome_gtk_GtkComboBoxText.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_combo_box_text_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1new_1with_1entry
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_combo_box_text_new_with_entry();

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
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1append
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id,
	jstring _text
)
{
	GtkComboBoxText* self;
	const gchar* id;
	const gchar* text;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// convert parameter id
	if (_id == NULL) {
		id = NULL;
	} else {
		id = (const gchar*) bindings_java_getString(env, _id);
		if (id == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_combo_box_text_append(self, id, text);

	// cleanup parameter self

	// cleanup parameter id
	if (id != NULL) {
		bindings_java_releaseString(id);
	}

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1append_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkComboBoxText* self;
	const gchar* text;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_combo_box_text_append_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1get_1active_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkComboBoxText* self;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// call function
	result = gtk_combo_box_text_get_active_text(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position,
	jstring _id,
	jstring _text
)
{
	GtkComboBoxText* self;
	gint position;
	const gchar* id;
	const gchar* text;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// convert parameter position
	position = (gint) _position;

	// convert parameter id
	if (_id == NULL) {
		id = NULL;
	} else {
		id = (const gchar*) bindings_java_getString(env, _id);
		if (id == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_combo_box_text_insert(self, position, id, text);

	// cleanup parameter self

	// cleanup parameter position

	// cleanup parameter id
	if (id != NULL) {
		bindings_java_releaseString(id);
	}

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1insert_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position,
	jstring _text
)
{
	GtkComboBoxText* self;
	gint position;
	const gchar* text;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// convert parameter position
	position = (gint) _position;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_combo_box_text_insert_text(self, position, text);

	// cleanup parameter self

	// cleanup parameter position

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1prepend
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _id,
	jstring _text
)
{
	GtkComboBoxText* self;
	const gchar* id;
	const gchar* text;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// convert parameter id
	if (_id == NULL) {
		id = NULL;
	} else {
		id = (const gchar*) bindings_java_getString(env, _id);
		if (id == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_combo_box_text_prepend(self, id, text);

	// cleanup parameter self

	// cleanup parameter id
	if (id != NULL) {
		bindings_java_releaseString(id);
	}

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1prepend_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkComboBoxText* self;
	const gchar* text;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_combo_box_text_prepend_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1remove
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkComboBoxText* self;
	gint position;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_combo_box_text_remove(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkComboBoxText_gtk_1combo_1box_1text_1remove_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkComboBoxText* self;

	// convert parameter self
	self = (GtkComboBoxText*) _self;

	// call function
	gtk_combo_box_text_remove_all(self);

	// cleanup parameter self
}
