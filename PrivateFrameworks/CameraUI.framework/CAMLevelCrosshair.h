/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLevelCrosshair : UIView {
    bool  _highlighted;
}

@property (getter=isHighlighted, nonatomic) bool highlighted;

+ (void)_drawCrosshairInContext:(struct CGContext { }*)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeWidth:(double)arg3 color:(id)arg4;

- (void)_commonCAMLevelCrosshairInitialization;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;

@end
