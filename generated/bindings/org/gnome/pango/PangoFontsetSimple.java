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
package org.gnome.pango;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.pango.Font;
import org.gnome.pango.FontsetSimple;
import org.gnome.pango.Language;
import org.gnome.pango.Plumbing;

final class PangoFontsetSimple extends Plumbing
{
    private PangoFontsetSimple() {}

    static final long createFontsetSimple(Language language) {
        long result;

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            result = pango_fontset_simple_new(pointerOf(language));

            return result;
        }
    }

    private static native final long pango_fontset_simple_new(long language);

    static final void append(FontsetSimple self, Font font) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (font == null) {
            throw new IllegalArgumentException("font can't be null");
        }

        synchronized (lock) {
            pango_fontset_simple_append(pointerOf(self), pointerOf(font));
        }
    }

    private static native final void pango_fontset_simple_append(long self, long font);

    static final int size(FontsetSimple self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_fontset_simple_size(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_fontset_simple_size(long self);
}

