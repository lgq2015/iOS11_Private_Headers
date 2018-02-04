/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPHorizontalCaptionPairView : LPComponentView <LPContentInsettable, LPTextStyleable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    LPTextView * _leftView;
    LPTextView * _rightView;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutCaptionPairForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (double)ascender;
- (double)descender;
- (double)firstLineLeading;
- (id)init;
- (id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
