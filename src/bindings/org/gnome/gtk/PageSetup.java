
package org.gnome.gtk;

import org.gnome.glib.Object;

public class PageSetup
    extends Object
{


    public PageSetup() {
        super(org.gnome.gtk.GtkPageSetup.createPageSetup());
    }

    public PageSetup(java.lang.String pfile_name) {
        super(org.gnome.gtk.GtkPageSetup.createPageSetup(pfile_name));
    }

    public PageSetup(Variant pvariant) {
        super(org.gnome.gtk.GtkPageSetup.createPageSetup(pvariant));
    }

    public PageSetup(KeyFile pkey_file, java.lang.String pgroup_name) {
        super(org.gnome.gtk.GtkPageSetup.createPageSetup(pkey_file, pgroup_name));
    }

    protected PageSetup(long pointer) {
        super(pointer);
    }

}
