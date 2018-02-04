/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoCacheMessage : PBCodable <NSCopying> {
    NSData * _assetData;
    NSString * _assetKey;
    int  _cacheType;
    NSString * _gizmoCacheIdentifier;
    int  _messageType;
    SPProtoCacheSyncData * _syncData;
}

@property (nonatomic, retain) NSData *assetData;
@property (nonatomic, retain) NSString *assetKey;
@property (nonatomic) int cacheType;
@property (nonatomic, retain) NSString *gizmoCacheIdentifier;
@property (nonatomic, readonly) bool hasAssetData;
@property (nonatomic, readonly) bool hasAssetKey;
@property (nonatomic, readonly) bool hasGizmoCacheIdentifier;
@property (nonatomic, readonly) bool hasSyncData;
@property (nonatomic) int messageType;
@property (nonatomic, retain) SPProtoCacheSyncData *syncData;

- (void).cxx_destruct;
- (id)assetData;
- (id)assetKey;
- (int)cacheType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gizmoCacheIdentifier;
- (bool)hasAssetData;
- (bool)hasAssetKey;
- (bool)hasGizmoCacheIdentifier;
- (bool)hasSyncData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)messageType;
- (bool)readFrom:(id)arg1;
- (void)setAssetData:(id)arg1;
- (void)setAssetKey:(id)arg1;
- (void)setCacheType:(int)arg1;
- (void)setGizmoCacheIdentifier:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setSyncData:(id)arg1;
- (id)syncData;
- (void)writeTo:(id)arg1;

@end
