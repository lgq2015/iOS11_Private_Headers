/* made by EzioChiu.
 */

@protocol PUOneUpPresentationHelperDelegate <NSObject>

@required

- (UIViewController *)oneUpPresentationHelperViewController:(PUOneUpPresentationHelper *)arg1;

@optional

- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 didDismissOneUpViewController:(PUOneUpViewController *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 previewScrubberDidBecomeAvailable:(UIScrollView *)arg2;
- (long long)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 transitionTypeWithProposedTransitionType:(long long)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 willPresentOneUpPreviewViewController:(PUOneUpViewController *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 willPresentOneUpViewController:(PUOneUpViewController *)arg2;
- (bool)oneUpPresentationHelperDisableFinalFadeoutAnimation:(PUOneUpPresentationHelper *)arg1;
- (bool)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(PUOneUpPresentationHelper *)arg1;
- (long long)oneUpPresentationHelperPreferredBarStyle:(PUOneUpPresentationHelper *)arg1;
- (long long)oneUpPresentationHelperPreferredPresentationOrientation:(PUOneUpPresentationHelper *)arg1;
- (bool)oneUpPresentationHelperPreventRevealInMomentAction:(PUOneUpPresentationHelper *)arg1;
- (UIScrollView *)oneUpPresentationHelperScrollView:(PUOneUpPresentationHelper *)arg1;
- (bool)oneUpPresentationHelperShouldAutoPlay:(PUOneUpPresentationHelper *)arg1;
- (bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(PUOneUpPresentationHelper *)arg1;
- (UIView *)oneUpPresentationHelperViewHostingGestureRecognizers:(PUOneUpPresentationHelper *)arg1;

@end
