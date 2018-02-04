/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoControlsViewController : UIViewController <SXUpNextViewControllerDelegate, SXVideoControlManagerDelegate, UIGestureRecognizerDelegate> {
    SXLearnMoreButton * _adLearnMoreButton;
    SXAdPrivacyButton * _adMarker;
    SXMediaSelectionButton * _captionsButton;
    SXVideoCloseButton * _closeButton;
    <SXVideoControlsViewControllerDelegate> * _delegate;
    double  _duration;
    SXVideoControlsLayout * _layout;
    double  _loadingProgress;
    SXMaterialVideoPlayButton * _playButton;
    SXVideoProgressView * _progressView;
    UIButton * _skipToNextButton;
    UIButton * _skipToPreviousButton;
    double  _time;
    SXTopVideoControlsView * _topControls;
    SXUpNextViewController * _upNextViewController;
    SXVideoControlManager * _videoControlManager;
    SXVolumeButton * _volumeButton;
}

@property (nonatomic, retain) SXLearnMoreButton *adLearnMoreButton;
@property (nonatomic, retain) SXAdPrivacyButton *adMarker;
@property (nonatomic, retain) SXMediaSelectionButton *captionsButton;
@property (nonatomic, retain) SXVideoCloseButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXVideoControlsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXVideoControlsLayout *layout;
@property (nonatomic) double loadingProgress;
@property (nonatomic, retain) SXMaterialVideoPlayButton *playButton;
@property (nonatomic, retain) SXVideoProgressView *progressView;
@property (nonatomic, retain) UIButton *skipToNextButton;
@property (nonatomic, retain) UIButton *skipToPreviousButton;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (nonatomic, retain) SXTopVideoControlsView *topControls;
@property (nonatomic, retain) SXUpNextViewController *upNextViewController;
@property (nonatomic, retain) SXVideoControlManager *videoControlManager;
@property (nonatomic, retain) SXVolumeButton *volumeButton;

- (void).cxx_destruct;
- (void)accessibilityDidActivateVideoView:(id)arg1;
- (id)adLearnMoreButton;
- (void)adLearnMoreButtonTapped:(id)arg1;
- (id)adMarker;
- (void)adMarkerTapped:(id)arg1;
- (id)captionsButton;
- (void)captionsButtonTapped:(id)arg1;
- (id)closeButton;
- (void)closeButtonTapped:(id)arg1;
- (void)configureControlsWithLayout:(id)arg1;
- (void)configurePlayButtonWithLayout:(id)arg1;
- (void)configureUpNextViewControllerWithLayout:(id)arg1;
- (id)delegate;
- (double)duration;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (id)layout;
- (double)loadingProgress;
- (id)playButton;
- (void)playButtonTapped:(id)arg1;
- (id)progressView;
- (void)setAdLearnMoreButton:(id)arg1;
- (void)setAdMarker:(id)arg1;
- (void)setCaptionsButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayout:(id)arg1 animated:(bool)arg2;
- (void)setLoadingProgress:(double)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSkipToNextButton:(id)arg1;
- (void)setSkipToPreviousButton:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTopControls:(id)arg1;
- (void)setUpNextViewController:(id)arg1;
- (void)setVideoControlManager:(id)arg1;
- (void)setVolumeButton:(id)arg1;
- (id)skipToNextButton;
- (void)skipToNextVideoTapped:(id)arg1;
- (id)skipToPreviousButton;
- (void)skipToPreviousVideoTapped:(id)arg1;
- (void)tap;
- (double)time;
- (id)topControls;
- (id)upNextViewController;
- (void)upNextViewControllerWantsToReplay:(id)arg1;
- (void)upNextViewControllerWantsToSkip:(id)arg1;
- (void)updateViewConstraints;
- (id)videoControlManager;
- (void)videoControlManager:(id)arg1 didToggleControlVisibility:(bool)arg2;
- (void)viewDidLoad;
- (id)volumeButton;
- (void)volumeButtonTapped:(id)arg1;

@end
