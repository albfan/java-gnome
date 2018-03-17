
package org.gnome.gtk;

import GObject.InitiallyUnowned;

public class TreeViewColumn
    extends InitiallyUnowned
{


    public TreeViewColumn() {
        super(org.gnome.gtk.GtkTreeViewColumn.createTreeViewColumn());
    }

    public TreeViewColumn(CellArea parea) {
        super(org.gnome.gtk.GtkTreeViewColumn.createTreeViewColumn(parea));
    }

    public TreeViewColumn(String ptitle, CellRenderer pcell) {
        super(org.gnome.gtk.GtkTreeViewColumn.createTreeViewColumn(ptitle, pcell));
    }

    protected TreeViewColumn(long pointer) {
        super(pointer);
    }

}
