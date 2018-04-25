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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Statusbar;
import org.gnome.gtk.Widget;

final class GtkStatusbar extends Plumbing
{
    private GtkStatusbar() {}

    static final long createStatusbar() {
        long result;

        synchronized (lock) {
            result = gtk_statusbar_new();

            return result;
        }
    }

    private static native final long gtk_statusbar_new();

    static final int getContextId(Statusbar self, String contextDescription) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (contextDescription == null) {
            throw new IllegalArgumentException("contextDescription can't be null");
        }

        synchronized (lock) {
            result = gtk_statusbar_get_context_id(pointerOf(self), contextDescription);

            return result;
        }
    }

    private static native final int gtk_statusbar_get_context_id(long self, String contextDescription);

    static final Widget getMessageArea(Statusbar self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_statusbar_get_message_area(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_statusbar_get_message_area(long self);

    static final void pop(Statusbar self, int contextId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_statusbar_pop(pointerOf(self), contextId);
        }
    }

    private static native final void gtk_statusbar_pop(long self, int contextId);

    static final int push(Statusbar self, int contextId, String text) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            result = gtk_statusbar_push(pointerOf(self), contextId, text);

            return result;
        }
    }

    private static native final int gtk_statusbar_push(long self, int contextId, String text);

    static final void remove(Statusbar self, int contextId, int messageId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_statusbar_remove(pointerOf(self), contextId, messageId);
        }
    }

    private static native final void gtk_statusbar_remove(long self, int contextId, int messageId);

    static final void removeAll(Statusbar self, int contextId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_statusbar_remove_all(pointerOf(self), contextId);
        }
    }

    private static native final void gtk_statusbar_remove_all(long self, int contextId);

    interface TextPoppedSignal extends Signal
    {
        void onTextPopped(Statusbar source, int contextId, String text);
    }

    static final void connect(Statusbar self, GtkStatusbar.TextPoppedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusbar.class, "text-popped", after);
    }

    protected static final void receiveTextPopped(Signal handler, long source, int contextId, String text) {
        ((GtkStatusbar.TextPoppedSignal) handler).onTextPopped((Statusbar) objectFor(source), contextId, text);
    }

    interface TextPushedSignal extends Signal
    {
        void onTextPushed(Statusbar source, int contextId, String text);
    }

    static final void connect(Statusbar self, GtkStatusbar.TextPushedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusbar.class, "text-pushed", after);
    }

    protected static final void receiveTextPushed(Signal handler, long source, int contextId, String text) {
        ((GtkStatusbar.TextPushedSignal) handler).onTextPushed((Statusbar) objectFor(source), contextId, text);
    }
}

