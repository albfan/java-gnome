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

import org.gnome.atk.Plumbing;
import org.gnome.atk.Selection;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkSelection extends Plumbing
{
    private AtkSelection() {}

    static final boolean addSelection(Selection self, int i) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_selection_add_selection(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final boolean atk_selection_add_selection(long self, int i);

    static final boolean clearSelection(Selection self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_selection_clear_selection(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean atk_selection_clear_selection(long self);

    static final int getSelectionCount(Selection self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_selection_get_selection_count(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_selection_get_selection_count(long self);

    static final boolean isChildSelected(Selection self, int i) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_selection_is_child_selected(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final boolean atk_selection_is_child_selected(long self, int i);

    static final org.gnome.atk.Object refSelection(Selection self, int i) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_selection_ref_selection(pointerOf((Object) self), i);

            return (org.gnome.atk.Object) objectFor(result);
        }
    }

    private static native final long atk_selection_ref_selection(long self, int i);

    static final boolean removeSelection(Selection self, int i) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_selection_remove_selection(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final boolean atk_selection_remove_selection(long self, int i);

    static final boolean selectAllSelection(Selection self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_selection_select_all_selection(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean atk_selection_select_all_selection(long self);

    interface AddSelectionSignal extends Signal
    {
        boolean onAddSelection(Selection source, int i);
    }

    static final void connect(Selection self, AtkSelection.AddSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "add-selection", after);
    }

    protected static final boolean receiveAddSelection(Signal handler, long source, int i) {
        boolean result;

        result = ((AtkSelection.AddSelectionSignal) handler).onAddSelection((Selection) objectFor(source), i);

        return result;
    }

    interface ClearSelectionSignal extends Signal
    {
        boolean onClearSelection(Selection source);
    }

    static final void connect(Selection self, AtkSelection.ClearSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "clear-selection", after);
    }

    protected static final boolean receiveClearSelection(Signal handler, long source) {
        boolean result;

        result = ((AtkSelection.ClearSelectionSignal) handler).onClearSelection((Selection) objectFor(source));

        return result;
    }

    interface GetSelectionCountSignal extends Signal
    {
        int onGetSelectionCount(Selection source);
    }

    static final void connect(Selection self, AtkSelection.GetSelectionCountSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "get-selection-count", after);
    }

    protected static final int receiveGetSelectionCount(Signal handler, long source) {
        int result;

        result = ((AtkSelection.GetSelectionCountSignal) handler).onGetSelectionCount((Selection) objectFor(source));

        return result;
    }

    interface IsChildSelectedSignal extends Signal
    {
        boolean onIsChildSelected(Selection source, int i);
    }

    static final void connect(Selection self, AtkSelection.IsChildSelectedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "is-child-selected", after);
    }

    protected static final boolean receiveIsChildSelected(Signal handler, long source, int i) {
        boolean result;

        result = ((AtkSelection.IsChildSelectedSignal) handler).onIsChildSelected((Selection) objectFor(source), i);

        return result;
    }

    interface RefSelectionSignal extends Signal
    {
        org.gnome.atk.Object onRefSelection(Selection source, int i);
    }

    static final void connect(Selection self, AtkSelection.RefSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "ref-selection", after);
    }

    protected static final long receiveRefSelection(Signal handler, long source, int i) {
        org.gnome.atk.Object result;

        result = ((AtkSelection.RefSelectionSignal) handler).onRefSelection((Selection) objectFor(source), i);

        return pointerOf(result);
    }

    interface RemoveSelectionSignal extends Signal
    {
        boolean onRemoveSelection(Selection source, int i);
    }

    static final void connect(Selection self, AtkSelection.RemoveSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "remove-selection", after);
    }

    protected static final boolean receiveRemoveSelection(Signal handler, long source, int i) {
        boolean result;

        result = ((AtkSelection.RemoveSelectionSignal) handler).onRemoveSelection((Selection) objectFor(source), i);

        return result;
    }

    interface SelectAllSelectionSignal extends Signal
    {
        boolean onSelectAllSelection(Selection source);
    }

    static final void connect(Selection self, AtkSelection.SelectAllSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "select-all-selection", after);
    }

    protected static final boolean receiveSelectAllSelection(Signal handler, long source) {
        boolean result;

        result = ((AtkSelection.SelectAllSelectionSignal) handler).onSelectAllSelection((Selection) objectFor(source));

        return result;
    }

    interface SelectionChangedSignal extends Signal
    {
        void onSelectionChanged(Selection source);
    }

    static final void connect(Selection self, AtkSelection.SelectionChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkSelection.class, "selection-changed", after);
    }

    protected static final void receiveSelectionChanged(Signal handler, long source) {
        ((AtkSelection.SelectionChangedSignal) handler).onSelectionChanged((Selection) objectFor(source));
    }
}

