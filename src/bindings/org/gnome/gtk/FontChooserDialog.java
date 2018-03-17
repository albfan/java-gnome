
package org.gnome.gtk;


public class FontChooserDialog
    extends Dialog
{


    public FontChooserDialog(String ptitle, Window pparent) {
        super(GtkFontChooserDialog.createFontChooserDialog(ptitle, pparent));
    }

    protected FontChooserDialog(long pointer) {
        super(pointer);
    }

}
