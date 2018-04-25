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
import org.gnome.gtk.DirectionType;
import org.gnome.gtk.Notebook;
import org.gnome.gtk.NotebookTab;
import org.gnome.gtk.PackType;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PositionType;
import org.gnome.gtk.Widget;

final class GtkNotebook extends Plumbing
{
    private GtkNotebook() {}

    static final long createNotebook() {
        long result;

        synchronized (lock) {
            result = gtk_notebook_new();

            return result;
        }
    }

    private static native final long gtk_notebook_new();

    static final int appendPage(Notebook self, Widget child, Widget tabLabel) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_append_page(pointerOf(self), pointerOf(child), pointerOf(tabLabel));

            return result;
        }
    }

    private static native final int gtk_notebook_append_page(long self, long child, long tabLabel);

    static final int appendPageMenu(Notebook self, Widget child, Widget tabLabel, Widget menuLabel) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_append_page_menu(pointerOf(self), pointerOf(child), pointerOf(tabLabel), pointerOf(menuLabel));

            return result;
        }
    }

    private static native final int gtk_notebook_append_page_menu(long self, long child, long tabLabel, long menuLabel);

    static final void detachTab(Notebook self, Widget child) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_notebook_detach_tab(pointerOf(self), pointerOf(child));
        }
    }

    private static native final void gtk_notebook_detach_tab(long self, long child);

    static final Widget getActionWidget(Notebook self, PackType packType) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (packType == null) {
            throw new IllegalArgumentException("packType can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_action_widget(pointerOf(self), numOf(packType));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_notebook_get_action_widget(long self, int packType);

    static final int getCurrentPage(Notebook self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_current_page(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_notebook_get_current_page(long self);

    static final String getGroupName(Notebook self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_group_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_notebook_get_group_name(long self);

    static final Widget getMenuLabel(Notebook self, Widget child) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_menu_label(pointerOf(self), pointerOf(child));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_notebook_get_menu_label(long self, long child);

    static final String getMenuLabelText(Notebook self, Widget child) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_menu_label_text(pointerOf(self), pointerOf(child));

            return result;
        }
    }

    private static native final String gtk_notebook_get_menu_label_text(long self, long child);

    static final int getNPages(Notebook self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_n_pages(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_notebook_get_n_pages(long self);

    static final Widget getNthPage(Notebook self, int pageNum) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_nth_page(pointerOf(self), pageNum);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_notebook_get_nth_page(long self, int pageNum);

    static final boolean getScrollable(Notebook self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_scrollable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_notebook_get_scrollable(long self);

    static final boolean getShowBorder(Notebook self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_show_border(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_notebook_get_show_border(long self);

    static final boolean getShowTabs(Notebook self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_show_tabs(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_notebook_get_show_tabs(long self);

    static final boolean getTabDetachable(Notebook self, Widget child) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_tab_detachable(pointerOf(self), pointerOf(child));

            return result;
        }
    }

    private static native final boolean gtk_notebook_get_tab_detachable(long self, long child);

    static final char getTabHborder(Notebook self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_tab_hborder(pointerOf(self));

            return result;
        }
    }

    private static native final char gtk_notebook_get_tab_hborder(long self);

    static final Widget getTabLabel(Notebook self, Widget child) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_tab_label(pointerOf(self), pointerOf(child));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_notebook_get_tab_label(long self, long child);

    static final String getTabLabelText(Notebook self, Widget child) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_tab_label_text(pointerOf(self), pointerOf(child));

            return result;
        }
    }

    private static native final String gtk_notebook_get_tab_label_text(long self, long child);

    static final PositionType getTabPos(Notebook self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_tab_pos(pointerOf(self));

            return (PositionType) enumFor(PositionType.class, result);
        }
    }

    private static native final int gtk_notebook_get_tab_pos(long self);

    static final boolean getTabReorderable(Notebook self, Widget child) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_tab_reorderable(pointerOf(self), pointerOf(child));

            return result;
        }
    }

    private static native final boolean gtk_notebook_get_tab_reorderable(long self, long child);

    static final char getTabVborder(Notebook self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_get_tab_vborder(pointerOf(self));

            return result;
        }
    }

    private static native final char gtk_notebook_get_tab_vborder(long self);

    static final int insertPage(Notebook self, Widget child, Widget tabLabel, int position) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_insert_page(pointerOf(self), pointerOf(child), pointerOf(tabLabel), position);

            return result;
        }
    }

    private static native final int gtk_notebook_insert_page(long self, long child, long tabLabel, int position);

    static final int insertPageMenu(Notebook self, Widget child, Widget tabLabel, Widget menuLabel, int position) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_insert_page_menu(pointerOf(self), pointerOf(child), pointerOf(tabLabel), pointerOf(menuLabel), position);

            return result;
        }
    }

    private static native final int gtk_notebook_insert_page_menu(long self, long child, long tabLabel, long menuLabel, int position);

    static final void nextPage(Notebook self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_next_page(pointerOf(self));
        }
    }

    private static native final void gtk_notebook_next_page(long self);

    static final int pageNum(Notebook self, Widget child) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_page_num(pointerOf(self), pointerOf(child));

            return result;
        }
    }

    private static native final int gtk_notebook_page_num(long self, long child);

    static final void popupDisable(Notebook self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_popup_disable(pointerOf(self));
        }
    }

    private static native final void gtk_notebook_popup_disable(long self);

    static final void popupEnable(Notebook self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_popup_enable(pointerOf(self));
        }
    }

    private static native final void gtk_notebook_popup_enable(long self);

    static final int prependPage(Notebook self, Widget child, Widget tabLabel) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_prepend_page(pointerOf(self), pointerOf(child), pointerOf(tabLabel));

            return result;
        }
    }

    private static native final int gtk_notebook_prepend_page(long self, long child, long tabLabel);

    static final int prependPageMenu(Notebook self, Widget child, Widget tabLabel, Widget menuLabel) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            result = gtk_notebook_prepend_page_menu(pointerOf(self), pointerOf(child), pointerOf(tabLabel), pointerOf(menuLabel));

            return result;
        }
    }

    private static native final int gtk_notebook_prepend_page_menu(long self, long child, long tabLabel, long menuLabel);

    static final void prevPage(Notebook self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_prev_page(pointerOf(self));
        }
    }

    private static native final void gtk_notebook_prev_page(long self);

    static final void removePage(Notebook self, int pageNum) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_remove_page(pointerOf(self), pageNum);
        }
    }

    private static native final void gtk_notebook_remove_page(long self, int pageNum);

    static final void reorderChild(Notebook self, Widget child, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_notebook_reorder_child(pointerOf(self), pointerOf(child), position);
        }
    }

    private static native final void gtk_notebook_reorder_child(long self, long child, int position);

    static final void setActionWidget(Notebook self, Widget widget, PackType packType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        if (packType == null) {
            throw new IllegalArgumentException("packType can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_action_widget(pointerOf(self), pointerOf(widget), numOf(packType));
        }
    }

    private static native final void gtk_notebook_set_action_widget(long self, long widget, int packType);

    static final void setCurrentPage(Notebook self, int pageNum) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_current_page(pointerOf(self), pageNum);
        }
    }

    private static native final void gtk_notebook_set_current_page(long self, int pageNum);

    static final void setGroupName(Notebook self, String groupName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_group_name(pointerOf(self), groupName);
        }
    }

    private static native final void gtk_notebook_set_group_name(long self, String groupName);

    static final void setMenuLabel(Notebook self, Widget child, Widget menuLabel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_menu_label(pointerOf(self), pointerOf(child), pointerOf(menuLabel));
        }
    }

    private static native final void gtk_notebook_set_menu_label(long self, long child, long menuLabel);

    static final void setMenuLabelText(Notebook self, Widget child, String menuText) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (menuText == null) {
            throw new IllegalArgumentException("menuText can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_menu_label_text(pointerOf(self), pointerOf(child), menuText);
        }
    }

    private static native final void gtk_notebook_set_menu_label_text(long self, long child, String menuText);

    static final void setScrollable(Notebook self, boolean scrollable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_scrollable(pointerOf(self), scrollable);
        }
    }

    private static native final void gtk_notebook_set_scrollable(long self, boolean scrollable);

    static final void setShowBorder(Notebook self, boolean showBorder) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_show_border(pointerOf(self), showBorder);
        }
    }

    private static native final void gtk_notebook_set_show_border(long self, boolean showBorder);

    static final void setShowTabs(Notebook self, boolean showTabs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_show_tabs(pointerOf(self), showTabs);
        }
    }

    private static native final void gtk_notebook_set_show_tabs(long self, boolean showTabs);

    static final void setTabDetachable(Notebook self, Widget child, boolean detachable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_tab_detachable(pointerOf(self), pointerOf(child), detachable);
        }
    }

    private static native final void gtk_notebook_set_tab_detachable(long self, long child, boolean detachable);

    static final void setTabLabel(Notebook self, Widget child, Widget tabLabel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_tab_label(pointerOf(self), pointerOf(child), pointerOf(tabLabel));
        }
    }

    private static native final void gtk_notebook_set_tab_label(long self, long child, long tabLabel);

    static final void setTabLabelText(Notebook self, Widget child, String tabText) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (tabText == null) {
            throw new IllegalArgumentException("tabText can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_tab_label_text(pointerOf(self), pointerOf(child), tabText);
        }
    }

    private static native final void gtk_notebook_set_tab_label_text(long self, long child, String tabText);

    static final void setTabPos(Notebook self, PositionType pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pos == null) {
            throw new IllegalArgumentException("pos can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_tab_pos(pointerOf(self), numOf(pos));
        }
    }

    private static native final void gtk_notebook_set_tab_pos(long self, int pos);

    static final void setTabReorderable(Notebook self, Widget child, boolean reorderable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_notebook_set_tab_reorderable(pointerOf(self), pointerOf(child), reorderable);
        }
    }

    private static native final void gtk_notebook_set_tab_reorderable(long self, long child, boolean reorderable);

    interface ChangeCurrentPageSignal extends Signal
    {
        boolean onChangeCurrentPage(Notebook source, int offset);
    }

    static final void connect(Notebook self, GtkNotebook.ChangeCurrentPageSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "change-current-page", after);
    }

    protected static final boolean receiveChangeCurrentPage(Signal handler, long source, int offset) {
        boolean result;

        result = ((GtkNotebook.ChangeCurrentPageSignal) handler).onChangeCurrentPage((Notebook) objectFor(source), offset);

        return result;
    }

    interface CreateWindowSignal extends Signal
    {
        Notebook onCreateWindow(Notebook source, Widget page, int x, int y);
    }

    static final void connect(Notebook self, GtkNotebook.CreateWindowSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "create-window", after);
    }

    protected static final long receiveCreateWindow(Signal handler, long source, long page, int x, int y) {
        Notebook result;

        result = ((GtkNotebook.CreateWindowSignal) handler).onCreateWindow((Notebook) objectFor(source), (Widget) objectFor(page), x, y);

        return pointerOf(result);
    }

    interface FocusTabSignal extends Signal
    {
        boolean onFocusTab(Notebook source, NotebookTab type);
    }

    static final void connect(Notebook self, GtkNotebook.FocusTabSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "focus-tab", after);
    }

    protected static final boolean receiveFocusTab(Signal handler, long source, int type) {
        boolean result;

        result = ((GtkNotebook.FocusTabSignal) handler).onFocusTab((Notebook) objectFor(source), (NotebookTab) enumFor(NotebookTab.class, type));

        return result;
    }

    interface InsertPageSignal extends Signal
    {
        int onInsertPage(Notebook source, Widget child, Widget tabLabel, Widget menuLabel, int position);
    }

    static final void connect(Notebook self, GtkNotebook.InsertPageSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "insert-page", after);
    }

    protected static final int receiveInsertPage(Signal handler, long source, long child, long tabLabel, long menuLabel, int position) {
        int result;

        result = ((GtkNotebook.InsertPageSignal) handler).onInsertPage((Notebook) objectFor(source), (Widget) objectFor(child), (Widget) objectFor(tabLabel), (Widget) objectFor(menuLabel), position);

        return result;
    }

    interface MoveFocusOutSignal extends Signal
    {
        void onMoveFocusOut(Notebook source, DirectionType direction);
    }

    static final void connect(Notebook self, GtkNotebook.MoveFocusOutSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "move-focus-out", after);
    }

    protected static final void receiveMoveFocusOut(Signal handler, long source, int direction) {
        ((GtkNotebook.MoveFocusOutSignal) handler).onMoveFocusOut((Notebook) objectFor(source), (DirectionType) enumFor(DirectionType.class, direction));
    }

    interface PageAddedSignal extends Signal
    {
        void onPageAdded(Notebook source, Widget child, int pageNum);
    }

    static final void connect(Notebook self, GtkNotebook.PageAddedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "page-added", after);
    }

    protected static final void receivePageAdded(Signal handler, long source, long child, int pageNum) {
        ((GtkNotebook.PageAddedSignal) handler).onPageAdded((Notebook) objectFor(source), (Widget) objectFor(child), pageNum);
    }

    interface PageRemovedSignal extends Signal
    {
        void onPageRemoved(Notebook source, Widget child, int pageNum);
    }

    static final void connect(Notebook self, GtkNotebook.PageRemovedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "page-removed", after);
    }

    protected static final void receivePageRemoved(Signal handler, long source, long child, int pageNum) {
        ((GtkNotebook.PageRemovedSignal) handler).onPageRemoved((Notebook) objectFor(source), (Widget) objectFor(child), pageNum);
    }

    interface PageReorderedSignal extends Signal
    {
        void onPageReordered(Notebook source, Widget child, int pageNum);
    }

    static final void connect(Notebook self, GtkNotebook.PageReorderedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "page-reordered", after);
    }

    protected static final void receivePageReordered(Signal handler, long source, long child, int pageNum) {
        ((GtkNotebook.PageReorderedSignal) handler).onPageReordered((Notebook) objectFor(source), (Widget) objectFor(child), pageNum);
    }

    interface ReorderTabSignal extends Signal
    {
        boolean onReorderTab(Notebook source, DirectionType direction, boolean moveToLast);
    }

    static final void connect(Notebook self, GtkNotebook.ReorderTabSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "reorder-tab", after);
    }

    protected static final boolean receiveReorderTab(Signal handler, long source, int direction, boolean moveToLast) {
        boolean result;

        result = ((GtkNotebook.ReorderTabSignal) handler).onReorderTab((Notebook) objectFor(source), (DirectionType) enumFor(DirectionType.class, direction), moveToLast);

        return result;
    }

    interface SelectPageSignal extends Signal
    {
        boolean onSelectPage(Notebook source, boolean moveFocus);
    }

    static final void connect(Notebook self, GtkNotebook.SelectPageSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "select-page", after);
    }

    protected static final boolean receiveSelectPage(Signal handler, long source, boolean moveFocus) {
        boolean result;

        result = ((GtkNotebook.SelectPageSignal) handler).onSelectPage((Notebook) objectFor(source), moveFocus);

        return result;
    }

    interface SwitchPageSignal extends Signal
    {
        void onSwitchPage(Notebook source, Widget page, int pageNum);
    }

    static final void connect(Notebook self, GtkNotebook.SwitchPageSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkNotebook.class, "switch-page", after);
    }

    protected static final void receiveSwitchPage(Signal handler, long source, long page, int pageNum) {
        ((GtkNotebook.SwitchPageSignal) handler).onSwitchPage((Notebook) objectFor(source), (Widget) objectFor(page), pageNum);
    }
}

