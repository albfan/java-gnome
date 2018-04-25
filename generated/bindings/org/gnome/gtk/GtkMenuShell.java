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
import org.gnome.gtk.DirectionType;
import org.gnome.gtk.MenuDirectionType;
import org.gnome.gtk.MenuShell;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkMenuShell extends Plumbing
{
    private GtkMenuShell() {}

    static final void activateItem(MenuShell self, Widget menuItem, boolean forceDeactivate) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (menuItem == null) {
            throw new IllegalArgumentException("menuItem can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_activate_item(pointerOf(self), pointerOf(menuItem), forceDeactivate);
        }
    }

    private static native final void gtk_menu_shell_activate_item(long self, long menuItem, boolean forceDeactivate);

    static final void append(MenuShell self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_append(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_menu_shell_append(long self, long child);

    @SuppressWarnings("unused")
    static final void bindModel(MenuShell self, FIXME model, String actionNamespace, boolean withSeparators) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMenuModel*");
    }

    static final void cancel(MenuShell self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_cancel(pointerOf(self));
        }
    }

    private static native final void gtk_menu_shell_cancel(long self);

    static final void deactivate(MenuShell self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_deactivate(pointerOf(self));
        }
    }

    private static native final void gtk_menu_shell_deactivate(long self);

    static final void deselect(MenuShell self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_deselect(pointerOf(self));
        }
    }

    private static native final void gtk_menu_shell_deselect(long self);

    static final Widget getParentShell(MenuShell self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_shell_get_parent_shell(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_menu_shell_get_parent_shell(long self);

    static final Widget getSelectedItem(MenuShell self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_shell_get_selected_item(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_menu_shell_get_selected_item(long self);

    static final boolean getTakeFocus(MenuShell self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_shell_get_take_focus(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_menu_shell_get_take_focus(long self);

    static final void insert(MenuShell self, Widget child, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_insert(pointerOf(self), pointerOf(child), position);
        }
    }

    private static native final void gtk_menu_shell_insert(long self, long child, int position);

    static final void prepend(MenuShell self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_prepend(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_menu_shell_prepend(long self, long child);

    static final void selectFirst(MenuShell self, boolean searchSensitive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_select_first(pointerOf(self), searchSensitive);
        }
    }

    private static native final void gtk_menu_shell_select_first(long self, boolean searchSensitive);

    static final void selectItem(MenuShell self, Widget menuItem) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (menuItem == null) {
            throw new IllegalArgumentException("menuItem can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_select_item(pointerOf(self), pointerOf(menuItem));
        }
    }

    private static native final void gtk_menu_shell_select_item(long self, long menuItem);

    static final void setTakeFocus(MenuShell self, boolean takeFocus) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_shell_set_take_focus(pointerOf(self), takeFocus);
        }
    }

    private static native final void gtk_menu_shell_set_take_focus(long self, boolean takeFocus);

    interface ActivateCurrentSignal extends Signal
    {
        void onActivateCurrent(MenuShell source, boolean forceHide);
    }

    static final void connect(MenuShell self, GtkMenuShell.ActivateCurrentSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "activate-current", after);
    }

    protected static final void receiveActivateCurrent(Signal handler, long source, boolean forceHide) {
        ((GtkMenuShell.ActivateCurrentSignal) handler).onActivateCurrent((MenuShell) objectFor(source), forceHide);
    }

    interface CancelSignal extends Signal
    {
        void onCancel(MenuShell source);
    }

    static final void connect(MenuShell self, GtkMenuShell.CancelSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "cancel", after);
    }

    protected static final void receiveCancel(Signal handler, long source) {
        ((GtkMenuShell.CancelSignal) handler).onCancel((MenuShell) objectFor(source));
    }

    interface DeactivateSignal extends Signal
    {
        void onDeactivate(MenuShell source);
    }

    static final void connect(MenuShell self, GtkMenuShell.DeactivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "deactivate", after);
    }

    protected static final void receiveDeactivate(Signal handler, long source) {
        ((GtkMenuShell.DeactivateSignal) handler).onDeactivate((MenuShell) objectFor(source));
    }

    interface GetPopupDelaySignal extends Signal
    {
        int onGetPopupDelay(MenuShell source);
    }

    static final void connect(MenuShell self, GtkMenuShell.GetPopupDelaySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "get-popup-delay", after);
    }

    protected static final int receiveGetPopupDelay(Signal handler, long source) {
        int result;

        result = ((GtkMenuShell.GetPopupDelaySignal) handler).onGetPopupDelay((MenuShell) objectFor(source));

        return result;
    }

    interface InsertSignal extends Signal
    {
        void onInsert(MenuShell source, Widget child, int position);
    }

    static final void connect(MenuShell self, GtkMenuShell.InsertSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "insert", after);
    }

    protected static final void receiveInsert(Signal handler, long source, long child, int position) {
        ((GtkMenuShell.InsertSignal) handler).onInsert((MenuShell) objectFor(source), (Widget) objectFor(child), position);
    }

    interface MoveCurrentSignal extends Signal
    {
        void onMoveCurrent(MenuShell source, MenuDirectionType direction);
    }

    static final void connect(MenuShell self, GtkMenuShell.MoveCurrentSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "move-current", after);
    }

    protected static final void receiveMoveCurrent(Signal handler, long source, int direction) {
        ((GtkMenuShell.MoveCurrentSignal) handler).onMoveCurrent((MenuShell) objectFor(source), (MenuDirectionType) enumFor(MenuDirectionType.class, direction));
    }

    interface MoveSelectedSignal extends Signal
    {
        boolean onMoveSelected(MenuShell source, int distance);
    }

    static final void connect(MenuShell self, GtkMenuShell.MoveSelectedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "move-selected", after);
    }

    protected static final boolean receiveMoveSelected(Signal handler, long source, int distance) {
        boolean result;

        result = ((GtkMenuShell.MoveSelectedSignal) handler).onMoveSelected((MenuShell) objectFor(source), distance);

        return result;
    }

    interface SelectItemSignal extends Signal
    {
        void onSelectItem(MenuShell source, Widget menuItem);
    }

    static final void connect(MenuShell self, GtkMenuShell.SelectItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "select-item", after);
    }

    protected static final void receiveSelectItem(Signal handler, long source, long menuItem) {
        ((GtkMenuShell.SelectItemSignal) handler).onSelectItem((MenuShell) objectFor(source), (Widget) objectFor(menuItem));
    }

    interface SelectionDoneSignal extends Signal
    {
        void onSelectionDone(MenuShell source);
    }

    static final void connect(MenuShell self, GtkMenuShell.SelectionDoneSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "selection-done", after);
    }

    protected static final void receiveSelectionDone(Signal handler, long source) {
        ((GtkMenuShell.SelectionDoneSignal) handler).onSelectionDone((MenuShell) objectFor(source));
    }

    interface CycleFocusSignal extends Signal
    {
        void onCycleFocus(MenuShell source, DirectionType direction);
    }

    static final void connect(MenuShell self, GtkMenuShell.CycleFocusSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuShell.class, "cycle-focus", after);
    }

    protected static final void receiveCycleFocus(Signal handler, long source, int direction) {
        ((GtkMenuShell.CycleFocusSignal) handler).onCycleFocus((MenuShell) objectFor(source), (DirectionType) enumFor(DirectionType.class, direction));
    }
}

