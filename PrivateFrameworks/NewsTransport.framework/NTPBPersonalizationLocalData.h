/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying> {
    NSMutableArray * _closedChangeGroups;
    NSMutableArray * _openChangeGroupDeltas;
    NSData * _remoteRecordData;
}

@property (nonatomic, retain) NSMutableArray *closedChangeGroups;
@property (nonatomic, readonly) bool hasRemoteRecordData;
@property (nonatomic, retain) NSMutableArray *openChangeGroupDeltas;
@property (nonatomic, readonly) NSDictionary *openChangeGroupDeltasByFeatureKey;
@property (nonatomic, retain) CKRecord *remoteRecord;
@property (nonatomic, retain) NSData *remoteRecordData;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)closedChangeGroupsType;
+ (Class)openChangeGroupDeltasType;

- (void)addClosedChangeGroups:(id)arg1;
- (void)addOpenChangeGroupDeltas:(id)arg1;
- (void)clearClosedChangeGroups;
- (void)clearOpenChangeGroupDeltas;
- (id)closedChangeGroups;
- (id)closedChangeGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)closedChangeGroupsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRemoteRecordData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)openChangeGroupDeltas;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)openChangeGroupDeltasCount;
- (bool)readFrom:(id)arg1;
- (id)remoteRecordData;
- (void)setClosedChangeGroups:(id)arg1;
- (void)setOpenChangeGroupDeltas:(id)arg1;
- (void)setRemoteRecordData:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)openChangeGroupDeltasByFeatureKey;
- (id)remoteRecord;
- (void)setRemoteRecord:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end
