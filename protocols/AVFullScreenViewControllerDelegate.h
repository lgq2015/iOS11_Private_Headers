/* made by EzioChiu.
 */

@protocol AVFullScreenViewControllerDelegate <NSObject>

@required

- (void)fullScreenViewControllerDidEndFullScreenPresentation:(AVFullScreenViewController *)arg1 wasInteractive:(bool)arg2;
- (void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (UIResponder *)keyCommandResponderForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (long long)modalPresentationStyleForFullScreenViewController:(AVFullScreenViewController *)arg1 presentingViewController:(UIViewController *)arg2;
- (bool)prefersStatusBarHiddenForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (<UIViewControllerTransitioningDelegate> *)transitioningDelegateForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (UIView *)viewForFullScreenViewController:(AVFullScreenViewController *)arg1;

@end
