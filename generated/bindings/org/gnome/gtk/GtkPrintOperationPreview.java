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
package org.gnome.gtk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.PageSetup;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PrintContext;
import org.gnome.gtk.PrintOperationPreview;

final class GtkPrintOperationPreview extends Plumbing
{
    private GtkPrintOperationPreview() {}

    static final void endPreview(PrintOperationPreview self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_preview_end_preview(pointerOf((Object) self));
        }
    }

    private static native final void gtk_print_operation_preview_end_preview(long self);

    static final boolean isSelected(PrintOperationPreview self, int pageNr) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_preview_is_selected(pointerOf((Object) self), pageNr);

            return result;
        }
    }

    private static native final boolean gtk_print_operation_preview_is_selected(long self, int pageNr);

    static final void renderPage(PrintOperationPreview self, int pageNr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_preview_render_page(pointerOf((Object) self), pageNr);
        }
    }

    private static native final void gtk_print_operation_preview_render_page(long self, int pageNr);

    interface EndPreviewSignal extends Signal
    {
        void onEndPreview(PrintOperationPreview source);
    }

    static final void connect(PrintOperationPreview self, GtkPrintOperationPreview.EndPreviewSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkPrintOperationPreview.class, "end-preview", after);
    }

    protected static final void receiveEndPreview(Signal handler, long source) {
        ((GtkPrintOperationPreview.EndPreviewSignal) handler).onEndPreview((PrintOperationPreview) objectFor(source));
    }

    interface GotPageSizeSignal extends Signal
    {
        void onGotPageSize(PrintOperationPreview source, PrintContext context, PageSetup pageSetup);
    }

    static final void connect(PrintOperationPreview self, GtkPrintOperationPreview.GotPageSizeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkPrintOperationPreview.class, "got-page-size", after);
    }

    protected static final void receiveGotPageSize(Signal handler, long source, long context, long pageSetup) {
        ((GtkPrintOperationPreview.GotPageSizeSignal) handler).onGotPageSize((PrintOperationPreview) objectFor(source), (PrintContext) objectFor(context), (PageSetup) objectFor(pageSetup));
    }

    interface IsSelectedSignal extends Signal
    {
        boolean onIsSelected(PrintOperationPreview source, int pageNr);
    }

    static final void connect(PrintOperationPreview self, GtkPrintOperationPreview.IsSelectedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkPrintOperationPreview.class, "is-selected", after);
    }

    protected static final boolean receiveIsSelected(Signal handler, long source, int pageNr) {
        boolean result;

        result = ((GtkPrintOperationPreview.IsSelectedSignal) handler).onIsSelected((PrintOperationPreview) objectFor(source), pageNr);

        return result;
    }

    interface ReadySignal extends Signal
    {
        void onReady(PrintOperationPreview source, PrintContext context);
    }

    static final void connect(PrintOperationPreview self, GtkPrintOperationPreview.ReadySignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkPrintOperationPreview.class, "ready", after);
    }

    protected static final void receiveReady(Signal handler, long source, long context) {
        ((GtkPrintOperationPreview.ReadySignal) handler).onReady((PrintOperationPreview) objectFor(source), (PrintContext) objectFor(context));
    }

    interface RenderPageSignal extends Signal
    {
        void onRenderPage(PrintOperationPreview source, int pageNr);
    }

    static final void connect(PrintOperationPreview self, GtkPrintOperationPreview.RenderPageSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkPrintOperationPreview.class, "render-page", after);
    }

    protected static final void receiveRenderPage(Signal handler, long source, int pageNr) {
        ((GtkPrintOperationPreview.RenderPageSignal) handler).onRenderPage((PrintOperationPreview) objectFor(source), pageNr);
    }
}

