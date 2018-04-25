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
import org.freedesktop.cairo.Surface;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.PixbufAnimation;
import org.gnome.gtk.IconSet;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Image;
import org.gnome.gtk.ImageType;
import org.gnome.gtk.Plumbing;

final class GtkImage extends Plumbing
{
    private GtkImage() {}

    static final long createImage() {
        long result;

        synchronized (lock) {
            result = gtk_image_new();

            return result;
        }
    }

    private static native final long gtk_image_new();

    static final long createImageFromAnimation(PixbufAnimation animation) {
        long result;

        if (animation == null) {
            throw new IllegalArgumentException("animation can't be null");
        }

        synchronized (lock) {
            result = gtk_image_new_from_animation(pointerOf(animation));

            return result;
        }
    }

    private static native final long gtk_image_new_from_animation(long animation);

    static final long createImageFromFile(String filename) {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gtk_image_new_from_file(filename);

            return result;
        }
    }

    private static native final long gtk_image_new_from_file(String filename);

    @SuppressWarnings("unused")
    static final long createImageFromGicon(FIXME icon, IconSize size) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final long createImageFromIconName(String iconName, IconSize size) {
        long result;

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_image_new_from_icon_name(iconName, numOf(size));

            return result;
        }
    }

    private static native final long gtk_image_new_from_icon_name(String iconName, int size);

    static final long createImageFromIconSet(IconSet iconSet, IconSize size) {
        long result;

        if (iconSet == null) {
            throw new IllegalArgumentException("iconSet can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_image_new_from_icon_set(pointerOf(iconSet), numOf(size));

            return result;
        }
    }

    private static native final long gtk_image_new_from_icon_set(long iconSet, int size);

    static final long createImageFromPixbuf(Pixbuf pixbuf) {
        long result;

        synchronized (lock) {
            result = gtk_image_new_from_pixbuf(pointerOf(pixbuf));

            return result;
        }
    }

    private static native final long gtk_image_new_from_pixbuf(long pixbuf);

    static final long createImageFromResource(String resourcePath) {
        long result;

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        synchronized (lock) {
            result = gtk_image_new_from_resource(resourcePath);

            return result;
        }
    }

    private static native final long gtk_image_new_from_resource(String resourcePath);

    static final long createImageFromStock(String stockId, IconSize size) {
        long result;

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_image_new_from_stock(stockId, numOf(size));

            return result;
        }
    }

    private static native final long gtk_image_new_from_stock(String stockId, int size);

    static final long createImageFromSurface(Surface surface) {
        long result;

        synchronized (lock) {
            result = gtk_image_new_from_surface(pointerOf(surface));

            return result;
        }
    }

    private static native final long gtk_image_new_from_surface(long surface);

    static final void clear(Image self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_clear(pointerOf(self));
        }
    }

    private static native final void gtk_image_clear(long self);

    static final PixbufAnimation getAnimation(Image self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_image_get_animation(pointerOf(self));

            return (PixbufAnimation) objectFor(result);
        }
    }

    private static native final long gtk_image_get_animation(long self);

    @SuppressWarnings("unused")
    static final void getGicon(Image self, FIXME gicon, IconSize[] size) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon**");
    }

    static final void getIconName(Image self, String[] iconName, IconSize[] size) {
        int[] _size;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _size = numsOf(size);

        synchronized (lock) {
            gtk_image_get_icon_name(pointerOf(self), iconName, _size);
            fillEnumArray(IconSize.class, size, _size);
        }
    }

    private static native final void gtk_image_get_icon_name(long self, String[] iconName, int[] size);

    static final void getIconSet(Image self, IconSet[] iconSet, IconSize[] size) {
        long[] _iconSet;
        int[] _size;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _iconSet = pointersOf(iconSet);

        _size = numsOf(size);

        synchronized (lock) {
            gtk_image_get_icon_set(pointerOf(self), _iconSet, _size);
            fillBoxedArray(IconSet.class, iconSet, _iconSet);
            fillEnumArray(IconSize.class, size, _size);
        }
    }

    private static native final void gtk_image_get_icon_set(long self, long[] iconSet, int[] size);

    static final Pixbuf getPixbuf(Image self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_image_get_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_image_get_pixbuf(long self);

    static final int getPixelSize(Image self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_image_get_pixel_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_image_get_pixel_size(long self);

    static final void getStock(Image self, String[] stockId, IconSize[] size) {
        int[] _size;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _size = numsOf(size);

        synchronized (lock) {
            gtk_image_get_stock(pointerOf(self), stockId, _size);
            fillEnumArray(IconSize.class, size, _size);
        }
    }

    private static native final void gtk_image_get_stock(long self, String[] stockId, int[] size);

    static final ImageType getStorageType(Image self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_image_get_storage_type(pointerOf(self));

            return (ImageType) enumFor(ImageType.class, result);
        }
    }

    private static native final int gtk_image_get_storage_type(long self);

    static final void setFromAnimation(Image self, PixbufAnimation animation) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (animation == null) {
            throw new IllegalArgumentException("animation can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_animation(pointerOf(self), pointerOf(animation));
        }
    }

    private static native final void gtk_image_set_from_animation(long self, long animation);

    static final void setFromFile(Image self, String filename) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_file(pointerOf(self), filename);
        }
    }

    private static native final void gtk_image_set_from_file(long self, String filename);

    @SuppressWarnings("unused")
    static final void setFromGicon(Image self, FIXME icon, IconSize size) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final void setFromIconName(Image self, String iconName, IconSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_icon_name(pointerOf(self), iconName, numOf(size));
        }
    }

    private static native final void gtk_image_set_from_icon_name(long self, String iconName, int size);

    static final void setFromIconSet(Image self, IconSet iconSet, IconSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconSet == null) {
            throw new IllegalArgumentException("iconSet can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_icon_set(pointerOf(self), pointerOf(iconSet), numOf(size));
        }
    }

    private static native final void gtk_image_set_from_icon_set(long self, long iconSet, int size);

    static final void setFromPixbuf(Image self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_pixbuf(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_image_set_from_pixbuf(long self, long pixbuf);

    static final void setFromResource(Image self, String resourcePath) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_resource(pointerOf(self), resourcePath);
        }
    }

    private static native final void gtk_image_set_from_resource(long self, String resourcePath);

    static final void setFromStock(Image self, String stockId, IconSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_stock(pointerOf(self), stockId, numOf(size));
        }
    }

    private static native final void gtk_image_set_from_stock(long self, String stockId, int size);

    static final void setFromSurface(Image self, Surface surface) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_set_from_surface(pointerOf(self), pointerOf(surface));
        }
    }

    private static native final void gtk_image_set_from_surface(long self, long surface);

    static final void setPixelSize(Image self, int pixelSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_set_pixel_size(pointerOf(self), pixelSize);
        }
    }

    private static native final void gtk_image_set_pixel_size(long self, int pixelSize);
}

