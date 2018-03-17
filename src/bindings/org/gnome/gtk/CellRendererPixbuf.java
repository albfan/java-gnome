
package org.gnome.gtk;


public class CellRendererPixbuf
    extends CellRenderer
{


    public CellRendererPixbuf() {
        super(GtkCellRendererPixbuf.createCellRendererPixbuf());
    }

    protected CellRendererPixbuf(long pointer) {
        super(pointer);
    }

}
