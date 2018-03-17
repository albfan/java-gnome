
package org.gnome.gtk;


public class AboutDialog
    extends Dialog
{


    public AboutDialog() {
        super(GtkAboutDialog.createAboutDialog());
    }

    protected AboutDialog(long pointer) {
        super(pointer);
    }

}
