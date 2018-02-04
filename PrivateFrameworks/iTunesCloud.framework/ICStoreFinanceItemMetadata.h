/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreFinanceItemMetadata : NSObject <NSCopying> {
    NSDictionary * _metadataDictionary;
    NSNumber * _playlistID;
}

@property (nonatomic, readonly, copy) NSString *albumSortName;
@property (nonatomic, readonly, copy) NSNumber *artistID;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly, copy) NSString *artistSortName;
@property (nonatomic, readonly, copy) NSNumber *bitrate;
@property (nonatomic, readonly, copy) NSString *comments;
@property (nonatomic, readonly, copy) NSString *composerName;
@property (nonatomic, readonly, copy) NSString *composerSortName;
@property (nonatomic, readonly, copy) NSString *copyright;
@property (nonatomic, readonly, copy) NSDate *dateAdded;
@property (nonatomic, readonly, copy) NSNumber *discCount;
@property (nonatomic, readonly, copy) NSNumber *discNumber;
@property (nonatomic, readonly, copy) NSNumber *drmVersionNumber;
@property (nonatomic, readonly, copy) NSNumber *duration;
@property (nonatomic, readonly, copy) NSString *fileExtension;
@property (nonatomic, readonly, copy) NSString *genre;
@property (nonatomic, readonly, copy) NSNumber *genreID;
@property (nonatomic, readonly, copy) NSNumber *isCompilation;
@property (nonatomic, readonly, copy) NSNumber *isExplicit;
@property (nonatomic, readonly, copy) NSNumber *isGapless;
@property (nonatomic, readonly, copy) NSNumber *isMasteredForITunes;
@property (nonatomic, readonly, copy) NSNumber *itemAdamID;
@property (nonatomic, readonly, copy) NSNumber *itemCloudID;
@property (nonatomic, readonly, copy) NSString *itemName;
@property (nonatomic, readonly, copy) NSString *itemSortName;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSDictionary *metadataDictionary;
@property (nonatomic, readonly, copy) NSString *playlistArtistName;
@property (nonatomic, readonly, copy) NSNumber *playlistID;
@property (nonatomic, readonly, copy) NSString *playlistName;
@property (nonatomic, readonly, copy) NSNumber *rank;
@property (nonatomic, readonly, copy) NSDate *releaseDate;
@property (nonatomic, readonly, copy) NSNumber *sampleRate;
@property (nonatomic, readonly, copy) NSNumber *storefrontID;
@property (nonatomic, readonly, copy) NSNumber *trackCount;
@property (nonatomic, readonly, copy) NSNumber *trackNumber;
@property (nonatomic, readonly, copy) NSNumber *vendorID;
@property (nonatomic, readonly, copy) NSNumber *versionRestrictions;
@property (nonatomic, readonly, copy) NSString *xid;
@property (nonatomic, readonly, copy) NSNumber *year;

- (void).cxx_destruct;
- (id)albumID;
- (id)albumSortName;
- (id)artistID;
- (id)artistName;
- (id)artistSortName;
- (id)bitrate;
- (id)comments;
- (id)composerName;
- (id)composerSortName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyright;
- (id)dateAdded;
- (id)discCount;
- (id)discNumber;
- (id)drmVersionNumber;
- (id)duration;
- (id)fileExtension;
- (id)genre;
- (id)genreID;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)isCompilation;
- (id)isExplicit;
- (id)isGapless;
- (id)isMasteredForITunes;
- (id)itemAdamID;
- (id)itemCloudID;
- (id)itemName;
- (id)itemSortName;
- (id)kind;
- (id)metadataDictionary;
- (id)playlistArtistName;
- (id)playlistID;
- (id)playlistName;
- (id)rank;
- (id)releaseDate;
- (id)sampleRate;
- (id)storefrontID;
- (id)trackCount;
- (id)trackNumber;
- (id)vendorID;
- (id)versionRestrictions;
- (id)xid;
- (id)year;

@end
