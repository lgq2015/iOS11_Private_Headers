/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRingView : NTKColoringView {
    double  _appearanceAnimationProgress;
    double  _fillFraction;
    double  _radius;
    double  _ringAnimationDelta;
    double  _ringWidth;
    bool  _showsRingsBackground;
}

@property (nonatomic) double appearanceAnimationProgress;
@property (nonatomic) double fillFraction;
@property (nonatomic) double radius;
@property (nonatomic) double ringAnimationDelta;
@property (nonatomic) double ringWidth;
@property (nonatomic) bool showsRingsBackground;

- (void)_drawBackgroundRings;
- (void)_drawFillFractionRings;
- (void)_drawRingWithRadius:(double)arg1 fillFraction:(double)arg2 alpha:(double)arg3;
- (double)appearanceAnimationProgress;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)fillFraction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)radius;
- (double)ringAnimationDelta;
- (double)ringWidth;
- (void)setAppearanceAnimationProgress:(double)arg1;
- (void)setFillFraction:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setRingAnimationDelta:(double)arg1;
- (void)setRingWidth:(double)arg1;
- (void)setShowsRingsBackground:(bool)arg1;
- (bool)showsRingsBackground;

@end
