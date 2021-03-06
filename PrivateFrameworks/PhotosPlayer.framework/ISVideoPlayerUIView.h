/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVideoPlayerUIView : UIView {
    ISAVPlayerUIView * _playerView;
    ISWrappedAVPlayer * _videoPlayer;
}

@property (nonatomic, retain) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (void)_ISVideoPlayerUIView_commonInitialization;
- (void)_updateVideoGravity;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentMode:(long long)arg1;
- (void)setVideoPlayer:(id)arg1;
- (id)videoPlayer;

@end
