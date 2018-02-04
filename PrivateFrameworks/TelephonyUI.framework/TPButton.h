/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPButton : UIButton {
    _UIBackdropView * _backdropView;
    bool  _blursBackground;
    int  _color;
    bool  _roundsCorners;
    bool  _usesOverlayBlendingForContents;
}

@property (nonatomic) bool blursBackground;
@property (nonatomic) bool roundsCorners;
@property (nonatomic) bool usesOverlayBlendingForContents;

+ (double)defaultHeight;
+ (double)defaultHeightForColor:(int)arg1;
+ (id)defaultStandardFont;
+ (double)defaultWidthForCenterButton;
+ (double)defaultWidthForSideButton;
+ (double)maxWidthForCenterButton;

- (void).cxx_destruct;
- (void)_animationDidEnd;
- (void)_animationWillBegin;
- (bool)blursBackground;
- (int)buttonColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)roundsCorners;
- (void)setBackgroundColor:(id)arg1;
- (void)setBlursBackground:(bool)arg1;
- (void)setButtonColor:(int)arg1;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconVerticalOffset:(double)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTitleFontSize:(double)arg1;
- (void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2;
- (void)setPlusSeparatedTitle:(id)arg1;
- (void)setRoundsCorners:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitleImagePadding:(double)arg1;
- (void)setTitleVerticalOffset:(double)arg1;
- (void)setUsesOverlayBlendingForContents:(bool)arg1;
- (bool)usesOverlayBlendingForContents;

@end
