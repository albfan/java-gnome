
package org.gnome.gtk;


public class ListBox
    extends Container
{


    public ListBox() {
        super(GtkListBox.createListBox());
    }

    protected ListBox(long pointer) {
        super(pointer);
    }

}
