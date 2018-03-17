
package org.gnome.gtk;


public class AppChooserButton
    extends ComboBox
{


    public AppChooserButton(String pcontent_type) {
        super(GtkAppChooserButton.createAppChooserButton(pcontent_type));
    }

    protected AppChooserButton(long pointer) {
        super(pointer);
    }

}
