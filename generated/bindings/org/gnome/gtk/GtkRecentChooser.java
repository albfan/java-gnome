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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.RecentChooser;
import org.gnome.gtk.RecentFilter;
import org.gnome.gtk.RecentInfo;
import org.gnome.gtk.RecentManager;
import org.gnome.gtk.RecentSortType;

final class GtkRecentChooser extends Plumbing
{
    private GtkRecentChooser() {}

    static final void addFilter(RecentChooser self, RecentFilter filter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filter == null) {
            throw new IllegalArgumentException("filter can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_add_filter(pointerOf((Object) self), pointerOf(filter));
        }
    }

    private static native final void gtk_recent_chooser_add_filter(long self, long filter);

    static final RecentInfo getCurrentItem(RecentChooser self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_current_item(pointerOf((Object) self));

            return (RecentInfo) boxedFor(RecentInfo.class, result);
        }
    }

    private static native final long gtk_recent_chooser_get_current_item(long self);

    static final String getCurrentUri(RecentChooser self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_current_uri(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String gtk_recent_chooser_get_current_uri(long self);

    static final RecentFilter getFilter(RecentChooser self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_filter(pointerOf((Object) self));

            return (RecentFilter) objectFor(result);
        }
    }

    private static native final long gtk_recent_chooser_get_filter(long self);

    static final RecentInfo[] getItems(RecentChooser self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_items(pointerOf((Object) self));

            return (RecentInfo[]) boxedArrayFor(RecentInfo.class, result, new RecentInfo[result.length]);
        }
    }

    private static native final long[] gtk_recent_chooser_get_items(long self);

    static final int getLimit(RecentChooser self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_limit(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int gtk_recent_chooser_get_limit(long self);

    static final boolean getLocalOnly(RecentChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_local_only(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_get_local_only(long self);

    static final boolean getSelectMultiple(RecentChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_select_multiple(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_get_select_multiple(long self);

    static final boolean getShowIcons(RecentChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_show_icons(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_get_show_icons(long self);

    static final boolean getShowNotFound(RecentChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_show_not_found(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_get_show_not_found(long self);

    static final boolean getShowPrivate(RecentChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_show_private(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_get_show_private(long self);

    static final boolean getShowTips(RecentChooser self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_show_tips(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_get_show_tips(long self);

    static final RecentSortType getSortType(RecentChooser self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_sort_type(pointerOf((Object) self));

            return (RecentSortType) enumFor(RecentSortType.class, result);
        }
    }

    private static native final int gtk_recent_chooser_get_sort_type(long self);

    static final String[] getUris(RecentChooser self, long[] length) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_get_uris(pointerOf((Object) self), length);

            return result;
        }
    }

    private static native final String[] gtk_recent_chooser_get_uris(long self, long[] length);

    static final RecentFilter[] listFilters(RecentChooser self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_list_filters(pointerOf((Object) self));

            return (RecentFilter[]) objectArrayFor(result, new RecentFilter[result.length]);
        }
    }

    private static native final long[] gtk_recent_chooser_list_filters(long self);

    static final void removeFilter(RecentChooser self, RecentFilter filter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filter == null) {
            throw new IllegalArgumentException("filter can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_remove_filter(pointerOf((Object) self), pointerOf(filter));
        }
    }

    private static native final void gtk_recent_chooser_remove_filter(long self, long filter);

    static final void selectAll(RecentChooser self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_select_all(pointerOf((Object) self));
        }
    }

    private static native final void gtk_recent_chooser_select_all(long self);

    static final boolean selectUri(RecentChooser self, String uri) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_select_uri(pointerOf((Object) self), uri);

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_select_uri(long self, String uri) throws GlibException;

    static final boolean setCurrentUri(RecentChooser self, String uri) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_recent_chooser_set_current_uri(pointerOf((Object) self), uri);

            return result;
        }
    }

    private static native final boolean gtk_recent_chooser_set_current_uri(long self, String uri) throws GlibException;

    static final void setFilter(RecentChooser self, RecentFilter filter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_filter(pointerOf((Object) self), pointerOf(filter));
        }
    }

    private static native final void gtk_recent_chooser_set_filter(long self, long filter);

    static final void setLimit(RecentChooser self, int limit) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_limit(pointerOf((Object) self), limit);
        }
    }

    private static native final void gtk_recent_chooser_set_limit(long self, int limit);

    static final void setLocalOnly(RecentChooser self, boolean localOnly) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_local_only(pointerOf((Object) self), localOnly);
        }
    }

    private static native final void gtk_recent_chooser_set_local_only(long self, boolean localOnly);

    static final void setSelectMultiple(RecentChooser self, boolean selectMultiple) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_select_multiple(pointerOf((Object) self), selectMultiple);
        }
    }

    private static native final void gtk_recent_chooser_set_select_multiple(long self, boolean selectMultiple);

    static final void setShowIcons(RecentChooser self, boolean showIcons) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_show_icons(pointerOf((Object) self), showIcons);
        }
    }

    private static native final void gtk_recent_chooser_set_show_icons(long self, boolean showIcons);

    static final void setShowNotFound(RecentChooser self, boolean showNotFound) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_show_not_found(pointerOf((Object) self), showNotFound);
        }
    }

    private static native final void gtk_recent_chooser_set_show_not_found(long self, boolean showNotFound);

    static final void setShowPrivate(RecentChooser self, boolean showPrivate) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_show_private(pointerOf((Object) self), showPrivate);
        }
    }

    private static native final void gtk_recent_chooser_set_show_private(long self, boolean showPrivate);

    static final void setShowTips(RecentChooser self, boolean showTips) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_show_tips(pointerOf((Object) self), showTips);
        }
    }

    private static native final void gtk_recent_chooser_set_show_tips(long self, boolean showTips);

    @SuppressWarnings("unused")
    static final void setSortFunc(RecentChooser self, FIXME sortFunc, FIXME sortData, FIXME dataDestroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkRecentSortFunc");
    }

    static final void setSortType(RecentChooser self, RecentSortType sortType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sortType == null) {
            throw new IllegalArgumentException("sortType can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_set_sort_type(pointerOf((Object) self), numOf(sortType));
        }
    }

    private static native final void gtk_recent_chooser_set_sort_type(long self, int sortType);

    static final void unselectAll(RecentChooser self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_unselect_all(pointerOf((Object) self));
        }
    }

    private static native final void gtk_recent_chooser_unselect_all(long self);

    static final void unselectUri(RecentChooser self, String uri) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            gtk_recent_chooser_unselect_uri(pointerOf((Object) self), uri);
        }
    }

    private static native final void gtk_recent_chooser_unselect_uri(long self, String uri);

    interface AddFilterSignal extends Signal
    {
        void onAddFilter(RecentChooser source, RecentFilter filter);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.AddFilterSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "add-filter", after);
    }

    protected static final void receiveAddFilter(Signal handler, long source, long filter) {
        ((GtkRecentChooser.AddFilterSignal) handler).onAddFilter((RecentChooser) objectFor(source), (RecentFilter) objectFor(filter));
    }

    interface GetCurrentUriSignal extends Signal
    {
        String onGetCurrentUri(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.GetCurrentUriSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "get-current-uri", after);
    }

    protected static final String receiveGetCurrentUri(Signal handler, long source) {
        String result;

        result = ((GtkRecentChooser.GetCurrentUriSignal) handler).onGetCurrentUri((RecentChooser) objectFor(source));

        return result;
    }

    interface GetItemsSignal extends Signal
    {
        RecentInfo[] onGetItems(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.GetItemsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "get-items", after);
    }

    protected static final long[] receiveGetItems(Signal handler, long source) {
        RecentInfo[] result;
        long[] _result;

        result = ((GtkRecentChooser.GetItemsSignal) handler).onGetItems((RecentChooser) objectFor(source));
        _result = pointersOf(result);

        return _result;
    }

    interface GetRecentManagerSignal extends Signal
    {
        RecentManager onGetRecentManager(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.GetRecentManagerSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "get-recent-manager", after);
    }

    protected static final long receiveGetRecentManager(Signal handler, long source) {
        RecentManager result;

        result = ((GtkRecentChooser.GetRecentManagerSignal) handler).onGetRecentManager((RecentChooser) objectFor(source));

        return pointerOf(result);
    }

    interface ItemActivatedSignal extends Signal
    {
        void onItemActivated(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.ItemActivatedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "item-activated", after);
    }

    protected static final void receiveItemActivated(Signal handler, long source) {
        ((GtkRecentChooser.ItemActivatedSignal) handler).onItemActivated((RecentChooser) objectFor(source));
    }

    interface ListFiltersSignal extends Signal
    {
        RecentFilter[] onListFilters(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.ListFiltersSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "list-filters", after);
    }

    protected static final long[] receiveListFilters(Signal handler, long source) {
        RecentFilter[] result;
        long[] _result;

        result = ((GtkRecentChooser.ListFiltersSignal) handler).onListFilters((RecentChooser) objectFor(source));
        _result = pointersOf(result);

        return _result;
    }

    interface RemoveFilterSignal extends Signal
    {
        void onRemoveFilter(RecentChooser source, RecentFilter filter);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.RemoveFilterSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "remove-filter", after);
    }

    protected static final void receiveRemoveFilter(Signal handler, long source, long filter) {
        ((GtkRecentChooser.RemoveFilterSignal) handler).onRemoveFilter((RecentChooser) objectFor(source), (RecentFilter) objectFor(filter));
    }

    interface SelectAllSignal extends Signal
    {
        void onSelectAll(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.SelectAllSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "select-all", after);
    }

    protected static final void receiveSelectAll(Signal handler, long source) {
        ((GtkRecentChooser.SelectAllSignal) handler).onSelectAll((RecentChooser) objectFor(source));
    }

    interface SelectUriSignal extends Signal
    {
        boolean onSelectUri(RecentChooser source, String uri);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.SelectUriSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "select-uri", after);
    }

    protected static final boolean receiveSelectUri(Signal handler, long source, String uri) {
        boolean result;

        result = ((GtkRecentChooser.SelectUriSignal) handler).onSelectUri((RecentChooser) objectFor(source), uri);

        return result;
    }

    interface SelectionChangedSignal extends Signal
    {
        void onSelectionChanged(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.SelectionChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "selection-changed", after);
    }

    protected static final void receiveSelectionChanged(Signal handler, long source) {
        ((GtkRecentChooser.SelectionChangedSignal) handler).onSelectionChanged((RecentChooser) objectFor(source));
    }

    interface SetCurrentUriSignal extends Signal
    {
        boolean onSetCurrentUri(RecentChooser source, String uri);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.SetCurrentUriSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "set-current-uri", after);
    }

    protected static final boolean receiveSetCurrentUri(Signal handler, long source, String uri) {
        boolean result;

        result = ((GtkRecentChooser.SetCurrentUriSignal) handler).onSetCurrentUri((RecentChooser) objectFor(source), uri);

        return result;
    }

    interface SetSortFuncSignal extends Signal
    {
        void onSetSortFunc(RecentChooser source, FIXME sortFunc, FIXME sortData, FIXME dataDestroy);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.SetSortFuncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "set-sort-func", after);
    }

    protected static final void receiveSetSortFunc(Signal handler, long source, java.lang.Object sortFunc, java.lang.Object sortData, java.lang.Object dataDestroy) {
        ((GtkRecentChooser.SetSortFuncSignal) handler).onSetSortFunc((RecentChooser) objectFor(source), (FIXME) sortFunc, (FIXME) sortData, (FIXME) dataDestroy);
    }

    interface UnselectAllSignal extends Signal
    {
        void onUnselectAll(RecentChooser source);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.UnselectAllSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "unselect-all", after);
    }

    protected static final void receiveUnselectAll(Signal handler, long source) {
        ((GtkRecentChooser.UnselectAllSignal) handler).onUnselectAll((RecentChooser) objectFor(source));
    }

    interface UnselectUriSignal extends Signal
    {
        void onUnselectUri(RecentChooser source, String uri);
    }

    static final void connect(RecentChooser self, GtkRecentChooser.UnselectUriSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GtkRecentChooser.class, "unselect-uri", after);
    }

    protected static final void receiveUnselectUri(Signal handler, long source, String uri) {
        ((GtkRecentChooser.UnselectUriSignal) handler).onUnselectUri((RecentChooser) objectFor(source), uri);
    }
}

