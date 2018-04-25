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
#include "org_gnome_gtk_GtkIconSet.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkIconSet* result;
	jlong _result;

	// call function
	result = gtk_icon_set_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1new_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _pixbuf
)
{
	GtkIconSet* result;
	jlong _result;
	GdkPixbuf* pixbuf;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	result = gtk_icon_set_new_from_pixbuf(pixbuf);

	// cleanup parameter pixbuf

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1add_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _source
)
{
	GtkIconSet* self;
	const GtkIconSource* source;

	// convert parameter self
	self = (GtkIconSet*) _self;

	// convert parameter source
	source = (const GtkIconSource*) _source;

	// call function
	gtk_icon_set_add_source(self, source);

	// cleanup parameter self

	// cleanup parameter source
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSet* result;
	jlong _result;
	GtkIconSet* self;

	// convert parameter self
	self = (GtkIconSet*) _self;

	// call function
	result = gtk_icon_set_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSet* result;
	jlong _result;
	GtkIconSet* self;

	// convert parameter self
	self = (GtkIconSet*) _self;

	// call function
	result = gtk_icon_set_ref(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1render_1icon_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _context,
	jint _size
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkIconSet* self;
	GtkStyleContext* context;
	GtkIconSize size;

	// convert parameter self
	self = (GtkIconSet*) _self;

	// convert parameter context
	context = (GtkStyleContext*) _context;

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	result = gtk_icon_set_render_icon_pixbuf(self, context, size);

	// cleanup parameter self

	// cleanup parameter context

	// cleanup parameter size

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
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1render_1icon_1surface
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _context,
	jint _size,
	jint _scale,
	jlong _forWindow
)
{
	cairo_surface_t* result;
	jlong _result;
	GtkIconSet* self;
	GtkStyleContext* context;
	GtkIconSize size;
	int scale;
	GdkWindow* forWindow;

	// convert parameter self
	self = (GtkIconSet*) _self;

	// convert parameter context
	context = (GtkStyleContext*) _context;

	// convert parameter size
	size = (GtkIconSize) _size;

	// convert parameter scale
	scale = (int) _scale;

	// convert parameter forWindow
	forWindow = (GdkWindow*) _forWindow;

	// call function
	result = gtk_icon_set_render_icon_surface(self, context, size, scale, forWindow);

	// cleanup parameter self

	// cleanup parameter context

	// cleanup parameter size

	// cleanup parameter scale

	// cleanup parameter forWindow

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconSet_gtk_1icon_1set_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSet* self;

	// convert parameter self
	self = (GtkIconSet*) _self;

	// call function
	gtk_icon_set_unref(self);

	// cleanup parameter self
}
