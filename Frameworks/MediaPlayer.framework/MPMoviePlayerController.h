/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    id  _implementation;
}

@property (getter=isAirPlayVideoActive, nonatomic, readonly) bool airPlayVideoActive;
@property (nonatomic) bool allowsAirPlay;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic) long long controlStyle;
@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double endPlaybackTime;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic, readonly) bool isPreparedToPlay;
@property (nonatomic, readonly) unsigned long long loadState;
@property (nonatomic, readonly) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) bool readyForDisplay;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long scalingMode;
@property (nonatomic) bool shouldAutoplay;
@property (nonatomic, readonly) UIView *view;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)allInstancesResignActive;

- (void).cxx_destruct;
- (bool)_isReadyForDisplay;
- (void)_resignActive;
- (bool)allowsAirPlay;
- (id)backgroundView;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (id)contentURL;
- (long long)controlStyle;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (void)endSeeking;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (double)initialPlaybackTime;
- (bool)isAirPlayVideoActive;
- (bool)isFullscreen;
- (bool)isPreparedToPlay;
- (unsigned long long)loadState;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned long long)movieMediaTypes;
- (long long)movieSourceType;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)pause;
- (void)play;
- (double)playableDuration;
- (long long)playbackState;
- (void)prepareToPlay;
- (bool)readyForDisplay;
- (long long)repeatMode;
- (long long)scalingMode;
- (void)setAllowsAirPlay:(bool)arg1;
- (void)setContentURL:(id)arg1;
- (void)setControlStyle:(long long)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(long long)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setScalingMode:(long long)arg1;
- (void)setShouldAutoplay:(bool)arg1;
- (bool)shouldAutoplay;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;
- (id)view;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (void)preparePrerollAds;

- (void)cancelPreroll;
- (void)playPrerollAdWithCompletionHandler:(id /* block */)arg1;

@end
