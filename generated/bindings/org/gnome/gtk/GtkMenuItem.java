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

import org.gnome.glib.Signal;
import org.gnome.gtk.MenuItem;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkMenuItem extends Plumbing
{
    private GtkMenuItem() {}

    static final long createMenuItem() {
        long result;

        synchronized (lock) {
            result = gtk_menu_item_new();

            return result;
        }
    }

    private static native final long gtk_menu_item_new();

    static final long createMenuItemWithLabel(String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_new_with_label(label);

            return result;
        }
    }

    private static native final long gtk_menu_item_new_with_label(String label);

    static final long createMenuItemWithMnemonic(String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_new_with_mnemonic(label);

            return result;
        }
    }

    private static native final long gtk_menu_item_new_with_mnemonic(String label);

    static final void activate(MenuItem self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_activate(pointerOf(self));
        }
    }

    private static native final void gtk_menu_item_activate(long self);

    static final void deselect(MenuItem self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_deselect(pointerOf(self));
        }
    }

    private static native final void gtk_menu_item_deselect(long self);

    static final String getAccelPath(MenuItem self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_get_accel_path(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_menu_item_get_accel_path(long self);

    static final String getLabel(MenuItem self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_menu_item_get_label(long self);

    static final boolean getReserveIndicator(MenuItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_get_reserve_indicator(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_menu_item_get_reserve_indicator(long self);

    static final boolean getRightJustified(MenuItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_get_right_justified(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_menu_item_get_right_justified(long self);

    static final Widget getSubmenu(MenuItem self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_get_submenu(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_menu_item_get_submenu(long self);

    static final boolean getUseUnderline(MenuItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_menu_item_get_use_underline(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_menu_item_get_use_underline(long self);

    static final void select(MenuItem self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_select(pointerOf(self));
        }
    }

    private static native final void gtk_menu_item_select(long self);

    static final void setAccelPath(MenuItem self, String accelPath) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_set_accel_path(pointerOf(self), accelPath);
        }
    }

    private static native final void gtk_menu_item_set_accel_path(long self, String accelPath);

    static final void setLabel(MenuItem self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_set_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_menu_item_set_label(long self, String label);

    static final void setReserveIndicator(MenuItem self, boolean reserve) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_set_reserve_indicator(pointerOf(self), reserve);
        }
    }

    private static native final void gtk_menu_item_set_reserve_indicator(long self, boolean reserve);

    static final void setRightJustified(MenuItem self, boolean rightJustified) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_set_right_justified(pointerOf(self), rightJustified);
        }
    }

    private static native final void gtk_menu_item_set_right_justified(long self, boolean rightJustified);

    static final void setSubmenu(MenuItem self, Widget submenu) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_set_submenu(pointerOf(self), pointerOf(submenu));
        }
    }

    private static native final void gtk_menu_item_set_submenu(long self, long submenu);

    static final void setUseUnderline(MenuItem self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_set_use_underline(pointerOf(self), setting);
        }
    }

    private static native final void gtk_menu_item_set_use_underline(long self, boolean setting);

    static final void toggleSizeAllocate(MenuItem self, int allocation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_toggle_size_allocate(pointerOf(self), allocation);
        }
    }

    private static native final void gtk_menu_item_toggle_size_allocate(long self, int allocation);

    static final void toggleSizeRequest(MenuItem self, int[] requisition) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (requisition == null) {
            throw new IllegalArgumentException("requisition can't be null");
        }

        synchronized (lock) {
            gtk_menu_item_toggle_size_request(pointerOf(self), requisition);
        }
    }

    private static native final void gtk_menu_item_toggle_size_request(long self, int[] requisition);

    interface ActivateSignal extends Signal
    {
        void onActivate(MenuItem source);
    }

    static final void connect(MenuItem self, GtkMenuItem.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GtkMenuItem.ActivateSignal) handler).onActivate((MenuItem) objectFor(source));
    }

    interface ActivateItemSignal extends Signal
    {
        void onActivateItem(MenuItem source);
    }

    static final void connect(MenuItem self, GtkMenuItem.ActivateItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "activate-item", after);
    }

    protected static final void receiveActivateItem(Signal handler, long source) {
        ((GtkMenuItem.ActivateItemSignal) handler).onActivateItem((MenuItem) objectFor(source));
    }

    interface DeselectSignal extends Signal
    {
        void onDeselect(MenuItem source);
    }

    static final void connect(MenuItem self, GtkMenuItem.DeselectSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "deselect", after);
    }

    protected static final void receiveDeselect(Signal handler, long source) {
        ((GtkMenuItem.DeselectSignal) handler).onDeselect((MenuItem) objectFor(source));
    }

    interface GetLabelSignal extends Signal
    {
        String onGetLabel(MenuItem source);
    }

    static final void connect(MenuItem self, GtkMenuItem.GetLabelSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "get-label", after);
    }

    protected static final String receiveGetLabel(Signal handler, long source) {
        String result;

        result = ((GtkMenuItem.GetLabelSignal) handler).onGetLabel((MenuItem) objectFor(source));

        return result;
    }

    interface SelectSignal extends Signal
    {
        void onSelect(MenuItem source);
    }

    static final void connect(MenuItem self, GtkMenuItem.SelectSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "select", after);
    }

    protected static final void receiveSelect(Signal handler, long source) {
        ((GtkMenuItem.SelectSignal) handler).onSelect((MenuItem) objectFor(source));
    }

    interface SetLabelSignal extends Signal
    {
        void onSetLabel(MenuItem source, String label);
    }

    static final void connect(MenuItem self, GtkMenuItem.SetLabelSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "set-label", after);
    }

    protected static final void receiveSetLabel(Signal handler, long source, String label) {
        ((GtkMenuItem.SetLabelSignal) handler).onSetLabel((MenuItem) objectFor(source), label);
    }

    interface ToggleSizeAllocateSignal extends Signal
    {
        void onToggleSizeAllocate(MenuItem source, int allocation);
    }

    static final void connect(MenuItem self, GtkMenuItem.ToggleSizeAllocateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "toggle-size-allocate", after);
    }

    protected static final void receiveToggleSizeAllocate(Signal handler, long source, int allocation) {
        ((GtkMenuItem.ToggleSizeAllocateSignal) handler).onToggleSizeAllocate((MenuItem) objectFor(source), allocation);
    }

    interface ToggleSizeRequestSignal extends Signal
    {
        void onToggleSizeRequest(MenuItem source, int[] requisition);
    }

    static final void connect(MenuItem self, GtkMenuItem.ToggleSizeRequestSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkMenuItem.class, "toggle-size-request", after);
    }

    protected static final void receiveToggleSizeRequest(Signal handler, long source, int[] requisition) {
        ((GtkMenuItem.ToggleSizeRequestSignal) handler).onToggleSizeRequest((MenuItem) objectFor(source), requisition);
    }
}

