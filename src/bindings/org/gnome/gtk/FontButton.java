
package org.gnome.gtk;


public class FontButton
    extends Button
{


    public FontButton() {
        super(org.gnome.gtk.GtkFontButton.createFontButton());
    }

    public FontButton(String pfontname) {
        super(org.gnome.gtk.GtkFontButton.createFontButton(pfontname));
    }

    protected FontButton(long pointer) {
        super(pointer);
    }

}
