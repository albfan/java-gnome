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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.glib.Signal;
import org.gnome.pango.FontFamily;
import org.gnome.pango.Plumbing;

final class PangoFontFamily extends Plumbing
{
    private PangoFontFamily() {}

    static final String getName(FontFamily self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_family_get_name(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_font_family_get_name(long self);

    static final boolean isMonospace(FontFamily self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_family_is_monospace(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_font_family_is_monospace(long self);

    @SuppressWarnings("unused")
    static final void listFaces(FontFamily self, FIXME faces, int[] nFaces) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoFontFace***");
    }

    interface GetNameSignal extends Signal
    {
        String onGetName(FontFamily source);
    }

    static final void connect(FontFamily self, PangoFontFamily.GetNameSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontFamily.class, "get-name", after);
    }

    protected static final String receiveGetName(Signal handler, long source) {
        String result;

        result = ((PangoFontFamily.GetNameSignal) handler).onGetName((FontFamily) objectFor(source));

        return result;
    }

    interface IsMonospaceSignal extends Signal
    {
        boolean onIsMonospace(FontFamily source);
    }

    static final void connect(FontFamily self, PangoFontFamily.IsMonospaceSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontFamily.class, "is-monospace", after);
    }

    protected static final boolean receiveIsMonospace(Signal handler, long source) {
        boolean result;

        result = ((PangoFontFamily.IsMonospaceSignal) handler).onIsMonospace((FontFamily) objectFor(source));

        return result;
    }

    interface ListFacesSignal extends Signal
    {
        void onListFaces(FontFamily source, FIXME faces, int[] nFaces);
    }

    static final void connect(FontFamily self, PangoFontFamily.ListFacesSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontFamily.class, "list-faces", after);
    }

    protected static final void receiveListFaces(Signal handler, long source, java.lang.Object faces, int[] nFaces) {
        ((PangoFontFamily.ListFacesSignal) handler).onListFaces((FontFamily) objectFor(source), (FIXME) faces, nFaces);
    }
}

