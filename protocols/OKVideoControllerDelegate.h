/* made by EzioChiu.
 */

@protocol OKVideoControllerDelegate <NSObject>

@required

- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didFailToPlayItem:(AVPlayerItem *)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didFinishPlayingItem:(AVPlayerItem *)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didStartPlayingItem:(AVPlayerItem *)arg2;

@optional

- (void)videoPlayerController:(OKVideoPlayerController *)arg1 bufferingStateDidChange:(unsigned long long)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 stateDidChange:(unsigned long long)arg2;
- (void)videoPlayerControllerIsReadyToPlay:(OKVideoPlayerController *)arg1;

@end
