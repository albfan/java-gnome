
package org.gnome.gtk;


public class ContainerCellAccessible
    extends CellAccessible
{


    public ContainerCellAccessible() {
        super(GtkContainerCellAccessible.createContainerCellAccessible());
    }

    protected ContainerCellAccessible(long pointer) {
        super(pointer);
    }

}
