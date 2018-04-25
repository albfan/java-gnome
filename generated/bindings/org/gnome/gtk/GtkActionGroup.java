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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.glib.Signal;
import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.Action;
import org.gnome.gtk.ActionGroup;
import org.gnome.gtk.Plumbing;

final class GtkActionGroup extends Plumbing
{
    private GtkActionGroup() {}

    static final long createActionGroup(String name) {
        long result;

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_new(name);

            return result;
        }
    }

    private static native final long gtk_action_group_new(String name);

    static final void addAction(ActionGroup self, Action action) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            gtk_action_group_add_action(pointerOf(self), pointerOf(action));
        }
    }

    private static native final void gtk_action_group_add_action(long self, long action);

    static final void addActionWithAccel(ActionGroup self, Action action, String accelerator) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            gtk_action_group_add_action_with_accel(pointerOf(self), pointerOf(action), accelerator);
        }
    }

    private static native final void gtk_action_group_add_action_with_accel(long self, long action, String accelerator);

    @SuppressWarnings("unused")
    static final void addActions(ActionGroup self, FIXME entries, int nEntries, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkActionEntry*");
    }

    @SuppressWarnings("unused")
    static final void addActionsFull(ActionGroup self, FIXME entries, int nEntries, FIXME userData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkActionEntry*");
    }

    @SuppressWarnings("unused")
    static final void addRadioActions(ActionGroup self, FIXME entries, int nEntries, int value, FIXME onChange, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkRadioActionEntry*");
    }

    @SuppressWarnings("unused")
    static final void addRadioActionsFull(ActionGroup self, FIXME entries, int nEntries, int value, FIXME onChange, FIXME userData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkRadioActionEntry*");
    }

    @SuppressWarnings("unused")
    static final void addToggleActions(ActionGroup self, FIXME entries, int nEntries, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkToggleActionEntry*");
    }

    @SuppressWarnings("unused")
    static final void addToggleActionsFull(ActionGroup self, FIXME entries, int nEntries, FIXME userData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkToggleActionEntry*");
    }

    static final AcceleratorGroup getAccelGroup(ActionGroup self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_get_accel_group(pointerOf(self));

            return (AcceleratorGroup) objectFor(result);
        }
    }

    private static native final long gtk_action_group_get_accel_group(long self);

    static final Action getAction(ActionGroup self, String actionName) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (actionName == null) {
            throw new IllegalArgumentException("actionName can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_get_action(pointerOf(self), actionName);

            return (Action) objectFor(result);
        }
    }

    private static native final long gtk_action_group_get_action(long self, String actionName);

    static final String getName(ActionGroup self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_action_group_get_name(long self);

    static final boolean getSensitive(ActionGroup self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_get_sensitive(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_group_get_sensitive(long self);

    static final boolean getVisible(ActionGroup self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_get_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_action_group_get_visible(long self);

    static final Action[] listActions(ActionGroup self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_list_actions(pointerOf(self));

            return (Action[]) objectArrayFor(result, new Action[result.length]);
        }
    }

    private static native final long[] gtk_action_group_list_actions(long self);

    static final void removeAction(ActionGroup self, Action action) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            gtk_action_group_remove_action(pointerOf(self), pointerOf(action));
        }
    }

    private static native final void gtk_action_group_remove_action(long self, long action);

    static final void setAccelGroup(ActionGroup self, AcceleratorGroup accelGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_group_set_accel_group(pointerOf(self), pointerOf(accelGroup));
        }
    }

    private static native final void gtk_action_group_set_accel_group(long self, long accelGroup);

    static final void setSensitive(ActionGroup self, boolean sensitive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_group_set_sensitive(pointerOf(self), sensitive);
        }
    }

    private static native final void gtk_action_group_set_sensitive(long self, boolean sensitive);

    @SuppressWarnings("unused")
    static final void setTranslateFunc(ActionGroup self, FIXME func, FIXME data, FIXME notify) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTranslateFunc");
    }

    static final void setTranslationDomain(ActionGroup self, String domain) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_group_set_translation_domain(pointerOf(self), domain);
        }
    }

    private static native final void gtk_action_group_set_translation_domain(long self, String domain);

    static final void setVisible(ActionGroup self, boolean visible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_action_group_set_visible(pointerOf(self), visible);
        }
    }

    private static native final void gtk_action_group_set_visible(long self, boolean visible);

    static final String translateString(ActionGroup self, String string) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (string == null) {
            throw new IllegalArgumentException("string can't be null");
        }

        synchronized (lock) {
            result = gtk_action_group_translate_string(pointerOf(self), string);

            return result;
        }
    }

    private static native final String gtk_action_group_translate_string(long self, String string);

    interface GetActionSignal extends Signal
    {
        Action onGetAction(ActionGroup source, String actionName);
    }

    static final void connect(ActionGroup self, GtkActionGroup.GetActionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkActionGroup.class, "get-action", after);
    }

    protected static final long receiveGetAction(Signal handler, long source, String actionName) {
        Action result;

        result = ((GtkActionGroup.GetActionSignal) handler).onGetAction((ActionGroup) objectFor(source), actionName);

        return pointerOf(result);
    }

    interface ConnectProxySignal extends Signal
    {
        void onConnectProxy(ActionGroup source, FIXME action, FIXME proxy);
    }

    static final void connect(ActionGroup self, GtkActionGroup.ConnectProxySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkActionGroup.class, "connect-proxy", after);
    }

    protected static final void receiveConnectProxy(Signal handler, long source, java.lang.Object action, java.lang.Object proxy) {
        ((GtkActionGroup.ConnectProxySignal) handler).onConnectProxy((ActionGroup) objectFor(source), (FIXME) action, (FIXME) proxy);
    }

    interface DisconnectProxySignal extends Signal
    {
        void onDisconnectProxy(ActionGroup source, FIXME action, FIXME proxy);
    }

    static final void connect(ActionGroup self, GtkActionGroup.DisconnectProxySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkActionGroup.class, "disconnect-proxy", after);
    }

    protected static final void receiveDisconnectProxy(Signal handler, long source, java.lang.Object action, java.lang.Object proxy) {
        ((GtkActionGroup.DisconnectProxySignal) handler).onDisconnectProxy((ActionGroup) objectFor(source), (FIXME) action, (FIXME) proxy);
    }

    interface PostActivateSignal extends Signal
    {
        void onPostActivate(ActionGroup source, FIXME action);
    }

    static final void connect(ActionGroup self, GtkActionGroup.PostActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkActionGroup.class, "post-activate", after);
    }

    protected static final void receivePostActivate(Signal handler, long source, java.lang.Object action) {
        ((GtkActionGroup.PostActivateSignal) handler).onPostActivate((ActionGroup) objectFor(source), (FIXME) action);
    }

    interface PreActivateSignal extends Signal
    {
        void onPreActivate(ActionGroup source, FIXME action);
    }

    static final void connect(ActionGroup self, GtkActionGroup.PreActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkActionGroup.class, "pre-activate", after);
    }

    protected static final void receivePreActivate(Signal handler, long source, java.lang.Object action) {
        ((GtkActionGroup.PreActivateSignal) handler).onPreActivate((ActionGroup) objectFor(source), (FIXME) action);
    }
}

