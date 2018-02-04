/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSModelRecommendationsStoreRequestOperation : MPModelForYouRecommendationsRequestOperation {
    NSData * _cachedRecommendationsData;
    bool  _shouldCacheResponse;
}

@property (nonatomic, retain) NSData *cachedRecommendationsData;
@property (nonatomic) bool shouldCacheResponse;

- (void).cxx_destruct;
- (void)_produceResponseWithRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 completion:(id /* block */)arg3;
- (id)cachedRecommendationsData;
- (void)execute;
- (void)setCachedRecommendationsData:(id)arg1;
- (void)setShouldCacheResponse:(bool)arg1;
- (bool)shouldCacheResponse;

@end
