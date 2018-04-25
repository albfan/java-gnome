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
import org.gnome.gdk.Display;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.gtk.Plug;
import org.gnome.gtk.Plumbing;

final class GtkPlug extends Plumbing
{
    private GtkPlug() {}

    @SuppressWarnings("unused")
    static final long createPlug(FIXME socketId) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWindow");
    }

    @SuppressWarnings("unused")
    static final long createPlugForDisplay(Display display, FIXME socketId) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWindow");
    }

    @SuppressWarnings("unused")
    static final void construct(Plug self, FIXME socketId) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWindow");
    }

    @SuppressWarnings("unused")
    static final void constructForDisplay(Plug self, Display display, FIXME socketId) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWindow");
    }

    static final boolean getEmbedded(Plug self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_plug_get_embedded(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_plug_get_embedded(long self);

    @SuppressWarnings("unused")
    static final FIXME getId(Plug self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkWindow");
    }

    static final Window getSocketWindow(Plug self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_plug_get_socket_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_plug_get_socket_window(long self);

    interface EmbeddedSignal extends Signal
    {
        void onEmbedded(Plug source);
    }

    static final void connect(Plug self, GtkPlug.EmbeddedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPlug.class, "embedded", after);
    }

    protected static final void receiveEmbedded(Signal handler, long source) {
        ((GtkPlug.EmbeddedSignal) handler).onEmbedded((Plug) objectFor(source));
    }
}

