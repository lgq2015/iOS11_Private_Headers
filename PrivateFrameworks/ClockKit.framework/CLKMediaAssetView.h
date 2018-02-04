/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKMediaAssetView : UIView <CLKVideoPlayerViewDelegate> {
    UIView * _curtainView;
    <CLKMediaAssetViewDelegate> * _delegate;
    unsigned int  _isPlaying;
    unsigned int  _isVideoLoaded;
    CLKMediaAsset * _mediaAsset;
    CALayer * _posterLayer;
    UIImageView * _posterView;
    long long  _preparedForOperation;
    AVSynchronizedLayer * _syncLayer;
    id  _timeObserver;
    long long  _transitionOperation;
    CLKVideoPlayerView * _videoPlayerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLKMediaAssetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLKMediaAsset *mediaAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPlayback;
- (void)_completePlaybackWithOperation:(long long)arg1;
- (void)_createVideoPlayerViewIfNeeded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_endTimeForOperation:(long long)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_reset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_startTimeForOperation:(long long)arg1;
- (void)_transitionFromPosterToVideo;
- (void)changeMediaAsset:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fadeFromCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)fadeToCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)hideCurtainView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interruptPlayback;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPlaying;
- (void)layoutSubviews;
- (id)mediaAsset;
- (void)pauseVideoPlayerViewIfItExists;
- (void)pauseWithOperation:(long long)arg1;
- (void)playWithOperation:(long long)arg1;
- (void)prepareToPlayWithOperation:(long long)arg1;
- (void)resumeInterruptedPlayback;
- (void)setDelegate:(id)arg1;
- (void)showCurtainView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidFinishPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end