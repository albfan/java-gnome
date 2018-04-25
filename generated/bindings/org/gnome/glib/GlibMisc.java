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

import org.gnome.glib.FormatSizeFlags;
import org.gnome.glib.Plumbing;
import org.gnome.glib.UserDirectory;

final class GlibMisc extends Plumbing
{
    private GlibMisc() {}

    static final void setPrgname(String prgname) {
        if (prgname == null) {
            throw new IllegalArgumentException("prgname can't be null");
        }

        synchronized (lock) {
            g_set_prgname(prgname);
        }
    }

    private static native final void g_set_prgname(String prgname);

    static final String getPrgname() {
        String result;

        synchronized (lock) {
            result = g_get_prgname();

            return result;
        }
    }

    private static native final String g_get_prgname();

    static final String getUserConfigDir() {
        String result;

        synchronized (lock) {
            result = g_get_user_config_dir();

            return result;
        }
    }

    private static native final String g_get_user_config_dir();

    static final String getUserName() {
        String result;

        synchronized (lock) {
            result = g_get_user_name();

            return result;
        }
    }

    private static native final String g_get_user_name();

    static final String getUserCacheDir() {
        String result;

        synchronized (lock) {
            result = g_get_user_cache_dir();

            return result;
        }
    }

    private static native final String g_get_user_cache_dir();

    static final String getUserDataDir() {
        String result;

        synchronized (lock) {
            result = g_get_user_data_dir();

            return result;
        }
    }

    private static native final String g_get_user_data_dir();

    static final String getUserSpecialDir(UserDirectory directory) {
        String result;

        if (directory == null) {
            throw new IllegalArgumentException("directory can't be null");
        }

        synchronized (lock) {
            result = g_get_user_special_dir(numOf(directory));

            return result;
        }
    }

    private static native final String g_get_user_special_dir(int directory);

    static final String getRealName() {
        String result;

        synchronized (lock) {
            result = g_get_real_name();

            return result;
        }
    }

    private static native final String g_get_real_name();

    static final void reloadUserSpecialDirsCache() {
        synchronized (lock) {
            g_reload_user_special_dirs_cache();
        }
    }

    private static native final void g_reload_user_special_dirs_cache();

    static final String[] getSystemDataDirs() {
        String[] result;

        synchronized (lock) {
            result = g_get_system_data_dirs();

            return result;
        }
    }

    private static native final String[] g_get_system_data_dirs();

    static final String[] getSystemConfigDirs() {
        String[] result;

        synchronized (lock) {
            result = g_get_system_config_dirs();

            return result;
        }
    }

    private static native final String[] g_get_system_config_dirs();

    static final String formatSize(long size) {
        String result;

        synchronized (lock) {
            result = g_format_size(size);

            return result;
        }
    }

    private static native final String g_format_size(long size);

    static final String formatSize(long size, FormatSizeFlags flags) {
        String result;

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = g_format_size_full(size, numOf(flags));

            return result;
        }
    }

    private static native final String g_format_size_full(long size, int flags);

    static final String formatSizeForDisplay(long size) {
        String result;

        synchronized (lock) {
            result = g_format_size_for_display(size);

            return result;
        }
    }

    private static native final String g_format_size_for_display(long size);

    static final String markupEscapeText(String text, int len) {
        String result;

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            result = g_markup_escape_text(text, len);

            return result;
        }
    }

    private static native final String g_markup_escape_text(String text, int len);
}

