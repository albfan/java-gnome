
package org.gnome.gtk;


public class Box
    extends Container
{


    public Box(Orientation porientation, int pspacing) {
        super(GtkBox.createBox(porientation, pspacing));
    }

    protected Box(long pointer) {
        super(pointer);
    }

}
