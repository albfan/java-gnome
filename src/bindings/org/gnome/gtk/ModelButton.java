
package org.gnome.gtk;


public class ModelButton
    extends Button
{


    public ModelButton() {
        super(GtkModelButton.createModelButton());
    }

    protected ModelButton(long pointer) {
        super(pointer);
    }

}
