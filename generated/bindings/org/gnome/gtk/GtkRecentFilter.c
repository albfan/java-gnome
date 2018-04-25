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
#include "org_gnome_gtk_GtkRecentFilter.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkRecentFilter* result;
	jlong _result;

	// call function
	result = gtk_recent_filter_new();

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
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1add_1age
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _days
)
{
	GtkRecentFilter* self;
	gint days;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// convert parameter days
	days = (gint) _days;

	// call function
	gtk_recent_filter_add_age(self, days);

	// cleanup parameter self

	// cleanup parameter days
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1add_1application
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _application
)
{
	GtkRecentFilter* self;
	const gchar* application;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// convert parameter application
	application = (const gchar*) bindings_java_getString(env, _application);
	if (application == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_recent_filter_add_application(self, application);

	// cleanup parameter self

	// cleanup parameter application
	bindings_java_releaseString(application);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1add_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _group
)
{
	GtkRecentFilter* self;
	const gchar* group;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// convert parameter group
	group = (const gchar*) bindings_java_getString(env, _group);
	if (group == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_recent_filter_add_group(self, group);

	// cleanup parameter self

	// cleanup parameter group
	bindings_java_releaseString(group);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1add_1mime_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _mimeType
)
{
	GtkRecentFilter* self;
	const gchar* mimeType;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// convert parameter mimeType
	mimeType = (const gchar*) bindings_java_getString(env, _mimeType);
	if (mimeType == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_recent_filter_add_mime_type(self, mimeType);

	// cleanup parameter self

	// cleanup parameter mimeType
	bindings_java_releaseString(mimeType);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1add_1pattern
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _pattern
)
{
	GtkRecentFilter* self;
	const gchar* pattern;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// convert parameter pattern
	pattern = (const gchar*) bindings_java_getString(env, _pattern);
	if (pattern == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_recent_filter_add_pattern(self, pattern);

	// cleanup parameter self

	// cleanup parameter pattern
	bindings_java_releaseString(pattern);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1add_1pixbuf_1formats
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentFilter* self;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// call function
	gtk_recent_filter_add_pixbuf_formats(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkRecentFilter* self;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// call function
	result = gtk_recent_filter_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1get_1needed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkRecentFilterFlags result;
	jint _result;
	GtkRecentFilter* self;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// call function
	result = gtk_recent_filter_get_needed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentFilter_gtk_1recent_1filter_1set_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkRecentFilter* self;
	const gchar* name;

	// convert parameter self
	self = (GtkRecentFilter*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_recent_filter_set_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}
