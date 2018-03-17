
package org.gnome.gio;

import org.gnome.glib.Object;

public class FileIcon
    extends Object
{


    public FileIcon(File pfile) {
        super(GFileIcon.createFileIcon(pfile));
    }

    protected FileIcon(long pointer) {
        super(pointer);
    }

}
