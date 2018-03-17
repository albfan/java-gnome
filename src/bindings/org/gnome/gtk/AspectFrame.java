
package org.gnome.gtk;


public class AspectFrame
    extends Frame
{


    public AspectFrame(String plabel, gfloat pxalign, gfloat pyalign, gfloat pratio, boolean pobey_child) {
        super(GtkAspectFrame.createAspectFrame(plabel, pxalign, pyalign, pratio, pobey_child));
    }

    protected AspectFrame(long pointer) {
        super(pointer);
    }

}
