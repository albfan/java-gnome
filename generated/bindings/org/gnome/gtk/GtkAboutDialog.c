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
#include "org_gnome_gtk_GtkAboutDialog.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_about_dialog_new();

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
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1add_1credit_1section
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _sectionName,
	jobjectArray _people
)
{
	GtkAboutDialog* self;
	const gchar* sectionName;
	gchar** people;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter sectionName
	sectionName = (const gchar*) bindings_java_getString(env, _sectionName);
	if (sectionName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter people
	people = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _people);
	if (people == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_about_dialog_add_credit_section(self, sectionName, people);

	// cleanup parameter self

	// cleanup parameter sectionName
	bindings_java_releaseString(sectionName);

	// cleanup parameter people
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)people, _people);
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1artists
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_artists(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1authors
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_authors(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1comments
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_comments(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1copyright
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_copyright(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1documenters
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar** result;
	jobjectArray _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_documenters(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1license
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_license(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1license_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkLicense result;
	jint _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_license_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1logo
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_logo(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1logo_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_logo_icon_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1program_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_program_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1translator_1credits
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_translator_credits(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1version
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_version(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1website
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_website(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1website_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_website_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1get_1wrap_1license
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkAboutDialog* self;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// call function
	result = gtk_about_dialog_get_wrap_license(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1artists
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _artists
)
{
	GtkAboutDialog* self;
	gchar** artists;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter artists
	artists = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _artists);
	if (artists == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_about_dialog_set_artists(self, artists);

	// cleanup parameter self

	// cleanup parameter artists
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)artists, _artists);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1authors
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _authors
)
{
	GtkAboutDialog* self;
	gchar** authors;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter authors
	authors = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _authors);
	if (authors == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_about_dialog_set_authors(self, authors);

	// cleanup parameter self

	// cleanup parameter authors
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)authors, _authors);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1comments
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _comments
)
{
	GtkAboutDialog* self;
	const gchar* comments;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter comments
	if (_comments == NULL) {
		comments = NULL;
	} else {
		comments = (const gchar*) bindings_java_getString(env, _comments);
		if (comments == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_about_dialog_set_comments(self, comments);

	// cleanup parameter self

	// cleanup parameter comments
	if (comments != NULL) {
		bindings_java_releaseString(comments);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1copyright
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _copyright
)
{
	GtkAboutDialog* self;
	const gchar* copyright;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter copyright
	if (_copyright == NULL) {
		copyright = NULL;
	} else {
		copyright = (const gchar*) bindings_java_getString(env, _copyright);
		if (copyright == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_about_dialog_set_copyright(self, copyright);

	// cleanup parameter self

	// cleanup parameter copyright
	if (copyright != NULL) {
		bindings_java_releaseString(copyright);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1documenters
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jobjectArray _documenters
)
{
	GtkAboutDialog* self;
	gchar** documenters;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter documenters
	documenters = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _documenters);
	if (documenters == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_about_dialog_set_documenters(self, documenters);

	// cleanup parameter self

	// cleanup parameter documenters
	bindings_java_convert_gchararray_to_strarray(env, (gchar**)documenters, _documenters);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1license
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _license
)
{
	GtkAboutDialog* self;
	const gchar* license;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter license
	if (_license == NULL) {
		license = NULL;
	} else {
		license = (const gchar*) bindings_java_getString(env, _license);
		if (license == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_about_dialog_set_license(self, license);

	// cleanup parameter self

	// cleanup parameter license
	if (license != NULL) {
		bindings_java_releaseString(license);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1license_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _licenseType
)
{
	GtkAboutDialog* self;
	GtkLicense licenseType;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter licenseType
	licenseType = (GtkLicense) _licenseType;

	// call function
	gtk_about_dialog_set_license_type(self, licenseType);

	// cleanup parameter self

	// cleanup parameter licenseType
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1logo
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _logo
)
{
	GtkAboutDialog* self;
	GdkPixbuf* logo;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter logo
	logo = (GdkPixbuf*) _logo;

	// call function
	gtk_about_dialog_set_logo(self, logo);

	// cleanup parameter self

	// cleanup parameter logo
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1logo_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName
)
{
	GtkAboutDialog* self;
	const gchar* iconName;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar*) bindings_java_getString(env, _iconName);
		if (iconName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_about_dialog_set_logo_icon_name(self, iconName);

	// cleanup parameter self

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_releaseString(iconName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1program_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkAboutDialog* self;
	const gchar* name;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_about_dialog_set_program_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1translator_1credits
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _translatorCredits
)
{
	GtkAboutDialog* self;
	const gchar* translatorCredits;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter translatorCredits
	if (_translatorCredits == NULL) {
		translatorCredits = NULL;
	} else {
		translatorCredits = (const gchar*) bindings_java_getString(env, _translatorCredits);
		if (translatorCredits == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_about_dialog_set_translator_credits(self, translatorCredits);

	// cleanup parameter self

	// cleanup parameter translatorCredits
	if (translatorCredits != NULL) {
		bindings_java_releaseString(translatorCredits);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1version
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _version
)
{
	GtkAboutDialog* self;
	const gchar* version;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter version
	if (_version == NULL) {
		version = NULL;
	} else {
		version = (const gchar*) bindings_java_getString(env, _version);
		if (version == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_about_dialog_set_version(self, version);

	// cleanup parameter self

	// cleanup parameter version
	if (version != NULL) {
		bindings_java_releaseString(version);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1website
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _website
)
{
	GtkAboutDialog* self;
	const gchar* website;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter website
	if (_website == NULL) {
		website = NULL;
	} else {
		website = (const gchar*) bindings_java_getString(env, _website);
		if (website == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_about_dialog_set_website(self, website);

	// cleanup parameter self

	// cleanup parameter website
	if (website != NULL) {
		bindings_java_releaseString(website);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1website_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _websiteLabel
)
{
	GtkAboutDialog* self;
	const gchar* websiteLabel;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter websiteLabel
	websiteLabel = (const gchar*) bindings_java_getString(env, _websiteLabel);
	if (websiteLabel == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_about_dialog_set_website_label(self, websiteLabel);

	// cleanup parameter self

	// cleanup parameter websiteLabel
	bindings_java_releaseString(websiteLabel);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAboutDialog_gtk_1about_1dialog_1set_1wrap_1license
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _wrapLicense
)
{
	GtkAboutDialog* self;
	gboolean wrapLicense;

	// convert parameter self
	self = (GtkAboutDialog*) _self;

	// convert parameter wrapLicense
	wrapLicense = (gboolean) _wrapLicense;

	// call function
	gtk_about_dialog_set_wrap_license(self, wrapLicense);

	// cleanup parameter self

	// cleanup parameter wrapLicense
}
