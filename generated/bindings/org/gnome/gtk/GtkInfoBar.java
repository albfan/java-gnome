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
import org.gnome.gtk.InfoBar;
import org.gnome.gtk.MessageType;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkInfoBar extends Plumbing
{
    private GtkInfoBar() {}

    static final long createInfoBar() {
        long result;

        synchronized (lock) {
            result = gtk_info_bar_new();

            return result;
        }
    }

    private static native final long gtk_info_bar_new();

    static final long createInfoBarWithButtons(String firstButtonText) {
        long result;

        synchronized (lock) {
            result = gtk_info_bar_new_with_buttons(firstButtonText);

            return result;
        }
    }

    private static native final long gtk_info_bar_new_with_buttons(String firstButtonText);

    static final void addActionWidget(InfoBar self, Widget child, int responseId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_add_action_widget(pointerOf(self), pointerOf(child), responseId);
        }
    }

    private static native final void gtk_info_bar_add_action_widget(long self, long child, int responseId);

    static final Widget addButton(InfoBar self, String buttonText, int responseId) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buttonText == null) {
            throw new IllegalArgumentException("buttonText can't be null");
        }

        synchronized (lock) {
            result = gtk_info_bar_add_button(pointerOf(self), buttonText, responseId);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_info_bar_add_button(long self, String buttonText, int responseId);

    static final void addButtons(InfoBar self, String firstButtonText) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (firstButtonText == null) {
            throw new IllegalArgumentException("firstButtonText can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_add_buttons(pointerOf(self), firstButtonText);
        }
    }

    private static native final void gtk_info_bar_add_buttons(long self, String firstButtonText);

    static final Widget getActionArea(InfoBar self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_info_bar_get_action_area(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_info_bar_get_action_area(long self);

    static final Widget getContentArea(InfoBar self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_info_bar_get_content_area(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_info_bar_get_content_area(long self);

    static final MessageType getMessageType(InfoBar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_info_bar_get_message_type(pointerOf(self));

            return (MessageType) enumFor(MessageType.class, result);
        }
    }

    private static native final int gtk_info_bar_get_message_type(long self);

    static final boolean getRevealed(InfoBar self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_info_bar_get_revealed(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_info_bar_get_revealed(long self);

    static final boolean getShowCloseButton(InfoBar self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_info_bar_get_show_close_button(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_info_bar_get_show_close_button(long self);

    static final void response(InfoBar self, int responseId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_response(pointerOf(self), responseId);
        }
    }

    private static native final void gtk_info_bar_response(long self, int responseId);

    static final void setDefaultResponse(InfoBar self, int responseId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_set_default_response(pointerOf(self), responseId);
        }
    }

    private static native final void gtk_info_bar_set_default_response(long self, int responseId);

    static final void setMessageType(InfoBar self, MessageType messageType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (messageType == null) {
            throw new IllegalArgumentException("messageType can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_set_message_type(pointerOf(self), numOf(messageType));
        }
    }

    private static native final void gtk_info_bar_set_message_type(long self, int messageType);

    static final void setResponseSensitive(InfoBar self, int responseId, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_set_response_sensitive(pointerOf(self), responseId, setting);
        }
    }

    private static native final void gtk_info_bar_set_response_sensitive(long self, int responseId, boolean setting);

    static final void setRevealed(InfoBar self, boolean revealed) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_set_revealed(pointerOf(self), revealed);
        }
    }

    private static native final void gtk_info_bar_set_revealed(long self, boolean revealed);

    static final void setShowCloseButton(InfoBar self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_info_bar_set_show_close_button(pointerOf(self), setting);
        }
    }

    private static native final void gtk_info_bar_set_show_close_button(long self, boolean setting);

    interface CloseSignal extends Signal
    {
        void onClose(InfoBar source);
    }

    static final void connect(InfoBar self, GtkInfoBar.CloseSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkInfoBar.class, "close", after);
    }

    protected static final void receiveClose(Signal handler, long source) {
        ((GtkInfoBar.CloseSignal) handler).onClose((InfoBar) objectFor(source));
    }

    interface ResponseSignal extends Signal
    {
        void onResponse(InfoBar source, int responseId);
    }

    static final void connect(InfoBar self, GtkInfoBar.ResponseSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkInfoBar.class, "response", after);
    }

    protected static final void receiveResponse(Signal handler, long source, int responseId) {
        ((GtkInfoBar.ResponseSignal) handler).onResponse((InfoBar) objectFor(source), responseId);
    }
}

