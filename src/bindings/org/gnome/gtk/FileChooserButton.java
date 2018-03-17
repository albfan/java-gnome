
package org.gnome.gtk;


public class FileChooserButton
    extends Box
{


    public FileChooserButton(String ptitle, FileChooserAction paction) {
        super(org.gnome.gtk.GtkFileChooserButton.createFileChooserButton(ptitle, paction));
    }

    public FileChooserButton(Widget pdialog) {
        super(org.gnome.gtk.GtkFileChooserButton.createFileChooserButton(pdialog));
    }

    protected FileChooserButton(long pointer) {
        super(pointer);
    }

}
