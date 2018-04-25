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
import org.gnome.gtk.Dialog;
import org.gnome.gtk.DialogFlags;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;
import org.gnome.gtk.Window;

final class GtkDialog extends Plumbing
{
    private GtkDialog() {}

    static final long createDialog() {
        long result;

        synchronized (lock) {
            result = gtk_dialog_new();

            return result;
        }
    }

    private static native final long gtk_dialog_new();

    static final long createDialogWithButtons(String title, Window parent, DialogFlags flags, String firstButtonText) {
        long result;

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_new_with_buttons(title, pointerOf(parent), numOf(flags), firstButtonText);

            return result;
        }
    }

    private static native final long gtk_dialog_new_with_buttons(String title, long parent, int flags, String firstButtonText);

    static final void addActionWidget(Dialog self, Widget child, int responseId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_dialog_add_action_widget(pointerOf(self), pointerOf(child), responseId);
        }
    }

    private static native final void gtk_dialog_add_action_widget(long self, long child, int responseId);

    static final Widget addButton(Dialog self, String buttonText, int responseId) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buttonText == null) {
            throw new IllegalArgumentException("buttonText can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_add_button(pointerOf(self), buttonText, responseId);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_dialog_add_button(long self, String buttonText, int responseId);

    static final void addButtons(Dialog self, String firstButtonText) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (firstButtonText == null) {
            throw new IllegalArgumentException("firstButtonText can't be null");
        }

        synchronized (lock) {
            gtk_dialog_add_buttons(pointerOf(self), firstButtonText);
        }
    }

    private static native final void gtk_dialog_add_buttons(long self, String firstButtonText);

    static final Widget getActionArea(Dialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_get_action_area(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_dialog_get_action_area(long self);

    static final Widget getContentArea(Dialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_get_content_area(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_dialog_get_content_area(long self);

    static final Widget getHeaderBar(Dialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_get_header_bar(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_dialog_get_header_bar(long self);

    static final int getResponseForWidget(Dialog self, Widget widget) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_get_response_for_widget(pointerOf(self), pointerOf(widget));

            return result;
        }
    }

    private static native final int gtk_dialog_get_response_for_widget(long self, long widget);

    static final Widget getWidgetForResponse(Dialog self, int responseId) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_get_widget_for_response(pointerOf(self), responseId);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_dialog_get_widget_for_response(long self, int responseId);

    static final void response(Dialog self, int responseId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_dialog_response(pointerOf(self), responseId);
        }
    }

    private static native final void gtk_dialog_response(long self, int responseId);

    static final int run(Dialog self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_dialog_run(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_dialog_run(long self);

    static final void setAlternativeButtonOrder(Dialog self, int firstResponseId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_dialog_set_alternative_button_order(pointerOf(self), firstResponseId);
        }
    }

    private static native final void gtk_dialog_set_alternative_button_order(long self, int firstResponseId);

    static final void setAlternativeButtonOrderFromArray(Dialog self, int nParams, int[] newOrder) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (newOrder == null) {
            throw new IllegalArgumentException("newOrder can't be null");
        }

        synchronized (lock) {
            gtk_dialog_set_alternative_button_order_from_array(pointerOf(self), nParams, newOrder);
        }
    }

    private static native final void gtk_dialog_set_alternative_button_order_from_array(long self, int nParams, int[] newOrder);

    static final void setDefaultResponse(Dialog self, int responseId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_dialog_set_default_response(pointerOf(self), responseId);
        }
    }

    private static native final void gtk_dialog_set_default_response(long self, int responseId);

    static final void setResponseSensitive(Dialog self, int responseId, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_dialog_set_response_sensitive(pointerOf(self), responseId, setting);
        }
    }

    private static native final void gtk_dialog_set_response_sensitive(long self, int responseId, boolean setting);

    interface CloseSignal extends Signal
    {
        void onClose(Dialog source);
    }

    static final void connect(Dialog self, GtkDialog.CloseSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkDialog.class, "close", after);
    }

    protected static final void receiveClose(Signal handler, long source) {
        ((GtkDialog.CloseSignal) handler).onClose((Dialog) objectFor(source));
    }

    interface ResponseSignal extends Signal
    {
        void onResponse(Dialog source, int responseId);
    }

    static final void connect(Dialog self, GtkDialog.ResponseSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkDialog.class, "response", after);
    }

    protected static final void receiveResponse(Signal handler, long source, int responseId) {
        ((GtkDialog.ResponseSignal) handler).onResponse((Dialog) objectFor(source), responseId);
    }
}

