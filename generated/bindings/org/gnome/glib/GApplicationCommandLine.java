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
import org.gnome.glib.ApplicationCommandLine;
import org.gnome.glib.File;
import org.gnome.glib.Plumbing;
import org.gnome.glib.Signal;

final class GApplicationCommandLine extends Plumbing
{
    private GApplicationCommandLine() {}

    static final File createFileForArg(ApplicationCommandLine self, String arg) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (arg == null) {
            throw new IllegalArgumentException("arg can't be null");
        }

        synchronized (lock) {
            result = g_application_command_line_create_file_for_arg(pointerOf(self), arg);

            return (File) objectFor(result);
        }
    }

    private static native final long g_application_command_line_create_file_for_arg(long self, String arg);

    static final String[] getArguments(ApplicationCommandLine self, int[] argc) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_command_line_get_arguments(pointerOf(self), argc);

            return result;
        }
    }

    private static native final String[] g_application_command_line_get_arguments(long self, int[] argc);

    static final String getCwd(ApplicationCommandLine self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_command_line_get_cwd(pointerOf(self));

            return result;
        }
    }

    private static native final String g_application_command_line_get_cwd(long self);

    static final String[] getEnviron(ApplicationCommandLine self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_command_line_get_environ(pointerOf(self));

            return result;
        }
    }

    private static native final String[] g_application_command_line_get_environ(long self);

    static final int getExitStatus(ApplicationCommandLine self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_command_line_get_exit_status(pointerOf(self));

            return result;
        }
    }

    private static native final int g_application_command_line_get_exit_status(long self);

    static final boolean getIsRemote(ApplicationCommandLine self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_application_command_line_get_is_remote(pointerOf(self));

            return result;
        }
    }

    private static native final boolean g_application_command_line_get_is_remote(long self);

    @SuppressWarnings("unused")
    static final FIXME getOptionsDict(ApplicationCommandLine self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariantDict*");
    }

    @SuppressWarnings("unused")
    static final FIXME getPlatformData(ApplicationCommandLine self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    @SuppressWarnings("unused")
    static final FIXME getStdin(ApplicationCommandLine self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }

    static final String getenv(ApplicationCommandLine self, String name) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = g_application_command_line_getenv(pointerOf(self), name);

            return result;
        }
    }

    private static native final String g_application_command_line_getenv(long self, String name);

    static final void print(ApplicationCommandLine self, String format) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (format == null) {
            throw new IllegalArgumentException("format can't be null");
        }

        synchronized (lock) {
            g_application_command_line_print(pointerOf(self), format);
        }
    }

    private static native final void g_application_command_line_print(long self, String format);

    static final void printerr(ApplicationCommandLine self, String format) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (format == null) {
            throw new IllegalArgumentException("format can't be null");
        }

        synchronized (lock) {
            g_application_command_line_printerr(pointerOf(self), format);
        }
    }

    private static native final void g_application_command_line_printerr(long self, String format);

    static final void setExitStatus(ApplicationCommandLine self, int exitStatus) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_application_command_line_set_exit_status(pointerOf(self), exitStatus);
        }
    }

    private static native final void g_application_command_line_set_exit_status(long self, int exitStatus);

    interface GetStdinSignal extends Signal
    {
        FIXME onGetStdin(ApplicationCommandLine source);
    }

    static final void connect(ApplicationCommandLine self, GApplicationCommandLine.GetStdinSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplicationCommandLine.class, "get-stdin", after);
    }

    protected static final java.lang.Object receiveGetStdin(Signal handler, long source) {
        FIXME result;

        result = ((GApplicationCommandLine.GetStdinSignal) handler).onGetStdin((ApplicationCommandLine) objectFor(source));

        return result;
    }

    interface PrintLiteralSignal extends Signal
    {
        void onPrintLiteral(ApplicationCommandLine source, String message);
    }

    static final void connect(ApplicationCommandLine self, GApplicationCommandLine.PrintLiteralSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplicationCommandLine.class, "print-literal", after);
    }

    protected static final void receivePrintLiteral(Signal handler, long source, String message) {
        ((GApplicationCommandLine.PrintLiteralSignal) handler).onPrintLiteral((ApplicationCommandLine) objectFor(source), message);
    }

    interface PrinterrLiteralSignal extends Signal
    {
        void onPrinterrLiteral(ApplicationCommandLine source, String message);
    }

    static final void connect(ApplicationCommandLine self, GApplicationCommandLine.PrinterrLiteralSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GApplicationCommandLine.class, "printerr-literal", after);
    }

    protected static final void receivePrinterrLiteral(Signal handler, long source, String message) {
        ((GApplicationCommandLine.PrinterrLiteralSignal) handler).onPrinterrLiteral((ApplicationCommandLine) objectFor(source), message);
    }

    static final void broken(ApplicationCommandLine self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            g_object_unref(pointerOf(self));
        }
    }

    private static native final void g_object_unref(long self);
}

