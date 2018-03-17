
package org.gnome.gtk;


public class ShortcutLabel
    extends Box
{


    public ShortcutLabel(String paccelerator) {
        super(GtkShortcutLabel.createShortcutLabel(paccelerator));
    }

    protected ShortcutLabel(long pointer) {
        super(pointer);
    }

}
