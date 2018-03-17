
package org.gnome.gtk;


public class Plug
    extends Window
{


    public Plug(Window psocket_id) {
        super(org.gnome.gtk.GtkPlug.createPlug(psocket_id));
    }

    public Plug(dkDisplay pdisplay, Window psocket_id) {
        super(org.gnome.gtk.GtkPlug.createPlug(pdisplay, psocket_id));
    }

    protected Plug(long pointer) {
        super(pointer);
    }

}
