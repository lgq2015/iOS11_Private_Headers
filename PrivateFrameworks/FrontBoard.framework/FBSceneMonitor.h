/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneMonitor : NSObject <FBSceneLayerManagerObserver, FBSceneManagerInternalObserver, FBSceneMonitorDelegate> {
    <FBSceneMonitorDelegate> * _delegate;
    FBSceneMonitorBehaviors * _delegateMonitorBehaviors;
    FBSSceneClientSettingsDiffInspector * _diffInspector;
    FBSceneMonitorBehaviors * _effectiveMonitorBehaviors;
    FBSMutableSceneSettings * _effectiveSettings;
    NSMutableSet * _externalSceneIDs;
    FBSceneMonitorBehaviors * _givenMonitorBehaviors;
    bool  _invalidated;
    bool  _isSynchronizing;
    FBSSceneSettings * _lastCommitSettings;
    bool  _monitorSceneCommits;
    NSMutableDictionary * _monitorsBySceneID;
    NSMutableSet * _pairedExternalSceneIDs;
    FBScene * _scene;
    NSString * _sceneID;
    FBSMutableSceneSettings * _sceneSettings;
    NSMutableDictionary * _updateContextsByTransactionID;
    bool  _updateExternalScenesAfterSync;
    bool  _updateSettingsAfterSync;
}

@property (nonatomic, copy) FBSceneMonitorBehaviors *behaviors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSSceneSettings *effectiveSceneSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, readonly, retain) FBSSceneSettings *sceneSettings;
@property (readonly) Class superclass;

- (id)_effectiveBehaviors;
- (void)_evaluateEffectiveMonitorBehaviors;
- (id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2;
- (void)_setEffectiveMonitorBehaviors:(id)arg1;
- (void)_updateAllSceneStateIgnoringDelegate;
- (void)_updateEffectiveSceneSettings:(bool)arg1;
- (void)_updateExternalScenes:(bool)arg1;
- (void)_updateScenePairingState:(bool)arg1;
- (void)_updateSceneSettings:(bool)arg1;
- (id)behaviors;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)effectiveSceneSettings;
- (id)initWithScene:(id)arg1;
- (id)initWithSceneID:(id)arg1;
- (void)invalidate;
- (bool)isPairedWithExternalSceneID:(id)arg1;
- (id)scene;
- (id)sceneID;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (id)sceneSettings;
- (void)setBehaviors:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
