
package org.gnome.gtk;


public class LevelBar
    extends Widget
{


    public LevelBar() {
        super(org.gnome.gtk.GtkLevelBar.createLevelBar());
    }

    public LevelBar(gdouble pmin_value, gdouble pmax_value) {
        super(org.gnome.gtk.GtkLevelBar.createLevelBar(pmin_value, pmax_value));
    }

    protected LevelBar(long pointer) {
        super(pointer);
    }

}
