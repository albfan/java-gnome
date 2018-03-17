
package org.gnome.gtk;


public class CellRendererSpin
    extends CellRendererText
{


    public CellRendererSpin() {
        super(GtkCellRendererSpin.createCellRendererSpin());
    }

    protected CellRendererSpin(long pointer) {
        super(pointer);
    }

}
