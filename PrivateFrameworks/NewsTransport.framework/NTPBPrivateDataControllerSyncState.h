/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPrivateDataControllerSyncState : PBCodable <FCKeyValueStoreCoding, NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSMutableArray * _recordStates;
    unsigned long long  _version;
    NSMutableArray * _zoneStates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *recordStates;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long version;
@property (nonatomic, retain) NSMutableArray *zoneStates;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)recordStatesType;
+ (Class)zoneStatesType;

- (void)addRecordStates:(id)arg1;
- (void)addZoneStates:(id)arg1;
- (void)clearRecordStates;
- (void)clearZoneStates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordStates;
- (id)recordStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordStatesCount;
- (void)setHasVersion:(bool)arg1;
- (void)setRecordStates:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (void)setZoneStates:(id)arg1;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;
- (id)zoneStates;
- (id)zoneStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoneStatesCount;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void)writeToKeyValuePair:(id)arg1;

@end
