
package org.gnome.gtk;


public class ColorSelectionDialog
    extends Dialog
{


    public ColorSelectionDialog(String ptitle) {
        super(GtkColorSelectionDialog.createColorSelectionDialog(ptitle));
    }

    protected ColorSelectionDialog(long pointer) {
        super(pointer);
    }

}
