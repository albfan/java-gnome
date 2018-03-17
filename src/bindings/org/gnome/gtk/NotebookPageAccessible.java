
package org.gnome.gtk;

import Atk.Object;

public class NotebookPageAccessible
    extends Object
{


    public NotebookPageAccessible(NotebookAccessible pnotebook, Widget pchild) {
        super(GtkNotebookPageAccessible.createNotebookPageAccessible(pnotebook, pchild));
    }

    protected NotebookPageAccessible(long pointer) {
        super(pointer);
    }

}
