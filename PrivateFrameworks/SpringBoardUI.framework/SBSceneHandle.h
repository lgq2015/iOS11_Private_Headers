/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBSceneHandle : NSObject <BSDescriptionProviding, FBSceneHostManagerObserver, FBSceneMonitorDelegate> {
    long long  _contentState;
    FBSSceneDefinition * _definition;
    FBSDisplayIdentity * _displayIdentity;
    bool  _manuallyControlsLifecycle;
    NSHashTable * _observers;
    NSMapTable * _observersToObserverBehaviors;
    FBScene * _scene;
    FBSceneMonitor * _sceneMonitor;
}

@property (getter=isContentReady, nonatomic, readonly) bool contentReady;
@property (nonatomic, readonly) long long contentState;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_definition, nonatomic, readonly) FBSSceneDefinition *definition;
@property (readonly, copy) NSString *description;
@property (setter=_setDisplayIdentity:, nonatomic, retain) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (getter=_manuallyControlsLifecycle, setter=_setManuallyControlsLifecycle:, nonatomic) bool manuallyControlsLifecycle;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (nonatomic, readonly) FBScene *sceneIfExists;
@property (getter=_sceneMonitor, setter=_setSceneMonitor:, nonatomic, retain) FBSceneMonitor *sceneMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_createMonitor;
- (id)_definition;
- (void)_didCreateScene:(id)arg1;
- (void)_didDestroyScene:(id)arg1;
- (void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_didUpdateHostContentState:(long long)arg1;
- (void)_didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1;
- (void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (id)_initWithDefinition:(id)arg1 displayIdentity:(id)arg2;
- (id)_initWithDefinition:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithScene:(id)arg1 displayIdentity:(id)arg2;
- (bool)_manuallyControlsLifecycle;
- (void)_noteSceneCreated:(id)arg1;
- (void)_noteSceneDestroyed:(id)arg1;
- (id)_sceneMonitor;
- (void)_setContentState:(long long)arg1;
- (void)_setDisplayIdentity:(id)arg1;
- (void)_setManuallyControlsLifecycle:(bool)arg1;
- (void)_setScene:(id)arg1;
- (void)_setSceneMonitor:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)contentState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayIdentity;
- (id)init;
- (bool)isContentReady;
- (bool)isPairedWithExternalSceneWithIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)scene;
- (void)sceneHostManagerContentStateDidChange:(id)arg1;
- (id)sceneIdentifier;
- (id)sceneIfExists;
- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
