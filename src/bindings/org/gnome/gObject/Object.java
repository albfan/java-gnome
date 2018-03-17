
package org.gnome.gObject;


public class Object
    extends org.gnome.glib.Object
{


    public Object(Type pobject_type, java.lang.String pfirst_property_name) {
        super(org.gnome.gObject.GObject.createObject(pobject_type, pfirst_property_name));
    }

    public Object(Type pobject_type, java.lang.String pfirst_property_name, va_list pvar_args) {
        super(org.gnome.gObject.GObject.createObject(pobject_type, pfirst_property_name, pvar_args));
    }

    public Object(Type pobject_type, int pn_properties) {
        super(org.gnome.gObject.GObject.createObject(pobject_type, pn_properties));
    }

    public Object(Type pobject_type, int pn_parameters) {
        super(org.gnome.gObject.GObject.createObject(pobject_type, pn_parameters));
    }

    protected Object(long pointer) {
        super(pointer);
    }

}
