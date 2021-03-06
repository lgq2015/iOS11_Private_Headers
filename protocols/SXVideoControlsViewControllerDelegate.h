/* made by EzioChiu.
 */

@protocol SXVideoControlsViewControllerDelegate <NSObject>

@required

- (void)videoControlsViewController:(SXVideoControlsViewController *)arg1 didToggleControlVisibility:(bool)arg2;
- (void)videoControlsViewControllerWantsSelectCaptions:(SXVideoControlsViewController *)arg1;
- (void)videoControlsViewControllerWantsToClose:(SXVideoControlsViewController *)arg1;
- (void)videoControlsViewControllerWantsToLearnMore:(SXVideoControlsViewController *)arg1;
- (void)videoControlsViewControllerWantsToPause:(SXVideoControlsViewController *)arg1;
- (void)videoControlsViewControllerWantsToPlay:(SXVideoControlsViewController *)arg1;
- (void)videoControlsViewControllerWantsToSeePrivacyStatement:(SXVideoControlsViewController *)arg1;
- (void)videoControlsViewControllerWantsToSeekToStart:(SXVideoControlsViewController *)arg1;
- (bool)videoControlsViewControllerWantsToSkipToNextVideo:(SXVideoControlsViewController *)arg1;
- (bool)videoControlsViewControllerWantsToSkipToPreviousVideo:(SXVideoControlsViewController *)arg1;
- (void)videoControlsViewControllsWantsToToggleVolume:(SXVideoControlsViewController *)arg1;

@end
