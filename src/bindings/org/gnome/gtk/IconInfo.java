
package org.gnome.gtk;

import org.gnome.glib.Object;

public class IconInfo
    extends Object
{


    public IconInfo(IconTheme picon_theme, dkPixbuf ppixbuf) {
        super(GtkIconInfo.createIconInfo(picon_theme, ppixbuf));
    }

    protected IconInfo(long pointer) {
        super(pointer);
    }

}
