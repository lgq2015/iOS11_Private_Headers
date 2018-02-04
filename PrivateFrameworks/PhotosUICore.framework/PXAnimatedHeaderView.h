/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAnimatedHeaderView : UIView {
    PXAnimatedLabel * _currentLabel;
    UIFont * _font;
    CAGradientLayer * _gradientLayer;
    PXAnimatedLabel * _sizingLabel;
    NSString * _text;
}

@property (retain) PXAnimatedLabel *currentLabel;
@property (nonatomic, retain) UIFont *font;
@property (retain) CAGradientLayer *gradientLayer;
@property (retain) PXAnimatedLabel *sizingLabel;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (void)_animateLabelSwitchFromLabel:(id)arg1 toLabel:(id)arg2 andAnimationStyle:(long long)arg3 completionBlock:(id /* block */)arg4;
- (id)_labelWithText:(id)arg1;
- (long long)_preferredAnimationStyleForText:(id)arg1;
- (bool)_requiresDigitAnimationForNewText:(id)arg1;
- (bool)_requiresLabelSwitchForNewText:(id)arg1;
- (void)_updateSizingWithText:(id)arg1;
- (void)commonInit;
- (id)currentLabel;
- (id)font;
- (id)gradientLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setCurrentLabel:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setSizingLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 animated:(bool)arg2;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 spinDigits:(bool)arg3;
- (id)sizingLabel;
- (id)text;

@end
