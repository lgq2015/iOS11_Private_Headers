/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaControlsViewController : UIViewController <MPMediaControlsClientController, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    MTMaterialView * _backgroundView;
    _UIAsyncInvocation * _cancelRequest;
    MPMediaControlsConfiguration * _configuration;
    <MPMediaControlsViewControllerDelegate> * _delegate;
    id /* block */  _didDismissHandler;
    bool  _hasPresented;
    MPMediaControlsRemoteViewController * _remoteViewController;
}

@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (nonatomic, readonly) MPMediaControlsConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPMediaControlsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didDismissHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaControlsRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_removeBackgroundNotifications;
- (void)_requestRemoteViewController;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)backgroundView;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id /* block */)didDismissHandler;
- (void)didReceiveInteraction;
- (void)dismiss;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)prefersStatusBarHidden;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)remoteViewController;
- (void)setBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDismissHandler:(id /* block */)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
