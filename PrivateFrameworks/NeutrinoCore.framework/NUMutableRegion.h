/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMutableRegion : NURegion

- (void)addRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)addRegion:(id)arg1;
- (void)applyAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundPolicy:(long long)arg2;
- (void)applyOrientation:(long long)arg1 imageSize:(struct { long long x1; long long x2; })arg2;
- (void)clear;
- (void)clipToRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)clipToRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)diffWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)diffWithRegion:(id)arg1;
- (void)flipInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)growBy:(struct { long long x1; long long x2; })arg1;
- (void)growBy:(struct { long long x1; long long x2; })arg1 inRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (void)removeRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)removeRegion:(id)arg1;
- (void)scaleBy:(struct CGPoint { double x1; double x2; })arg1 withRounding:(long long)arg2;
- (void)setRegion:(id)arg1;
- (void)shrinkBy:(struct { long long x1; long long x2; })arg1;
- (void)shrinkBy:(struct { long long x1; long long x2; })arg1 inRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (void)translateBy:(struct { long long x1; long long x2; })arg1;

@end
