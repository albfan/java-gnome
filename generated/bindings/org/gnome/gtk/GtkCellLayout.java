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
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.CellLayout;
import org.gnome.gtk.CellRenderer;
import org.gnome.gtk.Plumbing;

final class GtkCellLayout extends Plumbing
{
    private GtkCellLayout() {}

    static final void addAttribute(CellLayout self, CellRenderer cell, String attribute, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        if (attribute == null) {
            throw new IllegalArgumentException("attribute can't be null");
        }

        synchronized (lock) {
            gtk_cell_layout_add_attribute(pointerOf((Object) self), pointerOf(cell), attribute, column);
        }
    }

    private static native final void gtk_cell_layout_add_attribute(long self, long cell, String attribute, int column);

    static final void clear(CellLayout self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_layout_clear(pointerOf((Object) self));
        }
    }

    private static native final void gtk_cell_layout_clear(long self);

    static final void clearAttributes(CellLayout self, CellRenderer cell) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_cell_layout_clear_attributes(pointerOf((Object) self), pointerOf(cell));
        }
    }

    private static native final void gtk_cell_layout_clear_attributes(long self, long cell);

    @SuppressWarnings("unused")
    static final FIXME getArea(CellLayout self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellArea*");
    }

    static final CellRenderer[] getCells(CellLayout self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_layout_get_cells(pointerOf((Object) self));

            return (CellRenderer[]) objectArrayFor(result, new CellRenderer[result.length]);
        }
    }

    private static native final long[] gtk_cell_layout_get_cells(long self);

    static final void packEnd(CellLayout self, CellRenderer cell, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_cell_layout_pack_end(pointerOf((Object) self), pointerOf(cell), expand);
        }
    }

    private static native final void gtk_cell_layout_pack_end(long self, long cell, boolean expand);

    static final void packStart(CellLayout self, CellRenderer cell, boolean expand) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_cell_layout_pack_start(pointerOf((Object) self), pointerOf(cell), expand);
        }
    }

    private static native final void gtk_cell_layout_pack_start(long self, long cell, boolean expand);

    static final void reorder(CellLayout self, CellRenderer cell, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_cell_layout_reorder(pointerOf((Object) self), pointerOf(cell), position);
        }
    }

    private static native final void gtk_cell_layout_reorder(long self, long cell, int position);

    static final void setAttributes(CellLayout self, CellRenderer cell) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cell == null) {
            throw new IllegalArgumentException("cell can't be null");
        }

        synchronized (lock) {
            gtk_cell_layout_set_attributes(pointerOf((Object) self), pointerOf(cell));
        }
    }

    private static native final void gtk_cell_layout_set_attributes(long self, long cell);

    @SuppressWarnings("unused")
    static final void setCellDataFunc(CellLayout self, CellRenderer cell, FIXME func, FIXME funcData, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellLayoutDataFunc");
    }

    interface AddAttributeSignal extends Signal
    {
        void onAddAttribute(CellLayout source, CellRenderer cell, String attribute, int column);
    }

    static final void connect(CellLayout self, GtkCellLayout.AddAttributeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "add-attribute", after);
    }

    protected static final void receiveAddAttribute(Signal handler, long source, long cell, String attribute, int column) {
        ((GtkCellLayout.AddAttributeSignal) handler).onAddAttribute((CellLayout) objectFor(source), (CellRenderer) objectFor(cell), attribute, column);
    }

    interface ClearSignal extends Signal
    {
        void onClear(CellLayout source);
    }

    static final void connect(CellLayout self, GtkCellLayout.ClearSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "clear", after);
    }

    protected static final void receiveClear(Signal handler, long source) {
        ((GtkCellLayout.ClearSignal) handler).onClear((CellLayout) objectFor(source));
    }

    interface ClearAttributesSignal extends Signal
    {
        void onClearAttributes(CellLayout source, CellRenderer cell);
    }

    static final void connect(CellLayout self, GtkCellLayout.ClearAttributesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "clear-attributes", after);
    }

    protected static final void receiveClearAttributes(Signal handler, long source, long cell) {
        ((GtkCellLayout.ClearAttributesSignal) handler).onClearAttributes((CellLayout) objectFor(source), (CellRenderer) objectFor(cell));
    }

    interface GetAreaSignal extends Signal
    {
        FIXME onGetArea(CellLayout source);
    }

    static final void connect(CellLayout self, GtkCellLayout.GetAreaSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "get-area", after);
    }

    protected static final java.lang.Object receiveGetArea(Signal handler, long source) {
        FIXME result;

        result = ((GtkCellLayout.GetAreaSignal) handler).onGetArea((CellLayout) objectFor(source));

        return result;
    }

    interface GetCellsSignal extends Signal
    {
        CellRenderer[] onGetCells(CellLayout source);
    }

    static final void connect(CellLayout self, GtkCellLayout.GetCellsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "get-cells", after);
    }

    protected static final long[] receiveGetCells(Signal handler, long source) {
        CellRenderer[] result;
        long[] _result;

        result = ((GtkCellLayout.GetCellsSignal) handler).onGetCells((CellLayout) objectFor(source));
        _result = pointersOf(result);

        return _result;
    }

    interface PackEndSignal extends Signal
    {
        void onPackEnd(CellLayout source, CellRenderer cell, boolean expand);
    }

    static final void connect(CellLayout self, GtkCellLayout.PackEndSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "pack-end", after);
    }

    protected static final void receivePackEnd(Signal handler, long source, long cell, boolean expand) {
        ((GtkCellLayout.PackEndSignal) handler).onPackEnd((CellLayout) objectFor(source), (CellRenderer) objectFor(cell), expand);
    }

    interface PackStartSignal extends Signal
    {
        void onPackStart(CellLayout source, CellRenderer cell, boolean expand);
    }

    static final void connect(CellLayout self, GtkCellLayout.PackStartSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "pack-start", after);
    }

    protected static final void receivePackStart(Signal handler, long source, long cell, boolean expand) {
        ((GtkCellLayout.PackStartSignal) handler).onPackStart((CellLayout) objectFor(source), (CellRenderer) objectFor(cell), expand);
    }

    interface ReorderSignal extends Signal
    {
        void onReorder(CellLayout source, CellRenderer cell, int position);
    }

    static final void connect(CellLayout self, GtkCellLayout.ReorderSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "reorder", after);
    }

    protected static final void receiveReorder(Signal handler, long source, long cell, int position) {
        ((GtkCellLayout.ReorderSignal) handler).onReorder((CellLayout) objectFor(source), (CellRenderer) objectFor(cell), position);
    }

    interface SetCellDataFuncSignal extends Signal
    {
        void onSetCellDataFunc(CellLayout source, CellRenderer cell, FIXME func, FIXME funcData, FIXME destroy);
    }

    static final void connect(CellLayout self, GtkCellLayout.SetCellDataFuncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkCellLayout.class, "set-cell-data-func", after);
    }

    protected static final void receiveSetCellDataFunc(Signal handler, long source, long cell, java.lang.Object func, java.lang.Object funcData, java.lang.Object destroy) {
        ((GtkCellLayout.SetCellDataFuncSignal) handler).onSetCellDataFunc((CellLayout) objectFor(source), (CellRenderer) objectFor(cell), (FIXME) func, (FIXME) funcData, (FIXME) destroy);
    }
}

