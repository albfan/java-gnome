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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.atk.Object;
import org.gnome.atk.ObjectFactory;
import org.gnome.atk.Plumbing;
import org.gnome.glib.Signal;

final class AtkObjectFactory extends Plumbing
{
    private AtkObjectFactory() {}

    static final Object createAccessible(ObjectFactory self, org.gnome.glib.Object obj) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (obj == null) {
            throw new IllegalArgumentException("obj can't be null");
        }

        synchronized (lock) {
            result = atk_object_factory_create_accessible(pointerOf(self), pointerOf(obj));

            return (Object) objectFor(result);
        }
    }

    private static native final long atk_object_factory_create_accessible(long self, long obj);

    @SuppressWarnings("unused")
    static final FIXME getAccessibleType(ObjectFactory self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GType");
    }

    static final void invalidate(ObjectFactory self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_object_factory_invalidate(pointerOf(self));
        }
    }

    private static native final void atk_object_factory_invalidate(long self);

    interface InvalidateSignal extends Signal
    {
        void onInvalidate(ObjectFactory source);
    }

    static final void connect(ObjectFactory self, AtkObjectFactory.InvalidateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkObjectFactory.class, "invalidate", after);
    }

    protected static final void receiveInvalidate(Signal handler, long source) {
        ((AtkObjectFactory.InvalidateSignal) handler).onInvalidate((ObjectFactory) objectFor(source));
    }
}

