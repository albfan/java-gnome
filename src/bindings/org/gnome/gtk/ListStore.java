
package org.gnome.gtk;

import org.gnome.glib.Object;

public class ListStore
    extends Object
{


    public ListStore(int pn_columns) {
        super(org.gnome.gtk.GtkListStore.createListStore(pn_columns));
    }

    public ListStore(int pn_columns) {
        super(org.gnome.gtk.GtkListStore.createListStore(pn_columns));
    }

    protected ListStore(long pointer) {
        super(pointer);
    }

}
