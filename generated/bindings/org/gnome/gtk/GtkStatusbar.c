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
#include "org_gnome_gtk_GtkStatusbar.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStatusbar_gtk_1statusbar_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_statusbar_new();

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
Java_org_gnome_gtk_GtkStatusbar_gtk_1statusbar_1get_1context_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _contextDescription
)
{
	guint result;
	jint _result;
	GtkStatusbar* self;
	const gchar* contextDescription;

	// convert parameter self
	self = (GtkStatusbar*) _self;

	// convert parameter contextDescription
	contextDescription = (const gchar*) bindings_java_getString(env, _contextDescription);
	if (contextDescription == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_statusbar_get_context_id(self, contextDescription);

	// cleanup parameter self

	// cleanup parameter contextDescription
	bindings_java_releaseString(contextDescription);

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStatusbar_gtk_1statusbar_1get_1message_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkStatusbar* self;

	// convert parameter self
	self = (GtkStatusbar*) _self;

	// call function
	result = gtk_statusbar_get_message_area(self);

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
Java_org_gnome_gtk_GtkStatusbar_gtk_1statusbar_1pop
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _contextId
)
{
	GtkStatusbar* self;
	guint contextId;

	// convert parameter self
	self = (GtkStatusbar*) _self;

	// convert parameter contextId
	contextId = (guint) _contextId;

	// call function
	gtk_statusbar_pop(self, contextId);

	// cleanup parameter self

	// cleanup parameter contextId
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStatusbar_gtk_1statusbar_1push
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _contextId,
	jstring _text
)
{
	guint result;
	jint _result;
	GtkStatusbar* self;
	guint contextId;
	const gchar* text;

	// convert parameter self
	self = (GtkStatusbar*) _self;

	// convert parameter contextId
	contextId = (guint) _contextId;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return  0; // Java Exception already thrown
	}

	// call function
	result = gtk_statusbar_push(self, contextId, text);

	// cleanup parameter self

	// cleanup parameter contextId

	// cleanup parameter text
	bindings_java_releaseString(text);

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusbar_gtk_1statusbar_1remove
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _contextId,
	jint _messageId
)
{
	GtkStatusbar* self;
	guint contextId;
	guint messageId;

	// convert parameter self
	self = (GtkStatusbar*) _self;

	// convert parameter contextId
	contextId = (guint) _contextId;

	// convert parameter messageId
	messageId = (guint) _messageId;

	// call function
	gtk_statusbar_remove(self, contextId, messageId);

	// cleanup parameter self

	// cleanup parameter contextId

	// cleanup parameter messageId
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStatusbar_gtk_1statusbar_1remove_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _contextId
)
{
	GtkStatusbar* self;
	guint contextId;

	// convert parameter self
	self = (GtkStatusbar*) _self;

	// convert parameter contextId
	contextId = (guint) _contextId;

	// call function
	gtk_statusbar_remove_all(self, contextId);

	// cleanup parameter self

	// cleanup parameter contextId
}
