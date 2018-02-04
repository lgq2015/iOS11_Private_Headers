/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoInitialAccountsSync : PBCodable <NSCopying> {
    NSData * _dateSynced;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSMutableArray * _initialAccounts;
    NSString * _initialSyncVersion;
}

@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasDateSynced;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasInitialSyncVersion;
@property (nonatomic, retain) NSMutableArray *initialAccounts;
@property (nonatomic, retain) NSString *initialSyncVersion;

+ (Class)initialAccountType;

- (void).cxx_destruct;
- (void)addInitialAccount:(id)arg1;
- (void)clearInitialAccounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (bool)hasInitialSyncVersion;
- (unsigned long long)hash;
- (id)initialAccountAtIndex:(unsigned long long)arg1;
- (id)initialAccounts;
- (unsigned long long)initialAccountsCount;
- (id)initialSyncVersion;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setInitialAccounts:(id)arg1;
- (void)setInitialSyncVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
