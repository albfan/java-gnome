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
#include "org_gnome_gtk_GtkRecentAction.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkRecentAction_gtk_1recent_1action_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _name,
	jstring _label,
	jstring _tooltip,
	jstring _stockId
)
{
	GtkAction* result;
	jlong _result;
	const gchar* name;
	const gchar* label;
	const gchar* tooltip;
	const gchar* stockId;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
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

	// convert parameter tooltip
	if (_tooltip == NULL) {
		tooltip = NULL;
	} else {
		tooltip = (const gchar*) bindings_java_getString(env, _tooltip);
		if (tooltip == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter stockId
	if (_stockId == NULL) {
		stockId = NULL;
	} else {
		stockId = (const gchar*) bindings_java_getString(env, _stockId);
		if (stockId == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_recent_action_new(name, label, tooltip, stockId);

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
	}

	// cleanup parameter tooltip
	if (tooltip != NULL) {
		bindings_java_releaseString(tooltip);
	}

	// cleanup parameter stockId
	if (stockId != NULL) {
		bindings_java_releaseString(stockId);
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
Java_org_gnome_gtk_GtkRecentAction_gtk_1recent_1action_1new_1for_1manager
(
	JNIEnv* env,
	jclass cls,
	jstring _name,
	jstring _label,
	jstring _tooltip,
	jstring _stockId,
	jlong _manager
)
{
	GtkAction* result;
	jlong _result;
	const gchar* name;
	const gchar* label;
	const gchar* tooltip;
	const gchar* stockId;
	GtkRecentManager* manager;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
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

	// convert parameter tooltip
	if (_tooltip == NULL) {
		tooltip = NULL;
	} else {
		tooltip = (const gchar*) bindings_java_getString(env, _tooltip);
		if (tooltip == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter stockId
	if (_stockId == NULL) {
		stockId = NULL;
	} else {
		stockId = (const gchar*) bindings_java_getString(env, _stockId);
		if (stockId == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter manager
	manager = (GtkRecentManager*) _manager;

	// call function
	result = gtk_recent_action_new_for_manager(name, label, tooltip, stockId, manager);

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
	}

	// cleanup parameter tooltip
	if (tooltip != NULL) {
		bindings_java_releaseString(tooltip);
	}

	// cleanup parameter stockId
	if (stockId != NULL) {
		bindings_java_releaseString(stockId);
	}

	// cleanup parameter manager

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkRecentAction_gtk_1recent_1action_1get_1show_1numbers
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkRecentAction* self;

	// convert parameter self
	self = (GtkRecentAction*) _self;

	// call function
	result = gtk_recent_action_get_show_numbers(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkRecentAction_gtk_1recent_1action_1set_1show_1numbers
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showNumbers
)
{
	GtkRecentAction* self;
	gboolean showNumbers;

	// convert parameter self
	self = (GtkRecentAction*) _self;

	// convert parameter showNumbers
	showNumbers = (gboolean) _showNumbers;

	// call function
	gtk_recent_action_set_show_numbers(self, showNumbers);

	// cleanup parameter self

	// cleanup parameter showNumbers
}
