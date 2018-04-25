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
import org.gnome.pango.Font;
import org.gnome.pango.FontMetrics;
import org.gnome.pango.Fontset;
import org.gnome.pango.Language;
import org.gnome.pango.Plumbing;

final class PangoFontset extends Plumbing
{
    private PangoFontset() {}

    @SuppressWarnings("unused")
    static final void foreach(Fontset self, FIXME func, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoFontsetForeachFunc");
    }

    static final Font getFont(Fontset self, int wc) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_fontset_get_font(pointerOf(self), wc);

            return (Font) objectFor(result);
        }
    }

    private static native final long pango_fontset_get_font(long self, int wc);

    static final FontMetrics getMetrics(Fontset self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_fontset_get_metrics(pointerOf(self));

            return (FontMetrics) boxedFor(FontMetrics.class, result);
        }
    }

    private static native final long pango_fontset_get_metrics(long self);

    interface ForeachSignal extends Signal
    {
        void onForeach(Fontset source, FIXME func, FIXME data);
    }

    static final void connect(Fontset self, PangoFontset.ForeachSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontset.class, "foreach", after);
    }

    protected static final void receiveForeach(Signal handler, long source, java.lang.Object func, java.lang.Object data) {
        ((PangoFontset.ForeachSignal) handler).onForeach((Fontset) objectFor(source), (FIXME) func, (FIXME) data);
    }

    interface GetFontSignal extends Signal
    {
        Font onGetFont(Fontset source, int wc);
    }

    static final void connect(Fontset self, PangoFontset.GetFontSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontset.class, "get-font", after);
    }

    protected static final long receiveGetFont(Signal handler, long source, int wc) {
        Font result;

        result = ((PangoFontset.GetFontSignal) handler).onGetFont((Fontset) objectFor(source), wc);

        return pointerOf(result);
    }

    interface GetLanguageSignal extends Signal
    {
        Language onGetLanguage(Fontset source);
    }

    static final void connect(Fontset self, PangoFontset.GetLanguageSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontset.class, "get-language", after);
    }

    protected static final long receiveGetLanguage(Signal handler, long source) {
        Language result;

        result = ((PangoFontset.GetLanguageSignal) handler).onGetLanguage((Fontset) objectFor(source));

        return pointerOf(result);
    }

    interface GetMetricsSignal extends Signal
    {
        FontMetrics onGetMetrics(Fontset source);
    }

    static final void connect(Fontset self, PangoFontset.GetMetricsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFontset.class, "get-metrics", after);
    }

    protected static final long receiveGetMetrics(Signal handler, long source) {
        FontMetrics result;

        result = ((PangoFontset.GetMetricsSignal) handler).onGetMetrics((Fontset) objectFor(source));

        return pointerOf(result);
    }
}

