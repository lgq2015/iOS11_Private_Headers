/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoViewController : UIViewController <SXPlaybackTransitionCoordinatorDelegate, SXVideoControlsViewControllerDelegate, SXVideoPlaybackObserver, SXVideoViewDelegate, SXVolumeObserver, UIViewControllerTransitioningDelegate> {
    NSMutableArray * _ads;
    SXVideoViewControllerConfiguration * _configuration;
    SXVideoControlsViewController * _controlsViewController;
    <SXVideoViewControllerDataSource> * _dataSource;
    <SXVideoViewControllerDelegate> * _delegate;
    SXMediaSelectionController * _mediaSelectionController;
    unsigned long long  _numberOfVideos;
    SXPlaybackCoordinator * _playbackCoordinator;
    SXVideoPlaybackQueue * _queue;
    SXScreenDimmingManager * _screenDimmingManager;
    SXVideoView * _videoView;
    NSMutableArray * _videos;
    SXVolumeController * _volumeController;
}

@property (nonatomic, retain) NSMutableArray *ads;
@property (nonatomic, readonly) SXVideoViewControllerConfiguration *configuration;
@property (nonatomic, retain) SXVideoControlsViewController *controlsViewController;
@property (nonatomic) <SXVideoViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXVideoViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXMediaSelectionController *mediaSelectionController;
@property (nonatomic, readonly) bool muted;
@property (nonatomic) unsigned long long numberOfVideos;
@property (nonatomic, retain) SXPlaybackCoordinator *playbackCoordinator;
@property (nonatomic, retain) SXVideoPlaybackQueue *queue;
@property (nonatomic, readonly) SXScreenDimmingManager *screenDimmingManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXVideoView *videoView;
@property (nonatomic, retain) NSMutableArray *videos;
@property (nonatomic, readonly) SXVolumeController *volumeController;

- (void).cxx_destruct;
- (void)accessibilityDidActivateVideoView:(id)arg1;
- (id)ads;
- (void)advance;
- (id)configuration;
- (id)controlsViewController;
- (id)dataSource;
- (id)delegate;
- (unsigned long long)indexOfVideo:(id)arg1;
- (unsigned long long)indexOfVideoForAd:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)layoutForAd:(id)arg1 withPlaybackCoordinator:(id)arg2 reason:(unsigned long long)arg3;
- (id)layoutForVideo:(id)arg1 withPlaybackCoordinator:(id)arg2 reason:(unsigned long long)arg3;
- (id)mediaSelectionController;
- (void)muteStateChanged:(bool)arg1;
- (bool)muted;
- (unsigned long long)numberOfVideos;
- (void)pause;
- (void)play;
- (bool)playbackAllowed:(id)arg1;
- (id)playbackCoordinator;
- (void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (void)playbackTransitionCoordinator:(id)arg1 addObserversToPlaybackCoordinator:(id)arg2;
- (void)playbackTransitionCoordinator:(id)arg1 removeObserversFromPlaybackCoordinator:(id)arg2;
- (id)queue;
- (void)refreshVideoControlsForPlaybackCoordinator:(id)arg1 reason:(unsigned long long)arg2;
- (id)screenDimmingManager;
- (void)setAds:(id)arg1;
- (void)setControlsViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumberOfVideos:(unsigned long long)arg1;
- (void)setPlaybackCoordinator:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVideoView:(id)arg1;
- (void)setVideos:(id)arg1;
- (void)setupVideoQueueIfNeeded;
- (bool)skipToPrevious;
- (id)subtitleForVideoAtIndex:(unsigned long long)arg1;
- (id)titleForVideoAtIndex:(unsigned long long)arg1;
- (void)transitionToPlaybackCoordinator:(id)arg1 direction:(unsigned long long)arg2;
- (void)videoControlsViewController:(id)arg1 didToggleControlVisibility:(bool)arg2;
- (void)videoControlsViewControllerWantsSelectCaptions:(id)arg1;
- (void)videoControlsViewControllerWantsToClose:(id)arg1;
- (void)videoControlsViewControllerWantsToLearnMore:(id)arg1;
- (void)videoControlsViewControllerWantsToPause:(id)arg1;
- (void)videoControlsViewControllerWantsToPlay:(id)arg1;
- (void)videoControlsViewControllerWantsToSeePrivacyStatement:(id)arg1;
- (void)videoControlsViewControllerWantsToSeekToStart:(id)arg1;
- (bool)videoControlsViewControllerWantsToSkipToNextVideo:(id)arg1;
- (bool)videoControlsViewControllerWantsToSkipToPreviousVideo:(id)arg1;
- (void)videoControlsViewControllsWantsToToggleVolume:(id)arg1;
- (id)videoView;
- (id)videos;
- (void)viewDidLoad;
- (id)volumeController;
- (void)volumeLevelChanged:(double)arg1;

@end
