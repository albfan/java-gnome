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
import org.gnome.pango.Context;
import org.gnome.pango.Font;
import org.gnome.pango.FontDescription;
import org.gnome.pango.FontMap;
import org.gnome.pango.Fontset;
import org.gnome.pango.Language;
import org.gnome.pango.Plumbing;

final class PangoFontMap extends Plumbing
{
    private PangoFontMap() {}

    static final void changed(FontMap self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_font_map_changed(pointerOf(self));
        }
    }

    private static native final void pango_font_map_changed(long self);

    static final Context createContext(FontMap self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_map_create_context(pointerOf(self));

            return (Context) objectFor(result);
        }
    }

    private static native final long pango_font_map_create_context(long self);

    static final int getSerial(FontMap self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_map_get_serial(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_font_map_get_serial(long self);

    static final String getShapeEngineType(FontMap self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_map_get_shape_engine_type(pointerOf(self));

            return result;
        }
    }

    private static native final String pango_font_map_get_shape_engine_type(long self);

    @SuppressWarnings("unused")
    static final void listFamilies(FontMap self, FIXME families, int[] nFamilies) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoFontFamily***");
    }

    static final Font loadFont(FontMap self, Context context, FontDescription desc) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        if (desc == null) {
            throw new IllegalArgumentException("desc can't be null");
        }

        synchronized (lock) {
            result = pango_font_map_load_font(pointerOf(self), pointerOf(context), pointerOf(desc));

            return (Font) objectFor(result);
        }
    }

    private static native final long pango_font_map_load_font(long self, long context, long desc);

    static final Fontset loadFontset(FontMap self, Context context, FontDescription desc, Language language) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        if (desc == null) {
            throw new IllegalArgumentException("desc can't be null");
        }

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            result = pango_font_map_load_fontset(pointerOf(self), pointerOf(context), pointerOf(desc), pointerOf(language));

            return (Fontset) objectFor(result);
        }
    }

    private static native final long pango_font_map_load_fontset(long self, long context, long desc, long language);

    interface ChangedSignal extends Signal
    {
        void onChanged(FontMap source);
    }

    static final void connect(FontMap self, PangoFontMap.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontMap.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((PangoFontMap.ChangedSignal) handler).onChanged((FontMap) objectFor(source));
    }

    interface GetSerialSignal extends Signal
    {
        int onGetSerial(FontMap source);
    }

    static final void connect(FontMap self, PangoFontMap.GetSerialSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontMap.class, "get-serial", after);
    }

    protected static final int receiveGetSerial(Signal handler, long source) {
        int result;

        result = ((PangoFontMap.GetSerialSignal) handler).onGetSerial((FontMap) objectFor(source));

        return result;
    }

    interface ListFamiliesSignal extends Signal
    {
        void onListFamilies(FontMap source, FIXME families, int[] nFamilies);
    }

    static final void connect(FontMap self, PangoFontMap.ListFamiliesSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontMap.class, "list-families", after);
    }

    protected static final void receiveListFamilies(Signal handler, long source, java.lang.Object families, int[] nFamilies) {
        ((PangoFontMap.ListFamiliesSignal) handler).onListFamilies((FontMap) objectFor(source), (FIXME) families, nFamilies);
    }

    interface LoadFontSignal extends Signal
    {
        Font onLoadFont(FontMap source, Context context, FontDescription desc);
    }

    static final void connect(FontMap self, PangoFontMap.LoadFontSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontMap.class, "load-font", after);
    }

    protected static final long receiveLoadFont(Signal handler, long source, long context, long desc) {
        Font result;

        result = ((PangoFontMap.LoadFontSignal) handler).onLoadFont((FontMap) objectFor(source), (Context) objectFor(context), (FontDescription) boxedFor(FontDescription.class, desc));

        return pointerOf(result);
    }

    interface LoadFontsetSignal extends Signal
    {
        Fontset onLoadFontset(FontMap source, Context context, FontDescription desc, Language language);
    }

    static final void connect(FontMap self, PangoFontMap.LoadFontsetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontMap.class, "load-fontset", after);
    }

    protected static final long receiveLoadFontset(Signal handler, long source, long context, long desc, long language) {
        Fontset result;

        result = ((PangoFontMap.LoadFontsetSignal) handler).onLoadFontset((FontMap) objectFor(source), (Context) objectFor(context), (FontDescription) boxedFor(FontDescription.class, desc), (Language) boxedFor(Language.class, language));

        return pointerOf(result);
    }
}

