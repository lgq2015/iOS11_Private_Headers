/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKScene : NSObject <NSCoding, NSCopying> {
    NSMutableArray * _entities;
    NSMutableDictionary * _graphs;
    <GKSceneRootNodeType> * _rootNode;
}

@property (nonatomic, readonly) NSArray *entities;
@property (nonatomic, readonly) NSDictionary *graphs;
@property (nonatomic, retain) <GKSceneRootNodeType> *rootNode;

+ (id)_sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;
+ (id)sceneWithFileNamed:(id)arg1;
+ (id)sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;

- (void).cxx_destruct;
- (void)addEntity:(id)arg1;
- (void)addGraph:(id)arg1 name:(id)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)graphs;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)removeGraph:(id)arg1;
- (id)rootNode;
- (void)setRootNode:(id)arg1;

@end
