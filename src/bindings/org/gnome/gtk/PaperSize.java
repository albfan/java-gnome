
package org.gnome.gtk;

import org.gnome.glib.Object;

public class PaperSize
    extends Object
{


    public PaperSize(java.lang.String pname) {
        super(org.gnome.gtk.GtkPaperSize.createPaperSize(pname));
    }

    public PaperSize(java.lang.String pname, java.lang.String pdisplay_name, gdouble pwidth, gdouble pheight, Unit punit) {
        super(org.gnome.gtk.GtkPaperSize.createPaperSize(pname, pdisplay_name, pwidth, pheight, punit));
    }

    public PaperSize(Variant pvariant) {
        super(org.gnome.gtk.GtkPaperSize.createPaperSize(pvariant));
    }

    public PaperSize(java.lang.String pipp_name, gdouble pwidth, gdouble pheight) {
        super(org.gnome.gtk.GtkPaperSize.createPaperSize(pipp_name, pwidth, pheight));
    }

    public PaperSize(KeyFile pkey_file, java.lang.String pgroup_name) {
        super(org.gnome.gtk.GtkPaperSize.createPaperSize(pkey_file, pgroup_name));
    }

    public PaperSize(java.lang.String pppd_name, java.lang.String pppd_display_name, gdouble pwidth, gdouble pheight) {
        super(org.gnome.gtk.GtkPaperSize.createPaperSize(pppd_name, pppd_display_name, pwidth, pheight));
    }

    protected PaperSize(long pointer) {
        super(pointer);
    }

}
