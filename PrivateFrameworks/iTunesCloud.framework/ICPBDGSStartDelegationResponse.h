/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying> {
    NSData * _playerAnisetteMID;
    NSData * _playerDeviceGUID;
    NSMutableArray * _playerInfoContextTokens;
}

@property (nonatomic, readonly) bool hasPlayerAnisetteMID;
@property (nonatomic, readonly) bool hasPlayerDeviceGUID;
@property (nonatomic, retain) NSData *playerAnisetteMID;
@property (nonatomic, retain) NSData *playerDeviceGUID;
@property (nonatomic, retain) NSMutableArray *playerInfoContextTokens;

+ (Class)playerInfoContextTokenType;

- (void).cxx_destruct;
- (void)addPlayerInfoContextToken:(id)arg1;
- (void)clearPlayerInfoContextTokens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlayerAnisetteMID;
- (bool)hasPlayerDeviceGUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerAnisetteMID;
- (id)playerDeviceGUID;
- (id)playerInfoContextTokenAtIndex:(unsigned long long)arg1;
- (id)playerInfoContextTokens;
- (unsigned long long)playerInfoContextTokensCount;
- (bool)readFrom:(id)arg1;
- (void)setPlayerAnisetteMID:(id)arg1;
- (void)setPlayerDeviceGUID:(id)arg1;
- (void)setPlayerInfoContextTokens:(id)arg1;
- (void)writeTo:(id)arg1;

@end
