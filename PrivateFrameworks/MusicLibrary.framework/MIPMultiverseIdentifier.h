/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {
    long long  _accountId;
    NSString * _cloudUniversalLibraryId;
    struct { 
        unsigned int accountId : 1; 
        unsigned int purchaseHistoryId : 1; 
        unsigned int sagaId : 1; 
        unsigned int storeId : 1; 
        unsigned int mediaObjectType : 1; 
        unsigned int mediaType : 1; 
    }  _has;
    NSMutableArray * _libraryIdentifiers;
    int  _mediaObjectType;
    int  _mediaType;
    NSString * _name;
    long long  _purchaseHistoryId;
    long long  _sagaId;
    long long  _storeId;
}

@property (nonatomic) long long accountId;
@property (nonatomic, retain) NSString *cloudUniversalLibraryId;
@property (nonatomic) bool hasAccountId;
@property (nonatomic, readonly) bool hasCloudUniversalLibraryId;
@property (nonatomic) bool hasMediaObjectType;
@property (nonatomic) bool hasMediaType;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPurchaseHistoryId;
@property (nonatomic) bool hasSagaId;
@property (nonatomic) bool hasStoreId;
@property (nonatomic, retain) NSMutableArray *libraryIdentifiers;
@property (nonatomic) int mediaObjectType;
@property (nonatomic) int mediaType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long purchaseHistoryId;
@property (nonatomic) long long sagaId;
@property (nonatomic) long long storeId;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (Class)libraryIdentifiersType;

- (void).cxx_destruct;
- (int)StringAsMediaObjectType:(id)arg1;
- (int)StringAsMediaType:(id)arg1;
- (long long)accountId;
- (void)addLibraryIdentifiers:(id)arg1;
- (void)clearLibraryIdentifiers;
- (id)cloudUniversalLibraryId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountId;
- (bool)hasCloudUniversalLibraryId;
- (bool)hasMediaObjectType;
- (bool)hasMediaType;
- (bool)hasName;
- (bool)hasPurchaseHistoryId;
- (bool)hasSagaId;
- (bool)hasStoreId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (int)mediaObjectType;
- (id)mediaObjectTypeAsString:(int)arg1;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)purchaseHistoryId;
- (bool)readFrom:(id)arg1;
- (long long)sagaId;
- (void)setAccountId:(long long)arg1;
- (void)setCloudUniversalLibraryId:(id)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasMediaObjectType:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasPurchaseHistoryId:(bool)arg1;
- (void)setHasSagaId:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)setMediaObjectType:(int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPurchaseHistoryId:(long long)arg1;
- (void)setSagaId:(long long)arg1;
- (void)setStoreId:(long long)arg1;
- (long long)storeId;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

+ (id)_multiverseIdentifiersWithPIDs:(id)arg1 groupingType:(long long)arg2;
+ (id)_pidsFromSyncIDs:(id)arg1 containerClass:(Class)arg2;
+ (id)midDataArrayFromAlbumPIDs:(id)arg1;
+ (id)midDataArrayFromAlbumSyncIDs:(id)arg1;
+ (id)midDataArrayFromPlaylistPIDs:(id)arg1;
+ (id)midDataArrayFromPlaylistSyncIDs:(id)arg1;
+ (id)midDataFromPlaylistPID:(id)arg1;
+ (id)midDataFromPlaylistSyncID:(id)arg1;
+ (id)pidFromMIDData:(id)arg1;
+ (id)pidsFromMIDDataArray:(id)arg1;

@end
