/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLongLookHeaderContentView : MTPlatterHeaderContentView {
    UIImageView * _iconButtonShadow;
}

+ (id)_xImage;

- (void).cxx_destruct;
- (void)_configureDateLabel;
- (void)_configureIconButtonWithIcon:(id)arg1;
- (void)_configureUtilityButton;
- (double)_headerHeightForWidth:(double)arg1;
- (id)_iconShadowImageForIcon:(id)arg1;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextTitleLabelBaselineOffset;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutIconButtonWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (double)_titleFirstLineCenterY;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)_updateUtilityButtonFont;
- (void)_updateUtilityButtonVibrantStyling;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setIcon:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
