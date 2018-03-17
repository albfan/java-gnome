
package org.gnome.gtk;


public class Paned
    extends Container
{


    public Paned(Orientation porientation) {
        super(GtkPaned.createPaned(porientation));
    }

    protected Paned(long pointer) {
        super(pointer);
    }

}
