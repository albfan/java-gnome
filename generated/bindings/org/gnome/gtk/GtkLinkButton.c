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
#include "org_gnome_gtk_GtkLinkButton.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkLinkButton_gtk_1link_1button_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _uri
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* uri;

	// convert parameter uri
	uri = (const gchar*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_link_button_new(uri);

	// cleanup parameter uri
	bindings_java_releaseString(uri);

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
Java_org_gnome_gtk_GtkLinkButton_gtk_1link_1button_1new_1with_1label
(
	JNIEnv* env,
	jclass cls,
	jstring _uri,
	jstring _label
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* uri;
	const gchar* label;

	// convert parameter uri
	uri = (const gchar*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter label
	if (_label == NULL) {
		label = NULL;
	} else {
		label = (const gchar*) bindings_java_getString(env, _label);
		if (label == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_link_button_new_with_label(uri, label);

	// cleanup parameter uri
	bindings_java_releaseString(uri);

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
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

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkLinkButton_gtk_1link_1button_1get_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkLinkButton* self;

	// convert parameter self
	self = (GtkLinkButton*) _self;

	// call function
	result = gtk_link_button_get_uri(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkLinkButton_gtk_1link_1button_1get_1visited
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkLinkButton* self;

	// convert parameter self
	self = (GtkLinkButton*) _self;

	// call function
	result = gtk_link_button_get_visited(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLinkButton_gtk_1link_1button_1set_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _uri
)
{
	GtkLinkButton* self;
	const gchar* uri;

	// convert parameter self
	self = (GtkLinkButton*) _self;

	// convert parameter uri
	uri = (const gchar*) bindings_java_getString(env, _uri);
	if (uri == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_link_button_set_uri(self, uri);

	// cleanup parameter self

	// cleanup parameter uri
	bindings_java_releaseString(uri);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLinkButton_gtk_1link_1button_1set_1visited
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visited
)
{
	GtkLinkButton* self;
	gboolean visited;

	// convert parameter self
	self = (GtkLinkButton*) _self;

	// convert parameter visited
	visited = (gboolean) _visited;

	// call function
	gtk_link_button_set_visited(self, visited);

	// cleanup parameter self

	// cleanup parameter visited
}
