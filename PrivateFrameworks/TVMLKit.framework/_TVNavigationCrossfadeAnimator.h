/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVNavigationCrossfadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _fadeOutFromView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fadeOutFromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_beginCrossfadeAnimationFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 delay:(double)arg4 fadeOutFromView:(bool)arg5 removeFromView:(bool)arg6 completion:(id /* block */)arg7;

- (void)_beginCrossfadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(id /* block */)arg4;
- (void)animateTransition:(id)arg1;
- (bool)fadeOutFromView;
- (void)setFadeOutFromView:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
