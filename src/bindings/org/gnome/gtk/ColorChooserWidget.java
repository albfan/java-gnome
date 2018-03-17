
package org.gnome.gtk;


public class ColorChooserWidget
    extends Box
{


    public ColorChooserWidget() {
        super(GtkColorChooserWidget.createColorChooserWidget());
    }

    protected ColorChooserWidget(long pointer) {
        super(pointer);
    }

}
