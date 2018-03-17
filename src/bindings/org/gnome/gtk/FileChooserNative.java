
package org.gnome.gtk;


public class FileChooserNative
    extends NativeDialog
{


    public FileChooserNative(java.lang.String ptitle, Window pparent, FileChooserAction paction, java.lang.String paccept_label, java.lang.String pcancel_label) {
        super(GtkFileChooserNative.createFileChooserNative(ptitle, pparent, paction, paccept_label, pcancel_label));
    }

    protected FileChooserNative(long pointer) {
        super(pointer);
    }

}
