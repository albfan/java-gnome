
package org.gnome.gtk;


public class RadioToolButton
    extends ToggleToolButton
{


    public RadioToolButton(SList pgroup) {
        super(org.gnome.gtk.GtkRadioToolButton.createRadioToolButton(pgroup));
    }

    public RadioToolButton(SList pgroup, java.lang.String pstock_id) {
        super(org.gnome.gtk.GtkRadioToolButton.createRadioToolButton(pgroup, pstock_id));
    }

    public RadioToolButton(RadioToolButton pgroup) {
        super(org.gnome.gtk.GtkRadioToolButton.createRadioToolButton(pgroup));
    }

    public RadioToolButton(RadioToolButton pgroup, java.lang.String pstock_id) {
        super(org.gnome.gtk.GtkRadioToolButton.createRadioToolButton(pgroup, pstock_id));
    }

    protected RadioToolButton(long pointer) {
        super(pointer);
    }

}
