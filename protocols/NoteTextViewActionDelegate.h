/* made by EzioChiu.
 */

@protocol NoteTextViewActionDelegate

@required

- (bool)allowsAttachmentsInTextView:(NoteTextView *)arg1;
- (bool)canInsertImagesInTextView:(NoteTextView *)arg1;
- (void)insertImageInTextView:(NoteTextView *)arg1;
- (bool)noteTextView:(NoteTextView *)arg1 acceptContentsFromPasteboard:(UIPasteboard *)arg2;
- (bool)noteTextView:(NoteTextView *)arg1 canHandleLongPressOnElement:(DOMHTMLElement *)arg2;
- (void)noteTextView:(NoteTextView *)arg1 handleLongPressOnElement:(DOMHTMLElement *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (<_NSReaderDelegate> *)readerDelegateInTextView:(NoteTextView *)arg1;

@end
