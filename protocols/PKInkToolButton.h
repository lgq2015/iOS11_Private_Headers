/* made by EzioChiu.
 */

@protocol PKInkToolButton

@required

+ (UIButton<PKInkToolButton> *)buttonWithIdentifier:(NSString *)arg1 color:(UIColor *)arg2 sizeState:(unsigned long long)arg3;

- (UIColor *)color;
- (NSString *)identifier;
- (UIButton<PKInkToolButton> *)initWithIdentifier:(NSString *)arg1 color:(UIColor *)arg2 sizeState:(unsigned long long)arg3;
- (bool)isUsedOnDarkBackground;
- (void)setColor:(UIColor *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (unsigned long long)sizeState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2;

@end
