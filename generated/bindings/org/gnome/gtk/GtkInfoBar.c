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
#include "org_gnome_gtk_GtkInfoBar.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_info_bar_new();

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
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1new_1with_1buttons
(
	JNIEnv* env,
	jclass cls,
	jstring _firstButtonText
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* firstButtonText;

	// convert parameter firstButtonText
	if (_firstButtonText == NULL) {
		firstButtonText = NULL;
	} else {
		firstButtonText = (const gchar*) bindings_java_getString(env, _firstButtonText);
		if (firstButtonText == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_info_bar_new_with_buttons(firstButtonText, NULL);

	// cleanup parameter firstButtonText
	if (firstButtonText != NULL) {
		bindings_java_releaseString(firstButtonText);
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
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1add_1action_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _responseId
)
{
	GtkInfoBar* self;
	GtkWidget* child;
	gint responseId;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter responseId
	responseId = (gint) _responseId;

	// call function
	gtk_info_bar_add_action_widget(self, child, responseId);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter responseId
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1add_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _buttonText,
	jint _responseId
)
{
	GtkWidget* result;
	jlong _result;
	GtkInfoBar* self;
	const gchar* buttonText;
	gint responseId;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter buttonText
	buttonText = (const gchar*) bindings_java_getString(env, _buttonText);
	if (buttonText == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter responseId
	responseId = (gint) _responseId;

	// call function
	result = gtk_info_bar_add_button(self, buttonText, responseId);

	// cleanup parameter self

	// cleanup parameter buttonText
	bindings_java_releaseString(buttonText);

	// cleanup parameter responseId

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
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1add_1buttons
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _firstButtonText
)
{
	GtkInfoBar* self;
	const gchar* firstButtonText;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter firstButtonText
	firstButtonText = (const gchar*) bindings_java_getString(env, _firstButtonText);
	if (firstButtonText == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_info_bar_add_buttons(self, firstButtonText, NULL);

	// cleanup parameter self

	// cleanup parameter firstButtonText
	bindings_java_releaseString(firstButtonText);
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1get_1action_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkInfoBar* self;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// call function
	result = gtk_info_bar_get_action_area(self);

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
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1get_1content_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkInfoBar* self;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// call function
	result = gtk_info_bar_get_content_area(self);

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

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1get_1message_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMessageType result;
	jint _result;
	GtkInfoBar* self;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// call function
	result = gtk_info_bar_get_message_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1get_1revealed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkInfoBar* self;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// call function
	result = gtk_info_bar_get_revealed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1get_1show_1close_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkInfoBar* self;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// call function
	result = gtk_info_bar_get_show_close_button(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1response
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _responseId
)
{
	GtkInfoBar* self;
	gint responseId;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter responseId
	responseId = (gint) _responseId;

	// call function
	gtk_info_bar_response(self, responseId);

	// cleanup parameter self

	// cleanup parameter responseId
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1set_1default_1response
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _responseId
)
{
	GtkInfoBar* self;
	gint responseId;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter responseId
	responseId = (gint) _responseId;

	// call function
	gtk_info_bar_set_default_response(self, responseId);

	// cleanup parameter self

	// cleanup parameter responseId
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1set_1message_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _messageType
)
{
	GtkInfoBar* self;
	GtkMessageType messageType;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter messageType
	messageType = (GtkMessageType) _messageType;

	// call function
	gtk_info_bar_set_message_type(self, messageType);

	// cleanup parameter self

	// cleanup parameter messageType
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1set_1response_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _responseId,
	jboolean _setting
)
{
	GtkInfoBar* self;
	gint responseId;
	gboolean setting;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter responseId
	responseId = (gint) _responseId;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_info_bar_set_response_sensitive(self, responseId, setting);

	// cleanup parameter self

	// cleanup parameter responseId

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1set_1revealed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _revealed
)
{
	GtkInfoBar* self;
	gboolean revealed;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter revealed
	revealed = (gboolean) _revealed;

	// call function
	gtk_info_bar_set_revealed(self, revealed);

	// cleanup parameter self

	// cleanup parameter revealed
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkInfoBar_gtk_1info_1bar_1set_1show_1close_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkInfoBar* self;
	gboolean setting;

	// convert parameter self
	self = (GtkInfoBar*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_info_bar_set_show_close_button(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}
