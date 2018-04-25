/*
 * java-gnome, a UI library for writing GTK and GNOME programs from Java!
 *
 * Copyright © 2006-2012 Operational Dynamics Consulting, Pty Ltd and Others
 *
 * The code in this file, and the program it is a part of, is made available
 * to you by its authors as open source software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License version
 * 2 ("GPL") as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GPL for more details.
 *
 * You should have received a copy of the GPL along with this program. If not,
 * see http://www.gnu.org/licenses/. The authors of this program may be
 * contacted through http://java-gnome.sourceforge.net/.
 *
 * Linking this library statically or dynamically with other modules is making
 * a combined work based on this library. Thus, the terms and conditions of
 * the GPL cover the whole combination. As a special exception (the
 * "Classpath Exception"), the copyright holders of this library give you
 * permission to link this library with independent modules to produce an
 * executable, regardless of the license terms of these independent modules,
 * and to copy and distribute the resulting executable under terms of your
 * choice, provided that you also meet, for each linked independent module,
 * the terms and conditions of the license of that module. An independent
 * module is a module which is not derived from or based on this library. If
 * you modify this library, you may extend the Classpath Exception to your
 * version of the library, but you are not obligated to do so. If you do not
 * wish to do so, delete this exception statement from your version.
 */
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.atk.Document;
import org.gnome.atk.Plumbing;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkDocument extends Plumbing
{
    private AtkDocument() {}

    static final String getAttributeValue(Document self, String attributeName) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (attributeName == null) {
            throw new IllegalArgumentException("attributeName can't be null");
        }

        synchronized (lock) {
            result = atk_document_get_attribute_value(pointerOf((Object) self), attributeName);

            return result;
        }
    }

    private static native final String atk_document_get_attribute_value(long self, String attributeName);

    @SuppressWarnings("unused")
    static final FIXME getAttributes(Document self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkAttributeSet*");
    }

    static final int getCurrentPageNumber(Document self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_document_get_current_page_number(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_document_get_current_page_number(long self);

    @SuppressWarnings("unused")
    static final FIXME getDocument(Document self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final String getDocumentType(Document self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_document_get_document_type(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String atk_document_get_document_type(long self);

    static final String getLocale(Document self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_document_get_locale(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String atk_document_get_locale(long self);

    static final int getPageCount(Document self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_document_get_page_count(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_document_get_page_count(long self);

    static final boolean setAttributeValue(Document self, String attributeName, String attributeValue) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (attributeName == null) {
            throw new IllegalArgumentException("attributeName can't be null");
        }

        if (attributeValue == null) {
            throw new IllegalArgumentException("attributeValue can't be null");
        }

        synchronized (lock) {
            result = atk_document_set_attribute_value(pointerOf((Object) self), attributeName, attributeValue);

            return result;
        }
    }

    private static native final boolean atk_document_set_attribute_value(long self, String attributeName, String attributeValue);

    interface GetCurrentPageNumberSignal extends Signal
    {
        int onGetCurrentPageNumber(Document source);
    }

    static final void connect(Document self, AtkDocument.GetCurrentPageNumberSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "get-current-page-number", after);
    }

    protected static final int receiveGetCurrentPageNumber(Signal handler, long source) {
        int result;

        result = ((AtkDocument.GetCurrentPageNumberSignal) handler).onGetCurrentPageNumber((Document) objectFor(source));

        return result;
    }

    interface GetDocumentSignal extends Signal
    {
        FIXME onGetDocument(Document source);
    }

    static final void connect(Document self, AtkDocument.GetDocumentSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "get-document", after);
    }

    protected static final java.lang.Object receiveGetDocument(Signal handler, long source) {
        FIXME result;

        result = ((AtkDocument.GetDocumentSignal) handler).onGetDocument((Document) objectFor(source));

        return result;
    }

    interface GetDocumentAttributeValueSignal extends Signal
    {
        String onGetDocumentAttributeValue(Document source, String attributeName);
    }

    static final void connect(Document self, AtkDocument.GetDocumentAttributeValueSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "get-document-attribute-value", after);
    }

    protected static final String receiveGetDocumentAttributeValue(Signal handler, long source, String attributeName) {
        String result;

        result = ((AtkDocument.GetDocumentAttributeValueSignal) handler).onGetDocumentAttributeValue((Document) objectFor(source), attributeName);

        return result;
    }

    interface GetDocumentAttributesSignal extends Signal
    {
        FIXME onGetDocumentAttributes(Document source);
    }

    static final void connect(Document self, AtkDocument.GetDocumentAttributesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "get-document-attributes", after);
    }

    protected static final java.lang.Object receiveGetDocumentAttributes(Signal handler, long source) {
        FIXME result;

        result = ((AtkDocument.GetDocumentAttributesSignal) handler).onGetDocumentAttributes((Document) objectFor(source));

        return result;
    }

    interface GetDocumentLocaleSignal extends Signal
    {
        String onGetDocumentLocale(Document source);
    }

    static final void connect(Document self, AtkDocument.GetDocumentLocaleSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "get-document-locale", after);
    }

    protected static final String receiveGetDocumentLocale(Signal handler, long source) {
        String result;

        result = ((AtkDocument.GetDocumentLocaleSignal) handler).onGetDocumentLocale((Document) objectFor(source));

        return result;
    }

    interface GetDocumentTypeSignal extends Signal
    {
        String onGetDocumentType(Document source);
    }

    static final void connect(Document self, AtkDocument.GetDocumentTypeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "get-document-type", after);
    }

    protected static final String receiveGetDocumentType(Signal handler, long source) {
        String result;

        result = ((AtkDocument.GetDocumentTypeSignal) handler).onGetDocumentType((Document) objectFor(source));

        return result;
    }

    interface GetPageCountSignal extends Signal
    {
        int onGetPageCount(Document source);
    }

    static final void connect(Document self, AtkDocument.GetPageCountSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "get-page-count", after);
    }

    protected static final int receiveGetPageCount(Signal handler, long source) {
        int result;

        result = ((AtkDocument.GetPageCountSignal) handler).onGetPageCount((Document) objectFor(source));

        return result;
    }

    interface SetDocumentAttributeSignal extends Signal
    {
        boolean onSetDocumentAttribute(Document source, String attributeName, String attributeValue);
    }

    static final void connect(Document self, AtkDocument.SetDocumentAttributeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "set-document-attribute", after);
    }

    protected static final boolean receiveSetDocumentAttribute(Signal handler, long source, String attributeName, String attributeValue) {
        boolean result;

        result = ((AtkDocument.SetDocumentAttributeSignal) handler).onSetDocumentAttribute((Document) objectFor(source), attributeName, attributeValue);

        return result;
    }

    interface LoadCompleteSignal extends Signal
    {
        void onLoadComplete(Document source);
    }

    static final void connect(Document self, AtkDocument.LoadCompleteSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "load-complete", after);
    }

    protected static final void receiveLoadComplete(Signal handler, long source) {
        ((AtkDocument.LoadCompleteSignal) handler).onLoadComplete((Document) objectFor(source));
    }

    interface LoadStoppedSignal extends Signal
    {
        void onLoadStopped(Document source);
    }

    static final void connect(Document self, AtkDocument.LoadStoppedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "load-stopped", after);
    }

    protected static final void receiveLoadStopped(Signal handler, long source) {
        ((AtkDocument.LoadStoppedSignal) handler).onLoadStopped((Document) objectFor(source));
    }

    interface PageChangedSignal extends Signal
    {
        void onPageChanged(Document source, int pageNumber);
    }

    static final void connect(Document self, AtkDocument.PageChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "page-changed", after);
    }

    protected static final void receivePageChanged(Signal handler, long source, int pageNumber) {
        ((AtkDocument.PageChangedSignal) handler).onPageChanged((Document) objectFor(source), pageNumber);
    }

    interface ReloadSignal extends Signal
    {
        void onReload(Document source);
    }

    static final void connect(Document self, AtkDocument.ReloadSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkDocument.class, "reload", after);
    }

    protected static final void receiveReload(Signal handler, long source) {
        ((AtkDocument.ReloadSignal) handler).onReload((Document) objectFor(source));
    }
}

