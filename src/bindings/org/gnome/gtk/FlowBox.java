
package org.gnome.gtk;


public class FlowBox
    extends Container
{


    public FlowBox() {
        super(GtkFlowBox.createFlowBox());
    }

    protected FlowBox(long pointer) {
        super(pointer);
    }

}
