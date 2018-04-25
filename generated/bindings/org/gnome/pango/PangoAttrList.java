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
package org.gnome.pango;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.pango.AttrIterator;
import org.gnome.pango.Attribute;
import org.gnome.pango.AttributeList;
import org.gnome.pango.Plumbing;

final class PangoAttrList extends Plumbing
{
    private PangoAttrList() {}

    static final long createAttributeList() {
        long result;

        synchronized (lock) {
            result = pango_attr_list_new();

            return result;
        }
    }

    private static native final long pango_attr_list_new();

    static final void change(AttributeList self, Attribute attr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (attr == null) {
            throw new IllegalArgumentException("attr can't be null");
        }

        synchronized (lock) {
            pango_attr_list_change(pointerOf(self), pointerOf(attr));
        }
    }

    private static native final void pango_attr_list_change(long self, long attr);

    static final AttributeList copy(AttributeList self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_attr_list_copy(pointerOf(self));

            return (AttributeList) boxedFor(AttributeList.class, result);
        }
    }

    private static native final long pango_attr_list_copy(long self);

    @SuppressWarnings("unused")
    static final AttributeList filter(AttributeList self, FIXME func, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoAttrFilterFunc");
    }

    static final AttrIterator getIterator(AttributeList self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_attr_list_get_iterator(pointerOf(self));

            return (AttrIterator) boxedFor(AttrIterator.class, result);
        }
    }

    private static native final long pango_attr_list_get_iterator(long self);

    static final void insert(AttributeList self, Attribute attr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (attr == null) {
            throw new IllegalArgumentException("attr can't be null");
        }

        synchronized (lock) {
            pango_attr_list_insert(pointerOf(self), pointerOf(attr));
        }
    }

    private static native final void pango_attr_list_insert(long self, long attr);

    static final void insertBefore(AttributeList self, Attribute attr) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (attr == null) {
            throw new IllegalArgumentException("attr can't be null");
        }

        synchronized (lock) {
            pango_attr_list_insert_before(pointerOf(self), pointerOf(attr));
        }
    }

    private static native final void pango_attr_list_insert_before(long self, long attr);

    static final AttributeList ref(AttributeList self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_attr_list_ref(pointerOf(self));

            return (AttributeList) boxedFor(AttributeList.class, result);
        }
    }

    private static native final long pango_attr_list_ref(long self);

    static final void splice(AttributeList self, AttributeList other, int pos, int len) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (other == null) {
            throw new IllegalArgumentException("other can't be null");
        }

        synchronized (lock) {
            pango_attr_list_splice(pointerOf(self), pointerOf(other), pos, len);
        }
    }

    private static native final void pango_attr_list_splice(long self, long other, int pos, int len);

    static final void unref(AttributeList self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_attr_list_unref(pointerOf(self));
        }
    }

    private static native final void pango_attr_list_unref(long self);
}

