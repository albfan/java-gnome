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
import org.gnome.pango.FontDescription;
import org.gnome.pango.FontFace;
import org.gnome.pango.Plumbing;

final class PangoFontFace extends Plumbing
{
    private PangoFontFace() {}

    static final FontDescription describe(FontFace self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_face_describe(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long pango_font_face_describe(long self);

    static final String getFaceName(FontFace self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_face_get_face_name(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_font_face_get_face_name(long self);

    static final boolean isSynthesized(FontFace self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_face_is_synthesized(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_font_face_is_synthesized(long self);

    @SuppressWarnings("unused")
    static final void listSizes(FontFace self, FIXME sizes, int[] nSizes) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("int**");
    }

    interface DescribeSignal extends Signal
    {
        FontDescription onDescribe(FontFace source);
    }

    static final void connect(FontFace self, PangoFontFace.DescribeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontFace.class, "describe", after);
    }

    protected static final long receiveDescribe(Signal handler, long source) {
        FontDescription result;

        result = ((PangoFontFace.DescribeSignal) handler).onDescribe((FontFace) objectFor(source));

        return pointerOf(result);
    }

    interface GetFaceNameSignal extends Signal
    {
        String onGetFaceName(FontFace source);
    }

    static final void connect(FontFace self, PangoFontFace.GetFaceNameSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontFace.class, "get-face-name", after);
    }

    protected static final String receiveGetFaceName(Signal handler, long source) {
        String result;

        result = ((PangoFontFace.GetFaceNameSignal) handler).onGetFaceName((FontFace) objectFor(source));

        return result;
    }

    interface IsSynthesizedSignal extends Signal
    {
        boolean onIsSynthesized(FontFace source);
    }

    static final void connect(FontFace self, PangoFontFace.IsSynthesizedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontFace.class, "is-synthesized", after);
    }

    protected static final boolean receiveIsSynthesized(Signal handler, long source) {
        boolean result;

        result = ((PangoFontFace.IsSynthesizedSignal) handler).onIsSynthesized((FontFace) objectFor(source));

        return result;
    }

    interface ListSizesSignal extends Signal
    {
        void onListSizes(FontFace source, FIXME sizes, int[] nSizes);
    }

    static final void connect(FontFace self, PangoFontFace.ListSizesSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontFace.class, "list-sizes", after);
    }

    protected static final void receiveListSizes(Signal handler, long source, java.lang.Object sizes, int[] nSizes) {
        ((PangoFontFace.ListSizesSignal) handler).onListSizes((FontFace) objectFor(source), (FIXME) sizes, nSizes);
    }
}

