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
#include <gdk/gdk.h>
#include "bindings_java.h"
#include "org_gnome_gdk_GdkDisplayManager.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDisplayManager_gdk_1display_1manager_1get_1default_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GdkDisplayManager* self;

	// convert parameter self
	self = (GdkDisplayManager*) _self;

	// call function
	result = gdk_display_manager_get_default_display(self);

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

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gdk_GdkDisplayManager_gdk_1display_1manager_1list_1displays
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	GdkDisplayManager* self;

	// convert parameter self
	self = (GdkDisplayManager*) _self;

	// call function
	result = gdk_display_manager_list_displays(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDisplayManager_gdk_1display_1manager_1open_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GdkDisplay* result;
	jlong _result;
	GdkDisplayManager* self;
	const gchar* name;

	// convert parameter self
	self = (GdkDisplayManager*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_display_manager_open_display(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

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
Java_org_gnome_gdk_GdkDisplayManager_gdk_1display_1manager_1set_1default_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _display
)
{
	GdkDisplayManager* self;
	GdkDisplay* display;

	// convert parameter self
	self = (GdkDisplayManager*) _self;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// call function
	gdk_display_manager_set_default_display(self, display);

	// cleanup parameter self

	// cleanup parameter display
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDisplayManager_gdk_1display_1manager_1get
(
	JNIEnv* env,
	jclass cls
)
{
	GdkDisplayManager* result;
	jlong _result;

	// call function
	result = gdk_display_manager_get();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
