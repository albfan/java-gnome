
package org.gnome.atk;

import org.gnome.glib.Object;

public class RelationSet
    extends Object
{


    public RelationSet() {
        super(AtkRelationSet.createRelationSet());
    }

    protected RelationSet(long pointer) {
        super(pointer);
    }

}
