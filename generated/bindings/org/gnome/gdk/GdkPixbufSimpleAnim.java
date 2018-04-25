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
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.PixbufSimpleAnim;
import org.gnome.gdk.Plumbing;

final class GdkPixbufSimpleAnim extends Plumbing
{
    private GdkPixbufSimpleAnim() {}

    static final long createPixbufSimpleAnim(int width, int height, float rate) {
        long result;

        synchronized (lock) {
            result = gdk_pixbuf_simple_anim_new(width, height, rate);

            return result;
        }
    }

    private static native final long gdk_pixbuf_simple_anim_new(int width, int height, float rate);

    static final void addFrame(PixbufSimpleAnim self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_simple_anim_add_frame(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void gdk_pixbuf_simple_anim_add_frame(long self, long pixbuf);

    static final boolean getLoop(PixbufSimpleAnim self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_simple_anim_get_loop(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_simple_anim_get_loop(long self);

    static final void setLoop(PixbufSimpleAnim self, boolean loop) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_simple_anim_set_loop(pointerOf(self), loop);
        }
    }

    private static native final void gdk_pixbuf_simple_anim_set_loop(long self, boolean loop);
}

