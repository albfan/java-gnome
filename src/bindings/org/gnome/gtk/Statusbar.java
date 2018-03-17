
package org.gnome.gtk;


public class Statusbar
    extends Box
{


    public Statusbar() {
        super(GtkStatusbar.createStatusbar());
    }

    protected Statusbar(long pointer) {
        super(pointer);
    }

}
