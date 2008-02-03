/*
 * Scale.java
 *
 * Copyright (c) 2007 Operational Dynamics Consulting Pty Ltd
 *
 * The code in this file, and the library it is a part of, are made available
 * to you by the authors under the terms of the "GNU General Public Licence,
 * version 2" plus the "Classpath Exception" (you may link to this code as a
 * library into other programs provided you don't make a derivation of it).
 * See the LICENCE file for the terms governing usage and redistribution.
 */
package org.gnome.gtk;

/*
 * FIXME this is a placeholder stub for what will become the public API for
 * this type. Replace this comment with appropriate javadoc including author
 * and since tags. Note that the class may need to be made abstract, implement
 * interfaces, or even have its parent changed. No API stability guarantees
 * are made about this class until it has been reviewed by a hacker and this
 * comment has been replaced.
 */
public class Scale extends Range
{
    protected Scale(long pointer) {
        super(pointer);
    }

    /**
     * Specify the number of decimal places that will be shown in the value.
     * This also rounds the value so that when it is retrieved it will match
     * what is displayed.
     * 
     * @since 4.0.6
     */
    public void setDigits(int places) {
        GtkScale.setDigits(this, places);
    }
}
