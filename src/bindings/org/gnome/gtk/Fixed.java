
package org.gnome.gtk;


public class Fixed
    extends Container
{


    public Fixed() {
        super(GtkFixed.createFixed());
    }

    protected Fixed(long pointer) {
        super(pointer);
    }

}
