
package org.gnome.gio;

import org.gnome.glib.Object;

public class TlsCertificate
    extends Object
{


    public TlsCertificate(java.lang.String pfile) {
        super(org.gnome.gio.GTlsCertificate.createTlsCertificate(pfile));
    }

    public TlsCertificate(java.lang.String pcert_file, java.lang.String pkey_file) {
        super(org.gnome.gio.GTlsCertificate.createTlsCertificate(pcert_file, pkey_file));
    }

    public TlsCertificate(java.lang.String pdata, int plength) {
        super(org.gnome.gio.GTlsCertificate.createTlsCertificate(pdata, plength));
    }

    protected TlsCertificate(long pointer) {
        super(pointer);
    }

}
