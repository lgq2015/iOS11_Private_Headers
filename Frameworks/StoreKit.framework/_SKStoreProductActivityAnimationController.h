/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface _SKStoreProductActivityAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (void)endDelayingAnimation;
- (double)transitionDuration:(id)arg1;

@end
