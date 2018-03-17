
package org.gnome.gtk;


public class MessageDialog
    extends Dialog
{


    public MessageDialog(Window pparent, DialogFlags pflags, MessageType ptype, ButtonsType pbuttons, java.lang.String pmessage_format) {
        super(org.gnome.gtk.GtkMessageDialog.createMessageDialog(pparent, pflags, ptype, pbuttons, pmessage_format));
    }

    public MessageDialog(Window pparent, DialogFlags pflags, MessageType ptype, ButtonsType pbuttons, java.lang.String pmessage_format) {
        super(org.gnome.gtk.GtkMessageDialog.createMessageDialog(pparent, pflags, ptype, pbuttons, pmessage_format));
    }

    protected MessageDialog(long pointer) {
        super(pointer);
    }

}
