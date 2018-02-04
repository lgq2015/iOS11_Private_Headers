/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (void)CA_prepareRenderValue;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (id)animations;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setAnimations:(id)arg1;
- (void)setDefaultDuration:(double)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (bool)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)p_getValue:(id*)arg1 animation:(id*)arg2 animationPercent:(double*)arg3 forKeyPath:(id)arg4 atTime:(double)arg5 animationCache:(id)arg6;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)TSDCAAnimationContextCache;

@end
