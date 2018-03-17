
package org.gnome.gtk;


public class Invisible
    extends Widget
{


    public Invisible() {
        super(org.gnome.gtk.GtkInvisible.createInvisible());
    }

    public Invisible(dkScreen pscreen) {
        super(org.gnome.gtk.GtkInvisible.createInvisible(pscreen));
    }

    protected Invisible(long pointer) {
        super(pointer);
    }

}
