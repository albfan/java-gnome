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

import org.gnome.glib.GlibException;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.PageSetup;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PrintContext;
import org.gnome.gtk.PrintOperation;
import org.gnome.gtk.PrintOperationAction;
import org.gnome.gtk.PrintOperationPreview;
import org.gnome.gtk.PrintOperationResult;
import org.gnome.gtk.PrintSettings;
import org.gnome.gtk.PrintStatus;
import org.gnome.gtk.Unit;
import org.gnome.gtk.Widget;
import org.gnome.gtk.Window;

final class GtkPrintOperation extends Plumbing
{
    private GtkPrintOperation() {}

    static final long createPrintOperation() {
        long result;

        synchronized (lock) {
            result = gtk_print_operation_new();

            return result;
        }
    }

    private static native final long gtk_print_operation_new();

    static final void cancel(PrintOperation self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_cancel(pointerOf(self));
        }
    }

    private static native final void gtk_print_operation_cancel(long self);

    static final void drawPageFinish(PrintOperation self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_draw_page_finish(pointerOf(self));
        }
    }

    private static native final void gtk_print_operation_draw_page_finish(long self);

    static final PageSetup getDefaultPageSetup(PrintOperation self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_default_page_setup(pointerOf(self));

            return (PageSetup) objectFor(result);
        }
    }

    private static native final long gtk_print_operation_get_default_page_setup(long self);

    static final boolean getEmbedPageSetup(PrintOperation self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_embed_page_setup(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_print_operation_get_embed_page_setup(long self);

    static final void getError(PrintOperation self) throws GlibException {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_get_error(pointerOf(self));
        }
    }

    private static native final void gtk_print_operation_get_error(long self) throws GlibException;

    static final boolean getHasSelection(PrintOperation self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_has_selection(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_print_operation_get_has_selection(long self);

    static final int getNPagesToPrint(PrintOperation self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_n_pages_to_print(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_print_operation_get_n_pages_to_print(long self);

    static final PrintSettings getPrintSettings(PrintOperation self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_print_settings(pointerOf(self));

            return (PrintSettings) objectFor(result);
        }
    }

    private static native final long gtk_print_operation_get_print_settings(long self);

    static final PrintStatus getStatus(PrintOperation self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_status(pointerOf(self));

            return (PrintStatus) enumFor(PrintStatus.class, result);
        }
    }

    private static native final int gtk_print_operation_get_status(long self);

    static final String getStatusString(PrintOperation self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_status_string(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_print_operation_get_status_string(long self);

    static final boolean getSupportSelection(PrintOperation self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_get_support_selection(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_print_operation_get_support_selection(long self);

    static final boolean isFinished(PrintOperation self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_is_finished(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_print_operation_is_finished(long self);

    static final PrintOperationResult run(PrintOperation self, PrintOperationAction action, Window parent) throws GlibException {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            result = gtk_print_operation_run(pointerOf(self), numOf(action), pointerOf(parent));

            return (PrintOperationResult) enumFor(PrintOperationResult.class, result);
        }
    }

    private static native final int gtk_print_operation_run(long self, int action, long parent) throws GlibException;

    static final void setAllowAsync(PrintOperation self, boolean allowAsync) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_allow_async(pointerOf(self), allowAsync);
        }
    }

    private static native final void gtk_print_operation_set_allow_async(long self, boolean allowAsync);

    static final void setCurrentPage(PrintOperation self, int currentPage) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_current_page(pointerOf(self), currentPage);
        }
    }

    private static native final void gtk_print_operation_set_current_page(long self, int currentPage);

    static final void setCustomTabLabel(PrintOperation self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_custom_tab_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_print_operation_set_custom_tab_label(long self, String label);

    static final void setDefaultPageSetup(PrintOperation self, PageSetup defaultPageSetup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_default_page_setup(pointerOf(self), pointerOf(defaultPageSetup));
        }
    }

    private static native final void gtk_print_operation_set_default_page_setup(long self, long defaultPageSetup);

    static final void setDeferDrawing(PrintOperation self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_defer_drawing(pointerOf(self));
        }
    }

    private static native final void gtk_print_operation_set_defer_drawing(long self);

    static final void setEmbedPageSetup(PrintOperation self, boolean embed) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_embed_page_setup(pointerOf(self), embed);
        }
    }

    private static native final void gtk_print_operation_set_embed_page_setup(long self, boolean embed);

    static final void setExportFilename(PrintOperation self, String filename) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_export_filename(pointerOf(self), filename);
        }
    }

    private static native final void gtk_print_operation_set_export_filename(long self, String filename);

    static final void setHasSelection(PrintOperation self, boolean hasSelection) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_has_selection(pointerOf(self), hasSelection);
        }
    }

    private static native final void gtk_print_operation_set_has_selection(long self, boolean hasSelection);

    static final void setJobName(PrintOperation self, String jobName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (jobName == null) {
            throw new IllegalArgumentException("jobName can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_job_name(pointerOf(self), jobName);
        }
    }

    private static native final void gtk_print_operation_set_job_name(long self, String jobName);

    static final void setNPages(PrintOperation self, int nPages) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_n_pages(pointerOf(self), nPages);
        }
    }

    private static native final void gtk_print_operation_set_n_pages(long self, int nPages);

    static final void setPrintSettings(PrintOperation self, PrintSettings printSettings) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_print_settings(pointerOf(self), pointerOf(printSettings));
        }
    }

    private static native final void gtk_print_operation_set_print_settings(long self, long printSettings);

    static final void setShowProgress(PrintOperation self, boolean showProgress) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_show_progress(pointerOf(self), showProgress);
        }
    }

    private static native final void gtk_print_operation_set_show_progress(long self, boolean showProgress);

    static final void setSupportSelection(PrintOperation self, boolean supportSelection) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_support_selection(pointerOf(self), supportSelection);
        }
    }

    private static native final void gtk_print_operation_set_support_selection(long self, boolean supportSelection);

    static final void setTrackPrintStatus(PrintOperation self, boolean trackStatus) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_track_print_status(pointerOf(self), trackStatus);
        }
    }

    private static native final void gtk_print_operation_set_track_print_status(long self, boolean trackStatus);

    static final void setUnit(PrintOperation self, Unit unit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (unit == null) {
            throw new IllegalArgumentException("unit can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_unit(pointerOf(self), numOf(unit));
        }
    }

    private static native final void gtk_print_operation_set_unit(long self, int unit);

    static final void setUseFullPage(PrintOperation self, boolean fullPage) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_print_operation_set_use_full_page(pointerOf(self), fullPage);
        }
    }

    private static native final void gtk_print_operation_set_use_full_page(long self, boolean fullPage);

    interface BeginPrintSignal extends Signal
    {
        void onBeginPrint(PrintOperation source, PrintContext context);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.BeginPrintSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "begin-print", after);
    }

    protected static final void receiveBeginPrint(Signal handler, long source, long context) {
        ((GtkPrintOperation.BeginPrintSignal) handler).onBeginPrint((PrintOperation) objectFor(source), (PrintContext) objectFor(context));
    }

    interface CreateCustomWidgetSignal extends Signal
    {
        Widget onCreateCustomWidget(PrintOperation source);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.CreateCustomWidgetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "create-custom-widget", after);
    }

    protected static final long receiveCreateCustomWidget(Signal handler, long source) {
        Widget result;

        result = ((GtkPrintOperation.CreateCustomWidgetSignal) handler).onCreateCustomWidget((PrintOperation) objectFor(source));

        return pointerOf(result);
    }

    interface CustomWidgetApplySignal extends Signal
    {
        void onCustomWidgetApply(PrintOperation source, Widget widget);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.CustomWidgetApplySignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "custom-widget-apply", after);
    }

    protected static final void receiveCustomWidgetApply(Signal handler, long source, long widget) {
        ((GtkPrintOperation.CustomWidgetApplySignal) handler).onCustomWidgetApply((PrintOperation) objectFor(source), (Widget) objectFor(widget));
    }

    interface DoneSignal extends Signal
    {
        void onDone(PrintOperation source, PrintOperationResult result0);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.DoneSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "done", after);
    }

    protected static final void receiveDone(Signal handler, long source, int result0) {
        ((GtkPrintOperation.DoneSignal) handler).onDone((PrintOperation) objectFor(source), (PrintOperationResult) enumFor(PrintOperationResult.class, result0));
    }

    interface DrawPageSignal extends Signal
    {
        void onDrawPage(PrintOperation source, PrintContext context, int pageNr);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.DrawPageSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "draw-page", after);
    }

    protected static final void receiveDrawPage(Signal handler, long source, long context, int pageNr) {
        ((GtkPrintOperation.DrawPageSignal) handler).onDrawPage((PrintOperation) objectFor(source), (PrintContext) objectFor(context), pageNr);
    }

    interface EndPrintSignal extends Signal
    {
        void onEndPrint(PrintOperation source, PrintContext context);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.EndPrintSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "end-print", after);
    }

    protected static final void receiveEndPrint(Signal handler, long source, long context) {
        ((GtkPrintOperation.EndPrintSignal) handler).onEndPrint((PrintOperation) objectFor(source), (PrintContext) objectFor(context));
    }

    interface PaginateSignal extends Signal
    {
        boolean onPaginate(PrintOperation source, PrintContext context);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.PaginateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "paginate", after);
    }

    protected static final boolean receivePaginate(Signal handler, long source, long context) {
        boolean result;

        result = ((GtkPrintOperation.PaginateSignal) handler).onPaginate((PrintOperation) objectFor(source), (PrintContext) objectFor(context));

        return result;
    }

    interface PreviewSignal extends Signal
    {
        boolean onPreview(PrintOperation source, PrintOperationPreview preview, PrintContext context, Window parent);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.PreviewSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "preview", after);
    }

    protected static final boolean receivePreview(Signal handler, long source, long preview, long context, long parent) {
        boolean result;

        result = ((GtkPrintOperation.PreviewSignal) handler).onPreview((PrintOperation) objectFor(source), (PrintOperationPreview) objectFor(preview), (PrintContext) objectFor(context), (Window) objectFor(parent));

        return result;
    }

    interface RequestPageSetupSignal extends Signal
    {
        void onRequestPageSetup(PrintOperation source, PrintContext context, int pageNr, PageSetup setup);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.RequestPageSetupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "request-page-setup", after);
    }

    protected static final void receiveRequestPageSetup(Signal handler, long source, long context, int pageNr, long setup) {
        ((GtkPrintOperation.RequestPageSetupSignal) handler).onRequestPageSetup((PrintOperation) objectFor(source), (PrintContext) objectFor(context), pageNr, (PageSetup) objectFor(setup));
    }

    interface StatusChangedSignal extends Signal
    {
        void onStatusChanged(PrintOperation source);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.StatusChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "status-changed", after);
    }

    protected static final void receiveStatusChanged(Signal handler, long source) {
        ((GtkPrintOperation.StatusChangedSignal) handler).onStatusChanged((PrintOperation) objectFor(source));
    }

    interface UpdateCustomWidgetSignal extends Signal
    {
        void onUpdateCustomWidget(PrintOperation source, Widget widget, PageSetup setup, PrintSettings settings);
    }

    static final void connect(PrintOperation self, GtkPrintOperation.UpdateCustomWidgetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkPrintOperation.class, "update-custom-widget", after);
    }

    protected static final void receiveUpdateCustomWidget(Signal handler, long source, long widget, long setup, long settings) {
        ((GtkPrintOperation.UpdateCustomWidgetSignal) handler).onUpdateCustomWidget((PrintOperation) objectFor(source), (Widget) objectFor(widget), (PageSetup) objectFor(setup), (PrintSettings) objectFor(settings));
    }
}

