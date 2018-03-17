
package org.gnome.gtk;


public class TreeView
    extends Container
{


    public TreeView() {
        super(org.gnome.gtk.GtkTreeView.createTreeView());
    }

    public TreeView(TreeModel pmodel) {
        super(org.gnome.gtk.GtkTreeView.createTreeView(pmodel));
    }

    protected TreeView(long pointer) {
        super(pointer);
    }

}
