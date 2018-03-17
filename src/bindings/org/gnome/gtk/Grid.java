
package org.gnome.gtk;


public class Grid
    extends Container
{


    public Grid() {
        super(GtkGrid.createGrid());
    }

    protected Grid(long pointer) {
        super(pointer);
    }

}
