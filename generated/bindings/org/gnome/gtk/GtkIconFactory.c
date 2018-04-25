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
#include "org_gnome_gtk_GtkIconFactory.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconFactory_gtk_1icon_1factory_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkIconFactory* result;
	jlong _result;

	// call function
	result = gtk_icon_factory_new();

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
Java_org_gnome_gtk_GtkIconFactory_gtk_1icon_1factory_1add
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId,
	jlong _iconSet
)
{
	GtkIconFactory* self;
	const gchar* stockId;
	GtkIconSet* iconSet;

	// convert parameter self
	self = (GtkIconFactory*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter iconSet
	iconSet = (GtkIconSet*) _iconSet;

	// call function
	gtk_icon_factory_add(self, stockId, iconSet);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// cleanup parameter iconSet
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconFactory_gtk_1icon_1factory_1add_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconFactory* self;

	// convert parameter self
	self = (GtkIconFactory*) _self;

	// call function
	gtk_icon_factory_add_default(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconFactory_gtk_1icon_1factory_1lookup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId
)
{
	GtkIconSet* result;
	jlong _result;
	GtkIconFactory* self;
	const gchar* stockId;

	// convert parameter self
	self = (GtkIconFactory*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_icon_factory_lookup(self, stockId);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconFactory_gtk_1icon_1factory_1remove_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconFactory* self;

	// convert parameter self
	self = (GtkIconFactory*) _self;

	// call function
	gtk_icon_factory_remove_default(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconFactory_gtk_1icon_1factory_1lookup_1default
(
	JNIEnv* env,
	jclass cls,
	jstring _stockId
)
{
	GtkIconSet* result;
	jlong _result;
	const gchar* stockId;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_icon_factory_lookup_default(stockId);

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}
