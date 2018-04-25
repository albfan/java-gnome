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
import org.gnome.atk.CoordType;
import org.gnome.atk.Plumbing;
import org.gnome.atk.Text;
import org.gnome.atk.TextBoundary;
import org.gnome.atk.TextClipType;
import org.gnome.atk.TextRange;
import org.gnome.atk.TextRectangle;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkText extends Plumbing
{
    private AtkText() {}

    static final boolean addSelection(Text self, int startOffset, int endOffset) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_add_selection(pointerOf((Object) self), startOffset, endOffset);

            return result;
        }
    }

    private static native final boolean atk_text_add_selection(long self, int startOffset, int endOffset);

    static final TextRange[] getBoundedRanges(Text self, TextRectangle rect, CoordType coordType, TextClipType xClipType, TextClipType yClipType) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rect == null) {
            throw new IllegalArgumentException("rect can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        if (xClipType == null) {
            throw new IllegalArgumentException("xClipType can't be null");
        }

        if (yClipType == null) {
            throw new IllegalArgumentException("yClipType can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_bounded_ranges(pointerOf((Object) self), pointerOf(rect), numOf(coordType), numOf(xClipType), numOf(yClipType));

            return (TextRange[]) boxedArrayFor(TextRange.class, result, new TextRange[result.length]);
        }
    }

    private static native final long[] atk_text_get_bounded_ranges(long self, long rect, int coordType, int xClipType, int yClipType);

    static final int getCaretOffset(Text self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_caret_offset(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_text_get_caret_offset(long self);

    static final int getCharacterAtOffset(Text self, int offset) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_character_at_offset(pointerOf((Object) self), offset);

            return result;
        }
    }

    private static native final int atk_text_get_character_at_offset(long self, int offset);

    static final int getCharacterCount(Text self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_character_count(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_text_get_character_count(long self);

    static final void getCharacterExtents(Text self, int offset, int[] x, int[] y, int[] width, int[] height, CoordType coords) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coords == null) {
            throw new IllegalArgumentException("coords can't be null");
        }

        synchronized (lock) {
            atk_text_get_character_extents(pointerOf((Object) self), offset, x, y, width, height, numOf(coords));
        }
    }

    private static native final void atk_text_get_character_extents(long self, int offset, int[] x, int[] y, int[] width, int[] height, int coords);

    @SuppressWarnings("unused")
    static final FIXME getDefaultAttributes(Text self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkAttributeSet*");
    }

    static final int getNSelections(Text self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_n_selections(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_text_get_n_selections(long self);

    static final int getOffsetAtPoint(Text self, int x, int y, CoordType coords) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coords == null) {
            throw new IllegalArgumentException("coords can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_offset_at_point(pointerOf((Object) self), x, y, numOf(coords));

            return result;
        }
    }

    private static native final int atk_text_get_offset_at_point(long self, int x, int y, int coords);

    static final void getRangeExtents(Text self, int startOffset, int endOffset, CoordType coordType, TextRectangle rect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (coordType == null) {
            throw new IllegalArgumentException("coordType can't be null");
        }

        synchronized (lock) {
            atk_text_get_range_extents(pointerOf((Object) self), startOffset, endOffset, numOf(coordType), pointerOf(rect));
        }
    }

    private static native final void atk_text_get_range_extents(long self, int startOffset, int endOffset, int coordType, long rect);

    @SuppressWarnings("unused")
    static final FIXME getRunAttributes(Text self, int offset, int[] startOffset, int[] endOffset) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkAttributeSet*");
    }

    static final String getSelection(Text self, int selectionNum, int[] startOffset, int[] endOffset) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_selection(pointerOf((Object) self), selectionNum, startOffset, endOffset);

            return result;
        }
    }

    private static native final String atk_text_get_selection(long self, int selectionNum, int[] startOffset, int[] endOffset);

    @SuppressWarnings("unused")
    static final String getStringAtOffset(Text self, int offset, FIXME granularity, int[] startOffset, int[] endOffset) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("AtkTextGranularity");
    }

    static final String getText(Text self, int startOffset, int endOffset) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_text(pointerOf((Object) self), startOffset, endOffset);

            return result;
        }
    }

    private static native final String atk_text_get_text(long self, int startOffset, int endOffset);

    static final String getTextAfterOffset(Text self, int offset, TextBoundary boundaryType, int[] startOffset, int[] endOffset) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (boundaryType == null) {
            throw new IllegalArgumentException("boundaryType can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_text_after_offset(pointerOf((Object) self), offset, numOf(boundaryType), startOffset, endOffset);

            return result;
        }
    }

    private static native final String atk_text_get_text_after_offset(long self, int offset, int boundaryType, int[] startOffset, int[] endOffset);

    static final String getTextAtOffset(Text self, int offset, TextBoundary boundaryType, int[] startOffset, int[] endOffset) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (boundaryType == null) {
            throw new IllegalArgumentException("boundaryType can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_text_at_offset(pointerOf((Object) self), offset, numOf(boundaryType), startOffset, endOffset);

            return result;
        }
    }

    private static native final String atk_text_get_text_at_offset(long self, int offset, int boundaryType, int[] startOffset, int[] endOffset);

    static final String getTextBeforeOffset(Text self, int offset, TextBoundary boundaryType, int[] startOffset, int[] endOffset) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (boundaryType == null) {
            throw new IllegalArgumentException("boundaryType can't be null");
        }

        synchronized (lock) {
            result = atk_text_get_text_before_offset(pointerOf((Object) self), offset, numOf(boundaryType), startOffset, endOffset);

            return result;
        }
    }

    private static native final String atk_text_get_text_before_offset(long self, int offset, int boundaryType, int[] startOffset, int[] endOffset);

    static final boolean removeSelection(Text self, int selectionNum) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_remove_selection(pointerOf((Object) self), selectionNum);

            return result;
        }
    }

    private static native final boolean atk_text_remove_selection(long self, int selectionNum);

    static final boolean setCaretOffset(Text self, int offset) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_set_caret_offset(pointerOf((Object) self), offset);

            return result;
        }
    }

    private static native final boolean atk_text_set_caret_offset(long self, int offset);

    static final boolean setSelection(Text self, int selectionNum, int startOffset, int endOffset) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_text_set_selection(pointerOf((Object) self), selectionNum, startOffset, endOffset);

            return result;
        }
    }

    private static native final boolean atk_text_set_selection(long self, int selectionNum, int startOffset, int endOffset);

    static final void freeRanges(TextRange[] ranges) {
        long[] _ranges;

        if (ranges == null) {
            throw new IllegalArgumentException("ranges can't be null");
        }

        _ranges = pointersOf(ranges);

        synchronized (lock) {
            atk_text_free_ranges(_ranges);
            fillBoxedArray(TextRange.class, ranges, _ranges);
        }
    }

    private static native final void atk_text_free_ranges(long[] ranges);

    interface AddSelectionSignal extends Signal
    {
        boolean onAddSelection(Text source, int startOffset, int endOffset);
    }

    static final void connect(Text self, AtkText.AddSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "add-selection", after);
    }

    protected static final boolean receiveAddSelection(Signal handler, long source, int startOffset, int endOffset) {
        boolean result;

        result = ((AtkText.AddSelectionSignal) handler).onAddSelection((Text) objectFor(source), startOffset, endOffset);

        return result;
    }

    interface GetBoundedRangesSignal extends Signal
    {
        TextRange[] onGetBoundedRanges(Text source, TextRectangle rect, CoordType coordType, TextClipType xClipType, TextClipType yClipType);
    }

    static final void connect(Text self, AtkText.GetBoundedRangesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-bounded-ranges", after);
    }

    protected static final long[] receiveGetBoundedRanges(Signal handler, long source, long rect, int coordType, int xClipType, int yClipType) {
        TextRange[] result;
        long[] _result;

        result = ((AtkText.GetBoundedRangesSignal) handler).onGetBoundedRanges((Text) objectFor(source), (TextRectangle) boxedFor(TextRectangle.class, rect), (CoordType) enumFor(CoordType.class, coordType), (TextClipType) enumFor(TextClipType.class, xClipType), (TextClipType) enumFor(TextClipType.class, yClipType));
        _result = pointersOf(result);

        return _result;
    }

    interface GetCaretOffsetSignal extends Signal
    {
        int onGetCaretOffset(Text source);
    }

    static final void connect(Text self, AtkText.GetCaretOffsetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-caret-offset", after);
    }

    protected static final int receiveGetCaretOffset(Signal handler, long source) {
        int result;

        result = ((AtkText.GetCaretOffsetSignal) handler).onGetCaretOffset((Text) objectFor(source));

        return result;
    }

    interface GetCharacterAtOffsetSignal extends Signal
    {
        int onGetCharacterAtOffset(Text source, int offset);
    }

    static final void connect(Text self, AtkText.GetCharacterAtOffsetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-character-at-offset", after);
    }

    protected static final int receiveGetCharacterAtOffset(Signal handler, long source, int offset) {
        int result;

        result = ((AtkText.GetCharacterAtOffsetSignal) handler).onGetCharacterAtOffset((Text) objectFor(source), offset);

        return result;
    }

    interface GetCharacterCountSignal extends Signal
    {
        int onGetCharacterCount(Text source);
    }

    static final void connect(Text self, AtkText.GetCharacterCountSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-character-count", after);
    }

    protected static final int receiveGetCharacterCount(Signal handler, long source) {
        int result;

        result = ((AtkText.GetCharacterCountSignal) handler).onGetCharacterCount((Text) objectFor(source));

        return result;
    }

    interface GetCharacterExtentsSignal extends Signal
    {
        void onGetCharacterExtents(Text source, int offset, int[] x, int[] y, int[] width, int[] height, CoordType coords);
    }

    static final void connect(Text self, AtkText.GetCharacterExtentsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-character-extents", after);
    }

    protected static final void receiveGetCharacterExtents(Signal handler, long source, int offset, int[] x, int[] y, int[] width, int[] height, int coords) {
        ((AtkText.GetCharacterExtentsSignal) handler).onGetCharacterExtents((Text) objectFor(source), offset, x, y, width, height, (CoordType) enumFor(CoordType.class, coords));
    }

    interface GetDefaultAttributesSignal extends Signal
    {
        FIXME onGetDefaultAttributes(Text source);
    }

    static final void connect(Text self, AtkText.GetDefaultAttributesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-default-attributes", after);
    }

    protected static final java.lang.Object receiveGetDefaultAttributes(Signal handler, long source) {
        FIXME result;

        result = ((AtkText.GetDefaultAttributesSignal) handler).onGetDefaultAttributes((Text) objectFor(source));

        return result;
    }

    interface GetNSelectionsSignal extends Signal
    {
        int onGetNSelections(Text source);
    }

    static final void connect(Text self, AtkText.GetNSelectionsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-n-selections", after);
    }

    protected static final int receiveGetNSelections(Signal handler, long source) {
        int result;

        result = ((AtkText.GetNSelectionsSignal) handler).onGetNSelections((Text) objectFor(source));

        return result;
    }

    interface GetOffsetAtPointSignal extends Signal
    {
        int onGetOffsetAtPoint(Text source, int x, int y, CoordType coords);
    }

    static final void connect(Text self, AtkText.GetOffsetAtPointSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-offset-at-point", after);
    }

    protected static final int receiveGetOffsetAtPoint(Signal handler, long source, int x, int y, int coords) {
        int result;

        result = ((AtkText.GetOffsetAtPointSignal) handler).onGetOffsetAtPoint((Text) objectFor(source), x, y, (CoordType) enumFor(CoordType.class, coords));

        return result;
    }

    interface GetRangeExtentsSignal extends Signal
    {
        void onGetRangeExtents(Text source, int startOffset, int endOffset, CoordType coordType, TextRectangle rect);
    }

    static final void connect(Text self, AtkText.GetRangeExtentsSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-range-extents", after);
    }

    protected static final void receiveGetRangeExtents(Signal handler, long source, int startOffset, int endOffset, int coordType, long rect) {
        ((AtkText.GetRangeExtentsSignal) handler).onGetRangeExtents((Text) objectFor(source), startOffset, endOffset, (CoordType) enumFor(CoordType.class, coordType), (TextRectangle) boxedFor(TextRectangle.class, rect));
    }

    interface GetRunAttributesSignal extends Signal
    {
        FIXME onGetRunAttributes(Text source, int offset, int[] startOffset, int[] endOffset);
    }

    static final void connect(Text self, AtkText.GetRunAttributesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-run-attributes", after);
    }

    protected static final java.lang.Object receiveGetRunAttributes(Signal handler, long source, int offset, int[] startOffset, int[] endOffset) {
        FIXME result;

        result = ((AtkText.GetRunAttributesSignal) handler).onGetRunAttributes((Text) objectFor(source), offset, startOffset, endOffset);

        return result;
    }

    interface GetSelectionSignal extends Signal
    {
        String onGetSelection(Text source, int selectionNum, int[] startOffset, int[] endOffset);
    }

    static final void connect(Text self, AtkText.GetSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-selection", after);
    }

    protected static final String receiveGetSelection(Signal handler, long source, int selectionNum, int[] startOffset, int[] endOffset) {
        String result;

        result = ((AtkText.GetSelectionSignal) handler).onGetSelection((Text) objectFor(source), selectionNum, startOffset, endOffset);

        return result;
    }

    interface GetStringAtOffsetSignal extends Signal
    {
        String onGetStringAtOffset(Text source, int offset, FIXME granularity, int[] startOffset, int[] endOffset);
    }

    static final void connect(Text self, AtkText.GetStringAtOffsetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-string-at-offset", after);
    }

    protected static final String receiveGetStringAtOffset(Signal handler, long source, int offset, java.lang.Object granularity, int[] startOffset, int[] endOffset) {
        String result;

        result = ((AtkText.GetStringAtOffsetSignal) handler).onGetStringAtOffset((Text) objectFor(source), offset, (FIXME) granularity, startOffset, endOffset);

        return result;
    }

    interface GetTextSignal extends Signal
    {
        String onGetText(Text source, int startOffset, int endOffset);
    }

    static final void connect(Text self, AtkText.GetTextSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-text", after);
    }

    protected static final String receiveGetText(Signal handler, long source, int startOffset, int endOffset) {
        String result;

        result = ((AtkText.GetTextSignal) handler).onGetText((Text) objectFor(source), startOffset, endOffset);

        return result;
    }

    interface GetTextAfterOffsetSignal extends Signal
    {
        String onGetTextAfterOffset(Text source, int offset, TextBoundary boundaryType, int[] startOffset, int[] endOffset);
    }

    static final void connect(Text self, AtkText.GetTextAfterOffsetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-text-after-offset", after);
    }

    protected static final String receiveGetTextAfterOffset(Signal handler, long source, int offset, int boundaryType, int[] startOffset, int[] endOffset) {
        String result;

        result = ((AtkText.GetTextAfterOffsetSignal) handler).onGetTextAfterOffset((Text) objectFor(source), offset, (TextBoundary) enumFor(TextBoundary.class, boundaryType), startOffset, endOffset);

        return result;
    }

    interface GetTextAtOffsetSignal extends Signal
    {
        String onGetTextAtOffset(Text source, int offset, TextBoundary boundaryType, int[] startOffset, int[] endOffset);
    }

    static final void connect(Text self, AtkText.GetTextAtOffsetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-text-at-offset", after);
    }

    protected static final String receiveGetTextAtOffset(Signal handler, long source, int offset, int boundaryType, int[] startOffset, int[] endOffset) {
        String result;

        result = ((AtkText.GetTextAtOffsetSignal) handler).onGetTextAtOffset((Text) objectFor(source), offset, (TextBoundary) enumFor(TextBoundary.class, boundaryType), startOffset, endOffset);

        return result;
    }

    interface GetTextBeforeOffsetSignal extends Signal
    {
        String onGetTextBeforeOffset(Text source, int offset, TextBoundary boundaryType, int[] startOffset, int[] endOffset);
    }

    static final void connect(Text self, AtkText.GetTextBeforeOffsetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "get-text-before-offset", after);
    }

    protected static final String receiveGetTextBeforeOffset(Signal handler, long source, int offset, int boundaryType, int[] startOffset, int[] endOffset) {
        String result;

        result = ((AtkText.GetTextBeforeOffsetSignal) handler).onGetTextBeforeOffset((Text) objectFor(source), offset, (TextBoundary) enumFor(TextBoundary.class, boundaryType), startOffset, endOffset);

        return result;
    }

    interface RemoveSelectionSignal extends Signal
    {
        boolean onRemoveSelection(Text source, int selectionNum);
    }

    static final void connect(Text self, AtkText.RemoveSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "remove-selection", after);
    }

    protected static final boolean receiveRemoveSelection(Signal handler, long source, int selectionNum) {
        boolean result;

        result = ((AtkText.RemoveSelectionSignal) handler).onRemoveSelection((Text) objectFor(source), selectionNum);

        return result;
    }

    interface SetCaretOffsetSignal extends Signal
    {
        boolean onSetCaretOffset(Text source, int offset);
    }

    static final void connect(Text self, AtkText.SetCaretOffsetSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "set-caret-offset", after);
    }

    protected static final boolean receiveSetCaretOffset(Signal handler, long source, int offset) {
        boolean result;

        result = ((AtkText.SetCaretOffsetSignal) handler).onSetCaretOffset((Text) objectFor(source), offset);

        return result;
    }

    interface SetSelectionSignal extends Signal
    {
        boolean onSetSelection(Text source, int selectionNum, int startOffset, int endOffset);
    }

    static final void connect(Text self, AtkText.SetSelectionSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "set-selection", after);
    }

    protected static final boolean receiveSetSelection(Signal handler, long source, int selectionNum, int startOffset, int endOffset) {
        boolean result;

        result = ((AtkText.SetSelectionSignal) handler).onSetSelection((Text) objectFor(source), selectionNum, startOffset, endOffset);

        return result;
    }

    interface TextAttributesChangedSignal extends Signal
    {
        void onTextAttributesChanged(Text source);
    }

    static final void connect(Text self, AtkText.TextAttributesChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "text-attributes-changed", after);
    }

    protected static final void receiveTextAttributesChanged(Signal handler, long source) {
        ((AtkText.TextAttributesChangedSignal) handler).onTextAttributesChanged((Text) objectFor(source));
    }

    interface TextCaretMovedSignal extends Signal
    {
        void onTextCaretMoved(Text source, int location);
    }

    static final void connect(Text self, AtkText.TextCaretMovedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "text-caret-moved", after);
    }

    protected static final void receiveTextCaretMoved(Signal handler, long source, int location) {
        ((AtkText.TextCaretMovedSignal) handler).onTextCaretMoved((Text) objectFor(source), location);
    }

    interface TextChangedSignal extends Signal
    {
        void onTextChanged(Text source, int position, int length);
    }

    static final void connect(Text self, AtkText.TextChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "text-changed", after);
    }

    protected static final void receiveTextChanged(Signal handler, long source, int position, int length) {
        ((AtkText.TextChangedSignal) handler).onTextChanged((Text) objectFor(source), position, length);
    }

    interface TextSelectionChangedSignal extends Signal
    {
        void onTextSelectionChanged(Text source);
    }

    static final void connect(Text self, AtkText.TextSelectionChangedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "text-selection-changed", after);
    }

    protected static final void receiveTextSelectionChanged(Signal handler, long source) {
        ((AtkText.TextSelectionChangedSignal) handler).onTextSelectionChanged((Text) objectFor(source));
    }

    interface TextInsertSignal extends Signal
    {
        void onTextInsert(Text source, int arg1, int arg2, String arg3);
    }

    static final void connect(Text self, AtkText.TextInsertSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "text-insert", after);
    }

    protected static final void receiveTextInsert(Signal handler, long source, int arg1, int arg2, String arg3) {
        ((AtkText.TextInsertSignal) handler).onTextInsert((Text) objectFor(source), arg1, arg2, arg3);
    }

    interface TextRemoveSignal extends Signal
    {
        void onTextRemove(Text source, int arg1, int arg2, String arg3);
    }

    static final void connect(Text self, AtkText.TextRemoveSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkText.class, "text-remove", after);
    }

    protected static final void receiveTextRemove(Signal handler, long source, int arg1, int arg2, String arg3) {
        ((AtkText.TextRemoveSignal) handler).onTextRemove((Text) objectFor(source), arg1, arg2, arg3);
    }
}

