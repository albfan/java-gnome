
package org.gnome.gtk;


public class Table
    extends Container
{


    public Table(int prows, int pcolumns, boolean phomogeneous) {
        super(GtkTable.createTable(prows, pcolumns, phomogeneous));
    }

    protected Table(long pointer) {
        super(pointer);
    }

}
