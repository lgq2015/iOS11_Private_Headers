/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPGenre : PBCodable <NSCopying> {
    struct { 
        unsigned int persistentId : 1; 
        unsigned int storeId : 1; 
    }  _has;
    NSString * _name;
    long long  _persistentId;
    long long  _storeId;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPersistentId;
@property (nonatomic) bool hasStoreId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long persistentId;
@property (nonatomic) long long storeId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasPersistentId;
- (bool)hasStoreId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)persistentId;
- (bool)readFrom:(id)arg1;
- (void)setHasPersistentId:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentId:(long long)arg1;
- (void)setStoreId:(long long)arg1;
- (long long)storeId;
- (void)writeTo:(id)arg1;

@end
