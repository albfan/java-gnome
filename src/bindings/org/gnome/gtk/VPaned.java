
package org.gnome.gtk;


public class VPaned
    extends Paned
{


    public VPaned() {
        super(GtkVPaned.createVPaned());
    }

    protected VPaned(long pointer) {
        super(pointer);
    }

}
