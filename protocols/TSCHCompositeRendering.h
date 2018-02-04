/* made by EzioChiu.
 */

@protocol TSCHCompositeRendering <NSObject>

@required

- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)needsAnySeparateLayers;
- (NSArray *)transparencyLayers;

@optional

- (void)didBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (void)didEndTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (void)willBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (void)willEndTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;

@end
