/* made by EzioChiu.
 */

@protocol UIKeyCommandDiscoverabilityHUDVisualStyle <NSObject>

@required

- (double)HUDPageControlBottomMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })HUDViewInsets;
- (double)columnDividerHeightForHUDHeight:(double)arg1;
- (double)columnDividerWidth;
- (UIColor *)dividerColor;
- (UIColor *)inputColor;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)maxHUDWidthForWidth:(double)arg1;
- (double)minimumFontScaleBeforeTruncation;
- (double)summaryDescriptionToModifiersSpacing;
- (UIFont *)summaryFont;
- (double)summaryLineHeight;
- (double)summaryLineSpacing;
- (double)summaryModifiersSpacing;
- (double)summaryXPadding;
- (double)summaryYPadding;
- (UIColor *)titleColor;

@end
