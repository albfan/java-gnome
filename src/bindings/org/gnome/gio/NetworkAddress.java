
package org.gnome.gio;

import org.gnome.glib.Object;

public class NetworkAddress
    extends Object
{


    public NetworkAddress(String phostname, guint16 pport) {
        super(org.gnome.gio.GNetworkAddress.createNetworkAddress(phostname, pport));
    }

    public NetworkAddress(guint16 pport) {
        super(org.gnome.gio.GNetworkAddress.createNetworkAddress(pport));
    }

    protected NetworkAddress(long pointer) {
        super(pointer);
    }

}
