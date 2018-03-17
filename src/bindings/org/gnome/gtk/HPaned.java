
package org.gnome.gtk;


public class HPaned
    extends Paned
{


    public HPaned() {
        super(GtkHPaned.createHPaned());
    }

    protected HPaned(long pointer) {
        super(pointer);
    }

}
