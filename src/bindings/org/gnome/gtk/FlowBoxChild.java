
package org.gnome.gtk;


public class FlowBoxChild
    extends Bin
{


    public FlowBoxChild() {
        super(GtkFlowBoxChild.createFlowBoxChild());
    }

    protected FlowBoxChild(long pointer) {
        super(pointer);
    }

}
