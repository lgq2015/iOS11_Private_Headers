/* made by EzioChiu.
 */

@protocol NCLongLookAnimatorObserving <NSObject>

@optional

- (void)longLookAnimator:(NCLongLookAnimator *)arg1 willBeginDismissalAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
- (void)longLookAnimator:(NCLongLookAnimator *)arg1 willBeginPresentationAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
- (void)longLookAnimatorDidFinishFirstResponderChanges:(NCLongLookAnimator *)arg1;

@end