/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSpringAnimationSettings : HUAnimationSettings {
    double  _completionEpsilon;
    CASpringAnimation * _springAnimation;
}

@property (nonatomic) double completionEpsilon;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double mass;
@property (nonatomic, readonly) CASpringAnimation *springAnimation;
@property (nonatomic) double stiffness;

+ (id)criticallyDampedSpringSettings;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2;
- (void)_updateDuration;
- (double)completionEpsilon;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (double)delay;
- (double)duration;
- (id)init;
- (double)initialVelocity;
- (double)interpolatedProgressForProgress:(double)arg1;
- (double)mass;
- (float)repeatCount;
- (void)setCompletionEpsilon:(double)arg1;
- (void)setDamping:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setInitialVelocity:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (double)speed;
- (id)springAnimation;
- (double)stiffness;
- (id)timingFunction;

@end
