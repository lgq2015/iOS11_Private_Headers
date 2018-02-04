/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTableTextAttachment : ICTextAttachment {
    struct CGSize { 
        double width; 
        double height; 
    }  _lastAttachmentSize;
    double  _lastAvailableWidth;
}

@property (nonatomic) struct CGSize { double x1; double x2; } lastAttachmentSize;
@property (nonatomic) double lastAvailableWidth;

- (struct { double x1; double x2; double x3; double x4; })attachmentBoundsMargins;
- (bool)canDragWithoutSelecting;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forPlainText:(bool)arg3;
- (struct CGSize { double x1; double x2; })lastAttachmentSize;
- (double)lastAvailableWidth;
- (id)printableTextContent;
- (void)setLastAttachmentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastAvailableWidth:(double)arg1;

@end
