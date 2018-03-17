
package org.gnome.gio;


public class InetSocketAddress
    extends SocketAddress
{


    public InetSocketAddress(InetAddress paddress, guint16 pport) {
        super(org.gnome.gio.GInetSocketAddress.createInetSocketAddress(paddress, pport));
    }

    public InetSocketAddress(String paddress, int pport) {
        super(org.gnome.gio.GInetSocketAddress.createInetSocketAddress(paddress, pport));
    }

    protected InetSocketAddress(long pointer) {
        super(pointer);
    }

}
