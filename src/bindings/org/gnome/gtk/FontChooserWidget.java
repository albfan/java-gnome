
package org.gnome.gtk;


public class FontChooserWidget
    extends Box
{


    public FontChooserWidget() {
        super(GtkFontChooserWidget.createFontChooserWidget());
    }

    protected FontChooserWidget(long pointer) {
        super(pointer);
    }

}
