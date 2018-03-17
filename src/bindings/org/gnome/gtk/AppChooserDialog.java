
package org.gnome.gtk;


public class AppChooserDialog
    extends Dialog
{


    public AppChooserDialog(Window pparent, DialogFlags pflags, File pfile) {
        super(org.gnome.gtk.GtkAppChooserDialog.createAppChooserDialog(pparent, pflags, pfile));
    }

    public AppChooserDialog(Window pparent, DialogFlags pflags, String pcontent_type) {
        super(org.gnome.gtk.GtkAppChooserDialog.createAppChooserDialog(pparent, pflags, pcontent_type));
    }

    protected AppChooserDialog(long pointer) {
        super(pointer);
    }

}
