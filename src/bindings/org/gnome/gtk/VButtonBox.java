
package org.gnome.gtk;


public class VButtonBox
    extends ButtonBox
{


    public VButtonBox() {
        super(GtkVButtonBox.createVButtonBox());
    }

    protected VButtonBox(long pointer) {
        super(pointer);
    }

}
