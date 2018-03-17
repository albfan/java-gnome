
package org.gnome.gio;

import org.freedesktop.bindings.Pointer;
import org.gnome.glib.Object;

public class PropertyAction
    extends Object
{


    public PropertyAction(java.lang.String pname, Pointer pobject, java.lang.String pproperty_name) {
        super(GPropertyAction.createPropertyAction(pname, pobject, pproperty_name));
    }

    protected PropertyAction(long pointer) {
        super(pointer);
    }

}
