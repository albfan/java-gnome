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
#include "org_gnome_gtk_GtkStateFlags.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1normal
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_NORMAL;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1active
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_ACTIVE;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1prelight
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_PRELIGHT;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1selected
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_SELECTED;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1insensitive
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_INSENSITIVE;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1inconsistent
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_INCONSISTENT;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1focused
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_FOCUSED;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1backdrop
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_BACKDROP;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1dir_1ltr
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_DIR_LTR;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1dir_1rtl
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_DIR_RTL;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1link
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_LINK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1visited
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_VISITED;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1checked
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_CHECKED;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStateFlags_get_1ordinal_1drop_1active
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_STATE_FLAG_DROP_ACTIVE;
}
