
package org.gnome.gtk;


public class ToggleButton
    extends Button
{


    public ToggleButton() {
        super(org.gnome.gtk.GtkToggleButton.createToggleButton());
    }

    public ToggleButton(java.lang.String plabel) {
        super(org.gnome.gtk.GtkToggleButton.createToggleButton(plabel));
    }

    public ToggleButton(java.lang.String plabel) {
        super(org.gnome.gtk.GtkToggleButton.createToggleButton(plabel));
    }

    protected ToggleButton(long pointer) {
        super(pointer);
    }

}
