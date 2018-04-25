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
package org.gnome.glib;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.glib.Application;
import org.gnome.glib.ApplicationCommandLine;
import org.gnome.glib.ApplicationFlags;
import org.gnome.glib.File;
import org.gnome.glib.GlibException;
import org.gnome.glib.Object;
import org.gnome.glib.Plumbing;
import org.gnome.glib.Signal;

final class GApplication extends Plumbing
{
    private GApplication() {}

    static final long createApplication(String applicationId, ApplicationFlags flags) {
        long result;

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = g_application_new(applicationId, numOf(flags));

            return result;
        }
    }

    private static native final long g_application_new(String applicationId, int flags);

    static final void activate(Application self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_activate(pointerOf(self));
        }
    }

    private static native final void g_application_activate(long self);

    @SuppressWarnings("unused")
    static final void addMainOption(Application self, String longName, FIXME shortName, FIXME flags, FIXME arg, String description, String argDescription) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("char");
    }

    @SuppressWarnings("unused")
    static final void addMainOptionEntries(Application self, FIXME entries) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GOptionEntry*");
    }

    @SuppressWarnings("unused")
    static final void addOptionGroup(Application self, FIXME group) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GOptionGroup*");
    }

    @SuppressWarnings("unused")
    static final void bindBusyProperty(Application self, FIXME object, String property) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final String getApplicationId(Application self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_application_id(pointerOf(self));

            return result;
        }
    }

    private static native final String g_application_get_application_id(long self);

    @SuppressWarnings("unused")
    static final FIXME getDbusConnection(Application self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GDBusConnection*");
    }

    static final String getDbusObjectPath(Application self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_dbus_object_path(pointerOf(self));

            return result;
        }
    }

    private static native final String g_application_get_dbus_object_path(long self);

    static final ApplicationFlags getFlags(Application self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_flags(pointerOf(self));

            return (ApplicationFlags) flagFor(ApplicationFlags.class, result);
        }
    }

    private static native final int g_application_get_flags(long self);

    static final int getInactivityTimeout(Application self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_inactivity_timeout(pointerOf(self));

            return result;
        }
    }

    private static native final int g_application_get_inactivity_timeout(long self);

    static final boolean getIsBusy(Application self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_is_busy(pointerOf(self));

            return result;
        }
    }

    private static native final boolean g_application_get_is_busy(long self);

    static final boolean getIsRegistered(Application self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_is_registered(pointerOf(self));

            return result;
        }
    }

    private static native final boolean g_application_get_is_registered(long self);

    static final boolean getIsRemote(Application self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_is_remote(pointerOf(self));

            return result;
        }
    }

    private static native final boolean g_application_get_is_remote(long self);

    static final String getResourceBasePath(Application self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_get_resource_base_path(pointerOf(self));

            return result;
        }
    }

    private static native final String g_application_get_resource_base_path(long self);

    static final void hold(Application self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_hold(pointerOf(self));
        }
    }

    private static native final void g_application_hold(long self);

    static final void markBusy(Application self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_mark_busy(pointerOf(self));
        }
    }

    private static native final void g_application_mark_busy(long self);

    static final void open(Application self, File[] files, int nFiles, String hint) {
        long[] _files;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (files == null) {
            throw new IllegalArgumentException("files can't be null");
        }

        if (hint == null) {
            throw new IllegalArgumentException("hint can't be null");
        }

        _files = pointersOf((Object[])files);

        synchronized (lock) {
            g_application_open(pointerOf(self), _files, nFiles, hint);
            fillObjectArray((Object[])files, _files);
        }
    }

    private static native final void g_application_open(long self, long[] files, int nFiles, String hint);

    static final void quit(Application self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_quit(pointerOf(self));
        }
    }

    private static native final void g_application_quit(long self);

    @SuppressWarnings("unused")
    static final boolean register(Application self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    static final void release(Application self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_release(pointerOf(self));
        }
    }

    private static native final void g_application_release(long self);

    static final int run(Application self, int argc, String[] argv) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_run(pointerOf(self), argc, argv);

            return result;
        }
    }

    private static native final int g_application_run(long self, int argc, String[] argv);

    @SuppressWarnings("unused")
    static final void sendNotification(Application self, String id, FIXME notification) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GNotification*");
    }

    @SuppressWarnings("unused")
    static final void setActionGroup(Application self, FIXME actionGroup) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GActionGroup*");
    }

    static final void setApplicationId(Application self, String applicationId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_set_application_id(pointerOf(self), applicationId);
        }
    }

    private static native final void g_application_set_application_id(long self, String applicationId);

    static final void setDefault(Application self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_set_default(pointerOf(self));
        }
    }

    private static native final void g_application_set_default(long self);

    static final void setFlags(Application self, ApplicationFlags flags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            g_application_set_flags(pointerOf(self), numOf(flags));
        }
    }

    private static native final void g_application_set_flags(long self, int flags);

    static final void setInactivityTimeout(Application self, int inactivityTimeout) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_set_inactivity_timeout(pointerOf(self), inactivityTimeout);
        }
    }

    private static native final void g_application_set_inactivity_timeout(long self, int inactivityTimeout);

    static final void setOptionContextDescription(Application self, String description) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_set_option_context_description(pointerOf(self), description);
        }
    }

    private static native final void g_application_set_option_context_description(long self, String description);

    static final void setOptionContextParameterString(Application self, String parameterString) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_set_option_context_parameter_string(pointerOf(self), parameterString);
        }
    }

    private static native final void g_application_set_option_context_parameter_string(long self, String parameterString);

    static final void setOptionContextSummary(Application self, String summary) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_set_option_context_summary(pointerOf(self), summary);
        }
    }

    private static native final void g_application_set_option_context_summary(long self, String summary);

    static final void setResourceBasePath(Application self, String resourcePath) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_set_resource_base_path(pointerOf(self), resourcePath);
        }
    }

    private static native final void g_application_set_resource_base_path(long self, String resourcePath);

    @SuppressWarnings("unused")
    static final void unbindBusyProperty(Application self, FIXME object, String property) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final void unmarkBusy(Application self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_unmark_busy(pointerOf(self));
        }
    }

    private static native final void g_application_unmark_busy(long self);

    static final void withdrawNotification(Application self, String id) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (id == null) {
            throw new IllegalArgumentException("id can't be null");
        }

        synchronized (lock) {
            g_application_withdraw_notification(pointerOf(self), id);
        }
    }

    private static native final void g_application_withdraw_notification(long self, String id);

    static final Application getDefault() {
        long result;

        synchronized (lock) {
            result = g_application_get_default();

            return (Application) objectFor(result);
        }
    }

    private static native final long g_application_get_default();

    static final boolean idIsValid(String applicationId) {
        boolean result;

        if (applicationId == null) {
            throw new IllegalArgumentException("applicationId can't be null");
        }

        synchronized (lock) {
            result = g_application_id_is_valid(applicationId);

            return result;
        }
    }

    private static native final boolean g_application_id_is_valid(String applicationId);

    interface ActivateSignal extends Signal
    {
        void onActivate(Application source);
    }

    static final void connect(Application self, GApplication.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GApplication.ActivateSignal) handler).onActivate((Application) objectFor(source));
    }

    interface AddPlatformDataSignal extends Signal
    {
        void onAddPlatformData(Application source, FIXME builder);
    }

    static final void connect(Application self, GApplication.AddPlatformDataSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "add-platform-data", after);
    }

    protected static final void receiveAddPlatformData(Signal handler, long source, java.lang.Object builder) {
        ((GApplication.AddPlatformDataSignal) handler).onAddPlatformData((Application) objectFor(source), (FIXME) builder);
    }

    interface AfterEmitSignal extends Signal
    {
        void onAfterEmit(Application source, FIXME platformData);
    }

    static final void connect(Application self, GApplication.AfterEmitSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "after-emit", after);
    }

    protected static final void receiveAfterEmit(Signal handler, long source, java.lang.Object platformData) {
        ((GApplication.AfterEmitSignal) handler).onAfterEmit((Application) objectFor(source), (FIXME) platformData);
    }

    interface BeforeEmitSignal extends Signal
    {
        void onBeforeEmit(Application source, FIXME platformData);
    }

    static final void connect(Application self, GApplication.BeforeEmitSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "before-emit", after);
    }

    protected static final void receiveBeforeEmit(Signal handler, long source, java.lang.Object platformData) {
        ((GApplication.BeforeEmitSignal) handler).onBeforeEmit((Application) objectFor(source), (FIXME) platformData);
    }

    interface CommandLineSignal extends Signal
    {
        int onCommandLine(Application source, ApplicationCommandLine commandLine);
    }

    static final void connect(Application self, GApplication.CommandLineSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "command-line", after);
    }

    protected static final int receiveCommandLine(Signal handler, long source, long commandLine) {
        int result;

        result = ((GApplication.CommandLineSignal) handler).onCommandLine((Application) objectFor(source), (ApplicationCommandLine) objectFor(commandLine));

        return result;
    }

    interface DbusRegisterSignal extends Signal
    {
        boolean onDbusRegister(Application source, FIXME connection, String objectPath);
    }

    static final void connect(Application self, GApplication.DbusRegisterSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "dbus-register", after);
    }

    protected static final boolean receiveDbusRegister(Signal handler, long source, java.lang.Object connection, String objectPath) {
        boolean result;

        result = ((GApplication.DbusRegisterSignal) handler).onDbusRegister((Application) objectFor(source), (FIXME) connection, objectPath);

        return result;
    }

    interface DbusUnregisterSignal extends Signal
    {
        void onDbusUnregister(Application source, FIXME connection, String objectPath);
    }

    static final void connect(Application self, GApplication.DbusUnregisterSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "dbus-unregister", after);
    }

    protected static final void receiveDbusUnregister(Signal handler, long source, java.lang.Object connection, String objectPath) {
        ((GApplication.DbusUnregisterSignal) handler).onDbusUnregister((Application) objectFor(source), (FIXME) connection, objectPath);
    }

    interface HandleLocalOptionsSignal extends Signal
    {
        int onHandleLocalOptions(Application source, FIXME options);
    }

    static final void connect(Application self, GApplication.HandleLocalOptionsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "handle-local-options", after);
    }

    protected static final int receiveHandleLocalOptions(Signal handler, long source, java.lang.Object options) {
        int result;

        result = ((GApplication.HandleLocalOptionsSignal) handler).onHandleLocalOptions((Application) objectFor(source), (FIXME) options);

        return result;
    }

    interface LocalCommandLineSignal extends Signal
    {
        boolean onLocalCommandLine(Application source, FIXME arguments, int[] exitStatus);
    }

    static final void connect(Application self, GApplication.LocalCommandLineSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "local-command-line", after);
    }

    protected static final boolean receiveLocalCommandLine(Signal handler, long source, java.lang.Object arguments, int[] exitStatus) {
        boolean result;

        result = ((GApplication.LocalCommandLineSignal) handler).onLocalCommandLine((Application) objectFor(source), (FIXME) arguments, exitStatus);

        return result;
    }

    interface OpenSignal extends Signal
    {
        void onOpen(Application source, File[] files, int nFiles, String hint);
    }

    static final void connect(Application self, GApplication.OpenSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "open", after);
    }

    protected static final void receiveOpen(Signal handler, long source, long[] files, int nFiles, String hint) {
        ((GApplication.OpenSignal) handler).onOpen((Application) objectFor(source), (File[]) objectArrayFor(files, new File[files.length]), nFiles, hint);
    }

    interface QuitMainloopSignal extends Signal
    {
        void onQuitMainloop(Application source);
    }

    static final void connect(Application self, GApplication.QuitMainloopSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "quit-mainloop", after);
    }

    protected static final void receiveQuitMainloop(Signal handler, long source) {
        ((GApplication.QuitMainloopSignal) handler).onQuitMainloop((Application) objectFor(source));
    }

    interface RunMainloopSignal extends Signal
    {
        void onRunMainloop(Application source);
    }

    static final void connect(Application self, GApplication.RunMainloopSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "run-mainloop", after);
    }

    protected static final void receiveRunMainloop(Signal handler, long source) {
        ((GApplication.RunMainloopSignal) handler).onRunMainloop((Application) objectFor(source));
    }

    interface ShutdownSignal extends Signal
    {
        void onShutdown(Application source);
    }

    static final void connect(Application self, GApplication.ShutdownSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "shutdown", after);
    }

    protected static final void receiveShutdown(Signal handler, long source) {
        ((GApplication.ShutdownSignal) handler).onShutdown((Application) objectFor(source));
    }

    interface StartupSignal extends Signal
    {
        void onStartup(Application source);
    }

    static final void connect(Application self, GApplication.StartupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplication.class, "startup", after);
    }

    protected static final void receiveStartup(Signal handler, long source) {
        ((GApplication.StartupSignal) handler).onStartup((Application) objectFor(source));
    }
}

