/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUSpringAnimationFactory : MPUAnimationFactory {
    double  _damping;
    double  _mass;
    double  _stiffness;
    double  _velocity;
}

@property (nonatomic) double damping;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double velocity;

+ (void)animateUsingSpringWithDamping:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 velocity:(double)arg4 animations:(id /* block */)arg5 options:(unsigned long long)arg6 completion:(id /* block */)arg7;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_newSpringAnimationForKeyPath:(id)arg1;
- (double)damping;
- (double)durationForEpsilon:(double)arg1;
- (double)mass;
- (void)setDamping:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)stiffness;
- (double)velocity;

@end
