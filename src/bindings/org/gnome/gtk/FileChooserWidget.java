
package org.gnome.gtk;


public class FileChooserWidget
    extends Box
{


    public FileChooserWidget(FileChooserAction paction) {
        super(GtkFileChooserWidget.createFileChooserWidget(paction));
    }

    protected FileChooserWidget(long pointer) {
        super(pointer);
    }

}
