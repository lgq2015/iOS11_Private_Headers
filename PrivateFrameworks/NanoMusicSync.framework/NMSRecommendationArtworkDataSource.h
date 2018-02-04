/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSRecommendationArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCache * _fallbackCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)artworkCacheDirectory;
+ (id)sharedDataSource;

- (void).cxx_destruct;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (id)_cachedArtworkImageWithToken:(id)arg1;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (id)_existingRepresentationForArtworkCatalog:(id)arg1 fromCacheOnly:(bool)arg2;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (bool)artworkCacheExistsForToken:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
