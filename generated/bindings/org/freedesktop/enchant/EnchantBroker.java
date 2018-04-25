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
package org.freedesktop.enchant;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.enchant.Broker;
import org.freedesktop.enchant.Dictionary;
import org.freedesktop.enchant.Plumbing;

final class EnchantBroker extends Plumbing
{
    private EnchantBroker() {}

    static final long createBroker() {
        long result;

        synchronized (lock) {
            result = enchant_broker_init();

            return result;
        }
    }

    private static native final long enchant_broker_init();

    static final void free(Broker self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            enchant_broker_free(pointerOf(self));
        }
    }

    private static native final void enchant_broker_free(long self);

    static final int dictExists(Broker self, String tag) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tag == null) {
            throw new IllegalArgumentException("tag can't be null");
        }

        synchronized (lock) {
            result = enchant_broker_dict_exists(pointerOf(self), tag);

            return result;
        }
    }

    private static native final int enchant_broker_dict_exists(long self, String tag);

    static final void freeDict(Broker self, Dictionary dict) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dict == null) {
            throw new IllegalArgumentException("dict can't be null");
        }

        synchronized (lock) {
            enchant_broker_free_dict(pointerOf(self), pointerOf(dict));
        }
    }

    private static native final void enchant_broker_free_dict(long self, long dict);

    static final Dictionary requestDict(Broker self, String tag) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tag == null) {
            throw new IllegalArgumentException("tag can't be null");
        }

        synchronized (lock) {
            result = enchant_broker_request_dict(pointerOf(self), tag);

            return (Dictionary) entityFor(Dictionary.class,  result);
        }
    }

    private static native final long enchant_broker_request_dict(long self, String tag);

    static final Dictionary requestPwlDict(Broker self, String pwl) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pwl == null) {
            throw new IllegalArgumentException("pwl can't be null");
        }

        synchronized (lock) {
            result = enchant_broker_request_pwl_dict(pointerOf(self), pwl);

            return (Dictionary) entityFor(Dictionary.class,  result);
        }
    }

    private static native final long enchant_broker_request_pwl_dict(long self, String pwl);
}

