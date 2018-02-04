/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLTrackImport : NSObject <NSCopying> {
    NSData * _artworkData;
    NSString * _assetFilePath;
    bool  _assignArtworkCacheIDFromAlbum;
    NSArray * _chapters;
    NSMutableDictionary * _properties;
    bool  _shouldAddToPurchasedPlaylist;
}

@property (nonatomic, copy) NSData *artworkData;
@property (nonatomic, copy) NSString *assetFilePath;
@property (nonatomic) bool assignArtworkCacheIDFromAlbum;
@property (nonatomic, copy) NSArray *chapters;
@property (nonatomic, copy) MLContentRating *contentRating;
@property (nonatomic, readonly, copy) NSDictionary *entityProperties;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic, copy) MLMovieProperties *movieProperties;
@property (nonatomic) bool shouldAddToPurchasedPlaylist;

+ (void)initialize;

- (void).cxx_destruct;
- (id)artworkData;
- (id)assetFilePath;
- (bool)assignArtworkCacheIDFromAlbum;
- (id)chapters;
- (id)contentRating;
- (id)copyEntityProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entityProperties;
- (id)init;
- (unsigned int)mediaType;
- (id)movieProperties;
- (void)setArtworkData:(id)arg1;
- (void)setAssetFilePath:(id)arg1;
- (void)setAssignArtworkCacheIDFromAlbum:(bool)arg1;
- (void)setChapters:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setMovieProperties:(id)arg1;
- (void)setShouldAddToPurchasedPlaylist:(bool)arg1;
- (void)setValue:(id)arg1 forEntityProperty:(id)arg2;
- (bool)shouldAddToPurchasedPlaylist;
- (id)valueForEntityProperty:(id)arg1;

@end
