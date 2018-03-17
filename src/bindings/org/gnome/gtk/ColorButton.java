
package org.gnome.gtk;


import org.gnome.gdk.Color;
import org.gnome.gdk.RGBA;

public class ColorButton
    extends Button
{


    public ColorButton() {
        super(org.gnome.gtk.GtkColorButton.createColorButton());
    }

    public ColorButton(Color pcolor) {
        super(org.gnome.gtk.GtkColorButton.createColorButton(pcolor));
    }

    public ColorButton(RGBA prgba) {
        super(org.gnome.gtk.GtkColorButton.createColorButton(prgba));
    }

    protected ColorButton(long pointer) {
        super(pointer);
    }

}
