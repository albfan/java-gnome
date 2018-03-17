
package org.gnome.atk;

import org.gnome.glib.Object;

public class StateSet
    extends Object
{


    public StateSet() {
        super(AtkStateSet.createStateSet());
    }

    protected StateSet(long pointer) {
        super(pointer);
    }

}
