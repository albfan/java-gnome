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
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.pango.EngineShape;
import org.gnome.pango.Font;
import org.gnome.pango.FontDescription;
import org.gnome.pango.FontMap;
import org.gnome.pango.FontMetrics;
import org.gnome.pango.Language;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Rectangle;

final class PangoFont extends Plumbing
{
    private PangoFont() {}

    static final FontDescription describe(Font self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_describe(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long pango_font_describe(long self);

    static final FontDescription describeWithAbsoluteSize(Font self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_describe_with_absolute_size(pointerOf(self));

            return (FontDescription) boxedFor(FontDescription.class, result);
        }
    }

    private static native final long pango_font_describe_with_absolute_size(long self);

    static final EngineShape findShaper(Font self, Language language, int ch) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            result = pango_font_find_shaper(pointerOf(self), pointerOf(language), ch);

            Object object = objectFor(result);
            //EngineShape engineShape = (EngineShape) object;
            return null;
        }
    }

    private static native final long pango_font_find_shaper(long self, long language, int ch);

    @SuppressWarnings("unused")
    static final FIXME getCoverage(Font self, Language language) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoCoverage*");
    }

    static final FontMap getFontMap(Font self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_get_font_map(pointerOf(self));

            return (FontMap) objectFor(result);
        }
    }

    private static native final long pango_font_get_font_map(long self);

    @SuppressWarnings("unused")
    static final void getGlyphExtents(Font self, FIXME glyph, Rectangle inkRect, Rectangle logicalRect) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoGlyph");
    }

    static final FontMetrics getMetrics(Font self, Language language) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_font_get_metrics(pointerOf(self), pointerOf(language));

            return (FontMetrics) boxedFor(FontMetrics.class, result);
        }
    }

    private static native final long pango_font_get_metrics(long self, long language);

    static final void descriptionsFree(FontDescription[] descs, int nDescs) {
        long[] _descs;

        _descs = pointersOf(descs);

        synchronized (lock) {
            pango_font_descriptions_free(_descs, nDescs);
            fillBoxedArray(FontDescription.class, descs, _descs);
        }
    }

    private static native final void pango_font_descriptions_free(long[] descs, int nDescs);

    interface DescribeSignal extends Signal
    {
        FontDescription onDescribe(Font source);
    }

    static final void connect(Font self, PangoFont.DescribeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFont.class, "describe", after);
    }

    protected static final long receiveDescribe(Signal handler, long source) {
        FontDescription result;

        result = ((PangoFont.DescribeSignal) handler).onDescribe((Font) objectFor(source));

        return pointerOf(result);
    }

    interface DescribeAbsoluteSignal extends Signal
    {
        FontDescription onDescribeAbsolute(Font source);
    }

    static final void connect(Font self, PangoFont.DescribeAbsoluteSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFont.class, "describe-absolute", after);
    }

    protected static final long receiveDescribeAbsolute(Signal handler, long source) {
        FontDescription result;

        result = ((PangoFont.DescribeAbsoluteSignal) handler).onDescribeAbsolute((Font) objectFor(source));

        return pointerOf(result);
    }

    interface FindShaperSignal extends Signal
    {
        EngineShape onFindShaper(Font source, Language language, int ch);
    }

    static final void connect(Font self, PangoFont.FindShaperSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFont.class, "find-shaper", after);
    }

    protected static final long receiveFindShaper(Signal handler, long source, long language, int ch) {
        EngineShape result;

        result = ((PangoFont.FindShaperSignal) handler).onFindShaper((Font) objectFor(source), (Language) boxedFor(Language.class, language), ch);

        return pointerOf(result);
    }

    interface GetCoverageSignal extends Signal
    {
        FIXME onGetCoverage(Font source, Language language);
    }

    static final void connect(Font self, PangoFont.GetCoverageSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFont.class, "get-coverage", after);
    }

    protected static final java.lang.Object receiveGetCoverage(Signal handler, long source, long language) {
        FIXME result;

        result = ((PangoFont.GetCoverageSignal) handler).onGetCoverage((Font) objectFor(source), (Language) boxedFor(Language.class, language));

        return result;
    }

    interface GetFontMapSignal extends Signal
    {
        FontMap onGetFontMap(Font source);
    }

    static final void connect(Font self, PangoFont.GetFontMapSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFont.class, "get-font-map", after);
    }

    protected static final long receiveGetFontMap(Signal handler, long source) {
        FontMap result;

        result = ((PangoFont.GetFontMapSignal) handler).onGetFontMap((Font) objectFor(source));

        return pointerOf(result);
    }

    interface GetGlyphExtentsSignal extends Signal
    {
        void onGetGlyphExtents(Font source, FIXME glyph, Rectangle inkRect, Rectangle logicalRect);
    }

    static final void connect(Font self, PangoFont.GetGlyphExtentsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFont.class, "get-glyph-extents", after);
    }

    protected static final void receiveGetGlyphExtents(Signal handler, long source, java.lang.Object glyph, long inkRect, long logicalRect) {
        ((PangoFont.GetGlyphExtentsSignal) handler).onGetGlyphExtents((Font) objectFor(source), (FIXME) glyph, (Rectangle) boxedFor(Rectangle.class, inkRect), (Rectangle) boxedFor(Rectangle.class, logicalRect));
    }

    interface GetMetricsSignal extends Signal
    {
        FontMetrics onGetMetrics(Font source, Language language);
    }

    static final void connect(Font self, PangoFont.GetMetricsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoFont.class, "get-metrics", after);
    }

    protected static final long receiveGetMetrics(Signal handler, long source, long language) {
        FontMetrics result;

        result = ((PangoFont.GetMetricsSignal) handler).onGetMetrics((Font) objectFor(source), (Language) boxedFor(Language.class, language));

        return pointerOf(result);
    }
}

