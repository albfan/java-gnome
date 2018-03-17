
package org.gnome.gtk;


public class InfoBar
    extends Box
{


    public InfoBar() {
        super(org.gnome.gtk.GtkInfoBar.createInfoBar());
    }

    public InfoBar(String pfirst_button_text) {
        super(org.gnome.gtk.GtkInfoBar.createInfoBar(pfirst_button_text));
    }

    protected InfoBar(long pointer) {
        super(pointer);
    }

}
