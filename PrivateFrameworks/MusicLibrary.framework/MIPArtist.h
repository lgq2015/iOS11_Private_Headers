/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPArtist : PBCodable <NSCopying> {
    NSString * _artworkId;
    struct { 
        unsigned int persistentId : 1; 
        unsigned int storeId : 1; 
    }  _has;
    NSString * _name;
    long long  _persistentId;
    NSString * _sortName;
    long long  _storeId;
}

@property (nonatomic, retain) NSString *artworkId;
@property (nonatomic, readonly) bool hasArtworkId;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPersistentId;
@property (nonatomic, readonly) bool hasSortName;
@property (nonatomic) bool hasStoreId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long persistentId;
@property (nonatomic, retain) NSString *sortName;
@property (nonatomic) long long storeId;

- (void).cxx_destruct;
- (id)artworkId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkId;
- (bool)hasName;
- (bool)hasPersistentId;
- (bool)hasSortName;
- (bool)hasStoreId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)persistentId;
- (bool)readFrom:(id)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setHasPersistentId:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentId:(long long)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (id)sortName;
- (long long)storeId;
- (void)writeTo:(id)arg1;

@end
