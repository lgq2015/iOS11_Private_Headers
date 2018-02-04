/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMusicRecommendation : NSObject <NSCopying> {
    MPArtworkCatalog * _artworkCatalog;
    NSString * _identifier;
    MPModelObject * _modelObject;
    bool  _selected;
    NSObject<OS_dispatch_queue> * _serializerQueue;
    NSString * _storeRecommendationID;
    NSArray * _storeRecommendationModelObjects;
    NSString * _subtitle;
    unsigned long long  _type;
}

@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isHeavyRotation;
@property (nonatomic, readonly) bool referencesOnlyLibraryContainers;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) NSString *storeRecommendationID;
@property (nonatomic, readonly) NSArray *storeRecommendationModelObjects;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long type;

+ (void)_fillArtworkMutableArray:(id)arg1 toCount:(unsigned long long)arg2;
+ (id)_missingArtImage;

- (void).cxx_destruct;
- (id)_artworkCatalogsForLibraryRecommendationAlbumsWithCount:(unsigned long long)arg1;
- (id)_artworkCatalogsForLibraryRecommendationPlaylistsWithCount:(unsigned long long)arg1;
- (void)_commonInit;
- (id)_tiledArtworkRequestForPlaylists:(id)arg1 albums:(id)arg2;
- (id)artworkCatalog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initLibraryRecommendation;
- (id)initWithPlaylist:(id)arg1 recommendationGroup:(id)arg2;
- (id)initWithRecommendationGroup:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHeavyRotation;
- (bool)isSelected;
- (bool)referencesOnlyLibraryContainers;
- (void)setSelected:(bool)arg1;
- (id)storeRecommendationID;
- (id)storeRecommendationModelObjects;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;

@end
