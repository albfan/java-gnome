
package org.gnome.gtk;


public class MenuItem
    extends Bin
{


    public MenuItem() {
        super(org.gnome.gtk.GtkMenuItem.createMenuItem());
    }

    public MenuItem(java.lang.String plabel) {
        super(org.gnome.gtk.GtkMenuItem.createMenuItem(plabel));
    }

    public MenuItem(java.lang.String plabel) {
        super(org.gnome.gtk.GtkMenuItem.createMenuItem(plabel));
    }

    protected MenuItem(long pointer) {
        super(pointer);
    }

}
