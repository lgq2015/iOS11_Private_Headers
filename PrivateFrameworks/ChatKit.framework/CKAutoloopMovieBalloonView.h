/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISChangeObserver, ISWrappedAVPlayerDelegate> {
    ISWrappedAVAudioSession * _audioSession;
    ISWrappedAVPlayer * _avPlayer;
    bool  _isJellyfishVideo;
    bool  _isMuted;
    CKMovieMediaObject * _mediaObject;
    UIImageView * _muteButton;
    UIView * _snapshotView;
    ISVideoPlayerUIView * _videoPlayer;
}

@property (nonatomic, retain) ISWrappedAVAudioSession *audioSession;
@property (nonatomic, retain) ISWrappedAVPlayer *avPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isJellyfishVideo;
@property (nonatomic) bool isMuted;
@property (nonatomic, retain) CKMovieMediaObject *mediaObject;
@property (nonatomic, retain) UIImageView *muteButton;
@property (nonatomic, retain) UIView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic, retain) ISVideoPlayerUIView *videoPlayer;

+ (Class)AVPlayerClass;
+ (Class)VideoPlayerUIViewClass;
+ (id)_autoloopAVAudioSessionQueue;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)_applicationStateAcceptableForLooping;
- (void)_removeSnapshot;
- (bool)_shouldPauseInitialLooping;
- (bool)_shouldPresentQuickLookOnTap;
- (bool)_thermalStateAcceptableForLooping;
- (void)_thermalStateDidChange:(id)arg1;
- (id)audioSession;
- (id)avPlayer;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)avPlayerDidDeallocate;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)dealloc;
- (id)description;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isJellyfishVideo;
- (bool)isMuted;
- (void)layoutSubviews;
- (id)mediaObject;
- (id)muteButton;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAudioSession:(id)arg1;
- (void)setAvPlayer:(id)arg1;
- (void)setIsJellyfishVideo:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setMuteButton:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (id)snapshotView;
- (void)tapGestureRecognized:(id)arg1;
- (id)videoPlayer;

@end
