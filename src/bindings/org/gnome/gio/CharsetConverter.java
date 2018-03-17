
package org.gnome.gio;

import org.gnome.glib.Object;

public class CharsetConverter
    extends Object
{


    public CharsetConverter(java.lang.String pto_charset, java.lang.String pfrom_charset) {
        super(GCharsetConverter.createCharsetConverter(pto_charset, pfrom_charset));
    }

    protected CharsetConverter(long pointer) {
        super(pointer);
    }

}
