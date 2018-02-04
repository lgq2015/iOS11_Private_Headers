/* made by EzioChiu.
 */

@protocol SXVideoPlayerViewControllerDelegate <NSObject>

@required

- (void)videoPlayerViewControllerFinishedVideoPlayback:(SXVideoPlayerViewController *)arg1;

@optional

- (void)videoPlayerViewController:(SXVideoPlayerViewController *)arg1 pausedPlaybackOfVideo:(id <SXVideoProviding>)arg2;
- (void)videoPlayerViewController:(SXVideoPlayerViewController *)arg1 resumedPlaybackOfVideo:(id <SXVideoProviding>)arg2;
- (void)videoPlayerViewController:(SXVideoPlayerViewController *)arg1 startedPlaybackOfVideo:(id <SXVideoProviding>)arg2;
- (bool)videoPlayerViewControllerShouldStartPlayback:(SXVideoPlayerViewController *)arg1;

@end
