/* made by EzioChiu.
 */

@protocol OFPageViewControllerDelegate <NSObject>

@optional

- (bool)pageViewController:(OFPageViewController *)arg1 canAutomaticallyHandleGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)pageViewController:(OFPageViewController *)arg1 didFinishTransitioningToViewController:(OFUIViewController *)arg2 fromViewController:(OFUIViewController *)arg3 transitionCompleted:(bool)arg4;
- (void)pageViewController:(OFPageViewController *)arg1 didStartTransitioningToViewController:(OFUIViewController *)arg2 fromViewController:(OFUIViewController *)arg3;
- (void)pageViewController:(OFPageViewController *)arg1 didUpdateTransitioningToViewController:(OFUIViewController *)arg2 fromViewController:(OFUIViewController *)arg3 withProgress:(double)arg4 andVelocity:(double)arg5;
- (void)pageViewController:(OFPageViewController *)arg1 willFinishTransitioningToViewController:(OFUIViewController *)arg2 fromViewController:(OFUIViewController *)arg3 transitionWillComplete:(bool)arg4;
- (void)pageViewController:(OFPageViewController *)arg1 willStartBouncingWithDirection:(long long)arg2;
- (void)pageViewController:(OFPageViewController *)arg1 willStartTransitioningToViewController:(OFUIViewController *)arg2 fromViewController:(OFUIViewController *)arg3 withDirection:(long long)arg4;
- (void)pageViewControllerDidFinishBouncing:(OFPageViewController *)arg1;

@end
