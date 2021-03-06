/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncFetchOperationResult : NSObject <NSCopying> {
    NSSet * _abandonedStoreIdentifierSet;
    HDCloudSyncMasterRecord * _masterRecord;
    NSSet * _reclaimedIdentifierSet;
    NSSet * _recordZoneIDs;
    long long  _status;
    NSMutableDictionary * _storeRecordsCacheMap;
    NSSet * _syncStorePullIdentifierSet;
    NSUUID * _syncStorePushIdentifier;
}

@property (nonatomic, copy) NSSet *abandonedStoreIdentifierSet;
@property (nonatomic, retain) HDCloudSyncMasterRecord *masterRecord;
@property (nonatomic, copy) NSSet *reclaimedIdentifierSet;
@property (nonatomic, copy) NSSet *recordZoneIDs;
@property (nonatomic) long long status;
@property (nonatomic, retain) NSMutableDictionary *storeRecordsCacheMap;
@property (nonatomic, copy) NSSet *syncStorePullIdentifierSet;
@property (nonatomic, copy) NSUUID *syncStorePushIdentifier;

- (void).cxx_destruct;
- (id)_storeDescriptionForStoreIdentifer:(id)arg1;
- (id)abandonedStoreIdentifierSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithStatus:(long long)arg1;
- (id)initWithStatus:(long long)arg1 storeRecordsCacheMap:(id)arg2 syncStorePushIdentifier:(id)arg3 syncStorePullIdentifiers:(id)arg4 abandonedStoreIdentifiers:(id)arg5 reclaimedIdentifiers:(id)arg6;
- (id)masterRecord;
- (id)reclaimedIdentifierSet;
- (id)recordZoneIDs;
- (void)setAbandonedStoreIdentifierSet:(id)arg1;
- (void)setMasterRecord:(id)arg1;
- (void)setReclaimedIdentifierSet:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStoreRecordsCacheMap:(id)arg1;
- (void)setSyncStorePullIdentifierSet:(id)arg1;
- (void)setSyncStorePushIdentifier:(id)arg1;
- (long long)status;
- (id)storeRecordsCacheMap;
- (id)syncStorePullIdentifierSet;
- (id)syncStorePushIdentifier;

@end
