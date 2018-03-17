
package org.gnome.gtk;


public class CellAreaBox
    extends CellArea
{


    public CellAreaBox() {
        super(GtkCellAreaBox.createCellAreaBox());
    }

    protected CellAreaBox(long pointer) {
        super(pointer);
    }

}
