
package org.gnome.gio;

import org.freedesktop.bindings.Pointer;
import org.gnome.glib.Object;

public class SocketAddress
    extends Object
{


    public SocketAddress(Pointer pnative, long plen) {
        super(GSocketAddress.createSocketAddress(pnative, plen));
    }

    protected SocketAddress(long pointer) {
        super(pointer);
    }

}
