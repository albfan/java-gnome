
package org.gnome.gio;

import org.gnome.glib.Object;

public class InetAddress
    extends Object
{


    public InetAddress(SocketFamily pfamily) {
        super(org.gnome.gio.GInetAddress.createInetAddress(pfamily));
    }

    public InetAddress(SocketFamily pfamily) {
        super(org.gnome.gio.GInetAddress.createInetAddress(pfamily));
    }

    public InetAddress(String pstring) {
        super(org.gnome.gio.GInetAddress.createInetAddress(pstring));
    }

    public InetAddress(SocketFamily pfamily) {
        super(org.gnome.gio.GInetAddress.createInetAddress(pfamily));
    }

    protected InetAddress(long pointer) {
        super(pointer);
    }

}
