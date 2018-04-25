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
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.atk.Plumbing;
import org.gnome.atk.StateSet;
import org.gnome.atk.StateType;

final class AtkStateSet extends Plumbing
{
    private AtkStateSet() {}

    static final long createStateSet() {
        long result;

        synchronized (lock) {
            result = atk_state_set_new();

            return result;
        }
    }

    private static native final long atk_state_set_new();

    static final boolean addState(StateSet self, StateType type) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            result = atk_state_set_add_state(pointerOf(self), numOf(type));

            return result;
        }
    }

    private static native final boolean atk_state_set_add_state(long self, int type);

    static final void addStates(StateSet self, StateType[] types, int nTypes) {
        int[] _types;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (types == null) {
            throw new IllegalArgumentException("types can't be null");
        }

        _types = numsOf(types);

        synchronized (lock) {
            atk_state_set_add_states(pointerOf(self), _types, nTypes);
            fillEnumArray(StateType.class, types, _types);
        }
    }

    private static native final void atk_state_set_add_states(long self, int[] types, int nTypes);

    static final StateSet andSets(StateSet self, StateSet compareSet) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (compareSet == null) {
            throw new IllegalArgumentException("compareSet can't be null");
        }

        synchronized (lock) {
            result = atk_state_set_and_sets(pointerOf(self), pointerOf(compareSet));

            return (StateSet) objectFor(result);
        }
    }

    private static native final long atk_state_set_and_sets(long self, long compareSet);

    static final void clearStates(StateSet self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_state_set_clear_states(pointerOf(self));
        }
    }

    private static native final void atk_state_set_clear_states(long self);

    static final boolean containsState(StateSet self, StateType type) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            result = atk_state_set_contains_state(pointerOf(self), numOf(type));

            return result;
        }
    }

    private static native final boolean atk_state_set_contains_state(long self, int type);

    static final boolean containsStates(StateSet self, StateType[] types, int nTypes) {
        boolean result;
        int[] _types;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (types == null) {
            throw new IllegalArgumentException("types can't be null");
        }

        _types = numsOf(types);

        synchronized (lock) {
            result = atk_state_set_contains_states(pointerOf(self), _types, nTypes);
            fillEnumArray(StateType.class, types, _types);

            return result;
        }
    }

    private static native final boolean atk_state_set_contains_states(long self, int[] types, int nTypes);

    static final boolean isEmpty(StateSet self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_state_set_is_empty(pointerOf(self));

            return result;
        }
    }

    private static native final boolean atk_state_set_is_empty(long self);

    static final StateSet orSets(StateSet self, StateSet compareSet) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (compareSet == null) {
            throw new IllegalArgumentException("compareSet can't be null");
        }

        synchronized (lock) {
            result = atk_state_set_or_sets(pointerOf(self), pointerOf(compareSet));

            return (StateSet) objectFor(result);
        }
    }

    private static native final long atk_state_set_or_sets(long self, long compareSet);

    static final boolean removeState(StateSet self, StateType type) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            result = atk_state_set_remove_state(pointerOf(self), numOf(type));

            return result;
        }
    }

    private static native final boolean atk_state_set_remove_state(long self, int type);

    static final StateSet xorSets(StateSet self, StateSet compareSet) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (compareSet == null) {
            throw new IllegalArgumentException("compareSet can't be null");
        }

        synchronized (lock) {
            result = atk_state_set_xor_sets(pointerOf(self), pointerOf(compareSet));

            return (StateSet) objectFor(result);
        }
    }

    private static native final long atk_state_set_xor_sets(long self, long compareSet);
}

