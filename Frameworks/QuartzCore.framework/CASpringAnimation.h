/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CASpringAnimation : CABasicAnimation

@property double damping;
@property double initialVelocity;
@property double mass;
@property (readonly) double settlingDuration;
@property double stiffness;
@property double velocity;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)defaultValueForKey:(id)arg1;

- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (float)_solveForInput:(float)arg1;
- (double)_timeFunction:(double)arg1;
- (double)damping;
- (double)durationForEpsilon:(double)arg1;
- (double)initialVelocity;
- (double)mass;
- (void)setDamping:(double)arg1;
- (void)setInitialVelocity:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)settlingDuration;
- (double)stiffness;
- (double)velocity;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_springWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;

@end
