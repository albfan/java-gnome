
package org.gnome.gtk;


public class Toolbar
    extends Container
{


    public Toolbar() {
        super(GtkToolbar.createToolbar());
    }

    protected Toolbar(long pointer) {
        super(pointer);
    }

}
