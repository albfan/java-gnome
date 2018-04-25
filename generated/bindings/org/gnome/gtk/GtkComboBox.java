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
import org.gnome.gdk.Device;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.ComboBox;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ScrollType;
import org.gnome.gtk.SensitivityType;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;

final class GtkComboBox extends Plumbing
{
    private GtkComboBox() {}

    static final long createComboBox() {
        long result;

        synchronized (lock) {
            result = gtk_combo_box_new();

            return result;
        }
    }

    private static native final long gtk_combo_box_new();

    @SuppressWarnings("unused")
    static final long createComboBoxWithArea(FIXME area) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellArea*");
    }

    @SuppressWarnings("unused")
    static final long createComboBoxWithAreaAndEntry(FIXME area) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellArea*");
    }

    static final long createComboBoxWithEntry() {
        long result;

        synchronized (lock) {
            result = gtk_combo_box_new_with_entry();

            return result;
        }
    }

    private static native final long gtk_combo_box_new_with_entry();

    static final long createComboBoxWithModel(TreeModel model) {
        long result;

        if (model == null) {
            throw new IllegalArgumentException("model can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_new_with_model(pointerOf((Object) model));

            return result;
        }
    }

    private static native final long gtk_combo_box_new_with_model(long model);

    static final long createComboBoxWithModelAndEntry(TreeModel model) {
        long result;

        if (model == null) {
            throw new IllegalArgumentException("model can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_new_with_model_and_entry(pointerOf((Object) model));

            return result;
        }
    }

    private static native final long gtk_combo_box_new_with_model_and_entry(long model);

    static final int getActive(ComboBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_active(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_combo_box_get_active(long self);

    static final String getActiveId(ComboBox self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_active_id(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_combo_box_get_active_id(long self);

    static final boolean getActiveIter(ComboBox self, TreeIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_active_iter(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_combo_box_get_active_iter(long self, long iter);

    static final boolean getAddTearoffs(ComboBox self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_add_tearoffs(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_combo_box_get_add_tearoffs(long self);

    static final SensitivityType getButtonSensitivity(ComboBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_button_sensitivity(pointerOf(self));

            return (SensitivityType) enumFor(SensitivityType.class, result);
        }
    }

    private static native final int gtk_combo_box_get_button_sensitivity(long self);

    static final int getColumnSpanColumn(ComboBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_column_span_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_combo_box_get_column_span_column(long self);

    static final int getEntryTextColumn(ComboBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_entry_text_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_combo_box_get_entry_text_column(long self);

    static final boolean getFocusOnClick(ComboBox self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_focus_on_click(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_combo_box_get_focus_on_click(long self);

    static final boolean getHasEntry(ComboBox self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_has_entry(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_combo_box_get_has_entry(long self);

    static final int getIdColumn(ComboBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_id_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_combo_box_get_id_column(long self);

    static final TreeModel getModel(ComboBox self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_model(pointerOf(self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_combo_box_get_model(long self);

    static final org.gnome.atk.Object getPopupAccessible(ComboBox self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_popup_accessible(pointerOf(self));

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long gtk_combo_box_get_popup_accessible(long self);

    static final boolean getPopupFixedWidth(ComboBox self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_popup_fixed_width(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_combo_box_get_popup_fixed_width(long self);

    @SuppressWarnings("unused")
    static final FIXME getRowSeparatorFunc(ComboBox self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewRowSeparatorFunc");
    }

    static final int getRowSpanColumn(ComboBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_row_span_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_combo_box_get_row_span_column(long self);

    static final String getTitle(ComboBox self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_combo_box_get_title(long self);

    static final int getWrapWidth(ComboBox self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_get_wrap_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_combo_box_get_wrap_width(long self);

    static final void popdown(ComboBox self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_popdown(pointerOf(self));
        }
    }

    private static native final void gtk_combo_box_popdown(long self);

    static final void popup(ComboBox self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_popup(pointerOf(self));
        }
    }

    private static native final void gtk_combo_box_popup(long self);

    static final void popupForDevice(ComboBox self, Device device) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (device == null) {
            throw new IllegalArgumentException("device can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_popup_for_device(pointerOf(self), pointerOf(device));
        }
    }

    private static native final void gtk_combo_box_popup_for_device(long self, long device);

    static final void setActive(ComboBox self, int index) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_active(pointerOf(self), index);
        }
    }

    private static native final void gtk_combo_box_set_active(long self, int index);

    static final boolean setActiveId(ComboBox self, String activeId) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_set_active_id(pointerOf(self), activeId);

            return result;
        }
    }

    private static native final boolean gtk_combo_box_set_active_id(long self, String activeId);

    static final void setActiveIter(ComboBox self, TreeIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_active_iter(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_combo_box_set_active_iter(long self, long iter);

    static final void setAddTearoffs(ComboBox self, boolean addTearoffs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_add_tearoffs(pointerOf(self), addTearoffs);
        }
    }

    private static native final void gtk_combo_box_set_add_tearoffs(long self, boolean addTearoffs);

    static final void setButtonSensitivity(ComboBox self, SensitivityType sensitivity) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sensitivity == null) {
            throw new IllegalArgumentException("sensitivity can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_button_sensitivity(pointerOf(self), numOf(sensitivity));
        }
    }

    private static native final void gtk_combo_box_set_button_sensitivity(long self, int sensitivity);

    static final void setColumnSpanColumn(ComboBox self, int columnSpan) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_column_span_column(pointerOf(self), columnSpan);
        }
    }

    private static native final void gtk_combo_box_set_column_span_column(long self, int columnSpan);

    static final void setEntryTextColumn(ComboBox self, int textColumn) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_entry_text_column(pointerOf(self), textColumn);
        }
    }

    private static native final void gtk_combo_box_set_entry_text_column(long self, int textColumn);

    static final void setFocusOnClick(ComboBox self, boolean focusOnClick) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_focus_on_click(pointerOf(self), focusOnClick);
        }
    }

    private static native final void gtk_combo_box_set_focus_on_click(long self, boolean focusOnClick);

    static final void setIdColumn(ComboBox self, int idColumn) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_id_column(pointerOf(self), idColumn);
        }
    }

    private static native final void gtk_combo_box_set_id_column(long self, int idColumn);

    static final void setModel(ComboBox self, TreeModel model) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_model(pointerOf(self), pointerOf((Object) model));
        }
    }

    private static native final void gtk_combo_box_set_model(long self, long model);

    static final void setPopupFixedWidth(ComboBox self, boolean fixed) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_popup_fixed_width(pointerOf(self), fixed);
        }
    }

    private static native final void gtk_combo_box_set_popup_fixed_width(long self, boolean fixed);

    @SuppressWarnings("unused")
    static final void setRowSeparatorFunc(ComboBox self, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTreeViewRowSeparatorFunc");
    }

    static final void setRowSpanColumn(ComboBox self, int rowSpan) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_row_span_column(pointerOf(self), rowSpan);
        }
    }

    private static native final void gtk_combo_box_set_row_span_column(long self, int rowSpan);

    static final void setTitle(ComboBox self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_combo_box_set_title(long self, String title);

    static final void setWrapWidth(ComboBox self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_set_wrap_width(pointerOf(self), width);
        }
    }

    private static native final void gtk_combo_box_set_wrap_width(long self, int width);

    interface ChangedSignal extends Signal
    {
        void onChanged(ComboBox source);
    }

    static final void connect(ComboBox self, GtkComboBox.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkComboBox.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkComboBox.ChangedSignal) handler).onChanged((ComboBox) objectFor(source));
    }

    interface FormatEntryTextSignal extends Signal
    {
        String onFormatEntryText(ComboBox source, String path);
    }

    static final void connect(ComboBox self, GtkComboBox.FormatEntryTextSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkComboBox.class, "format-entry-text", after);
    }

    protected static final String receiveFormatEntryText(Signal handler, long source, String path) {
        String result;

        result = ((GtkComboBox.FormatEntryTextSignal) handler).onFormatEntryText((ComboBox) objectFor(source), path);

        return result;
    }

    interface MoveActiveSignal extends Signal
    {
        void onMoveActive(ComboBox source, ScrollType scrollType);
    }

    static final void connect(ComboBox self, GtkComboBox.MoveActiveSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkComboBox.class, "move-active", after);
    }

    protected static final void receiveMoveActive(Signal handler, long source, int scrollType) {
        ((GtkComboBox.MoveActiveSignal) handler).onMoveActive((ComboBox) objectFor(source), (ScrollType) enumFor(ScrollType.class, scrollType));
    }

    interface PopdownSignal extends Signal
    {
        boolean onPopdown(ComboBox source);
    }

    static final void connect(ComboBox self, GtkComboBox.PopdownSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkComboBox.class, "popdown", after);
    }

    protected static final boolean receivePopdown(Signal handler, long source) {
        boolean result;

        result = ((GtkComboBox.PopdownSignal) handler).onPopdown((ComboBox) objectFor(source));

        return result;
    }

    interface PopupSignal extends Signal
    {
        void onPopup(ComboBox source);
    }

    static final void connect(ComboBox self, GtkComboBox.PopupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkComboBox.class, "popup", after);
    }

    protected static final void receivePopup(Signal handler, long source) {
        ((GtkComboBox.PopupSignal) handler).onPopup((ComboBox) objectFor(source));
    }
}

