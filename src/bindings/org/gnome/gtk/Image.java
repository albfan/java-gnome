
package org.gnome.gtk;


public class Image
    extends Misc
{


    public Image() {
        super(org.gnome.gtk.GtkImage.createImage());
    }

    public Image(dkPixbufAnimation panimation) {
        super(org.gnome.gtk.GtkImage.createImage(panimation));
    }

    public Image(java.lang.String pfilename) {
        super(org.gnome.gtk.GtkImage.createImage(pfilename));
    }

    public Image(Icon picon, IconSize psize) {
        super(org.gnome.gtk.GtkImage.createImage(picon, psize));
    }

    public Image(java.lang.String picon_name, IconSize psize) {
        super(org.gnome.gtk.GtkImage.createImage(picon_name, psize));
    }

    public Image(IconSet picon_set, IconSize psize) {
        super(org.gnome.gtk.GtkImage.createImage(picon_set, psize));
    }

    public Image(dkPixbuf ppixbuf) {
        super(org.gnome.gtk.GtkImage.createImage(ppixbuf));
    }

    public Image(java.lang.String presource_path) {
        super(org.gnome.gtk.GtkImage.createImage(presource_path));
    }

    public Image(java.lang.String pstock_id, IconSize psize) {
        super(org.gnome.gtk.GtkImage.createImage(pstock_id, psize));
    }

    public Image(cairo_surface_t psurface) {
        super(org.gnome.gtk.GtkImage.createImage(psurface));
    }

    protected Image(long pointer) {
        super(pointer);
    }

}
