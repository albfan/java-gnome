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
import org.gnome.sourceview.Style;
import org.gnome.sourceview.StyleScheme;

final class GtkSourceStyleScheme extends Plumbing
{
    private GtkSourceStyleScheme() {}

    static final String[] getAuthors(StyleScheme self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_get_authors(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_source_style_scheme_get_authors(long self);

    static final String getDescription(StyleScheme self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_get_description(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_style_scheme_get_description(long self);

    static final String getFilename(StyleScheme self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_get_filename(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_style_scheme_get_filename(long self);

    static final String getId(StyleScheme self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_get_id(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_style_scheme_get_id(long self);

    static final String getName(StyleScheme self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_source_style_scheme_get_name(long self);

    static final Style getStyle(StyleScheme self, String styleId) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (styleId == null) {
            throw new IllegalArgumentException("styleId can't be null");
        }

        synchronized (lock) {
            result = gtk_source_style_scheme_get_style(pointerOf(self), styleId);

            return (Style) objectFor(result);
        }
    }

    private static native final long gtk_source_style_scheme_get_style(long self, String styleId);
}

