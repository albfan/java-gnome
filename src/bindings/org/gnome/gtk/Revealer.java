
package org.gnome.gtk;


public class Revealer
    extends Bin
{


    public Revealer() {
        super(GtkRevealer.createRevealer());
    }

    protected Revealer(long pointer) {
        super(pointer);
    }

}
