
package org.gnome.gtk;


public class CellRendererText
    extends CellRenderer
{


    public CellRendererText() {
        super(GtkCellRendererText.createCellRendererText());
    }

    protected CellRendererText(long pointer) {
        super(pointer);
    }

}
