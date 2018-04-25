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
import org.gnome.gtk.Editable;
import org.gnome.gtk.Plumbing;

final class GtkEditable extends Plumbing
{
    private GtkEditable() {}

    static final void copyClipboard(Editable self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_copy_clipboard(pointerOf((Object) self));
        }
    }

    private static native final void gtk_editable_copy_clipboard(long self);

    static final void cutClipboard(Editable self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_cut_clipboard(pointerOf((Object) self));
        }
    }

    private static native final void gtk_editable_cut_clipboard(long self);

    static final void deleteSelection(Editable self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_delete_selection(pointerOf((Object) self));
        }
    }

    private static native final void gtk_editable_delete_selection(long self);

    static final void deleteText(Editable self, int startPos, int endPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_delete_text(pointerOf((Object) self), startPos, endPos);
        }
    }

    private static native final void gtk_editable_delete_text(long self, int startPos, int endPos);

    static final String getChars(Editable self, int startPos, int endPos) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_editable_get_chars(pointerOf((Object) self), startPos, endPos);

            return result;
        }
    }

    private static native final String gtk_editable_get_chars(long self, int startPos, int endPos);

    static final boolean getEditable(Editable self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_editable_get_editable(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_editable_get_editable(long self);

    static final int getPosition(Editable self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_editable_get_position(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int gtk_editable_get_position(long self);

    static final boolean getSelectionBounds(Editable self, int[] startPos, int[] endPos) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_editable_get_selection_bounds(pointerOf((Object) self), startPos, endPos);

            return result;
        }
    }

    private static native final boolean gtk_editable_get_selection_bounds(long self, int[] startPos, int[] endPos);

    static final void insertText(Editable self, String newText, int newTextLength, int[] position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newText == null) {
            throw new IllegalArgumentException("newText can't be null");
        }

        if (position == null) {
            throw new IllegalArgumentException("position can't be null");
        }

        synchronized (lock) {
            gtk_editable_insert_text(pointerOf((Object) self), newText, newTextLength, position);
        }
    }

    private static native final void gtk_editable_insert_text(long self, String newText, int newTextLength, int[] position);

    static final void pasteClipboard(Editable self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_paste_clipboard(pointerOf((Object) self));
        }
    }

    private static native final void gtk_editable_paste_clipboard(long self);

    static final void selectRegion(Editable self, int startPos, int endPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_select_region(pointerOf((Object) self), startPos, endPos);
        }
    }

    private static native final void gtk_editable_select_region(long self, int startPos, int endPos);

    static final void setEditable(Editable self, boolean isEditable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_set_editable(pointerOf((Object) self), isEditable);
        }
    }

    private static native final void gtk_editable_set_editable(long self, boolean isEditable);

    static final void setPosition(Editable self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_editable_set_position(pointerOf((Object) self), position);
        }
    }

    private static native final void gtk_editable_set_position(long self, int position);

    interface ChangedSignal extends Signal
    {
        void onChanged(Editable source);
    }

    static final void connect(Editable self, GtkEditable.ChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkEditable.ChangedSignal) handler).onChanged((Editable) objectFor(source));
    }

    interface DeleteTextSignal extends Signal
    {
        void onDeleteText(Editable source, int startPos, int endPos);
    }

    static final void connect(Editable self, GtkEditable.DeleteTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "delete-text", after);
    }

    protected static final void receiveDeleteText(Signal handler, long source, int startPos, int endPos) {
        ((GtkEditable.DeleteTextSignal) handler).onDeleteText((Editable) objectFor(source), startPos, endPos);
    }

    interface DoDeleteTextSignal extends Signal
    {
        void onDoDeleteText(Editable source, int startPos, int endPos);
    }

    static final void connect(Editable self, GtkEditable.DoDeleteTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "do-delete-text", after);
    }

    protected static final void receiveDoDeleteText(Signal handler, long source, int startPos, int endPos) {
        ((GtkEditable.DoDeleteTextSignal) handler).onDoDeleteText((Editable) objectFor(source), startPos, endPos);
    }

    interface DoInsertTextSignal extends Signal
    {
        void onDoInsertText(Editable source, String newText, int newTextLength, int[] position);
    }

    static final void connect(Editable self, GtkEditable.DoInsertTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "do-insert-text", after);
    }

    protected static final void receiveDoInsertText(Signal handler, long source, String newText, int newTextLength, int[] position) {
        ((GtkEditable.DoInsertTextSignal) handler).onDoInsertText((Editable) objectFor(source), newText, newTextLength, position);
    }

    interface GetCharsSignal extends Signal
    {
        String onGetChars(Editable source, int startPos, int endPos);
    }

    static final void connect(Editable self, GtkEditable.GetCharsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "get-chars", after);
    }

    protected static final String receiveGetChars(Signal handler, long source, int startPos, int endPos) {
        String result;

        result = ((GtkEditable.GetCharsSignal) handler).onGetChars((Editable) objectFor(source), startPos, endPos);

        return result;
    }

    interface GetPositionSignal extends Signal
    {
        int onGetPosition(Editable source);
    }

    static final void connect(Editable self, GtkEditable.GetPositionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "get-position", after);
    }

    protected static final int receiveGetPosition(Signal handler, long source) {
        int result;

        result = ((GtkEditable.GetPositionSignal) handler).onGetPosition((Editable) objectFor(source));

        return result;
    }

    interface GetSelectionBoundsSignal extends Signal
    {
        boolean onGetSelectionBounds(Editable source, int[] startPos, int[] endPos);
    }

    static final void connect(Editable self, GtkEditable.GetSelectionBoundsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "get-selection-bounds", after);
    }

    protected static final boolean receiveGetSelectionBounds(Signal handler, long source, int[] startPos, int[] endPos) {
        boolean result;

        result = ((GtkEditable.GetSelectionBoundsSignal) handler).onGetSelectionBounds((Editable) objectFor(source), startPos, endPos);

        return result;
    }

    interface InsertTextSignal extends Signal
    {
        void onInsertText(Editable source, String newText, int newTextLength, int[] position);
    }

    static final void connect(Editable self, GtkEditable.InsertTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "insert-text", after);
    }

    protected static final void receiveInsertText(Signal handler, long source, String newText, int newTextLength, int[] position) {
        ((GtkEditable.InsertTextSignal) handler).onInsertText((Editable) objectFor(source), newText, newTextLength, position);
    }

    interface SetPositionSignal extends Signal
    {
        void onSetPosition(Editable source, int position);
    }

    static final void connect(Editable self, GtkEditable.SetPositionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "set-position", after);
    }

    protected static final void receiveSetPosition(Signal handler, long source, int position) {
        ((GtkEditable.SetPositionSignal) handler).onSetPosition((Editable) objectFor(source), position);
    }

    interface SetSelectionBoundsSignal extends Signal
    {
        void onSetSelectionBounds(Editable source, int startPos, int endPos);
    }

    static final void connect(Editable self, GtkEditable.SetSelectionBoundsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkEditable.class, "set-selection-bounds", after);
    }

    protected static final void receiveSetSelectionBounds(Signal handler, long source, int startPos, int endPos) {
        ((GtkEditable.SetSelectionBoundsSignal) handler).onSetSelectionBounds((Editable) objectFor(source), startPos, endPos);
    }
}

