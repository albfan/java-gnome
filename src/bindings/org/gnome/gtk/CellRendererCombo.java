
package org.gnome.gtk;


public class CellRendererCombo
    extends CellRendererText
{


    public CellRendererCombo() {
        super(GtkCellRendererCombo.createCellRendererCombo());
    }

    protected CellRendererCombo(long pointer) {
        super(pointer);
    }

}
