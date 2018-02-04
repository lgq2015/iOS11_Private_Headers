/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerViewController : UIViewController {
    id  _internal;
    bool  _statusBarWasHidden;
}

@property (nonatomic, readonly) MPMoviePlayerController *moviePlayer;

- (void).cxx_destruct;
- (bool)_canReloadView;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1;
- (bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)moviePlayer;
- (long long)preferredWhitePointAdaptivityStyle;
- (bool)prefersStatusBarHidden;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
