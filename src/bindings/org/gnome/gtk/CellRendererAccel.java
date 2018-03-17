
package org.gnome.gtk;


public class CellRendererAccel
    extends CellRendererText
{


    public CellRendererAccel() {
        super(GtkCellRendererAccel.createCellRendererAccel());
    }

    protected CellRendererAccel(long pointer) {
        super(pointer);
    }

}
