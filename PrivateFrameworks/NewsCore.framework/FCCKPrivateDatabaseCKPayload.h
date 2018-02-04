/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateDatabaseCKPayload : NSObject {
    long long  _destination;
    NSArray * _recordIDs;
    NSArray * _records;
    NSArray * _zoneIDs;
    NSArray * _zones;
}

@property (nonatomic) long long destination;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, retain) NSArray *records;
@property (nonatomic, retain) NSArray *zoneIDs;
@property (nonatomic, retain) NSArray *zones;

- (void).cxx_destruct;
- (long long)destination;
- (id)recordIDs;
- (id)records;
- (void)setDestination:(long long)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (void)setZones:(id)arg1;
- (id)zoneIDs;
- (id)zones;

@end
