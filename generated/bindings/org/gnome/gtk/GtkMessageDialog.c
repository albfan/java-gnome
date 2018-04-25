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
#include "org_gnome_gtk_GtkMessageDialog.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _parent,
	jint _flags,
	jint _type,
	jint _buttons,
	jstring _messageFormat
)
{
	GtkWidget* result;
	jlong _result;
	GtkWindow* parent;
	GtkDialogFlags flags;
	GtkMessageType type;
	GtkButtonsType buttons;
	const gchar* messageFormat;

	// convert parameter parent
	parent = (GtkWindow*) _parent;

	// convert parameter flags
	flags = (GtkDialogFlags) _flags;

	// convert parameter type
	type = (GtkMessageType) _type;

	// convert parameter buttons
	buttons = (GtkButtonsType) _buttons;

	// convert parameter messageFormat
	if (_messageFormat == NULL) {
		messageFormat = NULL;
	} else {
		messageFormat = (const gchar*) bindings_java_getString(env, _messageFormat);
		if (messageFormat == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_message_dialog_new(parent, flags, type, buttons, messageFormat, NULL);

	// cleanup parameter parent

	// cleanup parameter flags

	// cleanup parameter type

	// cleanup parameter buttons

	// cleanup parameter messageFormat
	if (messageFormat != NULL) {
		bindings_java_releaseString(messageFormat);
	}

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
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1new_1with_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _parent,
	jint _flags,
	jint _type,
	jint _buttons,
	jstring _messageFormat
)
{
	GtkWidget* result;
	jlong _result;
	GtkWindow* parent;
	GtkDialogFlags flags;
	GtkMessageType type;
	GtkButtonsType buttons;
	const gchar* messageFormat;

	// convert parameter parent
	parent = (GtkWindow*) _parent;

	// convert parameter flags
	flags = (GtkDialogFlags) _flags;

	// convert parameter type
	type = (GtkMessageType) _type;

	// convert parameter buttons
	buttons = (GtkButtonsType) _buttons;

	// convert parameter messageFormat
	if (_messageFormat == NULL) {
		messageFormat = NULL;
	} else {
		messageFormat = (const gchar*) bindings_java_getString(env, _messageFormat);
		if (messageFormat == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_message_dialog_new_with_markup(parent, flags, type, buttons, messageFormat, NULL);

	// cleanup parameter parent

	// cleanup parameter flags

	// cleanup parameter type

	// cleanup parameter buttons

	// cleanup parameter messageFormat
	if (messageFormat != NULL) {
		bindings_java_releaseString(messageFormat);
	}

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
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1format_1secondary_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _messageFormat
)
{
	GtkMessageDialog* self;
	const gchar* messageFormat;

	// convert parameter self
	self = (GtkMessageDialog*) _self;

	// convert parameter messageFormat
	messageFormat = (const gchar*) bindings_java_getString(env, _messageFormat);
	if (messageFormat == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_message_dialog_format_secondary_markup(self, messageFormat, NULL);

	// cleanup parameter self

	// cleanup parameter messageFormat
	bindings_java_releaseString(messageFormat);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1format_1secondary_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _messageFormat
)
{
	GtkMessageDialog* self;
	const gchar* messageFormat;

	// convert parameter self
	self = (GtkMessageDialog*) _self;

	// convert parameter messageFormat
	if (_messageFormat == NULL) {
		messageFormat = NULL;
	} else {
		messageFormat = (const gchar*) bindings_java_getString(env, _messageFormat);
		if (messageFormat == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_message_dialog_format_secondary_text(self, messageFormat, NULL);

	// cleanup parameter self

	// cleanup parameter messageFormat
	if (messageFormat != NULL) {
		bindings_java_releaseString(messageFormat);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1get_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMessageDialog* self;

	// convert parameter self
	self = (GtkMessageDialog*) _self;

	// call function
	result = gtk_message_dialog_get_image(self);

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
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1get_1message_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMessageDialog* self;

	// convert parameter self
	self = (GtkMessageDialog*) _self;

	// call function
	result = gtk_message_dialog_get_message_area(self);

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
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1set_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _image
)
{
	GtkMessageDialog* self;
	GtkWidget* image;

	// convert parameter self
	self = (GtkMessageDialog*) _self;

	// convert parameter image
	image = (GtkWidget*) _image;

	// call function
	gtk_message_dialog_set_image(self, image);

	// cleanup parameter self

	// cleanup parameter image
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMessageDialog_gtk_1message_1dialog_1set_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _str
)
{
	GtkMessageDialog* self;
	const gchar* str;

	// convert parameter self
	self = (GtkMessageDialog*) _self;

	// convert parameter str
	str = (const gchar*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_message_dialog_set_markup(self, str);

	// cleanup parameter self

	// cleanup parameter str
	bindings_java_releaseString(str);
}
