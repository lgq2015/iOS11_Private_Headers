/* made by EzioChiu.
 */

@protocol CalendarLabelTextMetrics

@required

- (UIFont *)font;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (void)setFont:(UIFont *)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (NSString *)text;
- (long long)textAlignment;
- (UIColor *)textColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2;

@end
