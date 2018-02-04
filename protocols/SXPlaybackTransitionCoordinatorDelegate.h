/* made by EzioChiu.
 */

@protocol SXPlaybackTransitionCoordinatorDelegate <NSObject>

@required

- (void)playbackTransitionCoordinator:(SXPlaybackTransitionCoordinator *)arg1 addObserversToPlaybackCoordinator:(SXPlaybackCoordinator *)arg2;
- (void)playbackTransitionCoordinator:(SXPlaybackTransitionCoordinator *)arg1 removeObserversFromPlaybackCoordinator:(SXPlaybackCoordinator *)arg2;

@end
