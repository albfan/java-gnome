
package org.gnome.gtk;


public class CheckButton
    extends ToggleButton
{


    public CheckButton() {
        super(org.gnome.gtk.GtkCheckButton.createCheckButton());
    }

    public CheckButton(java.lang.String plabel) {
        super(org.gnome.gtk.GtkCheckButton.createCheckButton(plabel));
    }

    public CheckButton(java.lang.String plabel) {
        super(org.gnome.gtk.GtkCheckButton.createCheckButton(plabel));
    }

    protected CheckButton(long pointer) {
        super(pointer);
    }

}
