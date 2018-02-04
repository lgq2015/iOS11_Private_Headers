/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncPushOperation : NSObject <HDSyncSessionDelegate, NSProgressReporting> {
    NSMutableArray * _changeRecordsPendingPush;
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    HDCloudSyncFetchOperationResult * _fetchOperationResult;
    bool  _isNewStoreRecord;
    bool  _isSecondaryContainer;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
    HDCloudSyncSequenceRecord * _sequenceRecordForPush;
    HDCloudSyncStoreRecord * _storeRecordForPush;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _HDCloudSyncSessionContext * _syncSessionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_getStoreRecordForStoreIdentifier:(id)arg1 isNewRecord:(bool*)arg2;
- (id)_queue_computeSequenceRecordForPushWithStoreRecord:(id)arg1;
- (void)_queue_deactivatePendingOwnerStores;
- (void)_queue_endSyncSessionWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_queue_estimateSyncEntityClassesWithChangesForSession:(id)arg1;
- (id)_queue_excludedStoresForIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)_queue_finalizeNextChangeRecordForUploadToSession:(id)arg1 error:(id*)arg2;
- (void)_queue_finalizePushForSession:(id)arg1;
- (void)_queue_pushRecords:(id)arg1 recordIDsToDelete:(id)arg2 zoneToCreate:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_setInitialForwardProgressDateIfNecessary;
- (void)_queue_syncStore:(id)arg1 excludingStores:(id)arg2;
- (void)_queue_uploadChangesForSyncSession:(id)arg1 isFinalUpload:(bool)arg2 completion:(id /* block */)arg3;
- (void)_recordForwardProgressDate;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;
- (bool)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(bool)arg2 error:(id)arg3;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSessionWillBegin:(id)arg1;

@end
