
package org.gnome.gtk;


public class AppChooserWidget
    extends Box
{


    public AppChooserWidget(String pcontent_type) {
        super(GtkAppChooserWidget.createAppChooserWidget(pcontent_type));
    }

    protected AppChooserWidget(long pointer) {
        super(pointer);
    }

}
