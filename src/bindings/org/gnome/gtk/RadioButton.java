
package org.gnome.gtk;


public class RadioButton
    extends CheckButton
{


    public RadioButton(SList pgroup) {
        super(org.gnome.gtk.GtkRadioButton.createRadioButton(pgroup));
    }

    public RadioButton(RadioButton pradio_group_member) {
        super(org.gnome.gtk.GtkRadioButton.createRadioButton(pradio_group_member));
    }

    public RadioButton(SList pgroup, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioButton.createRadioButton(pgroup, plabel));
    }

    public RadioButton(RadioButton pradio_group_member, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioButton.createRadioButton(pradio_group_member, plabel));
    }

    public RadioButton(SList pgroup, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioButton.createRadioButton(pgroup, plabel));
    }

    public RadioButton(RadioButton pradio_group_member, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioButton.createRadioButton(pradio_group_member, plabel));
    }

    protected RadioButton(long pointer) {
        super(pointer);
    }

}
