
package org.gnome.gtk;


public class HBox
    extends Box
{


    public HBox(boolean phomogeneous, int pspacing) {
        super(GtkHBox.createHBox(phomogeneous, pspacing));
    }

    protected HBox(long pointer) {
        super(pointer);
    }

}
