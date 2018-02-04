/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPAlbum : PBCodable <NSCopying> {
    MIPArtist * _artist;
    NSString * _artworkId;
    NSString * _cloudId;
    bool  _compilation;
    struct { 
        unsigned int persistentId : 1; 
        unsigned int storeId : 1; 
        unsigned int numDiscs : 1; 
        unsigned int numTracks : 1; 
        unsigned int userRating : 1; 
        unsigned int compilation : 1; 
    }  _has;
    NSString * _name;
    int  _numDiscs;
    int  _numTracks;
    long long  _persistentId;
    NSString * _sortName;
    long long  _storeId;
    int  _userRating;
}

@property (nonatomic, retain) MIPArtist *artist;
@property (nonatomic, retain) NSString *artworkId;
@property (nonatomic, retain) NSString *cloudId;
@property (nonatomic) bool compilation;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic, readonly) bool hasArtworkId;
@property (nonatomic, readonly) bool hasCloudId;
@property (nonatomic) bool hasCompilation;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasNumDiscs;
@property (nonatomic) bool hasNumTracks;
@property (nonatomic) bool hasPersistentId;
@property (nonatomic, readonly) bool hasSortName;
@property (nonatomic) bool hasStoreId;
@property (nonatomic) bool hasUserRating;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int numDiscs;
@property (nonatomic) int numTracks;
@property (nonatomic) long long persistentId;
@property (nonatomic, retain) NSString *sortName;
@property (nonatomic) long long storeId;
@property (nonatomic) int userRating;

- (void).cxx_destruct;
- (id)artist;
- (id)artworkId;
- (id)cloudId;
- (bool)compilation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtist;
- (bool)hasArtworkId;
- (bool)hasCloudId;
- (bool)hasCompilation;
- (bool)hasName;
- (bool)hasNumDiscs;
- (bool)hasNumTracks;
- (bool)hasPersistentId;
- (bool)hasSortName;
- (bool)hasStoreId;
- (bool)hasUserRating;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (int)numDiscs;
- (int)numTracks;
- (long long)persistentId;
- (bool)readFrom:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setCloudId:(id)arg1;
- (void)setCompilation:(bool)arg1;
- (void)setHasCompilation:(bool)arg1;
- (void)setHasNumDiscs:(bool)arg1;
- (void)setHasNumTracks:(bool)arg1;
- (void)setHasPersistentId:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setHasUserRating:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNumDiscs:(int)arg1;
- (void)setNumTracks:(int)arg1;
- (void)setPersistentId:(long long)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setUserRating:(int)arg1;
- (id)sortName;
- (long long)storeId;
- (int)userRating;
- (void)writeTo:(id)arg1;

@end
