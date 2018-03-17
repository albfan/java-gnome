
package org.gnome.gtk;


public class CellRendererSpinner
    extends CellRenderer
{


    public CellRendererSpinner() {
        super(GtkCellRendererSpinner.createCellRendererSpinner());
    }

    protected CellRendererSpinner(long pointer) {
        super(pointer);
    }

}
