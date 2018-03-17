
package org.gnome.gtk;


public class Button
    extends Bin
{


    public Button() {
        super(org.gnome.gtk.GtkButton.createButton());
    }

    public Button(java.lang.String picon_name, IconSize psize) {
        super(org.gnome.gtk.GtkButton.createButton(picon_name, psize));
    }

    public Button(java.lang.String pstock_id) {
        super(org.gnome.gtk.GtkButton.createButton(pstock_id));
    }

    public Button(java.lang.String plabel) {
        super(org.gnome.gtk.GtkButton.createButton(plabel));
    }

    public Button(java.lang.String plabel) {
        super(org.gnome.gtk.GtkButton.createButton(plabel));
    }

    protected Button(long pointer) {
        super(pointer);
    }

}
