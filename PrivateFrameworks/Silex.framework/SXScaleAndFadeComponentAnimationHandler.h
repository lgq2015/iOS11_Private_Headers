/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate> {
    double  _initialAlpha;
    double  _initialScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialAlpha;
@property (nonatomic) double initialScale;
@property (readonly) Class superclass;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)finishAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;
- (double)initialAlpha;
- (double)initialScale;
- (void)prepareAnimation;
- (void)setInitialAlpha:(double)arg1;
- (void)setInitialScale:(double)arg1;
- (void)startAnimation;
- (void)updateAnimationWithFactor:(double)arg1;

@end
