
package org.gnome.gtk;


public class LockButton
    extends Button
{


    public LockButton(Permission ppermission) {
        super(GtkLockButton.createLockButton(ppermission));
    }

    protected LockButton(long pointer) {
        super(pointer);
    }

}
