
package org.gnome.gio;

import org.gnome.glib.Object;

public class ListStore
    extends Object
{


    public ListStore(Type pitem_type) {
        super(GListStore.createListStore(pitem_type));
    }

    protected ListStore(long pointer) {
        super(pointer);
    }

}
