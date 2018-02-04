/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest {
    NSURL * _customForYouURL;
}

@property (nonatomic, copy) NSURL *customForYouURL;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customForYouURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setCustomForYouURL:(id)arg1;

@end
