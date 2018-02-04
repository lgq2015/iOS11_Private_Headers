/* made by EzioChiu.
 */

@protocol FBUISceneManager <NSObject>

@required

- (void)invalidateSceneWorkspace:(id <FBUISceneWorkspace>)arg1;
- (void)registerSceneWorkspace:(id <FBUISceneWorkspace>)arg1;
- (void)workspace:(id <FBUISceneWorkspace>)arg1 createSceneWithName:(NSString *)arg2 specification:(FBSSceneSpecification *)arg3;
- (void)workspace:(id <FBUISceneWorkspace>)arg1 destroySceneWithIdentifier:(NSString *)arg2;
- (NSString *)workspace:(id <FBUISceneWorkspace>)arg1 sceneIdentifierForName:(NSString *)arg2;

@end
