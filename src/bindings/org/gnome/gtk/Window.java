
package org.gnome.gtk;


public class Window
    extends Bin
{


    public Window(WindowType ptype) {
        super(GtkWindow.createWindow(ptype));
    }

    protected Window(long pointer) {
        super(pointer);
    }

}
