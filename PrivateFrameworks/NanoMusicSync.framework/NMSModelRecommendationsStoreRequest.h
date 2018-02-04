/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSModelRecommendationsStoreRequest : MPModelForYouRecommendationsRequest {
    NSData * _cachedRecommendationsData;
}

@property (nonatomic, retain) NSData *cachedRecommendationsData;

- (void).cxx_destruct;
- (id)cachedRecommendationsData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setCachedRecommendationsData:(id)arg1;

@end
