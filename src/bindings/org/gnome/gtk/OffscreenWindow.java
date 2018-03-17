
package org.gnome.gtk;


public class OffscreenWindow
    extends Window
{


    public OffscreenWindow() {
        super(GtkOffscreenWindow.createOffscreenWindow());
    }

    protected OffscreenWindow(long pointer) {
        super(pointer);
    }

}
