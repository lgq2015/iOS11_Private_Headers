/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncCoordinator : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    ACAccountStore * _accountStore;
    HDAsynchronousTaskTree * _activeTaskGroup;
    NSProgress * _activeTaskProgress;
    HDDaemon * _daemon;
    bool  _hasiCloudAccount;
    NSString * _latestSyncEndLog;
    NSString * _latestSyncStartLog;
    NSMutableArray * _pendingTaskGroups;
    NSMutableArray * _pendingTasksProgress;
    HDPeriodicActivity * _periodicActivity;
    NSMutableArray * _progressCompletionBlocks;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate * _queue_lastSuccessfulPullDate;
    NSDate * _queue_lastSuccessfulPushDate;
    bool  _queue_syncInProgress;
    NSMutableDictionary * _waitForSyncObservations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canPerformCloudSyncWithError:(id*)arg1;
- (void)_checkiCloudAccountStatus;
- (void)_considerMigratingHealthAccountDataclassState;
- (id)_fetchDescriptionForProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)_mergeCloudSyncJournalsForProfile:(id)arg1 progress:(id)arg2 taskTree:(id)arg3;
- (void)_mergeCloudSyncJournalsWithTaskTree:(id)arg1 progress:(id)arg2;
- (void)_queue_addCloudSyncProgressCompletion:(id /* block */)arg1;
- (void)_queue_checkLastSyncDate;
- (long long)_queue_cloudSyncWaitStatusWithError:(id*)arg1;
- (id)_queue_disableAndDeleteCloudSyncDataWithCompletion:(id /* block */)arg1;
- (id)_queue_fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)_queue_finishCloudSyncTaskProgressWithResult:(long long)arg1 error:(id)arg2;
- (bool)_queue_hasTooManyPendingTaskGroupsWithError:(id*)arg1;
- (id)_queue_resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (bool)_queue_setWaitTimeoutDateIfNecessaryWithError:(id*)arg1;
- (void)_queue_startNextTaskGroup;
- (id)_queue_syncAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)_queue_triggerSyncForiCloudLogin;
- (id)_queue_waitOnHealthCloudSyncWithCompletion:(id /* block */)arg1;
- (id)_resetProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (void)_respondToACAccountStoreDidChange;
- (void)_setHealthAccountDataclassEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)_setupPeriodicActivity;
- (id)_syncProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (bool)_unitTest_shouldSyncProfile:(id)arg1;
- (void)_updateCachedLastSyncDatesWithCompletion:(id /* block */)arg1;
- (bool)createShareWithRecipient:(id)arg1 sampleTypes:(id)arg2 maxSampleAge:(id)arg3 profile:(id)arg4 error:(id*)arg5;
- (void)daemonReady:(id)arg1;
- (id)diagnosticDescription;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)arg1;
- (void)disableSyncLocallyWithCompletion:(id /* block */)arg1;
- (id)fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)fetchCloudSyncProgressWithCompletion:(id /* block */)arg1;
- (void)fetchSyncStatusWithCompletion:(id /* block */)arg1;
- (id)initWithDaemon:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)syncAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)waitOnHealthCloudSyncWithCompletion:(id /* block */)arg1;

@end
