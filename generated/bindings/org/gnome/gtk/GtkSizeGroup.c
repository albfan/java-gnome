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
#include "org_gnome_gtk_GtkSizeGroup.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1new
(
	JNIEnv* env,
	jclass cls,
	jint _mode
)
{
	GtkSizeGroup* result;
	jlong _result;
	GtkSizeGroupMode mode;

	// convert parameter mode
	mode = (GtkSizeGroupMode) _mode;

	// call function
	result = gtk_size_group_new(mode);

	// cleanup parameter mode

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
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1add_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget
)
{
	GtkSizeGroup* self;
	GtkWidget* widget;

	// convert parameter self
	self = (GtkSizeGroup*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	gtk_size_group_add_widget(self, widget);

	// cleanup parameter self

	// cleanup parameter widget
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1get_1ignore_1hidden
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSizeGroup* self;

	// convert parameter self
	self = (GtkSizeGroup*) _self;

	// call function
	result = gtk_size_group_get_ignore_hidden(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1get_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSizeGroupMode result;
	jint _result;
	GtkSizeGroup* self;

	// convert parameter self
	self = (GtkSizeGroup*) _self;

	// call function
	result = gtk_size_group_get_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1get_1widgets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GtkSizeGroup* self;

	// convert parameter self
	self = (GtkSizeGroup*) _self;

	// call function
	result = gtk_size_group_get_widgets(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1remove_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget
)
{
	GtkSizeGroup* self;
	GtkWidget* widget;

	// convert parameter self
	self = (GtkSizeGroup*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	gtk_size_group_remove_widget(self, widget);

	// cleanup parameter self

	// cleanup parameter widget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1set_1ignore_1hidden
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _ignoreHidden
)
{
	GtkSizeGroup* self;
	gboolean ignoreHidden;

	// convert parameter self
	self = (GtkSizeGroup*) _self;

	// convert parameter ignoreHidden
	ignoreHidden = (gboolean) _ignoreHidden;

	// call function
	gtk_size_group_set_ignore_hidden(self, ignoreHidden);

	// cleanup parameter self

	// cleanup parameter ignoreHidden
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkSizeGroup_gtk_1size_1group_1set_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _mode
)
{
	GtkSizeGroup* self;
	GtkSizeGroupMode mode;

	// convert parameter self
	self = (GtkSizeGroup*) _self;

	// convert parameter mode
	mode = (GtkSizeGroupMode) _mode;

	// call function
	gtk_size_group_set_mode(self, mode);

	// cleanup parameter self

	// cleanup parameter mode
}
