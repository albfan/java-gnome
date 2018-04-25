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
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.atk.CoordType;
import org.gnome.atk.Image;
import org.gnome.atk.Plumbing;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkImage extends Plumbing
{
    private AtkImage() {}

    static final String getImageDescription(Image self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_image_get_image_description(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String atk_image_get_image_description(long self);

    static final String getImageLocale(Image self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_image_get_image_locale(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String atk_image_get_image_locale(long self);

    static final void getImagePosition(Image self, int[] x, int[] y, CoordType coordType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            atk_image_get_image_position(pointerOf((Object) self), x, y, numOf(coordType));
        }
    }

    private static native final void atk_image_get_image_position(long self, int[] x, int[] y, int coordType);

    static final void getImageSize(Image self, int[] width, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_image_get_image_size(pointerOf((Object) self), width, height);
        }
    }

    private static native final void atk_image_get_image_size(long self, int[] width, int[] height);

    static final boolean setImageDescription(Image self, String description) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (description == null) {
            throw new IllegalArgumentException("description can't be null");
        }

        synchronized (lock) {
            result = atk_image_set_image_description(pointerOf((Object) self), description);

            return result;
        }
    }

    private static native final boolean atk_image_set_image_description(long self, String description);

    interface GetImageDescriptionSignal extends Signal
    {
        String onGetImageDescription(Image source);
    }

    static final void connect(Image self, AtkImage.GetImageDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkImage.class, "get-image-description", after);
    }

    protected static final String receiveGetImageDescription(Signal handler, long source) {
        String result;

        result = ((AtkImage.GetImageDescriptionSignal) handler).onGetImageDescription((Image) objectFor(source));

        return result;
    }

    interface GetImageLocaleSignal extends Signal
    {
        String onGetImageLocale(Image source);
    }

    static final void connect(Image self, AtkImage.GetImageLocaleSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkImage.class, "get-image-locale", after);
    }

    protected static final String receiveGetImageLocale(Signal handler, long source) {
        String result;

        result = ((AtkImage.GetImageLocaleSignal) handler).onGetImageLocale((Image) objectFor(source));

        return result;
    }

    interface GetImagePositionSignal extends Signal
    {
        void onGetImagePosition(Image source, int[] x, int[] y, CoordType coordType);
    }

    static final void connect(Image self, AtkImage.GetImagePositionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkImage.class, "get-image-position", after);
    }

    protected static final void receiveGetImagePosition(Signal handler, long source, int[] x, int[] y, int coordType) {
        ((AtkImage.GetImagePositionSignal) handler).onGetImagePosition((Image) objectFor(source), x, y, (CoordType) enumFor(CoordType.class, coordType));
    }

    interface GetImageSizeSignal extends Signal
    {
        void onGetImageSize(Image source, int[] width, int[] height);
    }

    static final void connect(Image self, AtkImage.GetImageSizeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkImage.class, "get-image-size", after);
    }

    protected static final void receiveGetImageSize(Signal handler, long source, int[] width, int[] height) {
        ((AtkImage.GetImageSizeSignal) handler).onGetImageSize((Image) objectFor(source), width, height);
    }

    interface SetImageDescriptionSignal extends Signal
    {
        boolean onSetImageDescription(Image source, String description);
    }

    static final void connect(Image self, AtkImage.SetImageDescriptionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkImage.class, "set-image-description", after);
    }

    protected static final boolean receiveSetImageDescription(Signal handler, long source, String description) {
        boolean result;

        result = ((AtkImage.SetImageDescriptionSignal) handler).onSetImageDescription((Image) objectFor(source), description);

        return result;
    }
}

