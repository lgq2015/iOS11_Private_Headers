/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding, FBSceneManagerInternalObserver, FBSceneManagerObserver> {
    NSMutableArray * _activeBands;
    NSMutableSet * _eligibleScenes;
    FBScene * _updatingScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)_areEligibleSceneSettings:(id)arg1 forScene:(id)arg2;
- (id)_bandForSceneLevel:(double)arg1 createIfNeeded:(bool)arg2;
- (id)_deactivationBandsForLevel:(double)arg1;
- (unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (bool)_isEligibleDisplayIdentity:(id)arg1;
- (bool)_isEligibleProcess:(id)arg1;
- (bool)_isEligibleScene:(id)arg1 withSettings:(id)arg2;
- (void)_noteSceneWillUpdate:(id)arg1 oldSettings:(id)arg2 newSettings:(id)arg3;
- (void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3 reason:(id)arg4;
- (bool)_shouldTrackSceneInitiallyAtInitialization:(id)arg1;
- (void)_trackScene:(id)arg1;
- (void)_untrackScene:(id)arg1;
- (void)_updateAllScenesForBand:(id)arg1 withTransitionContext:(id)arg2 reason:(id)arg3;
- (void)addAssertion:(id)arg1 withTransitionContext:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)removeAssertion:(id)arg1;
- (void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
