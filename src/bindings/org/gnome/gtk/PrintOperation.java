
package org.gnome.gtk;

import org.gnome.glib.Object;

public class PrintOperation
    extends Object
{


    public PrintOperation() {
        super(GtkPrintOperation.createPrintOperation());
    }

    protected PrintOperation(long pointer) {
        super(pointer);
    }

}
