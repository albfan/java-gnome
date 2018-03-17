
package org.gnome.gtk;


public class HSeparator
    extends Separator
{


    public HSeparator() {
        super(GtkHSeparator.createHSeparator());
    }

    protected HSeparator(long pointer) {
        super(pointer);
    }

}
