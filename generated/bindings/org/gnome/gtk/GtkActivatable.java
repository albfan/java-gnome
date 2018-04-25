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
package org.gnome.gtk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.Action;
import org.gnome.gtk.Activatable;
import org.gnome.gtk.Plumbing;

final class GtkActivatable extends Plumbing
{
    private GtkActivatable() {}

    static final void doSetRelatedAction(Activatable self, Action action) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            gtk_activatable_do_set_related_action(pointerOf((Object) self), pointerOf(action));
        }
    }

    private static native final void gtk_activatable_do_set_related_action(long self, long action);

    static final Action getRelatedAction(Activatable self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_activatable_get_related_action(pointerOf((Object) self));

            return (Action) objectFor(result);
        }
    }

    private static native final long gtk_activatable_get_related_action(long self);

    static final boolean getUseActionAppearance(Activatable self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_activatable_get_use_action_appearance(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_activatable_get_use_action_appearance(long self);

    static final void setRelatedAction(Activatable self, Action action) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            gtk_activatable_set_related_action(pointerOf((Object) self), pointerOf(action));
        }
    }

    private static native final void gtk_activatable_set_related_action(long self, long action);

    static final void setUseActionAppearance(Activatable self, boolean useAppearance) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_activatable_set_use_action_appearance(pointerOf((Object) self), useAppearance);
        }
    }

    private static native final void gtk_activatable_set_use_action_appearance(long self, boolean useAppearance);

    static final void syncActionProperties(Activatable self, Action action) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_activatable_sync_action_properties(pointerOf((Object) self), pointerOf(action));
        }
    }

    private static native final void gtk_activatable_sync_action_properties(long self, long action);

    interface SyncActionPropertiesSignal extends Signal
    {
        void onSyncActionProperties(Activatable source, Action action);
    }

    static final void connect(Activatable self, GtkActivatable.SyncActionPropertiesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkActivatable.class, "sync-action-properties", after);
    }

    protected static final void receiveSyncActionProperties(Signal handler, long source, long action) {
        ((GtkActivatable.SyncActionPropertiesSignal) handler).onSyncActionProperties((Activatable) objectFor(source), (Action) objectFor(action));
    }

    interface UpdateSignal extends Signal
    {
        void onUpdate(Activatable source, Action action, String propertyName);
    }

    static final void connect(Activatable self, GtkActivatable.UpdateSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkActivatable.class, "update", after);
    }

    protected static final void receiveUpdate(Signal handler, long source, long action, String propertyName) {
        ((GtkActivatable.UpdateSignal) handler).onUpdate((Activatable) objectFor(source), (Action) objectFor(action), propertyName);
    }
}

