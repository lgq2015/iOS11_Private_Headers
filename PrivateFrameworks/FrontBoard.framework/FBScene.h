/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost, FBUISceneUpdater> {
    <FBSceneClient> * _client;
    FBProcess * _clientProcess;
    <FBSceneClientProvider> * _clientProvider;
    FBSSceneClientSettings * _clientSettings;
    FBSSceneDefinition * _definition;
    <FBSceneDelegate> * _delegate;
    NSHashTable * _geometryObservers;
    FBSceneHostManager * _hostManager;
    NSString * _identifier;
    unsigned long long  _lastForegroundingTransitionID;
    FBSceneLayerManager * _layerManager;
    bool  _lockedForMutation;
    FBSMutableSceneSettings * _mutableSettings;
    FBSSceneSettings * _settings;
    <BSInvalidatable> * _stateCaptureAssertion;
    unsigned long long  _transactionID;
    bool  _valid;
    NSString * _workspaceIdentifier;
}

@property (setter=_setLockedForMutation:, nonatomic) bool _lockedForMutation;
@property (nonatomic, readonly) unsigned long long _transactionID;
@property (nonatomic, readonly, retain) <FBSceneClient> *client;
@property (nonatomic, readonly, retain) FBProcess *clientProcess;
@property (nonatomic, readonly, retain) <FBSceneClientProvider> *clientProvider;
@property (nonatomic, readonly, retain) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) FBSSceneDefinition *definition;
@property (nonatomic) <FBSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSDisplayConfiguration *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) FBSceneHostManager *hostManager;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) FBSceneLayerManager *layerManager;
@property (nonatomic, readonly, retain) FBSMutableSceneSettings *mutableSettings;
@property (nonatomic, readonly, copy) FBSSceneParameters *parameters;
@property (nonatomic, readonly, retain) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSString *workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (void)_addSceneGeometryObserver:(id)arg1;
- (unsigned long long)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_dispatchClientMessageWithBlock:(id /* block */)arg1;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (bool)_lockedForMutation;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)_setLockedForMutation:(bool)arg1;
- (unsigned long long)_transactionID;
- (id)client;
- (void)client:(id)arg1 attachLayer:(id)arg2;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (id)clientProcess;
- (id)clientProvider;
- (id)clientSettings;
- (void)clientWillInvalidate:(id)arg1;
- (id)contentView;
- (id)createSnapshot;
- (id)createSnapshotWithContext:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (id)debugDescription;
- (id)definition;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)hostManager;
- (id)identifier;
- (id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3;
- (bool)isValid;
- (id)layerManager;
- (id)mutableSettings;
- (id)parameters;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotContext;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingsWithBlock:(id /* block */)arg1;
- (void)updateSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updateUISettingsWithBlock:(id /* block */)arg1;
- (void)updateUISettingsWithTransitionBlock:(id /* block */)arg1;
- (id)workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils

- (bool)accessibilityIsSceneOccluded;
- (bool)accessibilityIsSceneOnMainScreen;
- (bool)accessibilityIsShowingSheet;
- (bool)accessibilitySceneBelongsToTheSystemApp;
- (id)accessibilitySceneDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilitySceneFrame;
- (id)accessibilitySceneIdentifier;
- (bool)accessibilitySceneIsDeactivatedBySidebar;
- (bool)accessibilitySceneIsDeactivatedBySwitcher;
- (bool)accessibilitySceneIsForegroundVisible;
- (bool)accessibilitySceneIsRunningInForeground;
- (bool)accessibilitySceneIsSuspended;
- (double)accessibilitySceneLevel;
- (bool)accessibilitySceneOwnerIsAUIApplication;
- (id)accessibilityScenePID;
- (id)accessibilitySceneProcess;

@end
