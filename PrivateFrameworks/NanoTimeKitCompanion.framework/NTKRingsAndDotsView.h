/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRingsAndDotsView : UIView {
    double  _appearanceAnimationProgress;
    double  _diameter;
    double  _dotDiameter;
    double  _dotPositionFraction;
    NTKDotView * _dotView;
    UIColor * _foregroundColor;
    double  _radiusForDotViewRing;
    NSArray * _ringColors;
    double  _ringGapWidth;
    NSArray * _ringViews;
    double  _ringWidth;
    NSMutableArray * _ringsFillFractions;
    UIColor * _secondaryForegroundColor;
    bool  _showsDotOnRing;
    bool  _showsRingsBackground;
}

@property (nonatomic) double appearanceAnimationProgress;
@property (nonatomic) double diameter;
@property (nonatomic) double dotDiameter;
@property (nonatomic) double dotPositionFraction;
@property (nonatomic, retain) NTKDotView *dotView;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) double radiusForDotViewRing;
@property (nonatomic, retain) NSArray *ringColors;
@property (nonatomic) double ringGapWidth;
@property (nonatomic, retain) NSArray *ringViews;
@property (nonatomic) double ringWidth;
@property (nonatomic, retain) NSMutableArray *ringsFillFractions;
@property (nonatomic, retain) UIColor *secondaryForegroundColor;
@property (nonatomic) bool showsDotOnRing;
@property (nonatomic) bool showsRingsBackground;

- (void).cxx_destruct;
- (double)_dotPositionFractionWithAnimationProgress:(double)arg1;
- (void)_positionDotViewWithPositionFraction:(double)arg1;
- (void)_setDiameter:(double)arg1;
- (void)_update;
- (double)appearanceAnimationProgress;
- (void)cancelAppearanceAnimation;
- (double)diameter;
- (double)dotDiameter;
- (double)dotPositionFraction;
- (id)dotView;
- (id)foregroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 diameter:(double)arg2 ringWidth:(double)arg3 ringGapWidth:(double)arg4 showsRingsBackground:(bool)arg5;
- (void)layoutSubviews;
- (void)performAppearanceAnimation;
- (void)prepareAppearanceAnimation;
- (double)radiusForDotViewRing;
- (double)radiusForRingAtIndex:(long long)arg1;
- (id)ringColors;
- (double)ringGapWidth;
- (id)ringViews;
- (double)ringWidth;
- (id)ringsFillFractions;
- (id)secondaryForegroundColor;
- (void)setAppearanceAnimationProgress:(double)arg1;
- (void)setDiameter:(double)arg1;
- (void)setDotDiameter:(double)arg1;
- (void)setDotPositionFraction:(double)arg1;
- (void)setDotView:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setRadiusForDotViewRing:(double)arg1;
- (void)setRingColors:(id)arg1;
- (void)setRingGapWidth:(double)arg1;
- (void)setRingViews:(id)arg1;
- (void)setRingWidth:(double)arg1;
- (void)setRingsFillFractions:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setShowsDotOnRing:(bool)arg1;
- (void)setShowsRingsBackground:(bool)arg1;
- (bool)showsDotOnRing;
- (bool)showsRingsBackground;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
