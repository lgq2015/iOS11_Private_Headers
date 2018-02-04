/* made by EzioChiu.
 */

@protocol SXViewportChangeListener <NSObject>

@optional

- (void)viewport:(SXViewport *)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(SXViewport *)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(SXViewport *)arg1 contentFrameDidChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(SXViewport *)arg1 documentSizeDidChangeFromSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewport:(SXViewport *)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(SXViewport *)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;

@end
