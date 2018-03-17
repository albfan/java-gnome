
package org.gnome.gtk;

import GObject.InitiallyUnowned;

public class FileFilter
    extends InitiallyUnowned
{


    public FileFilter() {
        super(org.gnome.gtk.GtkFileFilter.createFileFilter());
    }

    public FileFilter(Variant pvariant) {
        super(org.gnome.gtk.GtkFileFilter.createFileFilter(pvariant));
    }

    protected FileFilter(long pointer) {
        super(pointer);
    }

}
