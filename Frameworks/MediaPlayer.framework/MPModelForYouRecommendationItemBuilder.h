/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationItemBuilder : NSObject {
    MPModelStoreBrowseContentItemBuilder * _contentItemBuilder;
    MPMutableSectionedCollection * _flatSectionedItems;
    struct { 
        unsigned int initialized : 1; 
        unsigned int itemType : 1; 
        unsigned int backedByStoreItemMetadata : 1; 
        unsigned int album : 1; 
        unsigned int playlist : 1; 
        unsigned int subgroup : 1; 
    }  _requestedItemProperties;
    MPPropertySet * _requestedPropertySet;
    NSDictionary * _storeItemMetadataResults;
    MPModelForYouRecommendationGroupBuilder * _subgroupBuilder;
}

@property (nonatomic, readonly) MPMutableSectionedCollection *flatSectionedItems;
@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;
@property (nonatomic, readonly) NSDictionary *storeItemMetadataResults;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)flatSectionedItems;
- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3;
- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3;
- (id)requestedPropertySet;
- (id)storeItemMetadataResults;

@end
