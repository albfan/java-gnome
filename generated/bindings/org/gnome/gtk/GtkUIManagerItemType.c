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
#include "org_gnome_gtk_GtkUIManagerItemType.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1auto
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_AUTO;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1menubar
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_MENUBAR;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1menu
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_MENU;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1toolbar
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_TOOLBAR;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1placeholder
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_PLACEHOLDER;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1popup
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_POPUP;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1menuitem
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_MENUITEM;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1toolitem
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_TOOLITEM;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1separator
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_SEPARATOR;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1accelerator
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_ACCELERATOR;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkUIManagerItemType_get_1ordinal_1popup_1with_1accels
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GTK_UI_MANAGER_POPUP_WITH_ACCELS;
}
