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
#include "org_gnome_gtk_GtkCalendar.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_calendar_new();

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
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1clear_1marks
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkCalendar* self;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// call function
	gtk_calendar_clear_marks(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1get_1date
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _year,
	jintArray _month,
	jintArray _day
)
{
	GtkCalendar* self;
	guint* year;
	guint* month;
	guint* day;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter year
	if (_year == NULL) {
		year = NULL;
	} else {
		year = (guint*) (*env)->GetIntArrayElements(env, _year, NULL);
		if (year == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter month
	if (_month == NULL) {
		month = NULL;
	} else {
		month = (guint*) (*env)->GetIntArrayElements(env, _month, NULL);
		if (month == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter day
	if (_day == NULL) {
		day = NULL;
	} else {
		day = (guint*) (*env)->GetIntArrayElements(env, _day, NULL);
		if (day == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_calendar_get_date(self, year, month, day);

	// cleanup parameter self

	// cleanup parameter year
	if (year != NULL) {
		(*env)->ReleaseIntArrayElements(env, _year, (jint*)year, 0);
	}

	// cleanup parameter month
	if (month != NULL) {
		(*env)->ReleaseIntArrayElements(env, _month, (jint*)month, 0);
	}

	// cleanup parameter day
	if (day != NULL) {
		(*env)->ReleaseIntArrayElements(env, _day, (jint*)day, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1get_1day_1is_1marked
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _day
)
{
	gboolean result;
	jboolean _result;
	GtkCalendar* self;
	guint day;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter day
	day = (guint) _day;

	// call function
	result = gtk_calendar_get_day_is_marked(self, day);

	// cleanup parameter self

	// cleanup parameter day

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1get_1detail_1height_1rows
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkCalendar* self;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// call function
	result = gtk_calendar_get_detail_height_rows(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1get_1detail_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkCalendar* self;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// call function
	result = gtk_calendar_get_detail_width_chars(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1get_1display_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkCalendarDisplayOptions result;
	jint _result;
	GtkCalendar* self;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// call function
	result = gtk_calendar_get_display_options(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1mark_1day
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _day
)
{
	GtkCalendar* self;
	guint day;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter day
	day = (guint) _day;

	// call function
	gtk_calendar_mark_day(self, day);

	// cleanup parameter self

	// cleanup parameter day
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1select_1day
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _day
)
{
	GtkCalendar* self;
	guint day;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter day
	day = (guint) _day;

	// call function
	gtk_calendar_select_day(self, day);

	// cleanup parameter self

	// cleanup parameter day
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1select_1month
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _month,
	jint _year
)
{
	GtkCalendar* self;
	guint month;
	guint year;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter month
	month = (guint) _month;

	// convert parameter year
	year = (guint) _year;

	// call function
	gtk_calendar_select_month(self, month, year);

	// cleanup parameter self

	// cleanup parameter month

	// cleanup parameter year
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1set_1detail_1height_1rows
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _rows
)
{
	GtkCalendar* self;
	gint rows;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter rows
	rows = (gint) _rows;

	// call function
	gtk_calendar_set_detail_height_rows(self, rows);

	// cleanup parameter self

	// cleanup parameter rows
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1set_1detail_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _chars
)
{
	GtkCalendar* self;
	gint chars;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter chars
	chars = (gint) _chars;

	// call function
	gtk_calendar_set_detail_width_chars(self, chars);

	// cleanup parameter self

	// cleanup parameter chars
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1set_1display_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _flags
)
{
	GtkCalendar* self;
	GtkCalendarDisplayOptions flags;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter flags
	flags = (GtkCalendarDisplayOptions) _flags;

	// call function
	gtk_calendar_set_display_options(self, flags);

	// cleanup parameter self

	// cleanup parameter flags
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCalendar_gtk_1calendar_1unmark_1day
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _day
)
{
	GtkCalendar* self;
	guint day;

	// convert parameter self
	self = (GtkCalendar*) _self;

	// convert parameter day
	day = (guint) _day;

	// call function
	gtk_calendar_unmark_day(self, day);

	// cleanup parameter self

	// cleanup parameter day
}
