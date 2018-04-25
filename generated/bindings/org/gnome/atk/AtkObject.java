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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.atk.Layer;
import org.gnome.atk.Object;
import org.gnome.atk.Plumbing;
import org.gnome.atk.RelationSet;
import org.gnome.atk.RelationType;
import org.gnome.atk.Role;
import org.gnome.atk.StateSet;
import org.gnome.glib.Signal;

final class AtkObject extends Plumbing
{
    private AtkObject() {}

    static final boolean addRelationship(Object self, RelationType relationship, Object target) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (relationship == null) {
            throw new IllegalArgumentException("relationship can't be null");
        }

        if (target == null) {
            throw new IllegalArgumentException("target can't be null");
        }

        synchronized (lock) {
            result = atk_object_add_relationship(pointerOf(self), numOf(relationship), pointerOf(target));

            return result;
        }
    }

    private static native final boolean atk_object_add_relationship(long self, int relationship, long target);

    @SuppressWarnings("unused")
    static final int connectPropertyChangeHandler(Object self, FIXME handler) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkPropertyChangeHandler*");
    }

    @SuppressWarnings("unused")
    static final FIXME getAttributes(Object self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkAttributeSet*");
    }

    static final String getDescription(Object self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_description(pointerOf(self));

            return result;
        }
    }

    private static native final String atk_object_get_description(long self);

    static final int getIndexInParent(Object self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_index_in_parent(pointerOf(self));

            return result;
        }
    }

    private static native final int atk_object_get_index_in_parent(long self);

    static final Layer getLayer(Object self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_layer(pointerOf(self));

            return (Layer) enumFor(Layer.class, result);
        }
    }

    private static native final int atk_object_get_layer(long self);

    static final int getMdiZorder(Object self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_mdi_zorder(pointerOf(self));

            return result;
        }
    }

    private static native final int atk_object_get_mdi_zorder(long self);

    static final int getNAccessibleChildren(Object self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_n_accessible_children(pointerOf(self));

            return result;
        }
    }

    private static native final int atk_object_get_n_accessible_children(long self);

    static final String getName(Object self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String atk_object_get_name(long self);

    static final String getObjectLocale(Object self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_object_locale(pointerOf(self));

            return result;
        }
    }

    private static native final String atk_object_get_object_locale(long self);

    static final Object getParent(Object self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_parent(pointerOf(self));

            return (Object) objectFor(result);
        }
    }

    private static native final long atk_object_get_parent(long self);

    static final Role getRole(Object self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_get_role(pointerOf(self));

            return (Role) enumFor(Role.class, result);
        }
    }

    private static native final int atk_object_get_role(long self);

    @SuppressWarnings("unused")
    static final void initialize(Object self, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    @SuppressWarnings("unused")
    static final void notifyStateChange(Object self, FIXME state, boolean value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkState");
    }

    static final Object peekParent(Object self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_peek_parent(pointerOf(self));

            return (Object) objectFor(result);
        }
    }

    private static native final long atk_object_peek_parent(long self);

    static final Object refAccessibleChild(Object self, int i) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_ref_accessible_child(pointerOf(self), i);

            return (Object) objectFor(result);
        }
    }

    private static native final long atk_object_ref_accessible_child(long self, int i);

    static final RelationSet refRelationSet(Object self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_ref_relation_set(pointerOf(self));

            return (RelationSet) objectFor(result);
        }
    }

    private static native final long atk_object_ref_relation_set(long self);

    static final StateSet refStateSet(Object self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_object_ref_state_set(pointerOf(self));

            return (StateSet) objectFor(result);
        }
    }

    private static native final long atk_object_ref_state_set(long self);

    static final void removePropertyChangeHandler(Object self, int handlerId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_object_remove_property_change_handler(pointerOf(self), handlerId);
        }
    }

    private static native final void atk_object_remove_property_change_handler(long self, int handlerId);

    static final boolean removeRelationship(Object self, RelationType relationship, Object target) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (relationship == null) {
            throw new IllegalArgumentException("relationship can't be null");
        }

        if (target == null) {
            throw new IllegalArgumentException("target can't be null");
        }

        synchronized (lock) {
            result = atk_object_remove_relationship(pointerOf(self), numOf(relationship), pointerOf(target));

            return result;
        }
    }

    private static native final boolean atk_object_remove_relationship(long self, int relationship, long target);

    static final void setDescription(Object self, String description) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (description == null) {
            throw new IllegalArgumentException("description can't be null");
        }

        synchronized (lock) {
            atk_object_set_description(pointerOf(self), description);
        }
    }

    private static native final void atk_object_set_description(long self, String description);

    static final void setName(Object self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            atk_object_set_name(pointerOf(self), name);
        }
    }

    private static native final void atk_object_set_name(long self, String name);

    static final void setParent(Object self, Object parent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (parent == null) {
            throw new IllegalArgumentException("parent can't be null");
        }

        synchronized (lock) {
            atk_object_set_parent(pointerOf(self), pointerOf(parent));
        }
    }

    private static native final void atk_object_set_parent(long self, long parent);

    static final void setRole(Object self, Role role) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (role == null) {
            throw new IllegalArgumentException("role can't be null");
        }

        synchronized (lock) {
            atk_object_set_role(pointerOf(self), numOf(role));
        }
    }

    private static native final void atk_object_set_role(long self, int role);

    interface ActiveDescendantChangedSignal extends Signal
    {
        void onActiveDescendantChanged(Object source, FIXME child);
    }

    static final void connect(Object self, AtkObject.ActiveDescendantChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "active-descendant-changed", after);
    }

    protected static final void receiveActiveDescendantChanged(Signal handler, long source, java.lang.Object child) {
        ((AtkObject.ActiveDescendantChangedSignal) handler).onActiveDescendantChanged((Object) objectFor(source), (FIXME) child);
    }

    interface ChildrenChangedSignal extends Signal
    {
        void onChildrenChanged(Object source, int changeIndex, FIXME changedChild);
    }

    static final void connect(Object self, AtkObject.ChildrenChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "children-changed", after);
    }

    protected static final void receiveChildrenChanged(Signal handler, long source, int changeIndex, java.lang.Object changedChild) {
        ((AtkObject.ChildrenChangedSignal) handler).onChildrenChanged((Object) objectFor(source), changeIndex, (FIXME) changedChild);
    }

    interface ConnectPropertyChangeHandlerSignal extends Signal
    {
        int onConnectPropertyChangeHandler(Object source, FIXME handler0);
    }

    static final void connect(Object self, AtkObject.ConnectPropertyChangeHandlerSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "connect-property-change-handler", after);
    }

    protected static final int receiveConnectPropertyChangeHandler(Signal handler, long source, java.lang.Object handler0) {
        int result;

        result = ((AtkObject.ConnectPropertyChangeHandlerSignal) handler).onConnectPropertyChangeHandler((Object) objectFor(source), (FIXME) handler0);

        return result;
    }

    interface FocusEventSignal extends Signal
    {
        void onFocusEvent(Object source, boolean focusIn);
    }

    static final void connect(Object self, AtkObject.FocusEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "focus-event", after);
    }

    protected static final void receiveFocusEvent(Signal handler, long source, boolean focusIn) {
        ((AtkObject.FocusEventSignal) handler).onFocusEvent((Object) objectFor(source), focusIn);
    }

    interface GetAttributesSignal extends Signal
    {
        FIXME onGetAttributes(Object source);
    }

    static final void connect(Object self, AtkObject.GetAttributesSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-attributes", after);
    }

    protected static final java.lang.Object receiveGetAttributes(Signal handler, long source) {
        FIXME result;

        result = ((AtkObject.GetAttributesSignal) handler).onGetAttributes((Object) objectFor(source));

        return result;
    }

    interface GetDescriptionSignal extends Signal
    {
        String onGetDescription(Object source);
    }

    static final void connect(Object self, AtkObject.GetDescriptionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-description", after);
    }

    protected static final String receiveGetDescription(Signal handler, long source) {
        String result;

        result = ((AtkObject.GetDescriptionSignal) handler).onGetDescription((Object) objectFor(source));

        return result;
    }

    interface GetIndexInParentSignal extends Signal
    {
        int onGetIndexInParent(Object source);
    }

    static final void connect(Object self, AtkObject.GetIndexInParentSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-index-in-parent", after);
    }

    protected static final int receiveGetIndexInParent(Signal handler, long source) {
        int result;

        result = ((AtkObject.GetIndexInParentSignal) handler).onGetIndexInParent((Object) objectFor(source));

        return result;
    }

    interface GetLayerSignal extends Signal
    {
        Layer onGetLayer(Object source);
    }

    static final void connect(Object self, AtkObject.GetLayerSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-layer", after);
    }

    protected static final int receiveGetLayer(Signal handler, long source) {
        Layer result;

        result = ((AtkObject.GetLayerSignal) handler).onGetLayer((Object) objectFor(source));

        return numOf(result);
    }

    interface GetMdiZorderSignal extends Signal
    {
        int onGetMdiZorder(Object source);
    }

    static final void connect(Object self, AtkObject.GetMdiZorderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-mdi-zorder", after);
    }

    protected static final int receiveGetMdiZorder(Signal handler, long source) {
        int result;

        result = ((AtkObject.GetMdiZorderSignal) handler).onGetMdiZorder((Object) objectFor(source));

        return result;
    }

    interface GetNChildrenSignal extends Signal
    {
        int onGetNChildren(Object source);
    }

    static final void connect(Object self, AtkObject.GetNChildrenSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-n-children", after);
    }

    protected static final int receiveGetNChildren(Signal handler, long source) {
        int result;

        result = ((AtkObject.GetNChildrenSignal) handler).onGetNChildren((Object) objectFor(source));

        return result;
    }

    interface GetNameSignal extends Signal
    {
        String onGetName(Object source);
    }

    static final void connect(Object self, AtkObject.GetNameSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-name", after);
    }

    protected static final String receiveGetName(Signal handler, long source) {
        String result;

        result = ((AtkObject.GetNameSignal) handler).onGetName((Object) objectFor(source));

        return result;
    }

    interface GetObjectLocaleSignal extends Signal
    {
        String onGetObjectLocale(Object source);
    }

    static final void connect(Object self, AtkObject.GetObjectLocaleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-object-locale", after);
    }

    protected static final String receiveGetObjectLocale(Signal handler, long source) {
        String result;

        result = ((AtkObject.GetObjectLocaleSignal) handler).onGetObjectLocale((Object) objectFor(source));

        return result;
    }

    interface GetParentSignal extends Signal
    {
        Object onGetParent(Object source);
    }

    static final void connect(Object self, AtkObject.GetParentSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-parent", after);
    }

    protected static final long receiveGetParent(Signal handler, long source) {
        Object result;

        result = ((AtkObject.GetParentSignal) handler).onGetParent((Object) objectFor(source));

        return pointerOf(result);
    }

    interface GetRoleSignal extends Signal
    {
        Role onGetRole(Object source);
    }

    static final void connect(Object self, AtkObject.GetRoleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "get-role", after);
    }

    protected static final int receiveGetRole(Signal handler, long source) {
        Role result;

        result = ((AtkObject.GetRoleSignal) handler).onGetRole((Object) objectFor(source));

        return numOf(result);
    }

    interface InitializeSignal extends Signal
    {
        void onInitialize(Object source, FIXME data);
    }

    static final void connect(Object self, AtkObject.InitializeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "initialize", after);
    }

    protected static final void receiveInitialize(Signal handler, long source, java.lang.Object data) {
        ((AtkObject.InitializeSignal) handler).onInitialize((Object) objectFor(source), (FIXME) data);
    }

    interface PropertyChangeSignal extends Signal
    {
        void onPropertyChange(Object source, FIXME values);
    }

    static final void connect(Object self, AtkObject.PropertyChangeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "property-change", after);
    }

    protected static final void receivePropertyChange(Signal handler, long source, java.lang.Object values) {
        ((AtkObject.PropertyChangeSignal) handler).onPropertyChange((Object) objectFor(source), (FIXME) values);
    }

    interface RefChildSignal extends Signal
    {
        Object onRefChild(Object source, int i);
    }

    static final void connect(Object self, AtkObject.RefChildSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "ref-child", after);
    }

    protected static final long receiveRefChild(Signal handler, long source, int i) {
        Object result;

        result = ((AtkObject.RefChildSignal) handler).onRefChild((Object) objectFor(source), i);

        return pointerOf(result);
    }

    interface RefRelationSetSignal extends Signal
    {
        RelationSet onRefRelationSet(Object source);
    }

    static final void connect(Object self, AtkObject.RefRelationSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "ref-relation-set", after);
    }

    protected static final long receiveRefRelationSet(Signal handler, long source) {
        RelationSet result;

        result = ((AtkObject.RefRelationSetSignal) handler).onRefRelationSet((Object) objectFor(source));

        return pointerOf(result);
    }

    interface RefStateSetSignal extends Signal
    {
        StateSet onRefStateSet(Object source);
    }

    static final void connect(Object self, AtkObject.RefStateSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "ref-state-set", after);
    }

    protected static final long receiveRefStateSet(Signal handler, long source) {
        StateSet result;

        result = ((AtkObject.RefStateSetSignal) handler).onRefStateSet((Object) objectFor(source));

        return pointerOf(result);
    }

    interface RemovePropertyChangeHandlerSignal extends Signal
    {
        void onRemovePropertyChangeHandler(Object source, int handlerId);
    }

    static final void connect(Object self, AtkObject.RemovePropertyChangeHandlerSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "remove-property-change-handler", after);
    }

    protected static final void receiveRemovePropertyChangeHandler(Signal handler, long source, int handlerId) {
        ((AtkObject.RemovePropertyChangeHandlerSignal) handler).onRemovePropertyChangeHandler((Object) objectFor(source), handlerId);
    }

    interface SetDescriptionSignal extends Signal
    {
        void onSetDescription(Object source, String description);
    }

    static final void connect(Object self, AtkObject.SetDescriptionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "set-description", after);
    }

    protected static final void receiveSetDescription(Signal handler, long source, String description) {
        ((AtkObject.SetDescriptionSignal) handler).onSetDescription((Object) objectFor(source), description);
    }

    interface SetNameSignal extends Signal
    {
        void onSetName(Object source, String name);
    }

    static final void connect(Object self, AtkObject.SetNameSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "set-name", after);
    }

    protected static final void receiveSetName(Signal handler, long source, String name) {
        ((AtkObject.SetNameSignal) handler).onSetName((Object) objectFor(source), name);
    }

    interface SetParentSignal extends Signal
    {
        void onSetParent(Object source, Object parent);
    }

    static final void connect(Object self, AtkObject.SetParentSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "set-parent", after);
    }

    protected static final void receiveSetParent(Signal handler, long source, long parent) {
        ((AtkObject.SetParentSignal) handler).onSetParent((Object) objectFor(source), (Object) objectFor(parent));
    }

    interface SetRoleSignal extends Signal
    {
        void onSetRole(Object source, Role role);
    }

    static final void connect(Object self, AtkObject.SetRoleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "set-role", after);
    }

    protected static final void receiveSetRole(Signal handler, long source, int role) {
        ((AtkObject.SetRoleSignal) handler).onSetRole((Object) objectFor(source), (Role) enumFor(Role.class, role));
    }

    interface StateChangeSignal extends Signal
    {
        void onStateChange(Object source, String name, boolean stateSet);
    }

    static final void connect(Object self, AtkObject.StateChangeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "state-change", after);
    }

    protected static final void receiveStateChange(Signal handler, long source, String name, boolean stateSet) {
        ((AtkObject.StateChangeSignal) handler).onStateChange((Object) objectFor(source), name, stateSet);
    }

    interface VisibleDataChangedSignal extends Signal
    {
        void onVisibleDataChanged(Object source);
    }

    static final void connect(Object self, AtkObject.VisibleDataChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObject.class, "visible-data-changed", after);
    }

    protected static final void receiveVisibleDataChanged(Signal handler, long source) {
        ((AtkObject.VisibleDataChangedSignal) handler).onVisibleDataChanged((Object) objectFor(source));
    }
}

