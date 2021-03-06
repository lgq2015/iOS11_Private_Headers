/* made by EzioChiu.
 */

@protocol NCBannerPresentationTransitioningDelegateObserver <NCViewControllerTransitioningDelegateObserver>

@optional

- (void)transitioningDelegate:(id <UIViewControllerTransitioningDelegate>)arg1 didFinishDismissalOfViewController:(UIViewController *)arg2 completed:(bool)arg3;
- (void)transitioningDelegate:(id <UIViewControllerTransitioningDelegate>)arg1 didFinishPresentationOfViewController:(UIViewController *)arg2 completed:(bool)arg3;
- (bool)wantsUseableContainerHeightForTransitionWithDelegate:(id <UIViewControllerTransitioningDelegate>)arg1;

@end
