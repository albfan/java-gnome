
package org.gnome.gdk;

import org.gnome.glib.Object;

public class Window
    extends Object
{


    public Window(Window pparent, WindowAttr pattributes, int pattributes_mask) {
        super(GdkWindow.createWindow(pparent, pattributes, pattributes_mask));
    }

    protected Window(long pointer) {
        super(pointer);
    }

}
