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
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.Display;
import org.gnome.gdk.Keymap;
import org.gnome.gdk.KeymapKey;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.Plumbing;
import org.gnome.glib.Signal;
import org.gnome.pango.Direction;

final class GdkKeymap extends Plumbing
{
    private GdkKeymap() {}

    static final void addVirtualModifiers(Keymap self, ModifierType[] state) {
        int[] _state;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        _state = numsOf(state);

        synchronized (lock) {
            gdk_keymap_add_virtual_modifiers(pointerOf(self), _state);
            fillFlagArray(ModifierType.class, state, _state);
        }
    }

    private static native final void gdk_keymap_add_virtual_modifiers(long self, int[] state);

    static final boolean getCapsLockState(Keymap self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_get_caps_lock_state(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_keymap_get_caps_lock_state(long self);

    static final Direction getDirection(Keymap self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_get_direction(pointerOf(self));

            return (Direction) enumFor(Direction.class, result);
        }
    }

    private static native final int gdk_keymap_get_direction(long self);

    @SuppressWarnings("unused")
    static final boolean getEntriesForKeycode(Keymap self, int hardwareKeycode, KeymapKey[] keys, FIXME keyvals, int[] nEntries) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint**");
    }

    static final boolean getEntriesForKeyval(Keymap self, int keyval, KeymapKey[] keys, int[] nKeys) {
        boolean result;
        long[] _keys;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _keys = pointersOf(keys);

        synchronized (lock) {
            result = gdk_keymap_get_entries_for_keyval(pointerOf(self), keyval, _keys, nKeys);
            fillBoxedArray(KeymapKey.class, keys, _keys);

            return result;
        }
    }

    private static native final boolean gdk_keymap_get_entries_for_keyval(long self, int keyval, long[] keys, int[] nKeys);

    @SuppressWarnings("unused")
    static final ModifierType getModifierMask(Keymap self, FIXME intent) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkModifierIntent");
    }

    static final int getModifierState(Keymap self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_get_modifier_state(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_keymap_get_modifier_state(long self);

    static final boolean getNumLockState(Keymap self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_get_num_lock_state(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_keymap_get_num_lock_state(long self);

    static final boolean getScrollLockState(Keymap self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_get_scroll_lock_state(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_keymap_get_scroll_lock_state(long self);

    static final boolean haveBidiLayouts(Keymap self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_have_bidi_layouts(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_keymap_have_bidi_layouts(long self);

    static final int lookupKey(Keymap self, org.gnome.gdk.KeymapKey key) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_lookup_key(pointerOf(self), pointerOf(key));

            return result;
        }
    }

    private static native final int gdk_keymap_lookup_key(long self, long key);

    static final boolean mapVirtualModifiers(Keymap self, ModifierType[] state) {
        boolean result;
        int[] _state;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        _state = numsOf(state);

        synchronized (lock) {
            result = gdk_keymap_map_virtual_modifiers(pointerOf(self), _state);
            fillFlagArray(ModifierType.class, state, _state);

            return result;
        }
    }

    private static native final boolean gdk_keymap_map_virtual_modifiers(long self, int[] state);

    static final boolean translateKeyboardState(Keymap self, int hardwareKeycode, ModifierType state, int group, int[] keyval, int[] effectiveGroup, int[] level, ModifierType[] consumedModifiers) {
        boolean result;
        int[] _consumedModifiers;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (state == null) {
            throw new IllegalArgumentException("state can't be null");
        }

        _consumedModifiers = numsOf(consumedModifiers);

        synchronized (lock) {
            result = gdk_keymap_translate_keyboard_state(pointerOf(self), hardwareKeycode, numOf(state), group, keyval, effectiveGroup, level, _consumedModifiers);
            fillFlagArray(ModifierType.class, consumedModifiers, _consumedModifiers);

            return result;
        }
    }

    private static native final boolean gdk_keymap_translate_keyboard_state(long self, int hardwareKeycode, int state, int group, int[] keyval, int[] effectiveGroup, int[] level, int[] consumedModifiers);

    static final Keymap getDefault() {
        long result;

        synchronized (lock) {
            result = gdk_keymap_get_default();

            return (Keymap) objectFor(result);
        }
    }

    private static native final long gdk_keymap_get_default();

    static final Keymap getForDisplay(Display display) {
        long result;

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        synchronized (lock) {
            result = gdk_keymap_get_for_display(pointerOf(display));

            return (Keymap) objectFor(result);
        }
    }

    private static native final long gdk_keymap_get_for_display(long display);

    interface DirectionChangedSignal extends Signal
    {
        void onDirectionChanged(Keymap source);
    }

    static final void connect(Keymap self, GdkKeymap.DirectionChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkKeymap.class, "direction-changed", after);
    }

    protected static final void receiveDirectionChanged(Signal handler, long source) {
        ((GdkKeymap.DirectionChangedSignal) handler).onDirectionChanged((Keymap) objectFor(source));
    }

    interface KeysChangedSignal extends Signal
    {
        void onKeysChanged(Keymap source);
    }

    static final void connect(Keymap self, GdkKeymap.KeysChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkKeymap.class, "keys-changed", after);
    }

    protected static final void receiveKeysChanged(Signal handler, long source) {
        ((GdkKeymap.KeysChangedSignal) handler).onKeysChanged((Keymap) objectFor(source));
    }

    interface StateChangedSignal extends Signal
    {
        void onStateChanged(Keymap source);
    }

    static final void connect(Keymap self, GdkKeymap.StateChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkKeymap.class, "state-changed", after);
    }

    protected static final void receiveStateChanged(Signal handler, long source) {
        ((GdkKeymap.StateChangedSignal) handler).onStateChanged((Keymap) objectFor(source));
    }
}

