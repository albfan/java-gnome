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
import org.gnome.gtk.Accessible;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkAccessible extends Plumbing
{
    private GtkAccessible() {}

    static final void connectWidgetDestroyed(Accessible self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_accessible_connect_widget_destroyed(pointerOf(self));
        }
    }

    private static native final void gtk_accessible_connect_widget_destroyed(long self);

    static final Widget getWidget(Accessible self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_accessible_get_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_accessible_get_widget(long self);

    static final void setWidget(Accessible self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_accessible_set_widget(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_accessible_set_widget(long self, long widget);

    interface ConnectWidgetDestroyedSignal extends Signal
    {
        void onConnectWidgetDestroyed(Accessible source);
    }

    static final void connect(Accessible self, GtkAccessible.ConnectWidgetDestroyedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAccessible.class, "connect-widget-destroyed", after);
    }

    protected static final void receiveConnectWidgetDestroyed(Signal handler, long source) {
        ((GtkAccessible.ConnectWidgetDestroyedSignal) handler).onConnectWidgetDestroyed((Accessible) objectFor(source));
    }

    interface WidgetSetSignal extends Signal
    {
        void onWidgetSet(Accessible source);
    }

    static final void connect(Accessible self, GtkAccessible.WidgetSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAccessible.class, "widget-set", after);
    }

    protected static final void receiveWidgetSet(Signal handler, long source) {
        ((GtkAccessible.WidgetSetSignal) handler).onWidgetSet((Accessible) objectFor(source));
    }

    interface WidgetUnsetSignal extends Signal
    {
        void onWidgetUnset(Accessible source);
    }

    static final void connect(Accessible self, GtkAccessible.WidgetUnsetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAccessible.class, "widget-unset", after);
    }

    protected static final void receiveWidgetUnset(Signal handler, long source) {
        ((GtkAccessible.WidgetUnsetSignal) handler).onWidgetUnset((Accessible) objectFor(source));
    }
}

