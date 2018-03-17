
package org.gnome.gtk;


public class RadioMenuItem
    extends CheckMenuItem
{


    public RadioMenuItem(SList pgroup) {
        super(org.gnome.gtk.GtkRadioMenuItem.createRadioMenuItem(pgroup));
    }

    public RadioMenuItem(RadioMenuItem pgroup) {
        super(org.gnome.gtk.GtkRadioMenuItem.createRadioMenuItem(pgroup));
    }

    public RadioMenuItem(SList pgroup, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioMenuItem.createRadioMenuItem(pgroup, plabel));
    }

    public RadioMenuItem(RadioMenuItem pgroup, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioMenuItem.createRadioMenuItem(pgroup, plabel));
    }

    public RadioMenuItem(SList pgroup, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioMenuItem.createRadioMenuItem(pgroup, plabel));
    }

    public RadioMenuItem(RadioMenuItem pgroup, java.lang.String plabel) {
        super(org.gnome.gtk.GtkRadioMenuItem.createRadioMenuItem(pgroup, plabel));
    }

    protected RadioMenuItem(long pointer) {
        super(pointer);
    }

}
