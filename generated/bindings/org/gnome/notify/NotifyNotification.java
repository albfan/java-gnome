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
package org.gnome.notify;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.Pixbuf;
import org.gnome.glib.GlibException;
import org.gnome.glib.Signal;
import org.gnome.notify.Notification;
import org.gnome.notify.Plumbing;
import org.gnome.notify.Urgency;

final class NotifyNotification extends Plumbing
{
    private NotifyNotification() {}

    static final long createNotification(String summary, String body, String icon) {
        long result;

        if (summary == null) {
            throw new IllegalArgumentException("summary can't be null");
        }

        synchronized (lock) {
            result = notify_notification_new(summary, body, icon);

            return result;
        }
    }

    private static native final long notify_notification_new(String summary, String body, String icon);

    @SuppressWarnings("unused")
    static final void addAction(Notification self, String action, String label, FIXME callback, FIXME userData, FIXME freeFunc) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("NotifyActionCallback");
    }

    static final void clearActions(Notification self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            notify_notification_clear_actions(pointerOf(self));
        }
    }

    private static native final void notify_notification_clear_actions(long self);

    static final void clearHints(Notification self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            notify_notification_clear_hints(pointerOf(self));
        }
    }

    private static native final void notify_notification_clear_hints(long self);

    static final boolean close(Notification self) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = notify_notification_close(pointerOf(self));

            return result;
        }
    }

    private static native final boolean notify_notification_close(long self) throws GlibException;

    static final int getClosedReason(Notification self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = notify_notification_get_closed_reason(pointerOf(self));

            return result;
        }
    }

    private static native final int notify_notification_get_closed_reason(long self);

    static final void setAppName(Notification self, String appName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (appName == null) {
            throw new IllegalArgumentException("appName can't be null");
        }

        synchronized (lock) {
            notify_notification_set_app_name(pointerOf(self), appName);
        }
    }

    private static native final void notify_notification_set_app_name(long self, String appName);

    static final void setCategory(Notification self, String category) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (category == null) {
            throw new IllegalArgumentException("category can't be null");
        }

        synchronized (lock) {
            notify_notification_set_category(pointerOf(self), category);
        }
    }

    private static native final void notify_notification_set_category(long self, String category);

    @SuppressWarnings("unused")
    static final void setHint(Notification self, String key, FIXME value) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GVariant*");
    }

    static final void setHintByte(Notification self, String key, char value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            notify_notification_set_hint_byte(pointerOf(self), key, value);
        }
    }

    private static native final void notify_notification_set_hint_byte(long self, String key, char value);

    @SuppressWarnings("unused")
    static final void setHintByteArray(Notification self, String key, FIXME value, long len) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    static final void setHintDouble(Notification self, String key, double value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            notify_notification_set_hint_double(pointerOf(self), key, value);
        }
    }

    private static native final void notify_notification_set_hint_double(long self, String key, double value);

    static final void setHintInt32(Notification self, String key, int value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            notify_notification_set_hint_int32(pointerOf(self), key, value);
        }
    }

    private static native final void notify_notification_set_hint_int32(long self, String key, int value);

    static final void setHintString(Notification self, String key, String value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            notify_notification_set_hint_string(pointerOf(self), key, value);
        }
    }

    private static native final void notify_notification_set_hint_string(long self, String key, String value);

    static final void setHintUint32(Notification self, String key, int value) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            notify_notification_set_hint_uint32(pointerOf(self), key, value);
        }
    }

    private static native final void notify_notification_set_hint_uint32(long self, String key, int value);

    static final void setIconFromPixbuf(Notification self, Pixbuf icon) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (icon == null) {
            throw new IllegalArgumentException("icon can't be null");
        }

        synchronized (lock) {
            notify_notification_set_icon_from_pixbuf(pointerOf(self), pointerOf(icon));
        }
    }

    private static native final void notify_notification_set_icon_from_pixbuf(long self, long icon);

    static final void setImageFromPixbuf(Notification self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            notify_notification_set_image_from_pixbuf(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void notify_notification_set_image_from_pixbuf(long self, long pixbuf);

    static final void setTimeout(Notification self, int timeout) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            notify_notification_set_timeout(pointerOf(self), timeout);
        }
    }

    private static native final void notify_notification_set_timeout(long self, int timeout);

    static final void setUrgency(Notification self, Urgency urgency) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (urgency == null) {
            throw new IllegalArgumentException("urgency can't be null");
        }

        synchronized (lock) {
            notify_notification_set_urgency(pointerOf(self), numOf(urgency));
        }
    }

    private static native final void notify_notification_set_urgency(long self, int urgency);

    static final boolean show(Notification self) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = notify_notification_show(pointerOf(self));

            return result;
        }
    }

    private static native final boolean notify_notification_show(long self) throws GlibException;

    static final boolean update(Notification self, String summary, String body, String icon) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (summary == null) {
            throw new IllegalArgumentException("summary can't be null");
        }

        synchronized (lock) {
            result = notify_notification_update(pointerOf(self), summary, body, icon);

            return result;
        }
    }

    private static native final boolean notify_notification_update(long self, String summary, String body, String icon);

    interface ClosedSignal extends Signal
    {
        void onClosed(Notification source);
    }

    static final void connect(Notification self, NotifyNotification.ClosedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, NotifyNotification.class, "closed", after);
    }

    protected static final void receiveClosed(Signal handler, long source) {
        ((NotifyNotification.ClosedSignal) handler).onClosed((Notification) objectFor(source));
    }

    interface ActionSignal extends Signal
    {
        void onAction(Notification source, String action);
    }

    static final void connect(Notification self, NotifyNotification.ActionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, NotifyNotification.class, "action", after);
    }

    protected static final void receiveAction(Signal handler, long source, String action) {
        ((NotifyNotification.ActionSignal) handler).onAction((Notification) objectFor(source), action);
    }
}

