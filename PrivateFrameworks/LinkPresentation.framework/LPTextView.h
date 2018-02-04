/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPTextView : LPComponentView <LPContentInsettable, LPTextStyleable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    LPImageView * _glyphView;
    LPTextViewStyle * _style;
    UILabel * _textView;
}

@property (nonatomic, readonly, retain) LPTextViewStyle *style;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)_createTextViewWithText:(id)arg1 style:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveContentInset;
- (double)ascender;
- (double)descender;
- (double)firstLineLeading;
- (id)init;
- (id)initWithText:(id)arg1 style:(id)arg2;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)style;
- (long long)textAlignment;

@end
