/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncFetchOperation : NSObject <NSProgressReporting> {
    NSMutableSet * _abandonedStoreIdentifiers;
    NSMutableSet * _candidateSyncStorePushIdentifiers;
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    NSMutableSet * _emptyZoneIDs;
    NSMutableSet * _emptyZonesForGarbageCollection;
    NSMutableDictionary * _inactiveRecordZonesByStoreIdentifierMap;
    HDCloudSyncMasterRecord * _masterRecord;
    NSProgress * _progress;
    HDCloudSyncStoreRecord * _pushStoreRecord;
    NSSet * _pushZonesForCleanup;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
    bool  _rebaseRequired;
    NSMutableSet * _reclaimedIdentifiers;
    NSSet * _recordZoneIDs;
    NSMutableSet * _sequenceRecords;
    NSMutableDictionary * _storeRecordsCacheMap;
    HDCloudSyncStore * _syncPushStore;
    NSMutableSet * _syncStorePullIdentifiers;
    NSUUID * _syncStorePushIdentifier;
    double  _timeIntervalBeforeOwnershipTransfer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canIgnorePartialFailureError:(id)arg1 fetchedRecords:(id)arg2 error:(id*)arg3;
- (void)_deleteRecordZones:(id)arg1;
- (void)_deleteRecordZonesWithLostManateeIdentitiesForPartialError:(id)arg1;
- (double)_determineTimeIntervalBeforeOwnershipTransfer;
- (id)_fetchRecordsOperationForZones:(id)arg1;
- (void)_fetchSyncZonesAndHeaderRecords;
- (void)_finishWithStatus:(long long)arg1 error:(id)arg2;
- (id)_generateAllRecordIDsFromZoneIDs:(id)arg1;
- (void)_incrementAggdCountForResultStatus:(long long)arg1;
- (bool)_isValidChangeRecord:(id)arg1 forStoreRecord:(id)arg2;
- (id)_lastestPushStoreIdentifierWithPushStoreIdentifiers:(id)arg1 storeRecordsCacheMap:(id)arg2;
- (bool)_orderedChangeRecordSequenceRequiresRebase:(id)arg1;
- (void)_persistState:(id)arg1 syncStore:(id)arg2;
- (void)_queue_checkForSeizableAbandonedZones;
- (void)_queue_computeInactiveAndAbandonedStoreIdentifiers;
- (void)_queue_computePushZonesForCleaup;
- (void)_queue_fetchHeaderRecordsForZoneID:(id)arg1 continuation:(id /* block */)arg2;
- (void)_queue_fetchHeaderRecordsInBatchesForZoneID:(id)arg1;
- (void)_queue_garbageCollectZones;
- (void)_queue_helpFetchHeaderRecordsInBatchesForZoneID:(id)arg1 recordIndex:(long long)arg2 recordsByRecordID:(id)arg3;
- (bool)_queue_processSyncRecord:(id)arg1;
- (void)_queue_updateSyncCacheDataWithRecords:(id)arg1;
- (bool)_queue_validatePushStore;
- (void)_queue_validateSequenceRecords;
- (id)_syncStorePushIdentifierWithError:(id*)arg1;
- (long long)_verifyAnchorRangesForSyncStore:(id)arg1 storeRecord:(id)arg2 error:(id*)arg3;
- (long long)_verifyAnchorRangesForSyncStore:(id)arg1 storeRecord:(id)arg2 sequenceRecord:(id)arg3 error:(id*)arg4;
- (void)_verifySequenceForPushStore:(id)arg1 completion:(id /* block */)arg2;
- (void)_verifySequenceForStoreRecord:(id)arg1 syncStore:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;

@end
