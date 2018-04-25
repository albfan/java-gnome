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
#include <gtksourceview/gtksource.h>
#include "bindings_java.h"
#include "org_gnome_sourceview_GtkSourceStyleScheme.h"

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_sourceview_GtkSourceStyleScheme_gtk_1source_1style_1scheme_1get_1authors
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkSourceStyleScheme* self;

	// convert parameter self
	self = (GtkSourceStyleScheme*) _self;

	// call function
	result = gtk_source_style_scheme_get_authors(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceStyleScheme_gtk_1source_1style_1scheme_1get_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkSourceStyleScheme* self;

	// convert parameter self
	self = (GtkSourceStyleScheme*) _self;

	// call function
	result = gtk_source_style_scheme_get_description(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceStyleScheme_gtk_1source_1style_1scheme_1get_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkSourceStyleScheme* self;

	// convert parameter self
	self = (GtkSourceStyleScheme*) _self;

	// call function
	result = gtk_source_style_scheme_get_filename(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceStyleScheme_gtk_1source_1style_1scheme_1get_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkSourceStyleScheme* self;

	// convert parameter self
	self = (GtkSourceStyleScheme*) _self;

	// call function
	result = gtk_source_style_scheme_get_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourceStyleScheme_gtk_1source_1style_1scheme_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkSourceStyleScheme* self;

	// convert parameter self
	self = (GtkSourceStyleScheme*) _self;

	// call function
	result = gtk_source_style_scheme_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceStyleScheme_gtk_1source_1style_1scheme_1get_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _styleId
)
{
	GtkSourceStyle* result;
	jlong _result;
	GtkSourceStyleScheme* self;
	const gchar* styleId;

	// convert parameter self
	self = (GtkSourceStyleScheme*) _self;

	// convert parameter styleId
	styleId = (const gchar*) bindings_java_getString(env, _styleId);
	if (styleId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_source_style_scheme_get_style(self, styleId);

	// cleanup parameter self

	// cleanup parameter styleId
	bindings_java_releaseString(styleId);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
