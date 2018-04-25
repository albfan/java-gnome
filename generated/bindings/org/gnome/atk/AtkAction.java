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

import org.gnome.atk.Action;
import org.gnome.atk.Plumbing;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkAction extends Plumbing
{
    private AtkAction() {}

    static final boolean doAction(Action self, int i) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_action_do_action(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final boolean atk_action_do_action(long self, int i);

    static final String getDescription(Action self, int i) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_action_get_description(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final String atk_action_get_description(long self, int i);

    static final String getKeybinding(Action self, int i) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_action_get_keybinding(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final String atk_action_get_keybinding(long self, int i);

    static final String getLocalizedName(Action self, int i) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_action_get_localized_name(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final String atk_action_get_localized_name(long self, int i);

    static final int getNActions(Action self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_action_get_n_actions(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_action_get_n_actions(long self);

    static final String getName(Action self, int i) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_action_get_name(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final String atk_action_get_name(long self, int i);

    static final boolean setDescription(Action self, int i, String desc) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (desc == null) {
            throw new IllegalArgumentException("desc can't be null");
        }

        synchronized (lock) {
            result = atk_action_set_description(pointerOf((Object) self), i, desc);

            return result;
        }
    }

    private static native final boolean atk_action_set_description(long self, int i, String desc);

    interface DoActionSignal extends Signal
    {
        boolean onDoAction(Action source, int i);
    }

    static final void connect(Action self, AtkAction.DoActionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkAction.class, "do-action", after);
    }

    protected static final boolean receiveDoAction(Signal handler, long source, int i) {
        boolean result;

        result = ((AtkAction.DoActionSignal) handler).onDoAction((Action) objectFor(source), i);

        return result;
    }

    interface GetDescriptionSignal extends Signal
    {
        String onGetDescription(Action source, int i);
    }

    static final void connect(Action self, AtkAction.GetDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkAction.class, "get-description", after);
    }

    protected static final String receiveGetDescription(Signal handler, long source, int i) {
        String result;

        result = ((AtkAction.GetDescriptionSignal) handler).onGetDescription((Action) objectFor(source), i);

        return result;
    }

    interface GetKeybindingSignal extends Signal
    {
        String onGetKeybinding(Action source, int i);
    }

    static final void connect(Action self, AtkAction.GetKeybindingSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkAction.class, "get-keybinding", after);
    }

    protected static final String receiveGetKeybinding(Signal handler, long source, int i) {
        String result;

        result = ((AtkAction.GetKeybindingSignal) handler).onGetKeybinding((Action) objectFor(source), i);

        return result;
    }

    interface GetLocalizedNameSignal extends Signal
    {
        String onGetLocalizedName(Action source, int i);
    }

    static final void connect(Action self, AtkAction.GetLocalizedNameSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkAction.class, "get-localized-name", after);
    }

    protected static final String receiveGetLocalizedName(Signal handler, long source, int i) {
        String result;

        result = ((AtkAction.GetLocalizedNameSignal) handler).onGetLocalizedName((Action) objectFor(source), i);

        return result;
    }

    interface GetNActionsSignal extends Signal
    {
        int onGetNActions(Action source);
    }

    static final void connect(Action self, AtkAction.GetNActionsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkAction.class, "get-n-actions", after);
    }

    protected static final int receiveGetNActions(Signal handler, long source) {
        int result;

        result = ((AtkAction.GetNActionsSignal) handler).onGetNActions((Action) objectFor(source));

        return result;
    }

    interface GetNameSignal extends Signal
    {
        String onGetName(Action source, int i);
    }

    static final void connect(Action self, AtkAction.GetNameSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkAction.class, "get-name", after);
    }

    protected static final String receiveGetName(Signal handler, long source, int i) {
        String result;

        result = ((AtkAction.GetNameSignal) handler).onGetName((Action) objectFor(source), i);

        return result;
    }

    interface SetDescriptionSignal extends Signal
    {
        boolean onSetDescription(Action source, int i, String desc);
    }

    static final void connect(Action self, AtkAction.SetDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkAction.class, "set-description", after);
    }

    protected static final boolean receiveSetDescription(Signal handler, long source, int i, String desc) {
        boolean result;

        result = ((AtkAction.SetDescriptionSignal) handler).onSetDescription((Action) objectFor(source), i, desc);

        return result;
    }
}

