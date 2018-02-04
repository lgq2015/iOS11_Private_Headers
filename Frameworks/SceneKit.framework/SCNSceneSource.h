/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSceneSource : NSObject <NSKeyedUnarchiverDelegate> {
    NSOperationQueue * _downloadingQueue;
    struct __C3DScene { } * _lastLoadedScene;
    NSDictionary * _lastOptions;
    bool  _sceneLoaded;
    struct __C3DSceneSource { } * _sceneSource;
    NSDictionary * _sceneSourceOptions;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSURL *url;

+ (void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3;
+ (id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2;
+ (void)_removeCachedSceneSourceIfNeededForURL:(id)arg1;
+ (bool)_shouldCacheWithOptions:(id)arg1;
+ (id)sceneFileTypes;
+ (id)sceneSourceWithData:(id)arg1 options:(id)arg2;
+ (id)sceneSourceWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneTypes;

- (id)IDsOfEntriesWithClass:(Class)arg1;
- (bool)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(id /* block */)arg3 entryObjectConstructor:(id /* block */)arg4;
- (struct __C3DScene { }*)_createSceneRefWithOptions:(id)arg1 statusHandler:(id /* block */)arg2;
- (id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(id /* block */)arg3;
- (bool)canExportToColladaWithNoDataLoss;
- (id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2;
- (long long)countOfScenes;
- (id)data;
- (void)dealloc;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;
- (id)description;
- (id)entriesPassingTest:(id /* block */)arg1;
- (id)entryWithID:(id)arg1 withClass:(Class)arg2;
- (id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2;
- (id)identifiersOfEntriesWithClass:(Class)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (struct __C3DLibrary { }*)library;
- (id)performConsistencyCheck;
- (id)propertyForKey:(id)arg1;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;
- (long long)sceneCount;
- (id)sceneSourceOptions;
- (struct __C3DSceneSource { }*)sceneSourceRef;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(id /* block */)arg3;
- (id)sceneWithOptions:(id)arg1 error:(id*)arg2;
- (id)sceneWithOptions:(id)arg1 statusHandler:(id /* block */)arg2;
- (long long)sourceStatus;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)url;

@end
