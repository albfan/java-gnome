
package org.gnome.gtk;


public class Spinner
    extends Widget
{


    public Spinner() {
        super(GtkSpinner.createSpinner());
    }

    protected Spinner(long pointer) {
        super(pointer);
    }

}
