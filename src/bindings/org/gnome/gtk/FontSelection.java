
package org.gnome.gtk;


public class FontSelection
    extends Box
{


    public FontSelection() {
        super(GtkFontSelection.createFontSelection());
    }

    protected FontSelection(long pointer) {
        super(pointer);
    }

}
