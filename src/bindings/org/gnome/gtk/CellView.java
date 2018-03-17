
package org.gnome.gtk;


public class CellView
    extends Widget
{


    public CellView() {
        super(org.gnome.gtk.GtkCellView.createCellView());
    }

    public CellView(CellArea parea, CellAreaContext pcontext) {
        super(org.gnome.gtk.GtkCellView.createCellView(parea, pcontext));
    }

    public CellView(java.lang.String pmarkup) {
        super(org.gnome.gtk.GtkCellView.createCellView(pmarkup));
    }

    public CellView(dkPixbuf ppixbuf) {
        super(org.gnome.gtk.GtkCellView.createCellView(ppixbuf));
    }

    public CellView(java.lang.String ptext) {
        super(org.gnome.gtk.GtkCellView.createCellView(ptext));
    }

    protected CellView(long pointer) {
        super(pointer);
    }

}
