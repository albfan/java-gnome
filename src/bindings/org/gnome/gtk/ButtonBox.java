
package org.gnome.gtk;


public class ButtonBox
    extends Box
{


    public ButtonBox(Orientation porientation) {
        super(GtkButtonBox.createButtonBox(porientation));
    }

    protected ButtonBox(long pointer) {
        super(pointer);
    }

}
