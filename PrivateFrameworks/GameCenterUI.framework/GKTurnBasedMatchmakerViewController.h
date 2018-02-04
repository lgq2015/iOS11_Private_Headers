/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKExtensionParentViewControllerProtocol, GKLocalPlayerListener, GKTurnBasedEventListener> {
    UIAlertController * _alertController;
    GKMatchRequest * _matchRequest;
    GKTurnBasedMatchmakerHostViewController * _remoteViewController;
    bool  _showExistingMatches;
    <GKTurnBasedMatchmakerViewControllerDelegate> * _turnBasedMatchmakerDelegateWeak;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKMatchRequest *matchRequest;
@property (nonatomic, retain) GKTurnBasedMatchmakerHostViewController *remoteViewController;
@property (nonatomic) bool showExistingMatches;
@property (readonly) Class superclass;
@property (nonatomic) <GKTurnBasedMatchmakerViewControllerDelegate> *turnBasedMatchmakerDelegate;

+ (bool)_preventsAppearanceProxyCustomization;

- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (id)alertController;
- (void)authenticationChanged:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (id)init;
- (id)initWithMatchRequest:(id)arg1;
- (void)loadView;
- (id)matchRequest;
- (void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(bool)arg3;
- (void)playerQuitMatch:(id)arg1;
- (id)remoteViewController;
- (void)setAlertController:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setShowExistingMatches:(bool)arg1;
- (void)setTurnBasedMatchmakerDelegate:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldShowPlayForTurnBasedMatch;
- (bool)shouldShowQuitForTurnBasedMatch;
- (bool)showExistingMatches;
- (unsigned long long)supportedInterfaceOrientations;
- (id)turnBasedMatchmakerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
