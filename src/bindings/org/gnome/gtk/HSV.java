
package org.gnome.gtk;


public class HSV
    extends Widget
{


    public HSV() {
        super(GtkHSV.createHSV());
    }

    protected HSV(long pointer) {
        super(pointer);
    }

}
