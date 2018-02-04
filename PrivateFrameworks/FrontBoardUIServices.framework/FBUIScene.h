/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUIScene : NSObject <FBUISceneContentManager, FBUISceneSurrogate> {
    bool  _activated;
    FBSSceneClientSettings * _clientSettings;
    UIView * _contentView;
    bool  _deactivating;
    <FBUISceneDelegate> * _delegate;
    NSString * _identifier;
    bool  _invalidated;
    unsigned long long  _layerCount;
    NSString * _name;
    NSMutableArray * _pendingUpdateBlocks;
    <FBUISceneClientProxy> * _sceneClient;
    <FBUISceneHostProxy> * _sceneHost;
    <FBUISceneUpdater> * _sceneUpdater;
    FBSSceneSettings * _settings;
    FBSSceneSpecification * _specification;
    FBUISceneWorkspace * _workspace;
}

@property (getter=isActivated, nonatomic, readonly) bool activated;
@property (nonatomic, copy) FBSSceneClientSettings *clientSettings;
@property (nonatomic, readonly, retain) <FBUISceneContentManager> *contentManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBUISceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, copy) NSString *name;
@property (retain) <FBUISceneClientProxy> *sceneClient;
@property <FBUISceneHostProxy> *sceneHost;
@property (nonatomic, copy) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (nonatomic) FBUISceneWorkspace *workspace;

- (void).cxx_destruct;
- (bool)_isReallyActive;
- (void)_performPendingUpdates;
- (void)_performSceneUpdate:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)clientSettings;
- (id)configure;
- (id)contentManager;
- (id)contentView;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)didInvalidateSceneHost:(id)arg1;
- (bool)hasContent;
- (id)identifier;
- (id)init;
- (id)initWithName:(id)arg1 identifier:(id)arg2 specification:(id)arg3;
- (void)invalidate;
- (bool)isActivated;
- (bool)isInvalidated;
- (id)name;
- (void)registerSceneUpdater:(id)arg1;
- (id)sceneClient;
- (void)sceneClient:(id)arg1 didAttachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didDetachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2;
- (id)sceneHost;
- (void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)sceneHost:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (void)sceneHost:(id)arg1 registerSceneClient:(id)arg2 withInitialParameters:(id)arg3;
- (id)sceneIdentifier;
- (id)sceneSpecification;
- (void)sendActions:(id)arg1;
- (void)setClientSettings:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSceneClient:(id)arg1;
- (void)setSceneHost:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (id)settings;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateSettingsWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateSettingsWithTransitionBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)workspace;

@end
