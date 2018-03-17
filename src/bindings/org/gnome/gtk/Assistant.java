
package org.gnome.gtk;


public class Assistant
    extends Window
{


    public Assistant() {
        super(GtkAssistant.createAssistant());
    }

    protected Assistant(long pointer) {
        super(pointer);
    }

}
