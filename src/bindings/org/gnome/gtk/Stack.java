
package org.gnome.gtk;


public class Stack
    extends Container
{


    public Stack() {
        super(GtkStack.createStack());
    }

    protected Stack(long pointer) {
        super(pointer);
    }

}
