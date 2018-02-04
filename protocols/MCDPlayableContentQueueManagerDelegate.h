/* made by EzioChiu.
 */

@protocol MCDPlayableContentQueueManagerDelegate <NSObject>

@required

- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 presentViewController:(UIViewController *)arg2;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 shouldShowPlaybackQueue:(bool)arg2;
- (void)contentManagerCompletedAllPlayback:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManagerReloadData:(MCDPlayableContentPlaybackManager *)arg1;

@end
