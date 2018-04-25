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
import org.gnome.gdk.EventButton;
import org.gnome.gdk.EventScroll;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Screen;
import org.gnome.glib.Signal;
import org.gnome.gtk.ImageType;
import org.gnome.gtk.Menu;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.StatusIcon;
import org.gnome.gtk.Tooltip;

final class GtkStatusIcon extends Plumbing
{
    private GtkStatusIcon() {}

    static final long createStatusIcon() {
        long result;

        synchronized (lock) {
            result = gtk_status_icon_new();

            return result;
        }
    }

    private static native final long gtk_status_icon_new();

    static final long createStatusIconFromFile(String filename) {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_new_from_file(filename);

            return result;
        }
    }

    private static native final long gtk_status_icon_new_from_file(String filename);

    @SuppressWarnings("unused")
    static final long createStatusIconFromGicon(FIXME icon) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final long createStatusIconFromIconName(String iconName) {
        long result;

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_new_from_icon_name(iconName);

            return result;
        }
    }

    private static native final long gtk_status_icon_new_from_icon_name(String iconName);

    static final long createStatusIconFromPixbuf(Pixbuf pixbuf) {
        long result;

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_new_from_pixbuf(pointerOf(pixbuf));

            return result;
        }
    }

    private static native final long gtk_status_icon_new_from_pixbuf(long pixbuf);

    static final long createStatusIconFromStock(String stockId) {
        long result;

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_new_from_stock(stockId);

            return result;
        }
    }

    private static native final long gtk_status_icon_new_from_stock(String stockId);

    static final boolean getGeometry(StatusIcon self, Screen[] screen, Rectangle area, Orientation[] orientation) {
        boolean result;
        long[] _screen;
        int[] _orientation;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _screen = pointersOf(screen);

        _orientation = numsOf(orientation);

        synchronized (lock) {
            result = gtk_status_icon_get_geometry(pointerOf(self), _screen, pointerOf(area), _orientation);
            fillObjectArray(screen, _screen);
            fillEnumArray(Orientation.class, orientation, _orientation);

            return result;
        }
    }

    private static native final boolean gtk_status_icon_get_geometry(long self, long[] screen, long area, int[] orientation);

    @SuppressWarnings("unused")
    static final FIXME getGicon(StatusIcon self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final boolean getHasTooltip(StatusIcon self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_has_tooltip(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_status_icon_get_has_tooltip(long self);

    static final String getIconName(StatusIcon self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_status_icon_get_icon_name(long self);

    static final Pixbuf getPixbuf(StatusIcon self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_status_icon_get_pixbuf(long self);

    static final Screen getScreen(StatusIcon self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_screen(pointerOf(self));

            return (Screen) objectFor(result);
        }
    }

    private static native final long gtk_status_icon_get_screen(long self);

    static final int getSize(StatusIcon self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_status_icon_get_size(long self);

    static final String getStock(StatusIcon self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_stock(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_status_icon_get_stock(long self);

    static final ImageType getStorageType(StatusIcon self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_storage_type(pointerOf(self));

            return (ImageType) enumFor(ImageType.class, result);
        }
    }

    private static native final int gtk_status_icon_get_storage_type(long self);

    static final String getTitle(StatusIcon self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_status_icon_get_title(long self);

    static final String getTooltipMarkup(StatusIcon self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_tooltip_markup(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_status_icon_get_tooltip_markup(long self);

    static final String getTooltipText(StatusIcon self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_tooltip_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_status_icon_get_tooltip_text(long self);

    static final boolean getVisible(StatusIcon self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_status_icon_get_visible(long self);

    static final int getX11WindowId(StatusIcon self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_get_x11_window_id(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_status_icon_get_x11_window_id(long self);

    static final boolean isEmbedded(StatusIcon self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_status_icon_is_embedded(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_status_icon_is_embedded(long self);

    static final void setFromFile(StatusIcon self, String filename) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_from_file(pointerOf(self), filename);
        }
    }

    private static native final void gtk_status_icon_set_from_file(long self, String filename);

    @SuppressWarnings("unused")
    static final void setFromGicon(StatusIcon self, FIXME icon) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final void setFromIconName(StatusIcon self, String iconName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconName == null) {
            throw new IllegalArgumentException("iconName can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_from_icon_name(pointerOf(self), iconName);
        }
    }

    private static native final void gtk_status_icon_set_from_icon_name(long self, String iconName);

    static final void setFromPixbuf(StatusIcon self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_from_pixbuf(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_status_icon_set_from_pixbuf(long self, long pixbuf);

    static final void setFromStock(StatusIcon self, String stockId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_from_stock(pointerOf(self), stockId);
        }
    }

    private static native final void gtk_status_icon_set_from_stock(long self, String stockId);

    static final void setHasTooltip(StatusIcon self, boolean hasTooltip) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_has_tooltip(pointerOf(self), hasTooltip);
        }
    }

    private static native final void gtk_status_icon_set_has_tooltip(long self, boolean hasTooltip);

    static final void setName(StatusIcon self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_status_icon_set_name(long self, String name);

    static final void setScreen(StatusIcon self, Screen screen) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (screen == null) {
            throw new IllegalArgumentException("screen can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_screen(pointerOf(self), pointerOf(screen));
        }
    }

    private static native final void gtk_status_icon_set_screen(long self, long screen);

    static final void setTitle(StatusIcon self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_status_icon_set_title(long self, String title);

    static final void setTooltipMarkup(StatusIcon self, String markup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_tooltip_markup(pointerOf(self), markup);
        }
    }

    private static native final void gtk_status_icon_set_tooltip_markup(long self, String markup);

    static final void setTooltipText(StatusIcon self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_tooltip_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_status_icon_set_tooltip_text(long self, String text);

    static final void setVisible(StatusIcon self, boolean visible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_status_icon_set_visible(pointerOf(self), visible);
        }
    }

    private static native final void gtk_status_icon_set_visible(long self, boolean visible);

    @SuppressWarnings("unused")
    static final void positionMenu(Menu menu, int[] x, int[] y, boolean[] pushIn, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    interface ActivateSignal extends Signal
    {
        void onActivate(StatusIcon source);
    }

    static final void connect(StatusIcon self, GtkStatusIcon.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusIcon.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GtkStatusIcon.ActivateSignal) handler).onActivate((StatusIcon) objectFor(source));
    }

    interface ButtonPressEventSignal extends Signal
    {
        boolean onButtonPressEvent(StatusIcon source, EventButton event);
    }

    static final void connect(StatusIcon self, GtkStatusIcon.ButtonPressEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusIcon.class, "button-press-event", after);
    }

    protected static final boolean receiveButtonPressEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkStatusIcon.ButtonPressEventSignal) handler).onButtonPressEvent((StatusIcon) objectFor(source), (EventButton) boxedFor(EventButton.class, event));

        return result;
    }

    interface ButtonReleaseEventSignal extends Signal
    {
        boolean onButtonReleaseEvent(StatusIcon source, EventButton event);
    }

    static final void connect(StatusIcon self, GtkStatusIcon.ButtonReleaseEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusIcon.class, "button-release-event", after);
    }

    protected static final boolean receiveButtonReleaseEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkStatusIcon.ButtonReleaseEventSignal) handler).onButtonReleaseEvent((StatusIcon) objectFor(source), (EventButton) boxedFor(EventButton.class, event));

        return result;
    }

    interface PopupMenuSignal extends Signal
    {
        void onPopupMenu(StatusIcon source, int button, int activateTime);
    }

    static final void connect(StatusIcon self, GtkStatusIcon.PopupMenuSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusIcon.class, "popup-menu", after);
    }

    protected static final void receivePopupMenu(Signal handler, long source, int button, int activateTime) {
        ((GtkStatusIcon.PopupMenuSignal) handler).onPopupMenu((StatusIcon) objectFor(source), button, activateTime);
    }

    interface QueryTooltipSignal extends Signal
    {
        boolean onQueryTooltip(StatusIcon source, int x, int y, boolean keyboardMode, Tooltip tooltip);
    }

    static final void connect(StatusIcon self, GtkStatusIcon.QueryTooltipSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusIcon.class, "query-tooltip", after);
    }

    protected static final boolean receiveQueryTooltip(Signal handler, long source, int x, int y, boolean keyboardMode, long tooltip) {
        boolean result;

        result = ((GtkStatusIcon.QueryTooltipSignal) handler).onQueryTooltip((StatusIcon) objectFor(source), x, y, keyboardMode, (Tooltip) objectFor(tooltip));

        return result;
    }

    interface ScrollEventSignal extends Signal
    {
        boolean onScrollEvent(StatusIcon source, EventScroll event);
    }

    static final void connect(StatusIcon self, GtkStatusIcon.ScrollEventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusIcon.class, "scroll-event", after);
    }

    protected static final boolean receiveScrollEvent(Signal handler, long source, long event) {
        boolean result;

        result = ((GtkStatusIcon.ScrollEventSignal) handler).onScrollEvent((StatusIcon) objectFor(source), (EventScroll) boxedFor(EventScroll.class, event));

        return result;
    }

    interface SizeChangedSignal extends Signal
    {
        boolean onSizeChanged(StatusIcon source, int size);
    }

    static final void connect(StatusIcon self, GtkStatusIcon.SizeChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkStatusIcon.class, "size-changed", after);
    }

    protected static final boolean receiveSizeChanged(Signal handler, long source, int size) {
        boolean result;

        result = ((GtkStatusIcon.SizeChangedSignal) handler).onSizeChanged((StatusIcon) objectFor(source), size);

        return result;
    }
}

