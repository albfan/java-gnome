
package org.gnome.gtk;

import org.gnome.glib.Object;

public class IconSet
    extends Object
{


    public IconSet() {
        super(org.gnome.gtk.GtkIconSet.createIconSet());
    }

    public IconSet(dkPixbuf ppixbuf) {
        super(org.gnome.gtk.GtkIconSet.createIconSet(ppixbuf));
    }

    protected IconSet(long pointer) {
        super(pointer);
    }

}
