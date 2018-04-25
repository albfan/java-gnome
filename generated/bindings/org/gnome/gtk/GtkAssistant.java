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
import org.gnome.gdk.Pixbuf;
import org.gnome.glib.Signal;
import org.gnome.gtk.Assistant;
import org.gnome.gtk.AssistantPageType;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkAssistant extends Plumbing
{
    private GtkAssistant() {}

    static final long createAssistant() {
        long result;

        synchronized (lock) {
            result = gtk_assistant_new();

            return result;
        }
    }

    private static native final long gtk_assistant_new();

    static final void addActionWidget(Assistant self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_assistant_add_action_widget(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_assistant_add_action_widget(long self, long child);

    static final int appendPage(Assistant self, Widget page) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_append_page(pointerOf(self), pointerOf(page));

            return result;
        }
    }

    private static native final int gtk_assistant_append_page(long self, long page);

    static final void commit(Assistant self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_assistant_commit(pointerOf(self));
        }
    }

    private static native final void gtk_assistant_commit(long self);

    static final int getCurrentPage(Assistant self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_current_page(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_assistant_get_current_page(long self);

    static final int getNPages(Assistant self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_n_pages(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_assistant_get_n_pages(long self);

    static final Widget getNthPage(Assistant self, int pageNum) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_nth_page(pointerOf(self), pageNum);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_assistant_get_nth_page(long self, int pageNum);

    static final boolean getPageComplete(Assistant self, Widget page) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_page_complete(pointerOf(self), pointerOf(page));

            return result;
        }
    }

    private static native final boolean gtk_assistant_get_page_complete(long self, long page);

    static final boolean getPageHasPadding(Assistant self, Widget page) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_page_has_padding(pointerOf(self), pointerOf(page));

            return result;
        }
    }

    private static native final boolean gtk_assistant_get_page_has_padding(long self, long page);

    static final Pixbuf getPageHeaderImage(Assistant self, Widget page) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_page_header_image(pointerOf(self), pointerOf(page));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_assistant_get_page_header_image(long self, long page);

    static final Pixbuf getPageSideImage(Assistant self, Widget page) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_page_side_image(pointerOf(self), pointerOf(page));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_assistant_get_page_side_image(long self, long page);

    static final String getPageTitle(Assistant self, Widget page) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_page_title(pointerOf(self), pointerOf(page));

            return result;
        }
    }

    private static native final String gtk_assistant_get_page_title(long self, long page);

    static final AssistantPageType getPageType(Assistant self, Widget page) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_get_page_type(pointerOf(self), pointerOf(page));

            return (AssistantPageType) enumFor(AssistantPageType.class, result);
        }
    }

    private static native final int gtk_assistant_get_page_type(long self, long page);

    static final int insertPage(Assistant self, Widget page, int position) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_insert_page(pointerOf(self), pointerOf(page), position);

            return result;
        }
    }

    private static native final int gtk_assistant_insert_page(long self, long page, int position);

    static final void nextPage(Assistant self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_assistant_next_page(pointerOf(self));
        }
    }

    private static native final void gtk_assistant_next_page(long self);

    static final int prependPage(Assistant self, Widget page) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            result = gtk_assistant_prepend_page(pointerOf(self), pointerOf(page));

            return result;
        }
    }

    private static native final int gtk_assistant_prepend_page(long self, long page);

    static final void previousPage(Assistant self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_assistant_previous_page(pointerOf(self));
        }
    }

    private static native final void gtk_assistant_previous_page(long self);

    static final void removeActionWidget(Assistant self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_assistant_remove_action_widget(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_assistant_remove_action_widget(long self, long child);

    static final void removePage(Assistant self, int pageNum) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_assistant_remove_page(pointerOf(self), pageNum);
        }
    }

    private static native final void gtk_assistant_remove_page(long self, int pageNum);

    static final void setCurrentPage(Assistant self, int pageNum) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_assistant_set_current_page(pointerOf(self), pageNum);
        }
    }

    private static native final void gtk_assistant_set_current_page(long self, int pageNum);

    @SuppressWarnings("unused")
    static final void setForwardPageFunc(Assistant self, FIXME pageFunc, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkAssistantPageFunc");
    }

    static final void setPageComplete(Assistant self, Widget page, boolean complete) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            gtk_assistant_set_page_complete(pointerOf(self), pointerOf(page), complete);
        }
    }

    private static native final void gtk_assistant_set_page_complete(long self, long page, boolean complete);

    static final void setPageHasPadding(Assistant self, Widget page, boolean hasPadding) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            gtk_assistant_set_page_has_padding(pointerOf(self), pointerOf(page), hasPadding);
        }
    }

    private static native final void gtk_assistant_set_page_has_padding(long self, long page, boolean hasPadding);

    static final void setPageHeaderImage(Assistant self, Widget page, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            gtk_assistant_set_page_header_image(pointerOf(self), pointerOf(page), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_assistant_set_page_header_image(long self, long page, long pixbuf);

    static final void setPageSideImage(Assistant self, Widget page, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        synchronized (lock) {
            gtk_assistant_set_page_side_image(pointerOf(self), pointerOf(page), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_assistant_set_page_side_image(long self, long page, long pixbuf);

    static final void setPageTitle(Assistant self, Widget page, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_assistant_set_page_title(pointerOf(self), pointerOf(page), title);
        }
    }

    private static native final void gtk_assistant_set_page_title(long self, long page, String title);

    static final void setPageType(Assistant self, Widget page, AssistantPageType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (page == null) {
            throw new IllegalArgumentException("page can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_assistant_set_page_type(pointerOf(self), pointerOf(page), numOf(type));
        }
    }

    private static native final void gtk_assistant_set_page_type(long self, long page, int type);

    static final void updateButtonsState(Assistant self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_assistant_update_buttons_state(pointerOf(self));
        }
    }

    private static native final void gtk_assistant_update_buttons_state(long self);

    interface ApplySignal extends Signal
    {
        void onApply(Assistant source);
    }

    static final void connect(Assistant self, GtkAssistant.ApplySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAssistant.class, "apply", after);
    }

    protected static final void receiveApply(Signal handler, long source) {
        ((GtkAssistant.ApplySignal) handler).onApply((Assistant) objectFor(source));
    }

    interface CancelSignal extends Signal
    {
        void onCancel(Assistant source);
    }

    static final void connect(Assistant self, GtkAssistant.CancelSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAssistant.class, "cancel", after);
    }

    protected static final void receiveCancel(Signal handler, long source) {
        ((GtkAssistant.CancelSignal) handler).onCancel((Assistant) objectFor(source));
    }

    interface CloseSignal extends Signal
    {
        void onClose(Assistant source);
    }

    static final void connect(Assistant self, GtkAssistant.CloseSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAssistant.class, "close", after);
    }

    protected static final void receiveClose(Signal handler, long source) {
        ((GtkAssistant.CloseSignal) handler).onClose((Assistant) objectFor(source));
    }

    interface PrepareSignal extends Signal
    {
        void onPrepare(Assistant source, Widget page);
    }

    static final void connect(Assistant self, GtkAssistant.PrepareSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAssistant.class, "prepare", after);
    }

    protected static final void receivePrepare(Signal handler, long source, long page) {
        ((GtkAssistant.PrepareSignal) handler).onPrepare((Assistant) objectFor(source), (Widget) objectFor(page));
    }

    interface EscapeSignal extends Signal
    {
        void onEscape(Assistant source);
    }

    static final void connect(Assistant self, GtkAssistant.EscapeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAssistant.class, "escape", after);
    }

    protected static final void receiveEscape(Signal handler, long source) {
        ((GtkAssistant.EscapeSignal) handler).onEscape((Assistant) objectFor(source));
    }

    interface ForwardSignal extends Signal
    {
        int onForward(Assistant source, int current);
    }

    static final void connect(Assistant self, GtkAssistant.ForwardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAssistant.class, "forward", after);
    }

    protected static final int receiveForward(Signal handler, long source, int current) {
        int result;

        result = ((GtkAssistant.ForwardSignal) handler).onForward((Assistant) objectFor(source), current);

        return result;
    }
}

