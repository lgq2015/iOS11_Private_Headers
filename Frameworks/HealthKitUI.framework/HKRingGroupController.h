/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKRingGroupController : HKAnimatableObject {
    double  _additionalSpacingAtIndex;
    <HKRingGroupAnimationStatusDelegate> * _animationStatusDelegate;
    double  _backingOrigin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    long long * _iconAnimationFrameNumbers;
    long long  _numberOfRings;
    double  _ringDiameter;
    double  _ringIconSize;
    double  _ringInterspacing;
    double  _ringScale;
    double  _ringThickness;
    NSArray * _rings;
    double  _zRotation;
}

@property (nonatomic) double additionalSpacingAtIndex;
@property (nonatomic) <HKRingGroupAnimationStatusDelegate> *animationStatusDelegate;
@property (nonatomic) double backingOrigin;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) long long numberOfRings;
@property (nonatomic) double ringDiameter;
@property (nonatomic) double ringIconSize;
@property (nonatomic) double ringInterspacing;
@property (nonatomic) double ringScale;
@property (nonatomic) double ringThickness;
@property (nonatomic, retain) NSArray *rings;
@property (nonatomic) double zRotation;

+ (id)animationTimingFunction;
+ (double)defaultAnimationDuration;

- (void).cxx_destruct;
- (double)_adjustedDurationForRingWithIndex:(long long)arg1 startPercentage:(double)arg2 targetPercentage:(double)arg3 defaultDuration:(double)arg4;
- (void)_configureIconWithStartingPercentage:(double)arg1 forRingAtIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (unsigned long long)_lastRingFrameNumberForRingAtIndex:(unsigned long long)arg1;
- (void)_markRingGroupAsDirty;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)_removeAllRingAnimationsForPropertyType:(unsigned long long)arg1;
- (double)_ringPercentageAdjustedForProximityToFull:(double)arg1 withRingDiameter:(double)arg2 thickness:(double)arg3;
- (double)_scaledRingDiameter;
- (double)_scaledRingIconSize;
- (double)_scaledRingInterspacing;
- (double)_scaledRingThickness;
- (bool)_setCGPointValue:(struct CGPoint { double x1; double x2; })arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(bool)arg4;
- (bool)_setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_setFloatValue:(float)arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(bool)arg4;
- (void)_setFloatValue:(float)arg1 forRingPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(bool)arg4;
- (bool)_setFloatValue:(float)arg1 fromCurrentValue:(float)arg2 forRingPropertyType:(unsigned long long)arg3 ofRingAtIndex:(long long)arg4 animated:(bool)arg5 duration:(double)arg6 completion:(id /* block */)arg7;
- (bool)_setRingDiameter:(double)arg1;
- (bool)_setRingIconSize:(double)arg1;
- (bool)_setRingInterspacing:(double)arg1;
- (bool)_setRingScale:(double)arg1;
- (bool)_setRingThickness:(double)arg1;
- (bool)_setZRotation:(double)arg1;
- (void)_updateRingDiameters;
- (void)_updateRingIconProperties;
- (void)_updateRingThicknesses;
- (void)_updateRingZRotations;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2;
- (void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2;
- (double)additionalSpacingAtIndex;
- (id)animationStatusDelegate;
- (bool)areAnimationsInProgress;
- (double)backingOrigin;
- (struct CGPoint { double x1; double x2; })center;
- (void)dealloc;
- (double)diameterForRingAtIndex:(unsigned long long)arg1;
- (long long)indexOfRingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (id)initWithNumberOfRings:(long long)arg1;
- (long long)numberOfRings;
- (double)ringDiameter;
- (double)ringIconSize;
- (double)ringInterspacing;
- (double)ringScale;
- (double)ringThickness;
- (id)rings;
- (bool)ringsAreEmpty;
- (void)setAdditionalSpacingAtIndex:(double)arg1;
- (void)setAnimationStatusDelegate:(id)arg1;
- (void)setBackingOrigin:(double)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setIconDotTextureOrigin:(struct CGPoint { double x1; double x2; })arg1 ofRingAtIndex:(long long)arg2;
- (void)setIconFirstFrameOrigin:(struct CGPoint { double x1; double x2; })arg1 frameSize:(struct CGSize { double x1; double x2; })arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5;
- (void)setOpacity:(float)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(id /* block */)arg6;
- (void)setRingDiameter:(double)arg1;
- (void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRingIconPosition:(struct CGPoint { double x1; double x2; })arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRingIconSize:(double)arg1;
- (void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRingInterspacing:(double)arg1;
- (void)setRingScale:(double)arg1;
- (void)setRingThickness:(double)arg1;
- (void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRings:(id)arg1;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3;
- (void)setZRotation:(double)arg1;
- (void)update:(double)arg1;
- (double)zRotation;

@end
