/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {
    NSString * _bundleID;
    NSMutableArray * _pendingUpdateSceneBlocks;
    FBApplicationProcessLaunchTransaction * _processLaunchTransaction;
    bool  _processLaunched;
    NSMutableArray * _updateSceneTransactions;
    bool  _waitsForSceneCommits;
}

@property (nonatomic, readonly, retain) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) FBApplicationProcess *process;
@property (readonly) Class superclass;
@property (nonatomic) bool waitsForSceneCommits;

- (bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (void)_performSynchronizedCommit:(id)arg1;
- (bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)bundleID;
- (void)dealloc;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(id /* block */)arg2;
- (id)process;
- (void)removeObserver:(id)arg1;
- (void)setWaitsForSceneCommits:(bool)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)updateSceneTransactionDidCommitUpdate:(id)arg1;
- (void)updateSceneTransactionDidCreateScene:(id)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(id)arg1;
- (void)updateSceneTransactionWillUpdateScene:(id)arg1;
- (void)updateSceneWithIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 initialClientSettingsProvider:(id /* block */)arg5;
- (void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (bool)waitsForSceneCommits;

@end
