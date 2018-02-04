/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDashboardHostViewController : GKUIRemoteViewController <GKGameCenterDashboardServiceProtocol> {
    NSObject * _dashboardAssetController;
    GKGameCenterViewController * _delegateWeak;
}

@property (nonatomic, retain) NSObject *dashboardAssetController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKGameCenterViewController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dashboardExtension;
+ (bool)dismissAutomaticallyAfterExtensionCompletion;

- (id)dashboardAssetController;
- (void)dealloc;
- (id)delegate;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (id)extensionObjectProxy;
- (void)finishWithMatch:(id)arg1;
- (void)hostDidChangeLeaderboardIdentifier:(id)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(id)arg1;
- (void)hostDidChangeViewState:(id)arg1;
- (void)hostSupportsShowingPlayForChallenge:(bool)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(bool)arg1;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)messageFromExtension:(id)arg1;
- (void)playPressedForChallenge:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)setDashboardAssetController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
