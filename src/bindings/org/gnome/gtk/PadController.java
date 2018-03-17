
package org.gnome.gtk;


public class PadController
    extends EventController
{


    public PadController(Window pwindow, ActionGroup pgroup, dkDevice ppad) {
        super(GtkPadController.createPadController(pwindow, pgroup, ppad));
    }

    protected PadController(long pointer) {
        super(pointer);
    }

}
