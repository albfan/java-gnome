
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TreePath
    extends Object
{


    public TreePath() {
        super(org.gnome.gtk.GtkTreePath.createTreePath());
    }

    public TreePath() {
        super(org.gnome.gtk.GtkTreePath.createTreePath());
    }

    public TreePath(int pfirst_index) {
        super(org.gnome.gtk.GtkTreePath.createTreePath(pfirst_index));
    }

    public TreePath(long plength) {
        super(org.gnome.gtk.GtkTreePath.createTreePath(plength));
    }

    public TreePath(String ppath) {
        super(org.gnome.gtk.GtkTreePath.createTreePath(ppath));
    }

    protected TreePath(long pointer) {
        super(pointer);
    }

}
