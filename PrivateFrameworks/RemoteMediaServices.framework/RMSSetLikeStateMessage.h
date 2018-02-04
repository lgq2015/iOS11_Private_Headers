/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSSetLikeStateMessage : PBCodable <NSCopying> {
    unsigned long long  _databaseID;
    struct { 
        unsigned int databaseID : 1; 
        unsigned int itemID : 1; 
        unsigned int likeState : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    unsigned long long  _itemID;
    int  _likeState;
    int  _sessionIdentifier;
}

@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) bool hasDatabaseID;
@property (nonatomic) bool hasItemID;
@property (nonatomic) bool hasLikeState;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) int likeState;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)databaseID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDatabaseID;
- (bool)hasItemID;
- (bool)hasLikeState;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemID;
- (int)likeState;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setDatabaseID:(unsigned long long)arg1;
- (void)setHasDatabaseID:(bool)arg1;
- (void)setHasItemID:(bool)arg1;
- (void)setHasLikeState:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setLikeState:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
