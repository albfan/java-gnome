
package org.gnome.gtk;


public class ColorChooserDialog
    extends Dialog
{


    public ColorChooserDialog(String ptitle, Window pparent) {
        super(GtkColorChooserDialog.createColorChooserDialog(ptitle, pparent));
    }

    protected ColorChooserDialog(long pointer) {
        super(pointer);
    }

}
