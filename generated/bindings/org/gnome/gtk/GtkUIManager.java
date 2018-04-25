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

import org.gnome.glib.GlibException;
import org.gnome.glib.Signal;
import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.Action;
import org.gnome.gtk.ActionGroup;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.UIManager;
import org.gnome.gtk.UIManagerItemType;
import org.gnome.gtk.Widget;

final class GtkUIManager extends Plumbing
{
    private GtkUIManager() {}

    static final long createUIManager() {
        long result;

        synchronized (lock) {
            result = gtk_ui_manager_new();

            return result;
        }
    }

    private static native final long gtk_ui_manager_new();

    static final void addUi(UIManager self, int mergeId, String path, String name, String action, UIManagerItemType type, boolean top) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_ui_manager_add_ui(pointerOf(self), mergeId, path, name, action, numOf(type), top);
        }
    }

    private static native final void gtk_ui_manager_add_ui(long self, int mergeId, String path, String name, String action, int type, boolean top);

    static final int addUiFromFile(UIManager self, String filename) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_add_ui_from_file(pointerOf(self), filename);

            return result;
        }
    }

    private static native final int gtk_ui_manager_add_ui_from_file(long self, String filename) throws GlibException;

    static final int addUiFromResource(UIManager self, String resourcePath) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_add_ui_from_resource(pointerOf(self), resourcePath);

            return result;
        }
    }

    private static native final int gtk_ui_manager_add_ui_from_resource(long self, String resourcePath) throws GlibException;

    static final int addUiFromString(UIManager self, String buffer, int length) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_add_ui_from_string(pointerOf(self), buffer, length);

            return result;
        }
    }

    private static native final int gtk_ui_manager_add_ui_from_string(long self, String buffer, int length) throws GlibException;

    static final void ensureUpdate(UIManager self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_ui_manager_ensure_update(pointerOf(self));
        }
    }

    private static native final void gtk_ui_manager_ensure_update(long self);

    static final AcceleratorGroup getAccelGroup(UIManager self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_get_accel_group(pointerOf(self));

            return (AcceleratorGroup) objectFor(result);
        }
    }

    private static native final long gtk_ui_manager_get_accel_group(long self);

    static final Action getAction(UIManager self, String path) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_get_action(pointerOf(self), path);

            return (Action) objectFor(result);
        }
    }

    private static native final long gtk_ui_manager_get_action(long self, String path);

    static final ActionGroup[] getActionGroups(UIManager self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_get_action_groups(pointerOf(self));

            return (ActionGroup[]) objectArrayFor(result, new ActionGroup[result.length]);
        }
    }

    private static native final long[] gtk_ui_manager_get_action_groups(long self);

    static final boolean getAddTearoffs(UIManager self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_get_add_tearoffs(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_ui_manager_get_add_tearoffs(long self);

    static final Widget[] getToplevels(UIManager self, UIManagerItemType types) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (types == null) {
            throw new IllegalArgumentException("types can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_get_toplevels(pointerOf(self), numOf(types));

            return (Widget[]) objectArrayFor(result, new Widget[result.length]);
        }
    }

    private static native final long[] gtk_ui_manager_get_toplevels(long self, int types);

    static final String getUi(UIManager self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_get_ui(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_ui_manager_get_ui(long self);

    static final Widget getWidget(UIManager self, String path) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_get_widget(pointerOf(self), path);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_ui_manager_get_widget(long self, String path);

    static final void insertActionGroup(UIManager self, ActionGroup actionGroup, int pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (actionGroup == null) {
            throw new IllegalArgumentException("actionGroup can't be null");
        }

        synchronized (lock) {
            gtk_ui_manager_insert_action_group(pointerOf(self), pointerOf(actionGroup), pos);
        }
    }

    private static native final void gtk_ui_manager_insert_action_group(long self, long actionGroup, int pos);

    static final int newMergeId(UIManager self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_ui_manager_new_merge_id(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_ui_manager_new_merge_id(long self);

    static final void removeActionGroup(UIManager self, ActionGroup actionGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (actionGroup == null) {
            throw new IllegalArgumentException("actionGroup can't be null");
        }

        synchronized (lock) {
            gtk_ui_manager_remove_action_group(pointerOf(self), pointerOf(actionGroup));
        }
    }

    private static native final void gtk_ui_manager_remove_action_group(long self, long actionGroup);

    static final void removeUi(UIManager self, int mergeId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_ui_manager_remove_ui(pointerOf(self), mergeId);
        }
    }

    private static native final void gtk_ui_manager_remove_ui(long self, int mergeId);

    static final void setAddTearoffs(UIManager self, boolean addTearoffs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_ui_manager_set_add_tearoffs(pointerOf(self), addTearoffs);
        }
    }

    private static native final void gtk_ui_manager_set_add_tearoffs(long self, boolean addTearoffs);

    interface ActionsChangedSignal extends Signal
    {
        void onActionsChanged(UIManager source);
    }

    static final void connect(UIManager self, GtkUIManager.ActionsChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "actions-changed", after);
    }

    protected static final void receiveActionsChanged(Signal handler, long source) {
        ((GtkUIManager.ActionsChangedSignal) handler).onActionsChanged((UIManager) objectFor(source));
    }

    interface AddWidgetSignal extends Signal
    {
        void onAddWidget(UIManager source, Widget widget);
    }

    static final void connect(UIManager self, GtkUIManager.AddWidgetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "add-widget", after);
    }

    protected static final void receiveAddWidget(Signal handler, long source, long widget) {
        ((GtkUIManager.AddWidgetSignal) handler).onAddWidget((UIManager) objectFor(source), (Widget) objectFor(widget));
    }

    interface ConnectProxySignal extends Signal
    {
        void onConnectProxy(UIManager source, Action action, Widget proxy);
    }

    static final void connect(UIManager self, GtkUIManager.ConnectProxySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "connect-proxy", after);
    }

    protected static final void receiveConnectProxy(Signal handler, long source, long action, long proxy) {
        ((GtkUIManager.ConnectProxySignal) handler).onConnectProxy((UIManager) objectFor(source), (Action) objectFor(action), (Widget) objectFor(proxy));
    }

    interface DisconnectProxySignal extends Signal
    {
        void onDisconnectProxy(UIManager source, Action action, Widget proxy);
    }

    static final void connect(UIManager self, GtkUIManager.DisconnectProxySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "disconnect-proxy", after);
    }

    protected static final void receiveDisconnectProxy(Signal handler, long source, long action, long proxy) {
        ((GtkUIManager.DisconnectProxySignal) handler).onDisconnectProxy((UIManager) objectFor(source), (Action) objectFor(action), (Widget) objectFor(proxy));
    }

    interface GetActionSignal extends Signal
    {
        Action onGetAction(UIManager source, String path);
    }

    static final void connect(UIManager self, GtkUIManager.GetActionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "get-action", after);
    }

    protected static final long receiveGetAction(Signal handler, long source, String path) {
        Action result;

        result = ((GtkUIManager.GetActionSignal) handler).onGetAction((UIManager) objectFor(source), path);

        return pointerOf(result);
    }

    interface GetWidgetSignal extends Signal
    {
        Widget onGetWidget(UIManager source, String path);
    }

    static final void connect(UIManager self, GtkUIManager.GetWidgetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "get-widget", after);
    }

    protected static final long receiveGetWidget(Signal handler, long source, String path) {
        Widget result;

        result = ((GtkUIManager.GetWidgetSignal) handler).onGetWidget((UIManager) objectFor(source), path);

        return pointerOf(result);
    }

    interface PostActivateSignal extends Signal
    {
        void onPostActivate(UIManager source, Action action);
    }

    static final void connect(UIManager self, GtkUIManager.PostActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "post-activate", after);
    }

    protected static final void receivePostActivate(Signal handler, long source, long action) {
        ((GtkUIManager.PostActivateSignal) handler).onPostActivate((UIManager) objectFor(source), (Action) objectFor(action));
    }

    interface PreActivateSignal extends Signal
    {
        void onPreActivate(UIManager source, Action action);
    }

    static final void connect(UIManager self, GtkUIManager.PreActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkUIManager.class, "pre-activate", after);
    }

    protected static final void receivePreActivate(Signal handler, long source, long action) {
        ((GtkUIManager.PreActivateSignal) handler).onPreActivate((UIManager) objectFor(source), (Action) objectFor(action));
    }
}

