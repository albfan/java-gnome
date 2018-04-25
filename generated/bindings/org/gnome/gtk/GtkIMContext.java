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

import org.gnome.gdk.EventKey;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.gtk.InputMethod;
import org.gnome.gtk.Plumbing;
import org.gnome.pango.AttributeList;

final class GtkIMContext extends Plumbing
{
    private GtkIMContext() {}

    static final boolean deleteSurrounding(InputMethod self, int offset, int nChars) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_im_context_delete_surrounding(pointerOf(self), offset, nChars);

            return result;
        }
    }

    private static native final boolean gtk_im_context_delete_surrounding(long self, int offset, int nChars);

    static final boolean filterKeypress(InputMethod self, EventKey event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_im_context_filter_keypress(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gtk_im_context_filter_keypress(long self, long event);

    static final void focusIn(InputMethod self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_im_context_focus_in(pointerOf(self));
        }
    }

    private static native final void gtk_im_context_focus_in(long self);

    static final void focusOut(InputMethod self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_im_context_focus_out(pointerOf(self));
        }
    }

    private static native final void gtk_im_context_focus_out(long self);

    static final void getPreeditString(InputMethod self, String[] str, AttributeList[] attrs, int[] cursorPos) {
        long[] _attrs;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _attrs = pointersOf(attrs);

        synchronized (lock) {
            gtk_im_context_get_preedit_string(pointerOf(self), str, _attrs, cursorPos);
            fillBoxedArray(AttributeList.class, attrs, _attrs);
        }
    }

    private static native final void gtk_im_context_get_preedit_string(long self, String[] str, long[] attrs, int[] cursorPos);

    static final boolean getSurrounding(InputMethod self, String[] text, int[] cursorIndex) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_im_context_get_surrounding(pointerOf(self), text, cursorIndex);

            return result;
        }
    }

    private static native final boolean gtk_im_context_get_surrounding(long self, String[] text, int[] cursorIndex);

    static final void reset(InputMethod self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_im_context_reset(pointerOf(self));
        }
    }

    private static native final void gtk_im_context_reset(long self);

    static final void setClientWindow(InputMethod self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_im_context_set_client_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gtk_im_context_set_client_window(long self, long window);

    static final void setCursorLocation(InputMethod self, Rectangle area) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (area == null) {
            throw new IllegalArgumentException("area can't be null");
        }

        synchronized (lock) {
            gtk_im_context_set_cursor_location(pointerOf(self), pointerOf(area));
        }
    }

    private static native final void gtk_im_context_set_cursor_location(long self, long area);

    static final void setSurrounding(InputMethod self, String text, int len, int cursorIndex) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_im_context_set_surrounding(pointerOf(self), text, len, cursorIndex);
        }
    }

    private static native final void gtk_im_context_set_surrounding(long self, String text, int len, int cursorIndex);

    static final void setUsePreedit(InputMethod self, boolean usePreedit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_im_context_set_use_preedit(pointerOf(self), usePreedit);
        }
    }

    private static native final void gtk_im_context_set_use_preedit(long self, boolean usePreedit);

    interface CommitSignal extends Signal
    {
        void onCommit(InputMethod source, String str);
    }

    static final void connect(InputMethod self, GtkIMContext.CommitSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "commit", after);
    }

    protected static final void receiveCommit(Signal handler, long source, String str) {
        ((GtkIMContext.CommitSignal) handler).onCommit((InputMethod) objectFor(source), str);
    }

    interface DeleteSurroundingSignal extends Signal
    {
        boolean onDeleteSurrounding(InputMethod source, int offset, int nChars);
    }

    static final void connect(InputMethod self, GtkIMContext.DeleteSurroundingSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "delete-surrounding", after);
    }

    protected static final boolean receiveDeleteSurrounding(Signal handler, long source, int offset, int nChars) {
        boolean result;

        result = ((GtkIMContext.DeleteSurroundingSignal) handler).onDeleteSurrounding((InputMethod) objectFor(source), offset, nChars);

        return result;
    }

    interface FilterKeypressSignal extends Signal
    {
        boolean onFilterKeypress(InputMethod source, EventKey event);
    }

    static final void connect(InputMethod self, GtkIMContext.FilterKeypressSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "filter-keypress", after);
    }

    protected static final boolean receiveFilterKeypress(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkIMContext.FilterKeypressSignal) handler).onFilterKeypress((InputMethod) objectFor(source), (EventKey) boxedFor(EventKey.class, event));

        return result;
    }

    interface FocusInSignal extends Signal
    {
        void onFocusIn(InputMethod source);
    }

    static final void connect(InputMethod self, GtkIMContext.FocusInSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "focus-in", after);
    }

    protected static final void receiveFocusIn(Signal handler, long source) {
        ((GtkIMContext.FocusInSignal) handler).onFocusIn((InputMethod) objectFor(source));
    }

    interface FocusOutSignal extends Signal
    {
        void onFocusOut(InputMethod source);
    }

    static final void connect(InputMethod self, GtkIMContext.FocusOutSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "focus-out", after);
    }

    protected static final void receiveFocusOut(Signal handler, long source) {
        ((GtkIMContext.FocusOutSignal) handler).onFocusOut((InputMethod) objectFor(source));
    }

    interface GetPreeditStringSignal extends Signal
    {
        void onGetPreeditString(InputMethod source, String[] str, AttributeList[] attrs, int[] cursorPos);
    }

    static final void connect(InputMethod self, GtkIMContext.GetPreeditStringSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "get-preedit-string", after);
    }

    protected static final void receiveGetPreeditString(Signal handler, long source, String[] str, long[] attrs, int[] cursorPos) {
        ((GtkIMContext.GetPreeditStringSignal) handler).onGetPreeditString((InputMethod) objectFor(source), str, (AttributeList[]) boxedArrayFor(AttributeList.class, attrs, new AttributeList[attrs.length]), cursorPos);
    }

    interface GetSurroundingSignal extends Signal
    {
        boolean onGetSurrounding(InputMethod source, String[] text, int[] cursorIndex);
    }

    static final void connect(InputMethod self, GtkIMContext.GetSurroundingSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "get-surrounding", after);
    }

    protected static final boolean receiveGetSurrounding(Signal handler, long source, String[] text, int[] cursorIndex) {
        boolean result;

        result = ((GtkIMContext.GetSurroundingSignal) handler).onGetSurrounding((InputMethod) objectFor(source), text, cursorIndex);

        return result;
    }

    interface PreeditChangedSignal extends Signal
    {
        void onPreeditChanged(InputMethod source);
    }

    static final void connect(InputMethod self, GtkIMContext.PreeditChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "preedit-changed", after);
    }

    protected static final void receivePreeditChanged(Signal handler, long source) {
        ((GtkIMContext.PreeditChangedSignal) handler).onPreeditChanged((InputMethod) objectFor(source));
    }

    interface PreeditEndSignal extends Signal
    {
        void onPreeditEnd(InputMethod source);
    }

    static final void connect(InputMethod self, GtkIMContext.PreeditEndSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "preedit-end", after);
    }

    protected static final void receivePreeditEnd(Signal handler, long source) {
        ((GtkIMContext.PreeditEndSignal) handler).onPreeditEnd((InputMethod) objectFor(source));
    }

    interface PreeditStartSignal extends Signal
    {
        void onPreeditStart(InputMethod source);
    }

    static final void connect(InputMethod self, GtkIMContext.PreeditStartSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "preedit-start", after);
    }

    protected static final void receivePreeditStart(Signal handler, long source) {
        ((GtkIMContext.PreeditStartSignal) handler).onPreeditStart((InputMethod) objectFor(source));
    }

    interface ResetSignal extends Signal
    {
        void onReset(InputMethod source);
    }

    static final void connect(InputMethod self, GtkIMContext.ResetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "reset", after);
    }

    protected static final void receiveReset(Signal handler, long source) {
        ((GtkIMContext.ResetSignal) handler).onReset((InputMethod) objectFor(source));
    }

    interface RetrieveSurroundingSignal extends Signal
    {
        boolean onRetrieveSurrounding(InputMethod source);
    }

    static final void connect(InputMethod self, GtkIMContext.RetrieveSurroundingSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "retrieve-surrounding", after);
    }

    protected static final boolean receiveRetrieveSurrounding(Signal handler, long source) {
        boolean result;

        result = ((GtkIMContext.RetrieveSurroundingSignal) handler).onRetrieveSurrounding((InputMethod) objectFor(source));

        return result;
    }

    interface SetClientWindowSignal extends Signal
    {
        void onSetClientWindow(InputMethod source, Window window);
    }

    static final void connect(InputMethod self, GtkIMContext.SetClientWindowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "set-client-window", after);
    }

    protected static final void receiveSetClientWindow(Signal handler, long source, long window) {
        ((GtkIMContext.SetClientWindowSignal) handler).onSetClientWindow((InputMethod) objectFor(source), (Window) objectFor(window));
    }

    interface SetCursorLocationSignal extends Signal
    {
        void onSetCursorLocation(InputMethod source, org.gnome.gdk.Rectangle area);
    }

    static final void connect(InputMethod self, GtkIMContext.SetCursorLocationSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "set-cursor-location", after);
    }

    protected static final void receiveSetCursorLocation(Signal handler, long source, long area) {
        ((GtkIMContext.SetCursorLocationSignal) handler).onSetCursorLocation((InputMethod) objectFor(source), (org.gnome.gdk.Rectangle) boxedFor(org.gnome.gdk.Rectangle.class, area));
    }

    interface SetSurroundingSignal extends Signal
    {
        void onSetSurrounding(InputMethod source, String text, int len, int cursorIndex);
    }

    static final void connect(InputMethod self, GtkIMContext.SetSurroundingSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "set-surrounding", after);
    }

    protected static final void receiveSetSurrounding(Signal handler, long source, String text, int len, int cursorIndex) {
        ((GtkIMContext.SetSurroundingSignal) handler).onSetSurrounding((InputMethod) objectFor(source), text, len, cursorIndex);
    }

    interface SetUsePreeditSignal extends Signal
    {
        void onSetUsePreedit(InputMethod source, boolean usePreedit);
    }

    static final void connect(InputMethod self, GtkIMContext.SetUsePreeditSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIMContext.class, "set-use-preedit", after);
    }

    protected static final void receiveSetUsePreedit(Signal handler, long source, boolean usePreedit) {
        ((GtkIMContext.SetUsePreeditSignal) handler).onSetUsePreedit((InputMethod) objectFor(source), usePreedit);
    }
}

