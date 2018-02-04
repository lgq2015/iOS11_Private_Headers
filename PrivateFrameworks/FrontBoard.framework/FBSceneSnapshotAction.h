/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {
    BKSProcessAssertion * _assertion;
    NSString * _sceneID;
}

@property (nonatomic, readonly, retain) NSString *sceneID;

- (void)dealloc;
- (id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(id /* block */)arg4;
- (id)sceneID;

@end
