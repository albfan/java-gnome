
package org.gnome.gtk;


public class MountOperation
    extends Gio.MountOperation
{


    public MountOperation(Window pparent) {
        super(GtkMountOperation.createMountOperation(pparent));
    }

    protected MountOperation(long pointer) {
        super(pointer);
    }

}
