/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPlayer : NSObject <ADBannerViewInternalDelegate> {
    AVPlayer * _avPlayer;
    AVPlayerItem * _avPlayerItem;
    <ADPlayerDelegate> * _delegate;
    bool  _playbackHasBegun;
    unsigned long long  _playbackState;
    id  _timeObserver;
    ADBannerView * _videoAd;
}

@property (nonatomic, retain) AVPlayer *avPlayer;
@property (nonatomic, retain) AVPlayerItem *avPlayerItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool playbackHasBegun;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic) unsigned long long playbackState;
@property (readonly) Class superclass;
@property (nonatomic, retain) id timeObserver;
@property (nonatomic, retain) ADBannerView *videoAd;

- (bool)_beginLoadingVideoFromURL:(id)arg1;
- (id)_networkOptimalVideoURLForAd:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (id)avPlayer;
- (id)avPlayerItem;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(bool)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewShouldPauseMedia:(id)arg1;
- (void)bannerViewShouldResumeMedia:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)performAction;
- (void)play;
- (bool)playbackHasBegun;
- (float)playbackRate;
- (unsigned long long)playbackState;
- (void)playerDidPause;
- (void)playerDidStart;
- (void)playerItemDidFailedToPlayToEnd:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)playerItemEncounteredPlaybackStall:(id)arg1;
- (bool)prepareForPlayackOfInterstitialWithURL:(id)arg1;
- (bool)prepareForPlayback;
- (void)setAvPlayer:(id)arg1;
- (void)setAvPlayerItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaybackHasBegun:(bool)arg1;
- (void)setPlaybackState:(unsigned long long)arg1;
- (void)setTimeObserver:(id)arg1;
- (void)setVideoAd:(id)arg1;
- (void)showAdTransparency;
- (void)shutdown;
- (id)timeObserver;
- (id)videoAd;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end
