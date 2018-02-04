/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationItem : MPModelObject {
    MPModelAlbum * _album;
    bool  _backedByStoreItemMetadata;
    unsigned long long  _itemType;
    MPModelForYouRecommendationGroup * _parentGroup;
    MPModelPlaylist * _playlist;
    long long  _subgroupIndex;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (getter=isBackedByStoreItemMetadata, nonatomic) bool backedByStoreItemMetadata;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) MPModelForYouRecommendationGroup *parentGroup;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, readonly) MPModelForYouRecommendationGroup *subgroup;
@property (nonatomic) long long subgroupIndex;

+ (id)__MPModelForYouRecommendationItemPropertyBackedByStoreItemMetadata__PROPERTY;
+ (id)__MPModelForYouRecommendationItemPropertyItemType__PROPERTY;
+ (id)__MPModelForYouRecommendationItemPropertyParentGroup__PROPERTY;
+ (id)__MPModelForYouRecommendationItemPropertySubgroupIndex__PROPERTY;
+ (id)__MPModelForYouRecommendationItemRelationshipAlbum__PROPERTY;
+ (id)__MPModelForYouRecommendationItemRelationshipPlaylist__PROPERTY;
+ (id)__album__KEY;
+ (id)__backedByStoreItemMetadata__KEY;
+ (id)__itemType__KEY;
+ (id)__parentGroup__KEY;
+ (id)__playlist__KEY;
+ (id)__subgroupIndex__KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (void).cxx_destruct;
- (id)album;
- (id)descriptionWithType:(long long)arg1;
- (bool)isBackedByStoreItemMetadata;
- (unsigned long long)itemType;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)parentGroup;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playlist;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (void)setAlbum:(id)arg1;
- (void)setBackedByStoreItemMetadata:(bool)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setSubgroupIndex:(long long)arg1;
- (id)subgroup;
- (long long)subgroupIndex;

@end
