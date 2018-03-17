
package org.gnome.gtk;


public class ApplicationWindow
    extends Window
{


    public ApplicationWindow(Application papplication) {
        super(GtkApplicationWindow.createApplicationWindow(papplication));
    }

    protected ApplicationWindow(long pointer) {
        super(pointer);
    }

}
