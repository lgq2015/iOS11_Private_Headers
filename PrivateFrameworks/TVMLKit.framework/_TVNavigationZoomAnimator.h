/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVNavigationZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_beginZoomAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(id /* block */)arg4;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
