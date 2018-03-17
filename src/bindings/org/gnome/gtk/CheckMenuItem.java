
package org.gnome.gtk;


public class CheckMenuItem
    extends MenuItem
{


    public CheckMenuItem() {
        super(org.gnome.gtk.GtkCheckMenuItem.createCheckMenuItem());
    }

    public CheckMenuItem(java.lang.String plabel) {
        super(org.gnome.gtk.GtkCheckMenuItem.createCheckMenuItem(plabel));
    }

    public CheckMenuItem(java.lang.String plabel) {
        super(org.gnome.gtk.GtkCheckMenuItem.createCheckMenuItem(plabel));
    }

    protected CheckMenuItem(long pointer) {
        super(pointer);
    }

}
