/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMediaItemBaseViewController : QLScrollableContentItemViewController <QLToolbarButtonAction> {
    double  _elapsedTime;
    NSError * _error;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isFullScreen;
    bool  _isVisible;
    AVAsset * _mediaAsset;
    double  _mediaDuration;
    double  _mediaVolume;
    bool  _mediaWasPausedOnResignActive;
    bool  _playable;
    NSObject * _playbackTimeObserver;
    AVPlayer * _player;
    AVPlayerLayer * _playerLayer;
    UIView * _playerView;
    bool  _playing;
    long long  _playingStatus;
    id /* block */  _previewItemLoadingBlock;
    double  _remainingTime;
    bool  _visualTracksEnabled;
}

@property (nonatomic) double currentPlaybackHeadPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double elapsedTime;
@property (nonatomic, readonly) bool endOfMediaReached;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFullScreen;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) AVAsset *mediaAsset;
@property (nonatomic) double mediaDuration;
@property (nonatomic, readonly) double mediaVolume;
@property (nonatomic, readonly) bool playable;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) UIView *playerView;
@property (nonatomic, readonly) long long playingStatus;
@property (nonatomic) double remainingTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool visualTracksEnabled;

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)_updateExternalPlayback;
- (void)_updatePlayingStatus;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)currentPlaybackHeadPosition;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (void)didReachEndOfMedia;
- (double)elapsedTime;
- (bool)endOfMediaReached;
- (id)error;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isFullScreen;
- (bool)isVisible;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)mediaAsset;
- (double)mediaDuration;
- (double)mediaVolume;
- (void)observePlayingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (bool)playable;
- (id)player;
- (void)playerItemDidReachEnd:(id)arg1;
- (id)playerLayer;
- (id)playerView;
- (long long)playingStatus;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (id)registeredKeyCommands;
- (double)remainingTime;
- (void)resetToBeginning;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPlaybackHeadPosition:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setError:(id)arg1;
- (void)setMediaDuration:(double)arg1;
- (void)setMediaVolume:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setupPlayerWithMediaAsset:(id)arg1;
- (void)stop;
- (void)togglePlayback;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (bool)visualTracksEnabled;

@end
