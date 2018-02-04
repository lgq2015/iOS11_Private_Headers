/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMoveInComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate> {
    double  _startXOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double startXOffset;
@property (readonly) Class superclass;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)finishAnimation;
- (void)prepareAnimation;
- (void)setStartXOffset:(double)arg1;
- (void)startAnimation;
- (double)startXOffset;
- (void)updateAnimationWithFactor:(double)arg1;

@end
