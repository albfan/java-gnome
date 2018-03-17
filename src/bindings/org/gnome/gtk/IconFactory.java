
package org.gnome.gtk;

import org.gnome.glib.Object;

public class IconFactory
    extends Object
{


    public IconFactory() {
        super(GtkIconFactory.createIconFactory());
    }

    protected IconFactory(long pointer) {
        super(pointer);
    }

}
