
package org.gnome.gtk;


public class CellRendererProgress
    extends CellRenderer
{


    public CellRendererProgress() {
        super(GtkCellRendererProgress.createCellRendererProgress());
    }

    protected CellRendererProgress(long pointer) {
        super(pointer);
    }

}
