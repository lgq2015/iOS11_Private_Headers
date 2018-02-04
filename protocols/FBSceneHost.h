/* made by EzioChiu.
 */

@protocol FBSceneHost <NSObject>

@required

- (void)client:(id <FBSceneClient>)arg1 attachLayer:(FBSSceneLayer *)arg2;
- (void)client:(id <FBSceneClient>)arg1 detachLayer:(FBSSceneLayer *)arg2;
- (void)client:(id <FBSceneClient>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)client:(id <FBSceneClient>)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)client:(id <FBSceneClient>)arg1 updateLayer:(FBSSceneLayer *)arg2;
- (void)clientWillInvalidate:(id <FBSceneClient>)arg1;
- (NSString *)identifier;
- (FBSSceneSpecification *)specification;

@end
