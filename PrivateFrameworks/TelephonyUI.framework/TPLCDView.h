/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDView : TPLCDBar {
    UIView * _contentView;
    TPLCDSubImageView * _imageView;
    TPLCDTextView * _labelView;
    unsigned int  _layoutAsLabelled;
    TPLCDTextView * _textView;
    bool  _verticallyCenterTextViewIfLabelless;
}

@property bool verticallyCenterTextViewIfLabelless;

+ (double)defaultLabelFontSize;
+ (double)defaultTextFontSize;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (double)_labelVInset;
- (void)_resetContentViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_text1Frame;
- (double)_textVInset;
- (void)blinkLabel;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullSizedContentViewFrame;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (id)label;
- (void)layoutSubviews;
- (id)secondLineText;
- (void)setContentsAlpha:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabel:(id)arg1 animate:(bool)arg2;
- (void)setLabelFontSize:(double)arg1;
- (void)setLayoutAsLabelled:(bool)arg1;
- (void)setSecondLineText:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setSubImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextFontSize:(double)arg1;
- (void)setVerticallyCenterTextViewIfLabelless:(bool)arg1;
- (bool)shouldCenterContentView;
- (bool)shouldCenterText;
- (id)subImage;
- (id)text;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFrame;
- (bool)verticallyCenterTextViewIfLabelless;

@end
