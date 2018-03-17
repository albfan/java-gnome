
package org.gnome.atk;

import org.gnome.glib.Object;

public class Relation
    extends Object
{


    public Relation(int pn_targets, RelationType prelationship) {
        super(AtkRelation.createRelation(pn_targets, prelationship));
    }

    protected Relation(long pointer) {
        super(pointer);
    }

}
