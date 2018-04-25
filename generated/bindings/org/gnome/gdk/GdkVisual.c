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
#include "org_gnome_gdk_GdkVisual.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1bits_1per_1rgb
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkVisual* self;

	// convert parameter self
	self = (GdkVisual*) _self;

	// call function
	result = gdk_visual_get_bits_per_rgb(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1colormap_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkVisual* self;

	// convert parameter self
	self = (GdkVisual*) _self;

	// call function
	result = gdk_visual_get_colormap_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1depth
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkVisual* self;

	// convert parameter self
	self = (GdkVisual*) _self;

	// call function
	result = gdk_visual_get_depth(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GdkVisual* self;

	// convert parameter self
	self = (GdkVisual*) _self;

	// call function
	result = gdk_visual_get_screen(self);

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
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1visual_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkVisualType result;
	jint _result;
	GdkVisual* self;

	// convert parameter self
	self = (GdkVisual*) _self;

	// call function
	result = gdk_visual_get_visual_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1best
(
	JNIEnv* env,
	jclass cls
)
{
	GdkVisual* result;
	jlong _result;

	// call function
	result = gdk_visual_get_best();

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
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1best_1depth
(
	JNIEnv* env,
	jclass cls
)
{
	gint result;
	jint _result;

	// call function
	result = gdk_visual_get_best_depth();

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1best_1type
(
	JNIEnv* env,
	jclass cls
)
{
	GdkVisualType result;
	jint _result;

	// call function
	result = gdk_visual_get_best_type();

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1best_1with_1both
(
	JNIEnv* env,
	jclass cls,
	jint _depth,
	jint _visualType
)
{
	GdkVisual* result;
	jlong _result;
	gint depth;
	GdkVisualType visualType;

	// convert parameter depth
	depth = (gint) _depth;

	// convert parameter visualType
	visualType = (GdkVisualType) _visualType;

	// call function
	result = gdk_visual_get_best_with_both(depth, visualType);

	// cleanup parameter depth

	// cleanup parameter visualType

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
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1best_1with_1depth
(
	JNIEnv* env,
	jclass cls,
	jint _depth
)
{
	GdkVisual* result;
	jlong _result;
	gint depth;

	// convert parameter depth
	depth = (gint) _depth;

	// call function
	result = gdk_visual_get_best_with_depth(depth);

	// cleanup parameter depth

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
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1best_1with_1type
(
	JNIEnv* env,
	jclass cls,
	jint _visualType
)
{
	GdkVisual* result;
	jlong _result;
	GdkVisualType visualType;

	// convert parameter visualType
	visualType = (GdkVisualType) _visualType;

	// call function
	result = gdk_visual_get_best_with_type(visualType);

	// cleanup parameter visualType

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
Java_org_gnome_gdk_GdkVisual_gdk_1visual_1get_1system
(
	JNIEnv* env,
	jclass cls
)
{
	GdkVisual* result;
	jlong _result;

	// call function
	result = gdk_visual_get_system();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
