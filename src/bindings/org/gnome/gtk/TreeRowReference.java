
package org.gnome.gtk;


public class TreeRowReference
    extends org.gnome.glib.Object
{


    public TreeRowReference(TreeModel pmodel, TreePath ppath) {
        super(org.gnome.gtk.GtkTreeRowReference.createTreeRowReference(pmodel, ppath));
    }

    public TreeRowReference(org.gnome.glib.Object pproxy, TreeModel pmodel, TreePath ppath) {
        super(org.gnome.gtk.GtkTreeRowReference.createTreeRowReference(pproxy, pmodel, ppath));
    }

    protected TreeRowReference(long pointer) {
        super(pointer);
    }

}
