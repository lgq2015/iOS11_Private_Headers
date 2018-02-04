/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIShapeView : UIView

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setPath:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeEnd:(double)arg1;
- (id)shapeLayer;

@end
