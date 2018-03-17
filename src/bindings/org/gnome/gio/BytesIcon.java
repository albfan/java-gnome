
package org.gnome.gio;

import org.gnome.glib.Object;

public class BytesIcon
    extends Object
{


    public BytesIcon(Bytes pbytes) {
        super(GBytesIcon.createBytesIcon(pbytes));
    }

    protected BytesIcon(long pointer) {
        super(pointer);
    }

}
