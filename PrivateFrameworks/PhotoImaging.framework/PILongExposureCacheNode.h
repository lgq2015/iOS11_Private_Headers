/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PILongExposureCacheNode : NUCacheNode

- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)autoLoopCacheNode;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2;
- (id)initWithAutoLoopCacheNode:(id)arg1 urlKey:(id)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)persistentURL;
- (id)resolvedSourceNode:(out id*)arg1;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

@end
