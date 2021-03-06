/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSExternalSceneLayer : FBSSceneLayer {
    NSString * _sceneID;
}

@property (nonatomic, readonly, copy) NSString *sceneID;

- (id)_initWithExternalSceneID:(id)arg1 level:(double)arg2 trackingContext:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithExternalSceneID:(id)arg1 level:(double)arg2;
- (id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sceneID;

@end
