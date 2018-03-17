
package org.gnome.gtk;


public class VBox
    extends Box
{


    public VBox(boolean phomogeneous, int pspacing) {
        super(GtkVBox.createVBox(phomogeneous, pspacing));
    }

    protected VBox(long pointer) {
        super(pointer);
    }

}
