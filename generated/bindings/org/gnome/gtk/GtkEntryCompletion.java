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
import org.gnome.gtk.EntryCompletion;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TreeIter;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.Widget;

final class GtkEntryCompletion extends Plumbing
{
    private GtkEntryCompletion() {}

    static final long createEntryCompletion() {
        long result;

        synchronized (lock) {
            result = gtk_entry_completion_new();

            return result;
        }
    }

    private static native final long gtk_entry_completion_new();

    @SuppressWarnings("unused")
    static final long createEntryCompletionWithArea(FIXME area) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellArea*");
    }

    static final void complete(EntryCompletion self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_complete(pointerOf(self));
        }
    }

    private static native final void gtk_entry_completion_complete(long self);

    static final String computePrefix(EntryCompletion self, String key) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_compute_prefix(pointerOf(self), key);

            return result;
        }
    }

    private static native final String gtk_entry_completion_compute_prefix(long self, String key);

    static final void deleteAction(EntryCompletion self, int index) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_delete_action(pointerOf(self), index);
        }
    }

    private static native final void gtk_entry_completion_delete_action(long self, int index);

    static final String getCompletionPrefix(EntryCompletion self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_completion_prefix(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_entry_completion_get_completion_prefix(long self);

    static final Widget getEntry(EntryCompletion self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_entry(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_entry_completion_get_entry(long self);

    static final boolean getInlineCompletion(EntryCompletion self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_inline_completion(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_completion_get_inline_completion(long self);

    static final boolean getInlineSelection(EntryCompletion self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_inline_selection(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_completion_get_inline_selection(long self);

    static final int getMinimumKeyLength(EntryCompletion self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_minimum_key_length(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_completion_get_minimum_key_length(long self);

    static final TreeModel getModel(EntryCompletion self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_model(pointerOf(self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_entry_completion_get_model(long self);

    static final boolean getPopupCompletion(EntryCompletion self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_popup_completion(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_completion_get_popup_completion(long self);

    static final boolean getPopupSetWidth(EntryCompletion self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_popup_set_width(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_completion_get_popup_set_width(long self);

    static final boolean getPopupSingleMatch(EntryCompletion self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_popup_single_match(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_completion_get_popup_single_match(long self);

    static final int getTextColumn(EntryCompletion self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_completion_get_text_column(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_completion_get_text_column(long self);

    static final void insertActionMarkup(EntryCompletion self, int index, String markup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (markup == null) {
            throw new IllegalArgumentException("markup can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_insert_action_markup(pointerOf(self), index, markup);
        }
    }

    private static native final void gtk_entry_completion_insert_action_markup(long self, int index, String markup);

    static final void insertActionText(EntryCompletion self, int index, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_insert_action_text(pointerOf(self), index, text);
        }
    }

    private static native final void gtk_entry_completion_insert_action_text(long self, int index, String text);

    static final void insertPrefix(EntryCompletion self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_insert_prefix(pointerOf(self));
        }
    }

    private static native final void gtk_entry_completion_insert_prefix(long self);

    static final void setInlineCompletion(EntryCompletion self, boolean inlineCompletion) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_inline_completion(pointerOf(self), inlineCompletion);
        }
    }

    private static native final void gtk_entry_completion_set_inline_completion(long self, boolean inlineCompletion);

    static final void setInlineSelection(EntryCompletion self, boolean inlineSelection) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_inline_selection(pointerOf(self), inlineSelection);
        }
    }

    private static native final void gtk_entry_completion_set_inline_selection(long self, boolean inlineSelection);

    @SuppressWarnings("unused")
    static final void setMatchFunc(EntryCompletion self, FIXME func, FIXME funcData, FIXME funcNotify) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkEntryCompletionMatchFunc");
    }

    static final void setMinimumKeyLength(EntryCompletion self, int length) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_minimum_key_length(pointerOf(self), length);
        }
    }

    private static native final void gtk_entry_completion_set_minimum_key_length(long self, int length);

    static final void setModel(EntryCompletion self, TreeModel model) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_model(pointerOf(self), pointerOf((Object) model));
        }
    }

    private static native final void gtk_entry_completion_set_model(long self, long model);

    static final void setPopupCompletion(EntryCompletion self, boolean popupCompletion) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_popup_completion(pointerOf(self), popupCompletion);
        }
    }

    private static native final void gtk_entry_completion_set_popup_completion(long self, boolean popupCompletion);

    static final void setPopupSetWidth(EntryCompletion self, boolean popupSetWidth) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_popup_set_width(pointerOf(self), popupSetWidth);
        }
    }

    private static native final void gtk_entry_completion_set_popup_set_width(long self, boolean popupSetWidth);

    static final void setPopupSingleMatch(EntryCompletion self, boolean popupSingleMatch) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_popup_single_match(pointerOf(self), popupSingleMatch);
        }
    }

    private static native final void gtk_entry_completion_set_popup_single_match(long self, boolean popupSingleMatch);

    static final void setTextColumn(EntryCompletion self, int column) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_completion_set_text_column(pointerOf(self), column);
        }
    }

    private static native final void gtk_entry_completion_set_text_column(long self, int column);

    interface ActionActivatedSignal extends Signal
    {
        void onActionActivated(EntryCompletion source, int index);
    }

    static final void connect(EntryCompletion self, GtkEntryCompletion.ActionActivatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryCompletion.class, "action-activated", after);
    }

    protected static final void receiveActionActivated(Signal handler, long source, int index) {
        ((GtkEntryCompletion.ActionActivatedSignal) handler).onActionActivated((EntryCompletion) objectFor(source), index);
    }

    interface CursorOnMatchSignal extends Signal
    {
        boolean onCursorOnMatch(EntryCompletion source, TreeModel model, TreeIter iter);
    }

    static final void connect(EntryCompletion self, GtkEntryCompletion.CursorOnMatchSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryCompletion.class, "cursor-on-match", after);
    }

    protected static final boolean receiveCursorOnMatch(Signal handler, long source, long model, long iter) {
        boolean result;

        result = ((GtkEntryCompletion.CursorOnMatchSignal) handler).onCursorOnMatch((EntryCompletion) objectFor(source), (TreeModel) objectFor(model), (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }

    interface InsertPrefixSignal extends Signal
    {
        boolean onInsertPrefix(EntryCompletion source, String prefix);
    }

    static final void connect(EntryCompletion self, GtkEntryCompletion.InsertPrefixSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryCompletion.class, "insert-prefix", after);
    }

    protected static final boolean receiveInsertPrefix(Signal handler, long source, String prefix) {
        boolean result;

        result = ((GtkEntryCompletion.InsertPrefixSignal) handler).onInsertPrefix((EntryCompletion) objectFor(source), prefix);

        return result;
    }

    interface MatchSelectedSignal extends Signal
    {
        boolean onMatchSelected(EntryCompletion source, TreeModel model, TreeIter iter);
    }

    static final void connect(EntryCompletion self, GtkEntryCompletion.MatchSelectedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryCompletion.class, "match-selected", after);
    }

    protected static final boolean receiveMatchSelected(Signal handler, long source, long model, long iter) {
        boolean result;

        result = ((GtkEntryCompletion.MatchSelectedSignal) handler).onMatchSelected((EntryCompletion) objectFor(source), (TreeModel) objectFor(model), (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }

    interface NoMatchesSignal extends Signal
    {
        void onNoMatches(EntryCompletion source);
    }

    static final void connect(EntryCompletion self, GtkEntryCompletion.NoMatchesSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryCompletion.class, "no-matches", after);
    }

    protected static final void receiveNoMatches(Signal handler, long source) {
        ((GtkEntryCompletion.NoMatchesSignal) handler).onNoMatches((EntryCompletion) objectFor(source));
    }

    interface MatchSignal extends Signal
    {
        boolean onMatch(EntryCompletion source, String key, TreeIter iter);
    }

    static final void connect(EntryCompletion self, GtkEntryCompletion.MatchSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryCompletion.class, "match", after);
    }

    protected static final boolean receiveMatch(Signal handler, long source, String key, long iter) {
        boolean result;

        result = ((GtkEntryCompletion.MatchSignal) handler).onMatch((EntryCompletion) objectFor(source), key, (TreeIter) boxedFor(TreeIter.class, iter));

        return result;
    }
}

