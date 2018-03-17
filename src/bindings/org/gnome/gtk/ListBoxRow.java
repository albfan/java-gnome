
package org.gnome.gtk;


public class ListBoxRow
    extends Bin
{


    public ListBoxRow() {
        super(GtkListBoxRow.createListBoxRow());
    }

    protected ListBoxRow(long pointer) {
        super(pointer);
    }

}
