
package org.gnome.atk;


public class NoOpObjectFactory
    extends ObjectFactory
{


    public NoOpObjectFactory() {
        super(AtkNoOpObjectFactory.createNoOpObjectFactory());
    }

    protected NoOpObjectFactory(long pointer) {
        super(pointer);
    }

}
