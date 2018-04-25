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
#include "bindings_java.h"
#include "org_gnome_atk_AtkTable.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1add_1column_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	gboolean result;
	jboolean _result;
	AtkTable* self;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_add_column_selection(self, column);

	// cleanup parameter self

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1add_1row_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row
)
{
	gboolean result;
	jboolean _result;
	AtkTable* self;
	gint row;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// call function
	result = atk_table_add_row_selection(self, row);

	// cleanup parameter self

	// cleanup parameter row

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1caption
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkObject* result;
	jlong _result;
	AtkTable* self;

	// convert parameter self
	self = (AtkTable*) _self;

	// call function
	result = atk_table_get_caption(self);

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
Java_org_gnome_atk_AtkTable_atk_1table_1get_1column_1at_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	gint result;
	jint _result;
	AtkTable* self;
	gint index;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter index
	index = (gint) _index;

	// call function
	result = atk_table_get_column_at_index(self, index);

	// cleanup parameter self

	// cleanup parameter index

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1column_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	const gchar* result;
	jstring _result;
	AtkTable* self;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_get_column_description(self, column);

	// cleanup parameter self

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1column_1extent_1at
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jint _column
)
{
	gint result;
	jint _result;
	AtkTable* self;
	gint row;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_get_column_extent_at(self, row, column);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1column_1header
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	AtkObject* result;
	jlong _result;
	AtkTable* self;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_get_column_header(self, column);

	// cleanup parameter self

	// cleanup parameter column

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
Java_org_gnome_atk_AtkTable_atk_1table_1get_1index_1at
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jint _column
)
{
	gint result;
	jint _result;
	AtkTable* self;
	gint row;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_get_index_at(self, row, column);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1n_1columns
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkTable* self;

	// convert parameter self
	self = (AtkTable*) _self;

	// call function
	result = atk_table_get_n_columns(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1n_1rows
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkTable* self;

	// convert parameter self
	self = (AtkTable*) _self;

	// call function
	result = atk_table_get_n_rows(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1row_1at_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	gint result;
	jint _result;
	AtkTable* self;
	gint index;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter index
	index = (gint) _index;

	// call function
	result = atk_table_get_row_at_index(self, index);

	// cleanup parameter self

	// cleanup parameter index

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1row_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row
)
{
	const gchar* result;
	jstring _result;
	AtkTable* self;
	gint row;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// call function
	result = atk_table_get_row_description(self, row);

	// cleanup parameter self

	// cleanup parameter row

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1row_1extent_1at
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jint _column
)
{
	gint result;
	jint _result;
	AtkTable* self;
	gint row;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_get_row_extent_at(self, row, column);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1get_1row_1header
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row
)
{
	AtkObject* result;
	jlong _result;
	AtkTable* self;
	gint row;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// call function
	result = atk_table_get_row_header(self, row);

	// cleanup parameter self

	// cleanup parameter row

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
Java_org_gnome_atk_AtkTable_atk_1table_1get_1summary
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkObject* result;
	jlong _result;
	AtkTable* self;

	// convert parameter self
	self = (AtkTable*) _self;

	// call function
	result = atk_table_get_summary(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1is_1column_1selected
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	gboolean result;
	jboolean _result;
	AtkTable* self;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_is_column_selected(self, column);

	// cleanup parameter self

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1is_1row_1selected
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row
)
{
	gboolean result;
	jboolean _result;
	AtkTable* self;
	gint row;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// call function
	result = atk_table_is_row_selected(self, row);

	// cleanup parameter self

	// cleanup parameter row

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1is_1selected
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jint _column
)
{
	gboolean result;
	jboolean _result;
	AtkTable* self;
	gint row;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_is_selected(self, row, column);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1ref_1at
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jint _column
)
{
	AtkObject* result;
	jlong _result;
	AtkTable* self;
	gint row;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_ref_at(self, row, column);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1remove_1column_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	gboolean result;
	jboolean _result;
	AtkTable* self;
	gint column;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	result = atk_table_remove_column_selection(self, column);

	// cleanup parameter self

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1remove_1row_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row
)
{
	gboolean result;
	jboolean _result;
	AtkTable* self;
	gint row;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// call function
	result = atk_table_remove_row_selection(self, row);

	// cleanup parameter self

	// cleanup parameter row

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1set_1caption
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _caption
)
{
	AtkTable* self;
	AtkObject* caption;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter caption
	caption = (AtkObject*) _caption;

	// call function
	atk_table_set_caption(self, caption);

	// cleanup parameter self

	// cleanup parameter caption
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1set_1column_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column,
	jstring _description
)
{
	AtkTable* self;
	gint column;
	const gchar* description;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter column
	column = (gint) _column;

	// convert parameter description
	description = (const gchar*) bindings_java_getString(env, _description);
	if (description == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	atk_table_set_column_description(self, column, description);

	// cleanup parameter self

	// cleanup parameter column

	// cleanup parameter description
	bindings_java_releaseString(description);
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1set_1column_1header
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column,
	jlong _header
)
{
	AtkTable* self;
	gint column;
	AtkObject* header;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter column
	column = (gint) _column;

	// convert parameter header
	header = (AtkObject*) _header;

	// call function
	atk_table_set_column_header(self, column, header);

	// cleanup parameter self

	// cleanup parameter column

	// cleanup parameter header
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1set_1row_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jstring _description
)
{
	AtkTable* self;
	gint row;
	const gchar* description;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// convert parameter description
	description = (const gchar*) bindings_java_getString(env, _description);
	if (description == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	atk_table_set_row_description(self, row, description);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter description
	bindings_java_releaseString(description);
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1set_1row_1header
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jlong _header
)
{
	AtkTable* self;
	gint row;
	AtkObject* header;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter row
	row = (gint) _row;

	// convert parameter header
	header = (AtkObject*) _header;

	// call function
	atk_table_set_row_header(self, row, header);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter header
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkTable_atk_1table_1set_1summary
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accessible
)
{
	AtkTable* self;
	AtkObject* accessible;

	// convert parameter self
	self = (AtkTable*) _self;

	// convert parameter accessible
	accessible = (AtkObject*) _accessible;

	// call function
	atk_table_set_summary(self, accessible);

	// cleanup parameter self

	// cleanup parameter accessible
}
