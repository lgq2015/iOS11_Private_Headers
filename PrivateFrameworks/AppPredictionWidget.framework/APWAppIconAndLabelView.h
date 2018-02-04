/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
 */

@interface APWAppIconAndLabelView : UIControl {
    NSString * _bundleIdentifier;
    UIButton * _iconButton;
    UILabel * _label;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) UIView *iconView;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

+ (void)_applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (id)_attributedStringForAppName:(id)arg1 font:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (double)baselineOffsetMultipleForTraitCollection:(id)arg1;
+ (double)caption2BodyLeadingForTraitCollection:(id)arg1;
+ (double)fontSizeForTraitCollection:(id)arg1;
+ (double)heightToLabelBaselineForTraitCollection:(id)arg1;
+ (id)labelFontForTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_iconButtonTapped:(id)arg1;
- (id)_iconButtonView;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)bundleIdentifier;
- (id)iconView;
- (id)initWithTraitCollection:(id)arg1;
- (bool)isAccessibilityElement;
- (void)setBundleIdentifier:(id)arg1;
- (id)traitCollection;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
