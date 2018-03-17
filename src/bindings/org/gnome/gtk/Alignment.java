
package org.gnome.gtk;


public class Alignment
    extends Bin
{


    public Alignment(gfloat pxalign, gfloat pyalign, gfloat pxscale, gfloat pyscale) {
        super(GtkAlignment.createAlignment(pxalign, pyalign, pxscale, pyscale));
    }

    protected Alignment(long pointer) {
        super(pointer);
    }

}
