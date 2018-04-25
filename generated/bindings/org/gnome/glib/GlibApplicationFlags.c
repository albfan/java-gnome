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
#include <gio/gdesktopappinfo.h>
#include <gio/gfiledescriptorbased.h>
#include <gio/gio.h>
#include <gio/gunixconnection.h>
#include <gio/gunixcredentialsmessage.h>
#include <gio/gunixfdlist.h>
#include <gio/gunixfdmessage.h>
#include <gio/gunixinputstream.h>
#include <gio/gunixmounts.h>
#include <gio/gunixoutputstream.h>
#include <gio/gunixsocketaddress.h>
#include "bindings_java.h"
#include "org_gnome_glib_GlibApplicationFlags.h"

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1flags_1none
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_FLAGS_NONE;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1is_1service
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_IS_SERVICE;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1is_1launcher
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_IS_LAUNCHER;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1handles_1open
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_HANDLES_OPEN;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1handles_1command_1line
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_HANDLES_COMMAND_LINE;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1send_1environment
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_SEND_ENVIRONMENT;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1non_1unique
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_NON_UNIQUE;
}

JNIEXPORT jint JNICALL
Java_org_gnome_glib_GlibApplicationFlags_get_1ordinal_1can_1override_1app_1id
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) G_APPLICATION_CAN_OVERRIDE_APP_ID;
}
