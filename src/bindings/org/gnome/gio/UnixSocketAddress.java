
package org.gnome.gio;


public class UnixSocketAddress
    extends SocketAddress
{


    public UnixSocketAddress(String ppath) {
        super(org.gnome.gio.GUnixSocketAddress.createUnixSocketAddress(ppath));
    }

    public UnixSocketAddress(int ppath_len) {
        super(org.gnome.gio.GUnixSocketAddress.createUnixSocketAddress(ppath_len));
    }

    public UnixSocketAddress(int ppath_len, UnixSocketAddressType ptype) {
        super(org.gnome.gio.GUnixSocketAddress.createUnixSocketAddress(ppath_len, ptype));
    }

    protected UnixSocketAddress(long pointer) {
        super(pointer);
    }

}
