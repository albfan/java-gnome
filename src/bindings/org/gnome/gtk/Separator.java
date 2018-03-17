
package org.gnome.gtk;


public class Separator
    extends Widget
{


    public Separator(Orientation porientation) {
        super(GtkSeparator.createSeparator(porientation));
    }

    protected Separator(long pointer) {
        super(pointer);
    }

}
