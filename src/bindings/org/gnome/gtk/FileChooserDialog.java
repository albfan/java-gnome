
package org.gnome.gtk;


public class FileChooserDialog
    extends Dialog
{


    public FileChooserDialog(java.lang.String ptitle, Window pparent, FileChooserAction paction, java.lang.String pfirst_button_text) {
        super(GtkFileChooserDialog.createFileChooserDialog(ptitle, pparent, paction, pfirst_button_text));
    }

    protected FileChooserDialog(long pointer) {
        super(pointer);
    }

}
