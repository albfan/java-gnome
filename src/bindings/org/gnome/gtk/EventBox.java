
package org.gnome.gtk;


public class EventBox
    extends Bin
{


    public EventBox() {
        super(GtkEventBox.createEventBox());
    }

    protected EventBox(long pointer) {
        super(pointer);
    }

}
