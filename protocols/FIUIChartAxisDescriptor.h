/* made by EzioChiu.
 */

@protocol FIUIChartAxisDescriptor <NSObject>

@required

- (double)axisDescriptorPadding;
- (NSArray *)axisLabels;
- (Class)expectedDataType;
- (UIColor *)highlightedLabelColor;
- (UIFont *)labelFont;
- (id)maxValue;
- (id)minValue;
- (void)setAxisDescriptorPadding:(double)arg1;
- (void)setHighlightedLabelColor:(UIColor *)arg1;
- (void)setLabelFont:(UIFont *)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setUnhighlightedLabelColor:(UIColor *)arg1;
- (UIColor *)unhighlightedLabelColor;

@optional

- (NSArray *)axisSubLabels;
- (bool)hideClippedLabels;
- (UIColor *)highlightedSubLabelColor;
- (id)highlightedValue;
- (unsigned long long)labelAlignment;
- (unsigned long long)numLabels;
- (unsigned long long)numSubLabels;
- (id)positionForLabelAtIndex:(unsigned long long)arg1;
- (id)positionForSubLabelAtIndex:(unsigned long long)arg1;
- (void)selectLabel:(bool)arg1 atIndex:(unsigned long long)arg2;
- (UIColor *)selectedLabelColor;
- (void)setHideClippedLabels:(bool)arg1;
- (void)setHighlightedSubLabelColor:(UIColor *)arg1;
- (void)setHighlightedValue:(id)arg1;
- (void)setLabelAlignment:(unsigned long long)arg1;
- (void)setSelectedLabelColor:(UIColor *)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(UIColor *)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubAxisDescriptorPadding:(double)arg1;
- (void)setSubLabelAlignment:(unsigned long long)arg1;
- (void)setSubLabelFont:(UIFont *)arg1;
- (void)setUnhighlightedSubLabelColor:(UIColor *)arg1;
- (double)shadowBlur;
- (UIColor *)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)subAxisDescriptorPadding;
- (unsigned long long)subLabelAlignment;
- (UIFont *)subLabelFont;
- (NSString *)textForLabelAtIndex:(unsigned long long)arg1;
- (NSString *)textForSubLabelAtIndex:(unsigned long long)arg1;
- (UIColor *)unhighlightedSubLabelColor;
- (NSArray *)xAxisLabelStringArray;

@end
