/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {
    MPArtworkResizeUtility * _artworkResizeUtility;
    NSCache * _fallbackCache;
    bool  _usesFallbackCache;
}

@property (nonatomic, retain) MPArtworkResizeUtility *artworkResizeUtility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fallbackCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool usesFallbackCache;

- (void).cxx_destruct;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (id)_existingRepresentationForArtworkCatalog:(id)arg1 fromCacheOnly:(bool)arg2;
- (bool)_isRepresentation:(id)arg1 validForCatalog:(id)arg2;
- (bool)_isRepresentationSize:(struct CGSize { double x1; double x2; })arg1 validForFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_representationAtSize:(struct CGSize { double x1; double x2; })arg1 forCatalog:(id)arg2;
- (id)_resizeArtwork:(id)arg1 forCatalog:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)_resizeOriginalArtworkForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)artworkResizeUtility;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)fallbackCache;
- (bool)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setArtworkResizeUtility:(id)arg1;
- (void)setFallbackCache:(id)arg1;
- (void)setUsesFallbackCache:(bool)arg1;
- (bool)usesFallbackCache;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
