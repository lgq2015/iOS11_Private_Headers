/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCalligraphyStroke : TSDSmartStroke

+ (Class)mutableClass;
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;

- (double)angle;
- (void)applyToContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPath:(id)arg1;
- (bool)canApplyToCAShapeLayer;
- (bool)chisel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)drawsInOneStep;
- (bool)drawsOutsideStrokeBounds;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(bool)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4;
- (bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (double)scale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformInContext:(struct CGContext { }*)arg1;

@end
