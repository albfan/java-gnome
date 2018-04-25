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
#include "bindings_java.h"
#include "org_gnome_gtk_GtkActivatable.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActivatable_gtk_1activatable_1do_1set_1related_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _action
)
{
	GtkActivatable* self;
	GtkAction* action;

	// convert parameter self
	self = (GtkActivatable*) _self;

	// convert parameter action
	action = (GtkAction*) _action;

	// call function
	gtk_activatable_do_set_related_action(self, action);

	// cleanup parameter self

	// cleanup parameter action
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkActivatable_gtk_1activatable_1get_1related_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAction* result;
	jlong _result;
	GtkActivatable* self;

	// convert parameter self
	self = (GtkActivatable*) _self;

	// call function
	result = gtk_activatable_get_related_action(self);

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
Java_org_gnome_gtk_GtkActivatable_gtk_1activatable_1get_1use_1action_1appearance
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkActivatable* self;

	// convert parameter self
	self = (GtkActivatable*) _self;

	// call function
	result = gtk_activatable_get_use_action_appearance(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActivatable_gtk_1activatable_1set_1related_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _action
)
{
	GtkActivatable* self;
	GtkAction* action;

	// convert parameter self
	self = (GtkActivatable*) _self;

	// convert parameter action
	action = (GtkAction*) _action;

	// call function
	gtk_activatable_set_related_action(self, action);

	// cleanup parameter self

	// cleanup parameter action
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActivatable_gtk_1activatable_1set_1use_1action_1appearance
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useAppearance
)
{
	GtkActivatable* self;
	gboolean useAppearance;

	// convert parameter self
	self = (GtkActivatable*) _self;

	// convert parameter useAppearance
	useAppearance = (gboolean) _useAppearance;

	// call function
	gtk_activatable_set_use_action_appearance(self, useAppearance);

	// cleanup parameter self

	// cleanup parameter useAppearance
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkActivatable_gtk_1activatable_1sync_1action_1properties
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _action
)
{
	GtkActivatable* self;
	GtkAction* action;

	// convert parameter self
	self = (GtkActivatable*) _self;

	// convert parameter action
	action = (GtkAction*) _action;

	// call function
	gtk_activatable_sync_action_properties(self, action);

	// cleanup parameter self

	// cleanup parameter action
}
