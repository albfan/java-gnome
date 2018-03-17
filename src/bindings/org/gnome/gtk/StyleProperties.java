
package org.gnome.gtk;

import org.gnome.glib.Object;

public class StyleProperties
    extends Object
{


    public StyleProperties() {
        super(GtkStyleProperties.createStyleProperties());
    }

    protected StyleProperties(long pointer) {
        super(pointer);
    }

}
