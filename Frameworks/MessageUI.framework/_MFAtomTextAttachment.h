/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFAtomTextAttachment : NSTextAttachment {
    MFModernComposeRecipientAtom * _atomView;
    bool  _isPlaceholder;
}

@property (nonatomic, retain) MFModernComposeRecipientAtom *atomView;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, readonly) MFComposeRecipient *recipient;

- (id)atomView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attributedStringWithBaseAttributes:(id)arg1;
- (void)dealloc;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithAtomView:(id)arg1;
- (bool)isPlaceholder;
- (id)recipient;
- (void)setAtomView:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;

@end
