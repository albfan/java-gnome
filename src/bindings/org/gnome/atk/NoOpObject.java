
package org.gnome.atk;


public class NoOpObject
    extends Object
{


    public NoOpObject(org.gnome.glib.Object pobj) {
        super(AtkNoOpObject.createNoOpObject(pobj));
    }

    protected NoOpObject(long pointer) {
        super(pointer);
    }

}
