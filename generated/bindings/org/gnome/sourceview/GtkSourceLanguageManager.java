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

import org.gnome.sourceview.Language;
import org.gnome.sourceview.LanguageManager;
import org.gnome.sourceview.Plumbing;

final class GtkSourceLanguageManager extends Plumbing
{
    private GtkSourceLanguageManager() {}

    static final long createLanguageManager() {
        long result;

        synchronized (lock) {
            result = gtk_source_language_manager_new();

            return result;
        }
    }

    private static native final long gtk_source_language_manager_new();

    static final Language getLanguage(LanguageManager self, String id) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (id == null) {
            throw new IllegalArgumentException("id can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_manager_get_language(pointerOf(self), id);

            return (Language) objectFor(result);
        }
    }

    private static native final long gtk_source_language_manager_get_language(long self, String id);

    static final String[] getLanguageIds(LanguageManager self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_manager_get_language_ids(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_language_manager_get_language_ids(long self);

    static final String[] getSearchPath(LanguageManager self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_manager_get_search_path(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_language_manager_get_search_path(long self);

    static final Language guessLanguage(LanguageManager self, String filename, String contentType) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_manager_guess_language(pointerOf(self), filename, contentType);

            return (Language) objectFor(result);
        }
    }

    private static native final long gtk_source_language_manager_guess_language(long self, String filename, String contentType);

    static final void setSearchPath(LanguageManager self, String[] dirs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_language_manager_set_search_path(pointerOf(self), dirs);
        }
    }

    private static native final void gtk_source_language_manager_set_search_path(long self, String[] dirs);

    static final LanguageManager getDefault() {
        long result;

        synchronized (lock) {
            result = gtk_source_language_manager_get_default();

            return (LanguageManager) objectFor(result);
        }
    }

    private static native final long gtk_source_language_manager_get_default();
}

