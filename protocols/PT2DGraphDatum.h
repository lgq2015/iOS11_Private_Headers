/* made by EzioChiu.
 */

@protocol PT2DGraphDatum

@required

- (struct CGPoint { double x1; double x2; })graphPoint;

@optional

- (UIColor *)color;
- (struct CGPoint { double x1; double x2; })graphPointForContext:(NSString *)arg1;
- (void)setColor:(UIColor *)arg1;

@end
