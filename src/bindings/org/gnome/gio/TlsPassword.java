
package org.gnome.gio;

import org.gnome.glib.Object;

public class TlsPassword
    extends Object
{


    public TlsPassword(TlsPasswordFlags pflags, String pdescription) {
        super(GTlsPassword.createTlsPassword(pflags, pdescription));
    }

    protected TlsPassword(long pointer) {
        super(pointer);
    }

}
