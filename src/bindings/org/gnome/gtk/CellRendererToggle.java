
package org.gnome.gtk;


public class CellRendererToggle
    extends CellRenderer
{


    public CellRendererToggle() {
        super(GtkCellRendererToggle.createCellRendererToggle());
    }

    protected CellRendererToggle(long pointer) {
        super(pointer);
    }

}
