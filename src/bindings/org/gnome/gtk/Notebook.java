
package org.gnome.gtk;


public class Notebook
    extends Container
{


    public Notebook() {
        super(GtkNotebook.createNotebook());
    }

    protected Notebook(long pointer) {
        super(pointer);
    }

}
