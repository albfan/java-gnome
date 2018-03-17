
package org.gnome.gtk;


public class Frame
    extends Bin
{


    public Frame(String plabel) {
        super(GtkFrame.createFrame(plabel));
    }

    protected Frame(long pointer) {
        super(pointer);
    }

}
