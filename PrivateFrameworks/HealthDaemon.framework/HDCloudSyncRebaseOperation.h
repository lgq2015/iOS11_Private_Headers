/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncRebaseOperation : NSObject <NSProgressReporting> {
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    HDCloudSyncFetchOperationResult * _fetchOperationResult;
    NSProgress * _progress;
    HDCloudSyncStoreRecord * _pushStoreRecord;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_includedIdentifiersWithStoreRecord:(id)arg1 abandonedStoreRecords:(id)arg2;
- (void)_queue_calculateRecordsToSaveAndDeleteWithStoreRecord:(id)arg1 resultsHandler:(id /* block */)arg2;
- (bool)_queue_finishRebasePreparationWithError:(id*)arg1;
- (void)_queue_runRebaseOperation;
- (void)_queue_startBaselinePrepForNewBaselineOperation:(id)arg1;
- (bool)_queue_updatePersistedStateForStore:(id)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;

@end
