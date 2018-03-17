
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TreeStore
    extends Object
{


    public TreeStore(int pn_columns) {
        super(org.gnome.gtk.GtkTreeStore.createTreeStore(pn_columns));
    }

    public TreeStore(int pn_columns) {
        super(org.gnome.gtk.GtkTreeStore.createTreeStore(pn_columns));
    }

    protected TreeStore(long pointer) {
        super(pointer);
    }

}
