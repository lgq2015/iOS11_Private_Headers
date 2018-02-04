/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIAnimationFactory : NSObject <NSCopying, _UIBasicAnimationFactory> {
    bool  _allowsAdditiveAnimations;
    BSAnimationSettings * _settings;
}

@property (nonatomic) bool allowsAdditiveAnimations;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) BSAnimationSettings *effectiveSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BSAnimationSettings *settings;
@property (readonly) Class superclass;

+ (void)addAlongsideAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)animateWithFactory:(id)arg1 actions:(id /* block */)arg2;
+ (void)animateWithFactory:(id)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id /* block */)arg3;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(id /* block */)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(id /* block */)arg3;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithSettings:(id)arg1 actions:(id /* block */)arg2;
+ (void)animateWithSettings:(id)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(id /* block */)arg3;
+ (void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)factoryWithAnimationAttributes:(id)arg1;
+ (id)factoryWithDuration:(double)arg1;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (id)factoryWithSettings:(id)arg1;
+ (id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2;
+ (double)globalSlowDownFactor;
+ (void)setGlobalSlowDownFactor:(double)arg1;

- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_initWithSettings:(id)arg1;
- (bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (bool)allowsAdditiveAnimations;
- (void)applySettingsToCAAnimation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delay;
- (id)description;
- (double)duration;
- (id)effectiveSettings;
- (id)factoryWithTimingFunction:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAllowsAdditiveAnimations:(bool)arg1;
- (id)settings;

@end
