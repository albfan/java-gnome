
package org.gnome.gio;

import GObject.TypeModule;

public class IOModule
    extends TypeModule
{


    public IOModule(String pfilename) {
        super(GIOModule.createIOModule(pfilename));
    }

    protected IOModule(long pointer) {
        super(pointer);
    }

}
