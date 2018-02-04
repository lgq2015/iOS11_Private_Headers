/* made by EzioChiu.
 */

@protocol HKGraphRenderer <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axisRect;
- (void)drawPath:(UIBezierPath *)arg1 strokeColor:(UIColor *)arg2 fillColor:(UIColor *)arg3 markerImage:(UIImage *)arg4 useGradientFill:(bool)arg5 blendMode:(int)arg6 clipToAxes:(bool)arg7;
- (struct CGSize { double x1; double x2; })drawText:(NSString *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 spaceAvailable:(NSNumber *)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 textColor:(UIColor *)arg6 font:(UIFont *)arg7 clipToAxis:(bool)arg8 exclusion:(id <HKGraphRendererExclusion>)arg9;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTexture:(UIImage *)arg2;
- (<HKGraphRenderDelegate> *)renderDelegate;
- (void)setAxisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsRender;
- (void)setRenderDelegate:(id <HKGraphRenderDelegate>)arg1;

@end
