
package org.gnome.gio;

import org.gnome.glib.Object;

public class InetAddressMask
    extends Object
{


    public InetAddressMask(InetAddress paddr, int plength) {
        super(org.gnome.gio.GInetAddressMask.createInetAddressMask(paddr, plength));
    }

    public InetAddressMask(String pmask_string) {
        super(org.gnome.gio.GInetAddressMask.createInetAddressMask(pmask_string));
    }

    protected InetAddressMask(long pointer) {
        super(pointer);
    }

}
