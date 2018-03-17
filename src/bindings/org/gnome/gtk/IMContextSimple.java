
package org.gnome.gtk;


public class IMContextSimple
    extends IMContext
{


    public IMContextSimple() {
        super(GtkIMContextSimple.createIMContextSimple());
    }

    protected IMContextSimple(long pointer) {
        super(pointer);
    }

}
