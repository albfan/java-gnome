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

import org.gnome.glib.Signal;
import org.gnome.gtk.FileChooserAction;
import org.gnome.gtk.Plumbing;

final class GtkFileChooserWidget extends Plumbing
{
    private GtkFileChooserWidget() {}

    static final long createFileChooserWidget(FileChooserAction action) {
        long result;

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_widget_new(numOf(action));

            return result;
        }
    }

    private static native final long gtk_file_chooser_widget_new(int action);

    interface DesktopFolderSignal extends Signal
    {
        void onDesktopFolder(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.DesktopFolderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "desktop-folder", after);
    }

    protected static final void receiveDesktopFolder(Signal handler, long source) {
        ((GtkFileChooserWidget.DesktopFolderSignal) handler).onDesktopFolder((FileChooserWidget) objectFor(source));
    }

    interface DownFolderSignal extends Signal
    {
        void onDownFolder(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.DownFolderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "down-folder", after);
    }

    protected static final void receiveDownFolder(Signal handler, long source) {
        ((GtkFileChooserWidget.DownFolderSignal) handler).onDownFolder((FileChooserWidget) objectFor(source));
    }

    interface HomeFolderSignal extends Signal
    {
        void onHomeFolder(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.HomeFolderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "home-folder", after);
    }

    protected static final void receiveHomeFolder(Signal handler, long source) {
        ((GtkFileChooserWidget.HomeFolderSignal) handler).onHomeFolder((FileChooserWidget) objectFor(source));
    }

    interface LocationPopupSignal extends Signal
    {
        void onLocationPopup(FileChooserWidget source, String path);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.LocationPopupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "location-popup", after);
    }

    protected static final void receiveLocationPopup(Signal handler, long source, String path) {
        ((GtkFileChooserWidget.LocationPopupSignal) handler).onLocationPopup((FileChooserWidget) objectFor(source), path);
    }

    interface LocationPopupOnPasteSignal extends Signal
    {
        void onLocationPopupOnPaste(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.LocationPopupOnPasteSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "location-popup-on-paste", after);
    }

    protected static final void receiveLocationPopupOnPaste(Signal handler, long source) {
        ((GtkFileChooserWidget.LocationPopupOnPasteSignal) handler).onLocationPopupOnPaste((FileChooserWidget) objectFor(source));
    }

    interface LocationTogglePopupSignal extends Signal
    {
        void onLocationTogglePopup(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.LocationTogglePopupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "location-toggle-popup", after);
    }

    protected static final void receiveLocationTogglePopup(Signal handler, long source) {
        ((GtkFileChooserWidget.LocationTogglePopupSignal) handler).onLocationTogglePopup((FileChooserWidget) objectFor(source));
    }

    interface PlacesShortcutSignal extends Signal
    {
        void onPlacesShortcut(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.PlacesShortcutSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "places-shortcut", after);
    }

    protected static final void receivePlacesShortcut(Signal handler, long source) {
        ((GtkFileChooserWidget.PlacesShortcutSignal) handler).onPlacesShortcut((FileChooserWidget) objectFor(source));
    }

    interface QuickBookmarkSignal extends Signal
    {
        void onQuickBookmark(FileChooserWidget source, int bookmarkIndex);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.QuickBookmarkSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "quick-bookmark", after);
    }

    protected static final void receiveQuickBookmark(Signal handler, long source, int bookmarkIndex) {
        ((GtkFileChooserWidget.QuickBookmarkSignal) handler).onQuickBookmark((FileChooserWidget) objectFor(source), bookmarkIndex);
    }

    interface RecentShortcutSignal extends Signal
    {
        void onRecentShortcut(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.RecentShortcutSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "recent-shortcut", after);
    }

    protected static final void receiveRecentShortcut(Signal handler, long source) {
        ((GtkFileChooserWidget.RecentShortcutSignal) handler).onRecentShortcut((FileChooserWidget) objectFor(source));
    }

    interface SearchShortcutSignal extends Signal
    {
        void onSearchShortcut(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.SearchShortcutSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "search-shortcut", after);
    }

    protected static final void receiveSearchShortcut(Signal handler, long source) {
        ((GtkFileChooserWidget.SearchShortcutSignal) handler).onSearchShortcut((FileChooserWidget) objectFor(source));
    }

    interface ShowHiddenSignal extends Signal
    {
        void onShowHidden(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.ShowHiddenSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "show-hidden", after);
    }

    protected static final void receiveShowHidden(Signal handler, long source) {
        ((GtkFileChooserWidget.ShowHiddenSignal) handler).onShowHidden((FileChooserWidget) objectFor(source));
    }

    interface UpFolderSignal extends Signal
    {
        void onUpFolder(FileChooserWidget source);
    }

    static final void connect(FileChooserWidget self, GtkFileChooserWidget.UpFolderSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserWidget.class, "up-folder", after);
    }

    protected static final void receiveUpFolder(Signal handler, long source) {
        ((GtkFileChooserWidget.UpFolderSignal) handler).onUpFolder((FileChooserWidget) objectFor(source));
    }
}

