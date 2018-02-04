/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPrivateRecordSyncState : PBCodable <NSCopying> {
    NTPBDate * _lastCleanDate;
    NTPBDate * _lastDirtyDate;
    NSString * _recordName;
    NSString * _recordZoneName;
}

@property (nonatomic, readonly) bool hasLastCleanDate;
@property (nonatomic, readonly) bool hasLastDirtyDate;
@property (nonatomic, readonly) bool hasRecordName;
@property (nonatomic, readonly) bool hasRecordZoneName;
@property (nonatomic, retain) NTPBDate *lastCleanDate;
@property (nonatomic, retain) NTPBDate *lastDirtyDate;
@property (nonatomic, retain) NSString *recordName;
@property (nonatomic, retain) NSString *recordZoneName;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastCleanDate;
- (bool)hasLastDirtyDate;
- (bool)hasRecordName;
- (bool)hasRecordZoneName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastCleanDate;
- (id)lastDirtyDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordName;
- (id)recordZoneName;
- (void)setLastCleanDate:(id)arg1;
- (void)setLastDirtyDate:(id)arg1;
- (void)setRecordName:(id)arg1;
- (void)setRecordZoneName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
