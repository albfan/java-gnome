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
import org.gnome.glib.ApplicationFlags;
import org.gnome.glib.Signal;
import org.gnome.gtk.Application;
import org.gnome.gtk.ApplicationInhibitFlags;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Window;

final class GtkApplication extends Plumbing
{
    private GtkApplication() {}

    static final long createApplication(String applicationId, ApplicationFlags flags) {
        long result;

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_application_new(applicationId, numOf(flags));

            return result;
        }
    }

    private static native final long gtk_application_new(String applicationId, int flags);

    @SuppressWarnings("unused")
    static final void addAccelerator(Application self, String accelerator, String actionName, FIXME parameter) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    static final void addWindow(Application self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gtk_application_add_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gtk_application_add_window(long self, long window);

    static final String[] getAccelsForAction(Application self, String detailedActionName) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (detailedActionName == null) {
            throw new IllegalArgumentException("detailedActionName can't be null");
        }

        synchronized (lock) {
            result = gtk_application_get_accels_for_action(pointerOf(self), detailedActionName);

            return result;
        }
    }

    private static native final String[] gtk_application_get_accels_for_action(long self, String detailedActionName);

    static final String[] getActionsForAccel(Application self, String accel) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accel == null) {
            throw new IllegalArgumentException("accel can't be null");
        }

        synchronized (lock) {
            result = gtk_application_get_actions_for_accel(pointerOf(self), accel);

            return result;
        }
    }

    private static native final String[] gtk_application_get_actions_for_accel(long self, String accel);

    static final Window getActiveWindow(Application self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_application_get_active_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_application_get_active_window(long self);

    @SuppressWarnings("unused")
    static final FIXME getAppMenu(Application self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMenuModel*");
    }

    @SuppressWarnings("unused")
    static final FIXME getMenuById(Application self, String id) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMenu*");
    }

    @SuppressWarnings("unused")
    static final FIXME getMenubar(Application self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMenuModel*");
    }

    static final Window getWindowById(Application self, int id) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_application_get_window_by_id(pointerOf(self), id);

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_application_get_window_by_id(long self, int id);

    static final Window[] getWindows(Application self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_application_get_windows(pointerOf(self));

            return (Window[]) objectArrayFor(result, new Window[result.length]);
        }
    }

    private static native final long[] gtk_application_get_windows(long self);

    static final int inhibit(Application self, Window window, ApplicationInhibitFlags flags, String reason) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_application_inhibit(pointerOf(self), pointerOf(window), numOf(flags), reason);

            return result;
        }
    }

    private static native final int gtk_application_inhibit(long self, long window, int flags, String reason);

    static final boolean isInhibited(Application self, ApplicationInhibitFlags flags) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_application_is_inhibited(pointerOf(self), numOf(flags));

            return result;
        }
    }

    private static native final boolean gtk_application_is_inhibited(long self, int flags);

    static final String[] listActionDescriptions(Application self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_application_list_action_descriptions(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_application_list_action_descriptions(long self);

    static final boolean prefersAppMenu(Application self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_application_prefers_app_menu(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_application_prefers_app_menu(long self);

    @SuppressWarnings("unused")
    static final void removeAccelerator(Application self, String actionName, FIXME parameter) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    static final void removeWindow(Application self, Window window) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            gtk_application_remove_window(pointerOf(self), pointerOf(window));
        }
    }

    private static native final void gtk_application_remove_window(long self, long window);

    static final void setAccelsForAction(Application self, String detailedActionName, String[] accels) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (detailedActionName == null) {
            throw new IllegalArgumentException("detailedActionName can't be null");
        }

        if (accels == null) {
            throw new IllegalArgumentException("accels can't be null");
        }

        synchronized (lock) {
            gtk_application_set_accels_for_action(pointerOf(self), detailedActionName, accels);
        }
    }

    private static native final void gtk_application_set_accels_for_action(long self, String detailedActionName, String[] accels);

    @SuppressWarnings("unused")
    static final void setAppMenu(Application self, FIXME appMenu) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMenuModel*");
    }

    @SuppressWarnings("unused")
    static final void setMenubar(Application self, FIXME menubar) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMenuModel*");
    }

    static final void uninhibit(Application self, int cookie) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_application_uninhibit(pointerOf(self), cookie);
        }
    }

    private static native final void gtk_application_uninhibit(long self, int cookie);

    interface WindowAddedSignal extends Signal
    {
        void onWindowAdded(Application source, Window window);
    }

    static final void connect(Application self, GtkApplication.WindowAddedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkApplication.class, "window-added", after);
    }

    protected static final void receiveWindowAdded(Signal handler, long source, long window) {
        ((GtkApplication.WindowAddedSignal) handler).onWindowAdded((Application) objectFor(source), (Window) objectFor(window));
    }

    interface WindowRemovedSignal extends Signal
    {
        void onWindowRemoved(Application source, Window window);
    }

    static final void connect(Application self, GtkApplication.WindowRemovedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkApplication.class, "window-removed", after);
    }

    protected static final void receiveWindowRemoved(Signal handler, long source, long window) {
        ((GtkApplication.WindowRemovedSignal) handler).onWindowRemoved((Application) objectFor(source), (Window) objectFor(window));
    }
}

