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
import org.freedesktop.cairo.Surface;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Window;
import org.gnome.glib.GlibException;
import org.gnome.glib.Signal;
import org.gnome.gtk.IconInfo;
import org.gnome.gtk.IconLookupFlags;
import org.gnome.gtk.IconTheme;
import org.gnome.gtk.Plumbing;

final class GtkIconTheme extends Plumbing
{
    private GtkIconTheme() {}

    static final long createIconTheme() {
        long result;

        synchronized (lock) {
            result = gtk_icon_theme_new();

            return result;
        }
    }

    private static native final long gtk_icon_theme_new();

    static final void addResourcePath(IconTheme self, String path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_add_resource_path(pointerOf(self), path);
        }
    }

    private static native final void gtk_icon_theme_add_resource_path(long self, String path);

    static final void appendSearchPath(IconTheme self, String path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_append_search_path(pointerOf(self), path);
        }
    }

    private static native final void gtk_icon_theme_append_search_path(long self, String path);

    static final IconInfo chooseIcon(IconTheme self, String iconNames, int size, IconLookupFlags flags) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconNames == null) {
            throw new IllegalArgumentException("iconNames can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_choose_icon(pointerOf(self), iconNames, size, numOf(flags));

            return (IconInfo) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_choose_icon(long self, String iconNames, int size, int flags);

    static final IconInfo chooseIconForScale(IconTheme self, String iconNames, int size, int scale, IconLookupFlags flags) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconNames == null) {
            throw new IllegalArgumentException("iconNames can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_choose_icon_for_scale(pointerOf(self), iconNames, size, scale, numOf(flags));

            return (IconInfo) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_choose_icon_for_scale(long self, String iconNames, int size, int scale, int flags);

    static final String getExampleIconName(IconTheme self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_get_example_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_icon_theme_get_example_icon_name(long self);

    static final int[] getIconSizes(IconTheme self, String iconName) {
        int[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_get_icon_sizes(pointerOf(self), iconName);

            return result;
        }
    }

    private static native final int[] gtk_icon_theme_get_icon_sizes(long self, String iconName);

    static final void getSearchPath(IconTheme self, String[] path, int[] nElements) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_get_search_path(pointerOf(self), path, nElements);
        }
    }

    private static native final void gtk_icon_theme_get_search_path(long self, String[] path, int[] nElements);

    static final boolean hasIcon(IconTheme self, String iconName) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_has_icon(pointerOf(self), iconName);

            return result;
        }
    }

    private static native final boolean gtk_icon_theme_has_icon(long self, String iconName);

    @SuppressWarnings("unused")
    static final FIXME listContexts(IconTheme self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-utf8*");
    }

    @SuppressWarnings("unused")
    static final FIXME listIcons(IconTheme self, String context) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GList-utf8*");
    }

    static final Pixbuf loadIcon(IconTheme self, String iconName, int size, IconLookupFlags flags) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_load_icon(pointerOf(self), iconName, size, numOf(flags));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_load_icon(long self, String iconName, int size, int flags) throws GlibException;

    static final Pixbuf loadIconForScale(IconTheme self, String iconName, int size, int scale, IconLookupFlags flags) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_load_icon_for_scale(pointerOf(self), iconName, size, scale, numOf(flags));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_load_icon_for_scale(long self, String iconName, int size, int scale, int flags) throws GlibException;

    static final Surface loadSurface(IconTheme self, String iconName, int size, int scale, Window forWindow, IconLookupFlags flags) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_load_surface(pointerOf(self), iconName, size, scale, pointerOf(forWindow), numOf(flags));

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gtk_icon_theme_load_surface(long self, String iconName, int size, int scale, long forWindow, int flags) throws GlibException;

    @SuppressWarnings("unused")
    static final IconInfo lookupByGicon(IconTheme self, FIXME icon, int size, IconLookupFlags flags) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    @SuppressWarnings("unused")
    static final IconInfo lookupByGiconForScale(IconTheme self, FIXME icon, int size, int scale, IconLookupFlags flags) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final IconInfo lookupIcon(IconTheme self, String iconName, int size, IconLookupFlags flags) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_lookup_icon(pointerOf(self), iconName, size, numOf(flags));

            return (IconInfo) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_lookup_icon(long self, String iconName, int size, int flags);

    static final IconInfo lookupIconForScale(IconTheme self, String iconName, int size, int scale, IconLookupFlags flags) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_lookup_icon_for_scale(pointerOf(self), iconName, size, scale, numOf(flags));

            return (IconInfo) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_lookup_icon_for_scale(long self, String iconName, int size, int scale, int flags);

    static final void prependSearchPath(IconTheme self, String path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_prepend_search_path(pointerOf(self), path);
        }
    }

    private static native final void gtk_icon_theme_prepend_search_path(long self, String path);

    static final boolean rescanIfNeeded(IconTheme self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_rescan_if_needed(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_icon_theme_rescan_if_needed(long self);

    static final void setCustomTheme(IconTheme self, String themeName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_set_custom_theme(pointerOf(self), themeName);
        }
    }

    private static native final void gtk_icon_theme_set_custom_theme(long self, String themeName);

    static final void setScreen(IconTheme self, Screen screen) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_set_screen(pointerOf(self), pointerOf(screen));
        }
    }

    private static native final void gtk_icon_theme_set_screen(long self, long screen);

    static final void setSearchPath(IconTheme self, String path, int nElements) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_set_search_path(pointerOf(self), path, nElements);
        }
    }

    private static native final void gtk_icon_theme_set_search_path(long self, String path, int nElements);

    static final void addBuiltinIcon(String iconName, int size, Pixbuf pixbuf) {
        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            gtk_icon_theme_add_builtin_icon(iconName, size, pointerOf(pixbuf));
        }
    }

    private static native final void gtk_icon_theme_add_builtin_icon(String iconName, int size, long pixbuf);

    static final IconTheme getDefault() {
        long result;

        synchronized (lock) {
            result = gtk_icon_theme_get_default();

            return (IconTheme) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_get_default();

    static final IconTheme getForScreen(Screen screen) {
        long result;

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_theme_get_for_screen(pointerOf(screen));

            return (IconTheme) objectFor(result);
        }
    }

    private static native final long gtk_icon_theme_get_for_screen(long screen);

    interface ChangedSignal extends Signal
    {
        void onChanged(IconTheme source);
    }

    static final void connect(IconTheme self, GtkIconTheme.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkIconTheme.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkIconTheme.ChangedSignal) handler).onChanged((IconTheme) objectFor(source));
    }
}

