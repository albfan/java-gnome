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
package org.gnome.gdk;

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
import org.gnome.gdk.DisplayManager;
import org.gnome.gdk.Plumbing;
import org.gnome.glib.Signal;

final class GdkDisplayManager extends Plumbing
{
    private GdkDisplayManager() {}

    static final Display getDefaultDisplay(DisplayManager self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_manager_get_default_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_display_manager_get_default_display(long self);

    static final Display[] listDisplays(DisplayManager self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_display_manager_list_displays(pointerOf(self));

            return (Display[]) objectArrayFor(result, new Display[result.length]);
        }
    }

    private static native final long[] gdk_display_manager_list_displays(long self);

    static final Display openDisplay(DisplayManager self, String name) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gdk_display_manager_open_display(pointerOf(self), name);

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_display_manager_open_display(long self, String name);

    static final void setDefaultDisplay(DisplayManager self, Display display) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        synchronized (lock) {
            gdk_display_manager_set_default_display(pointerOf(self), pointerOf(display));
        }
    }

    private static native final void gdk_display_manager_set_default_display(long self, long display);

    static final DisplayManager get() {
        long result;

        synchronized (lock) {
            result = gdk_display_manager_get();

            return (DisplayManager) objectFor(result);
        }
    }

    private static native final long gdk_display_manager_get();

    interface DisplayOpenedSignal extends Signal
    {
        void onDisplayOpened(DisplayManager source, FIXME display);
    }

    static final void connect(DisplayManager self, GdkDisplayManager.DisplayOpenedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkDisplayManager.class, "display-opened", after);
    }

    protected static final void receiveDisplayOpened(Signal handler, long source, java.lang.Object display) {
        ((GdkDisplayManager.DisplayOpenedSignal) handler).onDisplayOpened((DisplayManager) objectFor(source), (FIXME) display);
    }
}

