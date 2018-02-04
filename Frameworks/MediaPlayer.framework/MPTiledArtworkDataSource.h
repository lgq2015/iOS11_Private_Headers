/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCountedSet * _loadingTiledArtworkRequests;
    NSObject<OS_dispatch_queue> * _loadingTiledArtworkRequestsAccessQueue;
    NSCache * _tiledArtworkRepresentationFallbackCache;
    NSOperationQueue * _tilingArtworkCatalogOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_errorWithDescription:(id)arg1;
+ (id)_loadingRequestForArtworkCatalog:(id)arg1;
+ (id)_representationCacheKeyForArtworkCatalog:(id)arg1 forAnyRevision:(bool)arg2;
+ (struct CGSize { double x1; double x2; })_tileSizeForFittingSize:(struct CGSize { double x1; double x2; })arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 spacing:(double)arg4;
+ (id)sharedDataSource;

- (void).cxx_destruct;
- (void)_addLoadingRequestForArtworkCatalog:(id)arg1;
- (bool)_hasLoadingRequestForArtworkCatalog:(id)arg1;
- (void)_performAsyncBlock:(id /* block */)arg1;
- (void)_performSyncBlock:(id /* block */)arg1;
- (void)_removeLoadingRequestForArtworkCatalog:(id)arg1;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
