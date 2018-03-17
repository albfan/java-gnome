
package org.gnome.gtk;


public class VolumeButton
    extends ScaleButton
{


    public VolumeButton() {
        super(GtkVolumeButton.createVolumeButton());
    }

    protected VolumeButton(long pointer) {
        super(pointer);
    }

}
