/* made by EzioChiu.
 */

@protocol MKInfoCardTheme <NSObject>

@required

- (UIFont *)attributionFont;
- (UIColor *)backgroundColor;
- (UIFont *)bodyFont;
- (UIFont *)boldBodyFont;
- (UIFont *)brandTitleFont;
- (UIColor *)disabledActionRowBackgroundColor;
- (UIColor *)disabledActionRowTextColor;
- (UIColor *)highlightedActionRowTextColor;
- (UIColor *)highlightedRowColor;
- (UIFont *)iconFontToMatch:(UIFont *)arg1;
- (bool)isDarkTheme;
- (bool)isVibrantTheme;
- (UIFont *)largeTitleFont;
- (UIFont *)largeTitleFontStatic;
- (UIColor *)lightTextColor;
- (UIFont *)mediumBodyFont;
- (UIColor *)normalActionRowBackgroundColor;
- (UIColor *)normalActionRowBackgroundPressedColor;
- (UIFont *)rowButtonFont;
- (UIColor *)rowColor;
- (UIFont *)rowGlyphButtonFont;
- (UIFont *)sectionHeaderButtonFont;
- (UIFont *)sectionHeaderFont;
- (UIColor *)selectedRowColor;
- (UIColor *)separatorLineColor;
- (UIFont *)smallAttributionFont;
- (UIColor *)textColor;
- (unsigned long long)themeType;
- (UIColor *)tintColor;
- (UIFont *)titleFont;

@end
