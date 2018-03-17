
package org.gnome.gtk;


public class VSeparator
    extends Separator
{


    public VSeparator() {
        super(GtkVSeparator.createVSeparator());
    }

    protected VSeparator(long pointer) {
        super(pointer);
    }

}
