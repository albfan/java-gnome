
package org.gnome.gtk;

import org.gnome.glib.Object;

public class PrintSettings
    extends Object
{


    public PrintSettings() {
        super(org.gnome.gtk.GtkPrintSettings.createPrintSettings());
    }

    public PrintSettings(java.lang.String pfile_name) {
        super(org.gnome.gtk.GtkPrintSettings.createPrintSettings(pfile_name));
    }

    public PrintSettings(Variant pvariant) {
        super(org.gnome.gtk.GtkPrintSettings.createPrintSettings(pvariant));
    }

    public PrintSettings(KeyFile pkey_file, java.lang.String pgroup_name) {
        super(org.gnome.gtk.GtkPrintSettings.createPrintSettings(pkey_file, pgroup_name));
    }

    protected PrintSettings(long pointer) {
        super(pointer);
    }

}
