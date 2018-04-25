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
#include <atk/atk.h>
#include "bindings_java.h"
#include "org_gnome_atk_AtkRelation.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkRelation_atk_1relation_1new
(
	JNIEnv* env,
	jclass cls,
	jlongArray _targets,
	jint _nTargets,
	jint _relationship
)
{
	AtkRelation* result;
	jlong _result;
	AtkObject** targets;
	gint nTargets;
	AtkRelationType relationship;

	// convert parameter targets
	targets = (AtkObject**) bindings_java_convert_jarray_to_gpointer(env, _targets);
	if (targets == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter nTargets
	nTargets = (gint) _nTargets;

	// convert parameter relationship
	relationship = (AtkRelationType) _relationship;

	// call function
	result = atk_relation_new(targets, nTargets, relationship);

	// cleanup parameter targets
	bindings_java_convert_gpointer_to_jarray(env, (gpointer*)targets, _targets);

	// cleanup parameter nTargets

	// cleanup parameter relationship

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
Java_org_gnome_atk_AtkRelation_atk_1relation_1add_1target
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _target
)
{
	AtkRelation* self;
	AtkObject* target;

	// convert parameter self
	self = (AtkRelation*) _self;

	// convert parameter target
	target = (AtkObject*) _target;

	// call function
	atk_relation_add_target(self, target);

	// cleanup parameter self

	// cleanup parameter target
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkRelation_atk_1relation_1get_1relation_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkRelationType result;
	jint _result;
	AtkRelation* self;

	// convert parameter self
	self = (AtkRelation*) _self;

	// call function
	result = atk_relation_get_relation_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkRelation_atk_1relation_1remove_1target
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _target
)
{
	gboolean result;
	jboolean _result;
	AtkRelation* self;
	AtkObject* target;

	// convert parameter self
	self = (AtkRelation*) _self;

	// convert parameter target
	target = (AtkObject*) _target;

	// call function
	result = atk_relation_remove_target(self, target);

	// cleanup parameter self

	// cleanup parameter target

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
