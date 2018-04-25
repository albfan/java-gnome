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
import org.gnome.atk.EditableText;
import org.gnome.atk.Plumbing;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkEditableText extends Plumbing
{
    private AtkEditableText() {}

    static final void copyText(EditableText self, int startPos, int endPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_editable_text_copy_text(pointerOf((Object) self), startPos, endPos);
        }
    }

    private static native final void atk_editable_text_copy_text(long self, int startPos, int endPos);

    static final void cutText(EditableText self, int startPos, int endPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_editable_text_cut_text(pointerOf((Object) self), startPos, endPos);
        }
    }

    private static native final void atk_editable_text_cut_text(long self, int startPos, int endPos);

    static final void deleteText(EditableText self, int startPos, int endPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_editable_text_delete_text(pointerOf((Object) self), startPos, endPos);
        }
    }

    private static native final void atk_editable_text_delete_text(long self, int startPos, int endPos);

    static final void insertText(EditableText self, String string, int length, int[] position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (string == null) {
            throw new IllegalArgumentException("string can't be null");
        }

        if (position == null) {
            throw new IllegalArgumentException("position can't be null");
        }

        synchronized (lock) {
            atk_editable_text_insert_text(pointerOf((Object) self), string, length, position);
        }
    }

    private static native final void atk_editable_text_insert_text(long self, String string, int length, int[] position);

    static final void pasteText(EditableText self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            atk_editable_text_paste_text(pointerOf((Object) self), position);
        }
    }

    private static native final void atk_editable_text_paste_text(long self, int position);

    @SuppressWarnings("unused")
    static final boolean setRunAttributes(EditableText self, FIXME attribSet, int startOffset, int endOffset) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkAttributeSet*");
    }

    static final void setTextContents(EditableText self, String string) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (string == null) {
            throw new IllegalArgumentException("string can't be null");
        }

        synchronized (lock) {
            atk_editable_text_set_text_contents(pointerOf((Object) self), string);
        }
    }

    private static native final void atk_editable_text_set_text_contents(long self, String string);

    interface CopyTextSignal extends Signal
    {
        void onCopyText(EditableText source, int startPos, int endPos);
    }

    static final void connect(EditableText self, AtkEditableText.CopyTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkEditableText.class, "copy-text", after);
    }

    protected static final void receiveCopyText(Signal handler, long source, int startPos, int endPos) {
        ((AtkEditableText.CopyTextSignal) handler).onCopyText((EditableText) objectFor(source), startPos, endPos);
    }

    interface CutTextSignal extends Signal
    {
        void onCutText(EditableText source, int startPos, int endPos);
    }

    static final void connect(EditableText self, AtkEditableText.CutTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkEditableText.class, "cut-text", after);
    }

    protected static final void receiveCutText(Signal handler, long source, int startPos, int endPos) {
        ((AtkEditableText.CutTextSignal) handler).onCutText((EditableText) objectFor(source), startPos, endPos);
    }

    interface DeleteTextSignal extends Signal
    {
        void onDeleteText(EditableText source, int startPos, int endPos);
    }

    static final void connect(EditableText self, AtkEditableText.DeleteTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkEditableText.class, "delete-text", after);
    }

    protected static final void receiveDeleteText(Signal handler, long source, int startPos, int endPos) {
        ((AtkEditableText.DeleteTextSignal) handler).onDeleteText((EditableText) objectFor(source), startPos, endPos);
    }

    interface InsertTextSignal extends Signal
    {
        void onInsertText(EditableText source, String string, int length, int[] position);
    }

    static final void connect(EditableText self, AtkEditableText.InsertTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkEditableText.class, "insert-text", after);
    }

    protected static final void receiveInsertText(Signal handler, long source, String string, int length, int[] position) {
        ((AtkEditableText.InsertTextSignal) handler).onInsertText((EditableText) objectFor(source), string, length, position);
    }

    interface PasteTextSignal extends Signal
    {
        void onPasteText(EditableText source, int position);
    }

    static final void connect(EditableText self, AtkEditableText.PasteTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkEditableText.class, "paste-text", after);
    }

    protected static final void receivePasteText(Signal handler, long source, int position) {
        ((AtkEditableText.PasteTextSignal) handler).onPasteText((EditableText) objectFor(source), position);
    }

    interface SetRunAttributesSignal extends Signal
    {
        boolean onSetRunAttributes(EditableText source, FIXME attribSet, int startOffset, int endOffset);
    }

    static final void connect(EditableText self, AtkEditableText.SetRunAttributesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkEditableText.class, "set-run-attributes", after);
    }

    protected static final boolean receiveSetRunAttributes(Signal handler, long source, java.lang.Object attribSet, int startOffset, int endOffset) {
        boolean result;

        result = ((AtkEditableText.SetRunAttributesSignal) handler).onSetRunAttributes((EditableText) objectFor(source), (FIXME) attribSet, startOffset, endOffset);

        return result;
    }

    interface SetTextContentsSignal extends Signal
    {
        void onSetTextContents(EditableText source, String string);
    }

    static final void connect(EditableText self, AtkEditableText.SetTextContentsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkEditableText.class, "set-text-contents", after);
    }

    protected static final void receiveSetTextContents(Signal handler, long source, String string) {
        ((AtkEditableText.SetTextContentsSignal) handler).onSetTextContents((EditableText) objectFor(source), string);
    }
}

