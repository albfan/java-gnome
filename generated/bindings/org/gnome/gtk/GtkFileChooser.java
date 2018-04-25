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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.glib.GlibException;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.FileChooser;
import org.gnome.gtk.FileChooserAction;
import org.gnome.gtk.FileChooserConfirmation;
import org.gnome.gtk.FileFilter;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkFileChooser extends Plumbing
{
    private GtkFileChooser() {}

    static final void addChoice(FileChooser self, String id, String label, String[] options, String[] optionLabels) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (id == null) {
            throw new IllegalArgumentException("id can't be null");
        }

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_add_choice(pointerOf((Object) self), id, label, options, optionLabels);
        }
    }

    private static native final void gtk_file_chooser_add_choice(long self, String id, String label, String[] options, String[] optionLabels);

    static final void addFilter(FileChooser self, FileFilter filter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filter == null) {
            throw new IllegalArgumentException("filter can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_add_filter(pointerOf((Object) self), pointerOf(filter));
        }
    }

    private static native final void gtk_file_chooser_add_filter(long self, long filter);

    static final boolean addShortcutFolder(FileChooser self, String folder) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (folder == null) {
            throw new IllegalArgumentException("folder can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_add_shortcut_folder(pointerOf((Object) self), folder);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_add_shortcut_folder(long self, String folder) throws GlibException;

    static final boolean addShortcutFolderUri(FileChooser self, String uri) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_add_shortcut_folder_uri(pointerOf((Object) self), uri);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_add_shortcut_folder_uri(long self, String uri) throws GlibException;

    static final FileChooserAction getAction(FileChooser self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_action(pointerOf((Object) self));

            return (FileChooserAction) enumFor(FileChooserAction.class, result);
        }
    }

    private static native final int gtk_file_chooser_get_action(long self);

    static final String getChoice(FileChooser self, String id) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (id == null) {
            throw new IllegalArgumentException("id can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_choice(pointerOf((Object) self), id);

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_choice(long self, String id);

    static final boolean getCreateFolders(FileChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_create_folders(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_get_create_folders(long self);

    static final String getCurrentFolder(FileChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_current_folder(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_current_folder(long self);

    static final String getCurrentFolderUri(FileChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_current_folder_uri(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_current_folder_uri(long self);

    static final String getCurrentName(FileChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_current_name(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_current_name(long self);

    static final boolean getDoOverwriteConfirmation(FileChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_do_overwrite_confirmation(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_get_do_overwrite_confirmation(long self);

    static final Widget getExtraWidget(FileChooser self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_extra_widget(pointerOf((Object) self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_file_chooser_get_extra_widget(long self);

    static final String getFilename(FileChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_filename(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_filename(long self);

    @SuppressWarnings("unused")
    static final FIXME getFilenames(FileChooser self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList-filename*");
    }

    static final FileFilter getFilter(FileChooser self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_filter(pointerOf((Object) self));

            return (FileFilter) objectFor(result);
        }
    }

    private static native final long gtk_file_chooser_get_filter(long self);

    static final boolean getLocalOnly(FileChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_local_only(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_get_local_only(long self);

    static final String getPreviewFilename(FileChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_preview_filename(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_preview_filename(long self);

    static final String getPreviewUri(FileChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_preview_uri(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_preview_uri(long self);

    static final Widget getPreviewWidget(FileChooser self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_preview_widget(pointerOf((Object) self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_file_chooser_get_preview_widget(long self);

    static final boolean getPreviewWidgetActive(FileChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_preview_widget_active(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_get_preview_widget_active(long self);

    static final boolean getSelectMultiple(FileChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_select_multiple(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_get_select_multiple(long self);

    static final boolean getShowHidden(FileChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_show_hidden(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_get_show_hidden(long self);

    static final String getUri(FileChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_uri(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_get_uri(long self);

    @SuppressWarnings("unused")
    static final FIXME getUris(FileChooser self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList-utf8*");
    }

    static final boolean getUsePreviewLabel(FileChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_get_use_preview_label(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_get_use_preview_label(long self);

    static final FileFilter[] listFilters(FileChooser self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_list_filters(pointerOf((Object) self));

            return (FileFilter[]) objectArrayFor(result, new FileFilter[result.length]);
        }
    }

    private static native final long[] gtk_file_chooser_list_filters(long self);

    @SuppressWarnings("unused")
    static final FIXME listShortcutFolderUris(FileChooser self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList-utf8*");
    }

    @SuppressWarnings("unused")
    static final FIXME listShortcutFolders(FileChooser self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList-filename*");
    }

    static final void removeChoice(FileChooser self, String id) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (id == null) {
            throw new IllegalArgumentException("id can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_remove_choice(pointerOf((Object) self), id);
        }
    }

    private static native final void gtk_file_chooser_remove_choice(long self, String id);

    static final void removeFilter(FileChooser self, FileFilter filter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filter == null) {
            throw new IllegalArgumentException("filter can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_remove_filter(pointerOf((Object) self), pointerOf(filter));
        }
    }

    private static native final void gtk_file_chooser_remove_filter(long self, long filter);

    static final boolean removeShortcutFolder(FileChooser self, String folder) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (folder == null) {
            throw new IllegalArgumentException("folder can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_remove_shortcut_folder(pointerOf((Object) self), folder);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_remove_shortcut_folder(long self, String folder) throws GlibException;

    static final boolean removeShortcutFolderUri(FileChooser self, String uri) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_remove_shortcut_folder_uri(pointerOf((Object) self), uri);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_remove_shortcut_folder_uri(long self, String uri) throws GlibException;

    static final void selectAll(FileChooser self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_select_all(pointerOf((Object) self));
        }
    }

    private static native final void gtk_file_chooser_select_all(long self);

    static final boolean selectFilename(FileChooser self, String filename) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_select_filename(pointerOf((Object) self), filename);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_select_filename(long self, String filename);

    static final boolean selectUri(FileChooser self, String uri) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_select_uri(pointerOf((Object) self), uri);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_select_uri(long self, String uri);

    static final void setAction(FileChooser self, FileChooserAction action) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_action(pointerOf((Object) self), numOf(action));
        }
    }

    private static native final void gtk_file_chooser_set_action(long self, int action);

    static final void setChoice(FileChooser self, String id, String option) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (id == null) {
            throw new IllegalArgumentException("id can't be null");
        }

        if (option == null) {
            throw new IllegalArgumentException("option can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_choice(pointerOf((Object) self), id, option);
        }
    }

    private static native final void gtk_file_chooser_set_choice(long self, String id, String option);

    static final void setCreateFolders(FileChooser self, boolean createFolders) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_create_folders(pointerOf((Object) self), createFolders);
        }
    }

    private static native final void gtk_file_chooser_set_create_folders(long self, boolean createFolders);

    static final boolean setCurrentFolder(FileChooser self, String filename) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_set_current_folder(pointerOf((Object) self), filename);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_set_current_folder(long self, String filename);

    static final boolean setCurrentFolderUri(FileChooser self, String uri) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_set_current_folder_uri(pointerOf((Object) self), uri);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_set_current_folder_uri(long self, String uri);

    static final void setCurrentName(FileChooser self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_current_name(pointerOf((Object) self), name);
        }
    }

    private static native final void gtk_file_chooser_set_current_name(long self, String name);

    static final void setDoOverwriteConfirmation(FileChooser self, boolean doOverwriteConfirmation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_do_overwrite_confirmation(pointerOf((Object) self), doOverwriteConfirmation);
        }
    }

    private static native final void gtk_file_chooser_set_do_overwrite_confirmation(long self, boolean doOverwriteConfirmation);

    static final void setExtraWidget(FileChooser self, Widget extraWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (extraWidget == null) {
            throw new IllegalArgumentException("extraWidget can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_extra_widget(pointerOf((Object) self), pointerOf(extraWidget));
        }
    }

    private static native final void gtk_file_chooser_set_extra_widget(long self, long extraWidget);

    static final boolean setFilename(FileChooser self, String filename) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_set_filename(pointerOf((Object) self), filename);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_set_filename(long self, String filename);

    static final void setFilter(FileChooser self, FileFilter filter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filter == null) {
            throw new IllegalArgumentException("filter can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_filter(pointerOf((Object) self), pointerOf(filter));
        }
    }

    private static native final void gtk_file_chooser_set_filter(long self, long filter);

    static final void setLocalOnly(FileChooser self, boolean localOnly) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_local_only(pointerOf((Object) self), localOnly);
        }
    }

    private static native final void gtk_file_chooser_set_local_only(long self, boolean localOnly);

    static final void setPreviewWidget(FileChooser self, Widget previewWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (previewWidget == null) {
            throw new IllegalArgumentException("previewWidget can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_preview_widget(pointerOf((Object) self), pointerOf(previewWidget));
        }
    }

    private static native final void gtk_file_chooser_set_preview_widget(long self, long previewWidget);

    static final void setPreviewWidgetActive(FileChooser self, boolean active) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_preview_widget_active(pointerOf((Object) self), active);
        }
    }

    private static native final void gtk_file_chooser_set_preview_widget_active(long self, boolean active);

    static final void setSelectMultiple(FileChooser self, boolean selectMultiple) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_select_multiple(pointerOf((Object) self), selectMultiple);
        }
    }

    private static native final void gtk_file_chooser_set_select_multiple(long self, boolean selectMultiple);

    static final void setShowHidden(FileChooser self, boolean showHidden) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_show_hidden(pointerOf((Object) self), showHidden);
        }
    }

    private static native final void gtk_file_chooser_set_show_hidden(long self, boolean showHidden);

    static final boolean setUri(FileChooser self, String uri) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_set_uri(pointerOf((Object) self), uri);

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_set_uri(long self, String uri);

    static final void setUsePreviewLabel(FileChooser self, boolean useLabel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_set_use_preview_label(pointerOf((Object) self), useLabel);
        }
    }

    private static native final void gtk_file_chooser_set_use_preview_label(long self, boolean useLabel);

    static final void unselectAll(FileChooser self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_unselect_all(pointerOf((Object) self));
        }
    }

    private static native final void gtk_file_chooser_unselect_all(long self);

    static final void unselectFilename(FileChooser self, String filename) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_unselect_filename(pointerOf((Object) self), filename);
        }
    }

    private static native final void gtk_file_chooser_unselect_filename(long self, String filename);

    static final void unselectUri(FileChooser self, String uri) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_unselect_uri(pointerOf((Object) self), uri);
        }
    }

    private static native final void gtk_file_chooser_unselect_uri(long self, String uri);

    interface ConfirmOverwriteSignal extends Signal
    {
        FileChooserConfirmation onConfirmOverwrite(FileChooser source);
    }

    static final void connect(FileChooser self, GtkFileChooser.ConfirmOverwriteSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkFileChooser.class, "confirm-overwrite", after);
    }

    protected static final int receiveConfirmOverwrite(Signal handler, long source) {
        FileChooserConfirmation result;

        result = ((GtkFileChooser.ConfirmOverwriteSignal) handler).onConfirmOverwrite((FileChooser) objectFor(source));

        return numOf(result);
    }

    interface CurrentFolderChangedSignal extends Signal
    {
        void onCurrentFolderChanged(FileChooser source);
    }

    static final void connect(FileChooser self, GtkFileChooser.CurrentFolderChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkFileChooser.class, "current-folder-changed", after);
    }

    protected static final void receiveCurrentFolderChanged(Signal handler, long source) {
        ((GtkFileChooser.CurrentFolderChangedSignal) handler).onCurrentFolderChanged((FileChooser) objectFor(source));
    }

    interface FileActivatedSignal extends Signal
    {
        void onFileActivated(FileChooser source);
    }

    static final void connect(FileChooser self, GtkFileChooser.FileActivatedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkFileChooser.class, "file-activated", after);
    }

    protected static final void receiveFileActivated(Signal handler, long source) {
        ((GtkFileChooser.FileActivatedSignal) handler).onFileActivated((FileChooser) objectFor(source));
    }

    interface SelectionChangedSignal extends Signal
    {
        void onSelectionChanged(FileChooser source);
    }

    static final void connect(FileChooser self, GtkFileChooser.SelectionChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkFileChooser.class, "selection-changed", after);
    }

    protected static final void receiveSelectionChanged(Signal handler, long source) {
        ((GtkFileChooser.SelectionChangedSignal) handler).onSelectionChanged((FileChooser) objectFor(source));
    }

    interface UpdatePreviewSignal extends Signal
    {
        void onUpdatePreview(FileChooser source);
    }

    static final void connect(FileChooser self, GtkFileChooser.UpdatePreviewSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkFileChooser.class, "update-preview", after);
    }

    protected static final void receiveUpdatePreview(Signal handler, long source) {
        ((GtkFileChooser.UpdatePreviewSignal) handler).onUpdatePreview((FileChooser) objectFor(source));
    }
}

