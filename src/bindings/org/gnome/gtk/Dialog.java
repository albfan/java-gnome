
package org.gnome.gtk;


public class Dialog
    extends Window
{


    public Dialog() {
        super(org.gnome.gtk.GtkDialog.createDialog());
    }

    public Dialog(java.lang.String ptitle, Window pparent, DialogFlags pflags, java.lang.String pfirst_button_text) {
        super(org.gnome.gtk.GtkDialog.createDialog(ptitle, pparent, pflags, pfirst_button_text));
    }

    protected Dialog(long pointer) {
        super(pointer);
    }

}
