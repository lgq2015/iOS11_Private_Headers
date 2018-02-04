/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying> {
    NSData * _changeToken;
    NTPBDate * _lastCleanDate;
    NTPBDate * _lastDirtyDate;
    NSString * _zoneName;
}

@property (nonatomic, retain) NSData *changeToken;
@property (nonatomic, readonly) bool hasChangeToken;
@property (nonatomic, readonly) bool hasLastCleanDate;
@property (nonatomic, readonly) bool hasLastDirtyDate;
@property (nonatomic, readonly) bool hasZoneName;
@property (nonatomic, retain) NTPBDate *lastCleanDate;
@property (nonatomic, retain) NTPBDate *lastDirtyDate;
@property (nonatomic, retain) NSString *zoneName;

- (id)changeToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeToken;
- (bool)hasLastCleanDate;
- (bool)hasLastDirtyDate;
- (bool)hasZoneName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastCleanDate;
- (id)lastDirtyDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangeToken:(id)arg1;
- (void)setLastCleanDate:(id)arg1;
- (void)setLastDirtyDate:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneName;

@end
