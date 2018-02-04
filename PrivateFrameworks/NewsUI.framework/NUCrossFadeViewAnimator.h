/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUCrossFadeViewAnimator : NSObject {
    double  _duration;
}

@property (nonatomic) double duration;

- (void)animateView:(id)arg1 toEmptyStateWithCompletion:(id /* block */)arg2;
- (void)animateView:(id)arg1 toValue:(id)arg2 completion:(id /* block */)arg3;
- (void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(id /* block */)arg4;
- (double)duration;
- (id)init;
- (void)resetView:(id)arg1;
- (void)setDuration:(double)arg1;

@end
