
package org.gnome.gtk;


public class ComboBox
    extends Bin
{


    public ComboBox() {
        super(org.gnome.gtk.GtkComboBox.createComboBox());
    }

    public ComboBox(CellArea parea) {
        super(org.gnome.gtk.GtkComboBox.createComboBox(parea));
    }

    public ComboBox(CellArea parea) {
        super(org.gnome.gtk.GtkComboBox.createComboBox(parea));
    }

    public ComboBox() {
        super(org.gnome.gtk.GtkComboBox.createComboBox());
    }

    public ComboBox(TreeModel pmodel) {
        super(org.gnome.gtk.GtkComboBox.createComboBox(pmodel));
    }

    public ComboBox(TreeModel pmodel) {
        super(org.gnome.gtk.GtkComboBox.createComboBox(pmodel));
    }

    protected ComboBox(long pointer) {
        super(pointer);
    }

}
