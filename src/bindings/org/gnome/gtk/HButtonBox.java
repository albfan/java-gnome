
package org.gnome.gtk;


public class HButtonBox
    extends ButtonBox
{


    public HButtonBox() {
        super(GtkHButtonBox.createHButtonBox());
    }

    protected HButtonBox(long pointer) {
        super(pointer);
    }

}
