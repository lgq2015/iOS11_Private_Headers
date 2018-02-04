/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation {
    NSMutableArray * _fetchedZones;
    NSMutableArray * _fixedZones;
    NSMutableDictionary * _pcsInfoByZoneID;
    NSArray * _zoneIDs;
    id /* block */  _zonePCSRepairProgressBlock;
}

@property (nonatomic, retain) NSMutableArray *fetchedZones;
@property (nonatomic, retain) NSMutableArray *fixedZones;
@property (nonatomic, retain) NSMutableDictionary *pcsInfoByZoneID;
@property (nonatomic, retain) NSArray *zoneIDs;
@property (nonatomic, copy) id /* block */ zonePCSRepairProgressBlock;

- (void).cxx_destruct;
- (id)_checkPCSDataForZone:(id)arg1;
- (void)_checkZonePCS;
- (void)_fetchZones;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_uploadRepairedZones;
- (id)activityCreate;
- (id)fetchedZones;
- (id)fixedZones;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)pcsInfoByZoneID;
- (void)setFetchedZones:(id)arg1;
- (void)setFixedZones:(id)arg1;
- (void)setPcsInfoByZoneID:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (void)setZonePCSRepairProgressBlock:(id /* block */)arg1;
- (id)zoneIDs;
- (id /* block */)zonePCSRepairProgressBlock;

@end
