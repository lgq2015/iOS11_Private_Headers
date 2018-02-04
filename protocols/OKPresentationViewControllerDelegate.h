/* made by EzioChiu.
 */

@protocol OKPresentationViewControllerDelegate <NSObject>

@optional

- (void)audioFinishedPlayingForTrackID:(NSString *)arg1;
- (void)audioStartedPlayingForTrackID:(NSString *)arg1 withAVAsset:(AVAsset *)arg2 atVolume:(double)arg3;
- (void)beginDuckingForTrackID:(NSString *)arg1 toDuckLevel:(double)arg2 fadeDuration:(double)arg3;
- (void)beginFadingForTrackID:(NSString *)arg1 fadeDuration:(double)arg2;
- (void)couchPotatoPlaybackFinished;
- (void)dismissPresentationViewController:(OKPresentationViewController *)arg1;
- (void)endDuckingForTrackID:(NSString *)arg1;
- (void)endFadingForTrackID:(NSString *)arg1;
- (void)presentationViewController:(OKPresentationViewController *)arg1 changedFrameOfMainNavigatorTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)presentationViewController:(OKPresentationViewController *)arg1 renderingTimeLogMessage:(NSString *)arg2 withTimestamp:(double)arg3;
- (void)presentationViewControllerDidAppear:(OKPresentationViewController *)arg1;
- (void)presentationViewControllerDidPrepare:(OKPresentationViewController *)arg1;

@end
