
package org.gnome.gtk;


public class HandleBox
    extends Bin
{


    public HandleBox() {
        super(GtkHandleBox.createHandleBox());
    }

    protected HandleBox(long pointer) {
        super(pointer);
    }

}
