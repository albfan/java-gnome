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
import org.freedesktop.cairo.Context;
import org.gnome.glib.Signal;
import org.gnome.glib.Value;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.Container;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ResizeMode;
import org.gnome.gtk.Widget;

final class GtkContainer extends Plumbing
{
    private GtkContainer() {}

    static final void add(Container self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        synchronized (lock) {
            gtk_container_add(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_container_add(long self, long widget);

    static final void addWithProperties(Container self, Widget widget, String firstPropName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        if (firstPropName == null) {
            throw new IllegalArgumentException("firstPropName can't be null");
        }

        synchronized (lock) {
            gtk_container_add_with_properties(pointerOf(self), pointerOf(widget), firstPropName);
        }
    }

    private static native final void gtk_container_add_with_properties(long self, long widget, String firstPropName);

    static final void checkResize(Container self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_container_check_resize(pointerOf(self));
        }
    }

    private static native final void gtk_container_check_resize(long self);

    static final void childGet(Container self, Widget child, String firstPropName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (firstPropName == null) {
            throw new IllegalArgumentException("firstPropName can't be null");
        }

        synchronized (lock) {
            gtk_container_child_get(pointerOf(self), pointerOf(child), firstPropName);
        }
    }

    private static native final void gtk_container_child_get(long self, long child, String firstPropName);

    static final void childGetProperty(Container self, Widget child, String propertyName, Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (propertyName == null) {
            throw new IllegalArgumentException("propertyName can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            gtk_container_child_get_property(pointerOf(self), pointerOf(child), propertyName, pointerOf(value));
        }
    }

    private static native final void gtk_container_child_get_property(long self, long child, String propertyName, long value);

    @SuppressWarnings("unused")
    static final void childGetValist(Container self, Widget child, String firstPropertyName, FIXME varArgs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    static final void childNotify(Container self, Widget child, String childProperty) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (childProperty == null) {
            throw new IllegalArgumentException("childProperty can't be null");
        }

        synchronized (lock) {
            gtk_container_child_notify(pointerOf(self), pointerOf(child), childProperty);
        }
    }

    private static native final void gtk_container_child_notify(long self, long child, String childProperty);

    @SuppressWarnings("unused")
    static final void childNotifyByPspec(Container self, Widget child, FIXME pspec) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GParamSpec*");
    }

    static final void childSet(Container self, Widget child, String firstPropName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (firstPropName == null) {
            throw new IllegalArgumentException("firstPropName can't be null");
        }

        synchronized (lock) {
            gtk_container_child_set(pointerOf(self), pointerOf(child), firstPropName);
        }
    }

    private static native final void gtk_container_child_set(long self, long child, String firstPropName);

    static final void childSetProperty(Container self, Widget child, String propertyName, org.gnome.glib.Value value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (propertyName == null) {
            throw new IllegalArgumentException("propertyName can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            gtk_container_child_set_property(pointerOf(self), pointerOf(child), propertyName, pointerOf(value));
        }
    }

    private static native final void gtk_container_child_set_property(long self, long child, String propertyName, long value);

    @SuppressWarnings("unused")
    static final void childSetValist(Container self, Widget child, String firstPropertyName, FIXME varArgs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("va_list");
    }

    @SuppressWarnings("unused")
    static final FIXME childType(Container self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    @SuppressWarnings("unused")
    static final void forall(Container self, FIXME callback, FIXME callbackData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCallback");
    }

    @SuppressWarnings("unused")
    static final void foreach(Container self, FIXME callback, FIXME callbackData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCallback");
    }

    static final int getBorderWidth(Container self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_container_get_border_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_container_get_border_width(long self);

    static final Widget[] getChildren(Container self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_container_get_children(pointerOf(self));

            return (Widget[]) objectArrayFor(result, new Widget[result.length]);
        }
    }

    private static native final long[] gtk_container_get_children(long self);

    @SuppressWarnings("unused")
    static final boolean getFocusChain(Container self, FIXME focusableWidgets) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-GtkWidget**");
    }

    static final Widget getFocusChild(Container self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_container_get_focus_child(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_container_get_focus_child(long self);

    static final Adjustment getFocusHadjustment(Container self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_container_get_focus_hadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_container_get_focus_hadjustment(long self);

    static final Adjustment getFocusVadjustment(Container self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_container_get_focus_vadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_container_get_focus_vadjustment(long self);

    @SuppressWarnings("unused")
    static final FIXME getPathForChild(Container self, Widget child) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWidgetPath*");
    }

    static final ResizeMode getResizeMode(Container self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_container_get_resize_mode(pointerOf(self));

            return (ResizeMode) enumFor(ResizeMode.class, result);
        }
    }

    private static native final int gtk_container_get_resize_mode(long self);

    static final void propagateDraw(Container self, Widget child, Context cr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (cr == null) {
            throw new IllegalArgumentException("cr can't be null");
        }

        synchronized (lock) {
            gtk_container_propagate_draw(pointerOf(self), pointerOf(child), pointerOf(cr));
        }
    }

    private static native final void gtk_container_propagate_draw(long self, long child, long cr);

    static final void remove(Container self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        synchronized (lock) {
            gtk_container_remove(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_container_remove(long self, long widget);

    static final void resizeChildren(Container self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_container_resize_children(pointerOf(self));
        }
    }

    private static native final void gtk_container_resize_children(long self);

    static final void setBorderWidth(Container self, int borderWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_container_set_border_width(pointerOf(self), borderWidth);
        }
    }

    private static native final void gtk_container_set_border_width(long self, int borderWidth);

    static final void setFocusChain(Container self, Widget[] focusableWidgets) {
        long[] _focusableWidgets;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (focusableWidgets == null) {
            throw new IllegalArgumentException("focusableWidgets can't be null");
        }

        _focusableWidgets = pointersOf(focusableWidgets);

        synchronized (lock) {
            gtk_container_set_focus_chain(pointerOf(self), _focusableWidgets);
            fillObjectArray(focusableWidgets, _focusableWidgets);
        }
    }

    private static native final void gtk_container_set_focus_chain(long self, long[] focusableWidgets);

    static final void setFocusChild(Container self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_container_set_focus_child(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_container_set_focus_child(long self, long child);

    static final void setFocusHadjustment(Container self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (adjustment == null) {
            throw new IllegalArgumentException("adjustment can't be null");
        }

        synchronized (lock) {
            gtk_container_set_focus_hadjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_container_set_focus_hadjustment(long self, long adjustment);

    static final void setFocusVadjustment(Container self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (adjustment == null) {
            throw new IllegalArgumentException("adjustment can't be null");
        }

        synchronized (lock) {
            gtk_container_set_focus_vadjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_container_set_focus_vadjustment(long self, long adjustment);

    static final void setReallocateRedraws(Container self, boolean needsRedraws) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_container_set_reallocate_redraws(pointerOf(self), needsRedraws);
        }
    }

    private static native final void gtk_container_set_reallocate_redraws(long self, boolean needsRedraws);

    static final void setResizeMode(Container self, ResizeMode resizeMode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (resizeMode == null) {
            throw new IllegalArgumentException("resizeMode can't be null");
        }

        synchronized (lock) {
            gtk_container_set_resize_mode(pointerOf(self), numOf(resizeMode));
        }
    }

    private static native final void gtk_container_set_resize_mode(long self, int resizeMode);

    static final void unsetFocusChain(Container self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_container_unset_focus_chain(pointerOf(self));
        }
    }

    private static native final void gtk_container_unset_focus_chain(long self);

    interface AddSignal extends Signal
    {
        void onAdd(Container source, Widget widget);
    }

    static final void connect(Container self, GtkContainer.AddSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "add", after);
    }

    protected static final void receiveAdd(Signal handler, long source, long widget) {
        ((GtkContainer.AddSignal) handler).onAdd((Container) objectFor(source), (Widget) objectFor(widget));
    }

    interface CheckResizeSignal extends Signal
    {
        void onCheckResize(Container source);
    }

    static final void connect(Container self, GtkContainer.CheckResizeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "check-resize", after);
    }

    protected static final void receiveCheckResize(Signal handler, long source) {
        ((GtkContainer.CheckResizeSignal) handler).onCheckResize((Container) objectFor(source));
    }

    interface ChildTypeSignal extends Signal
    {
        FIXME onChildType(Container source);
    }

    static final void connect(Container self, GtkContainer.ChildTypeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "child-type", after);
    }

    protected static final java.lang.Object receiveChildType(Signal handler, long source) {
        FIXME result;

        result = ((GtkContainer.ChildTypeSignal) handler).onChildType((Container) objectFor(source));

        return result;
    }

    interface CompositeNameSignal extends Signal
    {
        String onCompositeName(Container source, Widget child);
    }

    static final void connect(Container self, GtkContainer.CompositeNameSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "composite-name", after);
    }

    protected static final String receiveCompositeName(Signal handler, long source, long child) {
        String result;

        result = ((GtkContainer.CompositeNameSignal) handler).onCompositeName((Container) objectFor(source), (Widget) objectFor(child));

        return result;
    }

    interface ForallSignal extends Signal
    {
        void onForall(Container source, boolean includeInternals, FIXME callback, FIXME callbackData);
    }

    static final void connect(Container self, GtkContainer.ForallSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "forall", after);
    }

    protected static final void receiveForall(Signal handler, long source, boolean includeInternals, java.lang.Object callback, java.lang.Object callbackData) {
        ((GtkContainer.ForallSignal) handler).onForall((Container) objectFor(source), includeInternals, (FIXME) callback, (FIXME) callbackData);
    }

    interface GetChildPropertySignal extends Signal
    {
        void onGetChildProperty(Container source, Widget child, int propertyId, Value value, FIXME pspec);
    }

    static final void connect(Container self, GtkContainer.GetChildPropertySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "get-child-property", after);
    }

    protected static final void receiveGetChildProperty(Signal handler, long source, long child, int propertyId, long value, java.lang.Object pspec) {
        ((GtkContainer.GetChildPropertySignal) handler).onGetChildProperty((Container) objectFor(source), (Widget) objectFor(child), propertyId, valueFor(value), (FIXME) pspec);
    }

    interface GetPathForChildSignal extends Signal
    {
        FIXME onGetPathForChild(Container source, Widget child);
    }

    static final void connect(Container self, GtkContainer.GetPathForChildSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "get-path-for-child", after);
    }

    protected static final java.lang.Object receiveGetPathForChild(Signal handler, long source, long child) {
        FIXME result;

        result = ((GtkContainer.GetPathForChildSignal) handler).onGetPathForChild((Container) objectFor(source), (Widget) objectFor(child));

        return result;
    }

    interface RemoveSignal extends Signal
    {
        void onRemove(Container source, Widget widget);
    }

    static final void connect(Container self, GtkContainer.RemoveSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "remove", after);
    }

    protected static final void receiveRemove(Signal handler, long source, long widget) {
        ((GtkContainer.RemoveSignal) handler).onRemove((Container) objectFor(source), (Widget) objectFor(widget));
    }

    interface SetChildPropertySignal extends Signal
    {
        void onSetChildProperty(Container source, Widget child, int propertyId, org.gnome.glib.Value value, FIXME pspec);
    }

    static final void connect(Container self, GtkContainer.SetChildPropertySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "set-child-property", after);
    }

    protected static final void receiveSetChildProperty(Signal handler, long source, long child, int propertyId, long value, java.lang.Object pspec) {
        ((GtkContainer.SetChildPropertySignal) handler).onSetChildProperty((Container) objectFor(source), (Widget) objectFor(child), propertyId, valueFor(value), (FIXME) pspec);
    }

    interface SetFocusChildSignal extends Signal
    {
        void onSetFocusChild(Container source, Widget child);
    }

    static final void connect(Container self, GtkContainer.SetFocusChildSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkContainer.class, "set-focus-child", after);
    }

    protected static final void receiveSetFocusChild(Signal handler, long source, long child) {
        ((GtkContainer.SetFocusChildSignal) handler).onSetFocusChild((Container) objectFor(source), (Widget) objectFor(child));
    }
}

