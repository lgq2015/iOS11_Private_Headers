/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncCoordinator : NSObject <APSConnectionDelegate> {
    bool  _cloudSyncAvailablityObserverRegistered;
    APSConnection * _connection;
    bool  _databaseObserversRegistered;
    NSObject<OS_dispatch_queue> * _executionQueue;
    bool  _periodJobIsRegistered;
    bool  _siriSyncEnabledObserverRegistered;
    _DKKnowledgeStorage * _storage;
    NSArray * _streamNamesObservedForAdditions;
    NSArray * _streamNamesObservedForDeletions;
    NSString * _syncActivityName;
    bool  _syncPolicyChangedObserverRegistered;
    _DKSyncState * _syncState;
    NSString * _triggeredSyncDelayActivityName;
    bool  _triggeredSyncObserverRegistered;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _DKKnowledgeStorage *storage;
@property (readonly) Class superclass;

+ (void)validateConfigurationWithStorePath:(id)arg1;

- (void).cxx_destruct;
- (void)__performSyncWithPolicy:(id)arg1 isTriggeredSync:(bool)arg2 localChangeSets:(id)arg3 reply:(id /* block */)arg4;
- (void)_addLastSyncDate:(id)arg1;
- (id)_changeSetsByDeviceFromChangeSets:(id)arg1;
- (void)_checkIfNumChangesTriggersSync;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_cloudSyncDidReset:(id)arg1;
- (void)_createPushConnection;
- (void)_databaseDidAddToStream:(id)arg1;
- (void)_databaseDidAddToStreamName:(id)arg1;
- (void)_databaseDidDeleteFromStream:(id)arg1;
- (void)_databaseDidDeleteFromStreamName:(id)arg1;
- (void)_databaseDidHaveInsertsAndDeletes:(id)arg1;
- (void)_databaseDidHaveInsertsAndDeletesWithInsertsAndDeletesCount:(unsigned long long)arg1;
- (void)_deleteAllRemoteSyncDataIfSiriCloudSyncHasBeenDisabled;
- (void)_deleteEventsForDevices:(id)arg1;
- (void)_deleteRemoteCloudEvents;
- (void)_deleteRemoteCloudEventsAndStorage;
- (void)_deleteSiriSyncData;
- (void)_destroyPushConnection;
- (bool)_device:(id)arg1 hasMissingChangeSetInDeletionChangeSets:(id)arg2;
- (id)_fetchLocalChangeSetsSinceQueryStartDate:(id)arg1 error:(id*)arg2;
- (double)_intervalForJobGivenPolicy:(id)arg1 isSingleDevice:(bool)arg2;
- (unsigned long long)_lastChangeCount;
- (id)_lastDaySyncDates;
- (id)_lastLocalQueryEndDate;
- (id)_lastSyncDownFromCloudDate;
- (id)_lastSyncQueryEndDate;
- (id)_lastSyncUpToCloudDate;
- (void)_performPeriodicJob;
- (bool)_performSyncDownWithPolicy:(id)arg1 additionChangeSets:(id)arg2;
- (bool)_performSyncDownWithPolicy:(id)arg1 deletionChangeSets:(id)arg2;
- (bool)_performSyncDownWithPolicy:(id)arg1 queryStartDate:(id)arg2 error:(id*)arg3;
- (void)_performSyncTogglesChangedActions;
- (bool)_performSyncUpWithPolicy:(id)arg1 queryStartDate:(id)arg2 localChangeSets:(id)arg3 error:(id*)arg4;
- (void)_performSyncWithPolicy:(id)arg1 isTriggeredSync:(bool)arg2 localChangeSets:(id)arg3 reply:(id /* block */)arg4;
- (void)_possiblyPerformInitialSync;
- (id)_prunedAdditionChangeSets:(id)arg1 withDevicesToPrune:(id)arg2;
- (id)_prunedAdditionChangeSetsFromSyncChanges:(id)arg1;
- (id)_queryStartDateGivenPolicy:(id)arg1 lastQueryEndDate:(id)arg2 isTriggeredSync:(bool)arg3;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_registerDatabaseObservers;
- (void)_registerPeriodicJob;
- (void)_registerSiriSyncEnabledObserver;
- (void)_registerSyncPolicyChangedObserver;
- (void)_sendNotificationsForAppliedRemoteAdditionChangeSet:(id)arg1;
- (void)_sendNotificationsForAppliedRemoteDeletionChangeSet:(id)arg1 deleted:(unsigned long long)arg2;
- (void)_sendNotificationsForCreatedAdditionChangeSet:(id)arg1;
- (void)_sendNotificationsForCreatedChangeSet:(id)arg1;
- (void)_sendNotificationsForCreatedDeletionChangeSet:(id)arg1;
- (unsigned long long)_sequenceNumberOfLastDeletionChangeSetProcessedFromDevice:(id)arg1;
- (void)_setIfHigherSequenceNumber:(unsigned long long)arg1 ofLastDeletionChangeSetProcessedFromDevice:(id)arg2;
- (void)_setLastChangeCount:(unsigned long long)arg1;
- (void)_setLastLocalQueryEndDate:(id)arg1;
- (void)_setLastSyncDownFromCloudDate:(id)arg1;
- (void)_setLastSyncQueryEndDate:(id)arg1;
- (void)_setLastSyncUpToCloudDate:(id)arg1;
- (void)_siriSyncEnabledDidChange;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_unregisterDatabaseObservers;
- (void)_unregisterPeriodicJob;
- (void)_unregisterSiriSyncEnabledObserver;
- (void)_unregisterSyncPolicyChangedObserver;
- (id)changeSetForSyncWithInsertedObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4;
- (id)changeSetForSyncWithTombstones:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)deleteRemoteStateWithReply:(id /* block */)arg1;
- (id)initWithStorage:(id)arg1;
- (void)performSyncWithPolicy:(id)arg1 reply:(id /* block */)arg2;
- (id)storage;
- (void)syncWithReply:(id /* block */)arg1;

@end
