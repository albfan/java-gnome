
package org.gnome.gtk;


public class IconView
    extends Container
{


    public IconView() {
        super(org.gnome.gtk.GtkIconView.createIconView());
    }

    public IconView(CellArea parea) {
        super(org.gnome.gtk.GtkIconView.createIconView(parea));
    }

    public IconView(TreeModel pmodel) {
        super(org.gnome.gtk.GtkIconView.createIconView(pmodel));
    }

    protected IconView(long pointer) {
        super(pointer);
    }

}
