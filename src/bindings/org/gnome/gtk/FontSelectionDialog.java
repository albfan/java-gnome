
package org.gnome.gtk;


public class FontSelectionDialog
    extends Dialog
{


    public FontSelectionDialog(String ptitle) {
        super(GtkFontSelectionDialog.createFontSelectionDialog(ptitle));
    }

    protected FontSelectionDialog(long pointer) {
        super(pointer);
    }

}
