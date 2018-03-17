
package org.gnome.gtk;


public class ColorSelection
    extends Box
{


    public ColorSelection() {
        super(GtkColorSelection.createColorSelection());
    }

    protected ColorSelection(long pointer) {
        super(pointer);
    }

}
