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
package org.gnome.sourceview;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.sourceview.Plumbing;
import org.gnome.sourceview.StyleScheme;
import org.gnome.sourceview.StyleSchemeManager;

final class GtkSourceStyleSchemeManager extends Plumbing
{
    private GtkSourceStyleSchemeManager() {}

    static final long createStyleSchemeManager() {
        long result;

        synchronized (lock) {
            result = gtk_source_style_scheme_manager_new();

            return result;
        }
    }

    private static native final long gtk_source_style_scheme_manager_new();

    static final void appendSearchPath(StyleSchemeManager self, String path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_source_style_scheme_manager_append_search_path(pointerOf(self), path);
        }
    }

    private static native final void gtk_source_style_scheme_manager_append_search_path(long self, String path);

    static final void forceRescan(StyleSchemeManager self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_style_scheme_manager_force_rescan(pointerOf(self));
        }
    }

    private static native final void gtk_source_style_scheme_manager_force_rescan(long self);

    static final StyleScheme getScheme(StyleSchemeManager self, String schemeId) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (schemeId == null) {
            throw new IllegalArgumentException("schemeId can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_manager_get_scheme(pointerOf(self), schemeId);

            return (StyleScheme) objectFor(result);
        }
    }

    private static native final long gtk_source_style_scheme_manager_get_scheme(long self, String schemeId);

    static final String[] getSchemeIds(StyleSchemeManager self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_manager_get_scheme_ids(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_style_scheme_manager_get_scheme_ids(long self);

    static final String[] getSearchPath(StyleSchemeManager self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_manager_get_search_path(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_style_scheme_manager_get_search_path(long self);

    static final void prependSearchPath(StyleSchemeManager self, String path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            gtk_source_style_scheme_manager_prepend_search_path(pointerOf(self), path);
        }
    }

    private static native final void gtk_source_style_scheme_manager_prepend_search_path(long self, String path);

    static final void setSearchPath(StyleSchemeManager self, String[] path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_style_scheme_manager_set_search_path(pointerOf(self), path);
        }
    }

    private static native final void gtk_source_style_scheme_manager_set_search_path(long self, String[] path);

    static final StyleSchemeManager getDefault() {
        long result;

        synchronized (lock) {
            result = gtk_source_style_scheme_manager_get_default();

            return (StyleSchemeManager) objectFor(result);
        }
    }

    private static native final long gtk_source_style_scheme_manager_get_default();
}

