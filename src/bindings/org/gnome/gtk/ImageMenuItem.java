
package org.gnome.gtk;


public class ImageMenuItem
    extends MenuItem
{


    public ImageMenuItem() {
        super(org.gnome.gtk.GtkImageMenuItem.createImageMenuItem());
    }

    public ImageMenuItem(java.lang.String pstock_id, AccelGroup paccel_group) {
        super(org.gnome.gtk.GtkImageMenuItem.createImageMenuItem(pstock_id, paccel_group));
    }

    public ImageMenuItem(java.lang.String plabel) {
        super(org.gnome.gtk.GtkImageMenuItem.createImageMenuItem(plabel));
    }

    public ImageMenuItem(java.lang.String plabel) {
        super(org.gnome.gtk.GtkImageMenuItem.createImageMenuItem(plabel));
    }

    protected ImageMenuItem(long pointer) {
        super(pointer);
    }

}
