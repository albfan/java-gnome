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
import org.gnome.pango.Color;
import org.gnome.pango.Font;
import org.gnome.pango.GlyphString;
import org.gnome.pango.Layout;
import org.gnome.pango.LayoutLine;
import org.gnome.pango.Matrix;
import org.gnome.pango.Plumbing;
import org.gnome.pango.RenderPart;
import org.gnome.pango.Renderer;

final class PangoRenderer extends Plumbing
{
    private PangoRenderer() {}

    static final void activate(Renderer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_renderer_activate(pointerOf(self));
        }
    }

    private static native final void pango_renderer_activate(long self);

    static final void deactivate(Renderer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_renderer_deactivate(pointerOf(self));
        }
    }

    private static native final void pango_renderer_deactivate(long self);

    static final void drawErrorUnderline(Renderer self, int x, int y, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_renderer_draw_error_underline(pointerOf(self), x, y, width, height);
        }
    }

    private static native final void pango_renderer_draw_error_underline(long self, int x, int y, int width, int height);

    @SuppressWarnings("unused")
    static final void drawGlyph(Renderer self, Font font, FIXME glyph, double x, double y) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoGlyph");
    }

    @SuppressWarnings("unused")
    static final void drawGlyphItem(Renderer self, String text, FIXME glyphItem, int x, int y) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoGlyphItem*");
    }

    static final void drawGlyphs(Renderer self, Font font, GlyphString glyphs, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (font == null) {
            throw new IllegalArgumentException("font can't be null");
        }

        if (glyphs == null) {
            throw new IllegalArgumentException("glyphs can't be null");
        }

        synchronized (lock) {
            pango_renderer_draw_glyphs(pointerOf(self), pointerOf(font), pointerOf(glyphs), x, y);
        }
    }

    private static native final void pango_renderer_draw_glyphs(long self, long font, long glyphs, int x, int y);

    static final void drawLayout(Renderer self, Layout layout, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (layout == null) {
            throw new IllegalArgumentException("layout can't be null");
        }

        synchronized (lock) {
            pango_renderer_draw_layout(pointerOf(self), pointerOf(layout), x, y);
        }
    }

    private static native final void pango_renderer_draw_layout(long self, long layout, int x, int y);

    static final void drawLayoutLine(Renderer self, LayoutLine line, int x, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (line == null) {
            throw new IllegalArgumentException("line can't be null");
        }

        synchronized (lock) {
            pango_renderer_draw_layout_line(pointerOf(self), pointerOf(line), x, y);
        }
    }

    private static native final void pango_renderer_draw_layout_line(long self, long line, int x, int y);

    static final void drawRectangle(Renderer self, RenderPart part, int x, int y, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (part == null) {
            throw new IllegalArgumentException("part can't be null");
        }

        synchronized (lock) {
            pango_renderer_draw_rectangle(pointerOf(self), numOf(part), x, y, width, height);
        }
    }

    private static native final void pango_renderer_draw_rectangle(long self, int part, int x, int y, int width, int height);

    static final void drawTrapezoid(Renderer self, RenderPart part, double y1, double x11, double x21, double y2, double x12, double x22) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (part == null) {
            throw new IllegalArgumentException("part can't be null");
        }

        synchronized (lock) {
            pango_renderer_draw_trapezoid(pointerOf(self), numOf(part), y1, x11, x21, y2, x12, x22);
        }
    }

    private static native final void pango_renderer_draw_trapezoid(long self, int part, double y1, double x11, double x21, double y2, double x12, double x22);

    static final char getAlpha(Renderer self, RenderPart part) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (part == null) {
            throw new IllegalArgumentException("part can't be null");
        }

        synchronized (lock) {
            result = pango_renderer_get_alpha(pointerOf(self), numOf(part));

            return result;
        }
    }

    private static native final char pango_renderer_get_alpha(long self, int part);

    static final Color getColor(Renderer self, RenderPart part) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (part == null) {
            throw new IllegalArgumentException("part can't be null");
        }

        synchronized (lock) {
            result = pango_renderer_get_color(pointerOf(self), numOf(part));

            return (Color) boxedFor(Color.class, result);
        }
    }

    private static native final long pango_renderer_get_color(long self, int part);

    static final Layout getLayout(Renderer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_renderer_get_layout(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long pango_renderer_get_layout(long self);

    static final LayoutLine getLayoutLine(Renderer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_renderer_get_layout_line(pointerOf(self));

            return (LayoutLine) boxedFor(LayoutLine.class, result);
        }
    }

    private static native final long pango_renderer_get_layout_line(long self);

    static final Matrix getMatrix(Renderer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_renderer_get_matrix(pointerOf(self));

            return (Matrix) boxedFor(Matrix.class, result);
        }
    }

    private static native final long pango_renderer_get_matrix(long self);

    static final void partChanged(Renderer self, RenderPart part) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (part == null) {
            throw new IllegalArgumentException("part can't be null");
        }

        synchronized (lock) {
            pango_renderer_part_changed(pointerOf(self), numOf(part));
        }
    }

    private static native final void pango_renderer_part_changed(long self, int part);

    static final void setAlpha(Renderer self, RenderPart part, char alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (part == null) {
            throw new IllegalArgumentException("part can't be null");
        }

        synchronized (lock) {
            pango_renderer_set_alpha(pointerOf(self), numOf(part), alpha);
        }
    }

    private static native final void pango_renderer_set_alpha(long self, int part, char alpha);

    static final void setColor(Renderer self, RenderPart part, org.gnome.pango.Color color) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (part == null) {
            throw new IllegalArgumentException("part can't be null");
        }

        synchronized (lock) {
            pango_renderer_set_color(pointerOf(self), numOf(part), pointerOf(color));
        }
    }

    private static native final void pango_renderer_set_color(long self, int part, long color);

    static final void setMatrix(Renderer self, Matrix matrix) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_renderer_set_matrix(pointerOf(self), pointerOf(matrix));
        }
    }

    private static native final void pango_renderer_set_matrix(long self, long matrix);

    interface BeginSignal extends Signal
    {
        void onBegin(Renderer source);
    }

    static final void connect(Renderer self, PangoRenderer.BeginSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "begin", after);
    }

    protected static final void receiveBegin(Signal handler, long source) {
        ((PangoRenderer.BeginSignal) handler).onBegin((Renderer) objectFor(source));
    }

    interface DrawErrorUnderlineSignal extends Signal
    {
        void onDrawErrorUnderline(Renderer source, int x, int y, int width, int height);
    }

    static final void connect(Renderer self, PangoRenderer.DrawErrorUnderlineSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "draw-error-underline", after);
    }

    protected static final void receiveDrawErrorUnderline(Signal handler, long source, int x, int y, int width, int height) {
        ((PangoRenderer.DrawErrorUnderlineSignal) handler).onDrawErrorUnderline((Renderer) objectFor(source), x, y, width, height);
    }

    interface DrawGlyphSignal extends Signal
    {
        void onDrawGlyph(Renderer source, Font font, FIXME glyph, double x, double y);
    }

    static final void connect(Renderer self, PangoRenderer.DrawGlyphSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "draw-glyph", after);
    }

    protected static final void receiveDrawGlyph(Signal handler, long source, long font, java.lang.Object glyph, double x, double y) {
        ((PangoRenderer.DrawGlyphSignal) handler).onDrawGlyph((Renderer) objectFor(source), (Font) objectFor(font), (FIXME) glyph, x, y);
    }

    interface DrawGlyphItemSignal extends Signal
    {
        void onDrawGlyphItem(Renderer source, String text, FIXME glyphItem, int x, int y);
    }

    static final void connect(Renderer self, PangoRenderer.DrawGlyphItemSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "draw-glyph-item", after);
    }

    protected static final void receiveDrawGlyphItem(Signal handler, long source, String text, java.lang.Object glyphItem, int x, int y) {
        ((PangoRenderer.DrawGlyphItemSignal) handler).onDrawGlyphItem((Renderer) objectFor(source), text, (FIXME) glyphItem, x, y);
    }

    interface DrawGlyphsSignal extends Signal
    {
        void onDrawGlyphs(Renderer source, Font font, GlyphString glyphs, int x, int y);
    }

    static final void connect(Renderer self, PangoRenderer.DrawGlyphsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "draw-glyphs", after);
    }

    protected static final void receiveDrawGlyphs(Signal handler, long source, long font, long glyphs, int x, int y) {
        ((PangoRenderer.DrawGlyphsSignal) handler).onDrawGlyphs((Renderer) objectFor(source), (Font) objectFor(font), (GlyphString) boxedFor(GlyphString.class, glyphs), x, y);
    }

    interface DrawRectangleSignal extends Signal
    {
        void onDrawRectangle(Renderer source, RenderPart part, int x, int y, int width, int height);
    }

    static final void connect(Renderer self, PangoRenderer.DrawRectangleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "draw-rectangle", after);
    }

    protected static final void receiveDrawRectangle(Signal handler, long source, int part, int x, int y, int width, int height) {
        ((PangoRenderer.DrawRectangleSignal) handler).onDrawRectangle((Renderer) objectFor(source), (RenderPart) enumFor(RenderPart.class, part), x, y, width, height);
    }

    interface DrawShapeSignal extends Signal
    {
        void onDrawShape(Renderer source, FIXME attr, int x, int y);
    }

    static final void connect(Renderer self, PangoRenderer.DrawShapeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "draw-shape", after);
    }

    protected static final void receiveDrawShape(Signal handler, long source, java.lang.Object attr, int x, int y) {
        ((PangoRenderer.DrawShapeSignal) handler).onDrawShape((Renderer) objectFor(source), (FIXME) attr, x, y);
    }

    interface DrawTrapezoidSignal extends Signal
    {
        void onDrawTrapezoid(Renderer source, RenderPart part, double y1, double x11, double x21, double y2, double x12, double x22);
    }

    static final void connect(Renderer self, PangoRenderer.DrawTrapezoidSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "draw-trapezoid", after);
    }

    protected static final void receiveDrawTrapezoid(Signal handler, long source, int part, double y1, double x11, double x21, double y2, double x12, double x22) {
        ((PangoRenderer.DrawTrapezoidSignal) handler).onDrawTrapezoid((Renderer) objectFor(source), (RenderPart) enumFor(RenderPart.class, part), y1, x11, x21, y2, x12, x22);
    }

    interface EndSignal extends Signal
    {
        void onEnd(Renderer source);
    }

    static final void connect(Renderer self, PangoRenderer.EndSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "end", after);
    }

    protected static final void receiveEnd(Signal handler, long source) {
        ((PangoRenderer.EndSignal) handler).onEnd((Renderer) objectFor(source));
    }

    interface PartChangedSignal extends Signal
    {
        void onPartChanged(Renderer source, RenderPart part);
    }

    static final void connect(Renderer self, PangoRenderer.PartChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "part-changed", after);
    }

    protected static final void receivePartChanged(Signal handler, long source, int part) {
        ((PangoRenderer.PartChangedSignal) handler).onPartChanged((Renderer) objectFor(source), (RenderPart) enumFor(RenderPart.class, part));
    }

    interface PrepareRunSignal extends Signal
    {
        void onPrepareRun(Renderer source, FIXME run);
    }

    static final void connect(Renderer self, PangoRenderer.PrepareRunSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, PangoRenderer.class, "prepare-run", after);
    }

    protected static final void receivePrepareRun(Signal handler, long source, java.lang.Object run) {
        ((PangoRenderer.PrepareRunSignal) handler).onPrepareRun((Renderer) objectFor(source), (FIXME) run);
    }
}

