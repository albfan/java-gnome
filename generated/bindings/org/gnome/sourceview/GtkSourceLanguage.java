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
import org.gnome.sourceview.Plumbing;

final class GtkSourceLanguage extends Plumbing
{
    private GtkSourceLanguage() {}

    static final String[] getGlobs(Language self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_globs(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_language_get_globs(long self);

    static final boolean getHidden(Language self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_hidden(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_language_get_hidden(long self);

    static final String getId(Language self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_id(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_language_get_id(long self);

    static final String getMetadata(Language self, String name) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_metadata(pointerOf(self), name);

            return result;
        }
    }

    private static native final String gtk_source_language_get_metadata(long self, String name);

    static final String[] getMimeTypes(Language self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_mime_types(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_language_get_mime_types(long self);

    static final String getName(Language self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_language_get_name(long self);

    static final String getSection(Language self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_section(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_language_get_section(long self);

    static final String getStyleFallback(Language self, String styleId) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (styleId == null) {
            throw new IllegalArgumentException("styleId can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_style_fallback(pointerOf(self), styleId);

            return result;
        }
    }

    private static native final String gtk_source_language_get_style_fallback(long self, String styleId);

    static final String[] getStyleIds(Language self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_style_ids(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_language_get_style_ids(long self);

    static final String getStyleName(Language self, String styleId) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (styleId == null) {
            throw new IllegalArgumentException("styleId can't be null");
        }

        synchronized (lock) {
            result = gtk_source_language_get_style_name(pointerOf(self), styleId);

            return result;
        }
    }

    private static native final String gtk_source_language_get_style_name(long self, String styleId);
}

