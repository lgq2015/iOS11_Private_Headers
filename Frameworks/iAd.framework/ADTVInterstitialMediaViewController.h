/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTVInterstitialMediaViewController : UIViewController <ADPlayerDelegate, ADTVMediaControlsViewControllerDelegate> {
    UIImage * _backgroundImage;
    ADAdImpressionPublicAttributes * _impressionAttributes;
    ADInterstitialAd * _interstitialAd;
    id /* block */  _loadCompletion;
    ADTVMediaControlsViewController * _mediaControlsViewController;
    bool  _videoCanPlay;
    ADPlayer * _videoPlayer;
    ADTVPrerollVideoView * _videoView;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *impressionAttributes;
@property (nonatomic, readonly) ADInterstitialAd *interstitialAd;
@property (nonatomic, copy) id /* block */ loadCompletion;
@property (nonatomic, retain) ADTVMediaControlsViewController *mediaControlsViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool videoCanPlay;
@property (nonatomic, retain) ADPlayer *videoPlayer;
@property (nonatomic, retain) ADTVPrerollVideoView *videoView;

- (void)_loadBackgroundImageFromString:(id)arg1;
- (void)_updateLoadStatus:(id)arg1;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)adtvMediaControlsActionButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsPrivacyButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsSkipButtonWasPressed:(id)arg1;
- (id)backgroundImage;
- (void)dealloc;
- (id)impressionAttributes;
- (id)initForInterstitialAd:(id)arg1 withImpressionPublicAttributes:(id)arg2;
- (id)interstitialAd;
- (id /* block */)loadCompletion;
- (void)loadContentsWithCompletionHandler:(id /* block */)arg1;
- (void)loadView;
- (id)mediaControlsViewController;
- (void)playVideo;
- (void)setBackgroundImage:(id)arg1;
- (void)setImpressionAttributes:(id)arg1;
- (void)setLoadCompletion:(id /* block */)arg1;
- (void)setMediaControlsViewController:(id)arg1;
- (void)setVideoCanPlay:(bool)arg1;
- (void)setVideoPlayer:(id)arg1;
- (void)setVideoView:(id)arg1;
- (bool)shouldTestVisibilityAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)videoCanPlay;
- (id)videoPlayer;
- (id)videoView;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
