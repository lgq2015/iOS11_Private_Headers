/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKSyncController : IMDCKAbstractSyncController {
    CKFetchRecordZonesOperation * _cloudKitMetricsFetchOp;
    long long  _initialSyncAttempts;
    NSTimer * _longRunningSyncTimer;
    IMTimer * _nightlySyncTimer;
    NSDate * _syncStartDate;
}

@property (nonatomic, retain) CKFetchRecordZonesOperation *cloudKitMetricsFetchOp;
@property (nonatomic) long long initialSyncAttempts;
@property (nonatomic, retain) NSTimer *longRunningSyncTimer;
@property (nonatomic, retain) IMTimer *nightlySyncTimer;
@property (nonatomic, retain) NSDate *syncStartDate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_IMAHDAgentFallbackIntervalInSeconds;
- (void)_accountDidChange:(id)arg1;
- (bool)_accountHasMultipleDevices;
- (bool)_anyStartingFlagIsEnabled;
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 shouldCheckDeviceConditions:(bool)arg2 attemptCount:(unsigned long long)arg3;
- (bool)_chatSyncedRecently;
- (void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1;
- (void)_didRecieveSyncStateChangeNotification:(id)arg1;
- (void)_didUpdatePersistentValueNotification:(id)arg1;
- (void)_dispatchNotification:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)_errorIndicatesDeviceNotGoodForSync:(id)arg1;
- (void)_ifCloudKitAbleToSyncCallBlock:(id /* block */)arg1 activity:(id)arg2;
- (void)_instantStateChange:(id)arg1;
- (void)_kickOffNightlyPeriodicSyncIfApplicable;
- (void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(bool)arg1 isSyncing:(bool)arg2 deviceConditionsAllowSync:(bool)arg3 syncNotCompletedRecently:(bool)arg4;
- (long long)_manualSyncAttemptCount;
- (unsigned long long)_maxTimeToDeferInSeconds;
- (double)_minimumChatComingOnlineSyncInterval;
- (void)_nightlySyncTimerFired;
- (void)_noteDownSyncStartedWithIsPeriodicSync:(bool)arg1;
- (void)_noteMeticsForSyncEndedWithSuccces:(bool)arg1;
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(bool)arg2;
- (void)_noteSyncEnded;
- (void)_nukeCKData;
- (long long)_periodicSyncAttemptCount;
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
- (void)_postSyncStateChanged;
- (bool)_serverDoesNotAllowComingBackOnlineChatSync;
- (bool)_serverDoesNotSingleDeviceLimitation;
- (void)_setSyncStateFlagsWithAccountStatus:(long long)arg1;
- (void)_syncChatsWithActivity:(id)arg1;
- (bool)_syncNotCompletedRecently;
- (void)_writeDownSyncDate;
- (id)attachmentSyncController;
- (void)beginChatSyncPeriodic:(bool)arg1 activity:(id)arg2;
- (void)beginComingBackOnlineSync;
- (void)beginFullSyncPeriodic:(bool)arg1 shouldCheckDeviceConditions:(bool)arg2 activity:(id)arg3;
- (void)beginInitialSync;
- (void)beginInitialSyncAttemptCount:(unsigned long long)arg1;
- (id)chatSyncController;
- (void)clearCKRelatedDefaults;
- (void)clearLocalCloudKitSyncState;
- (id)cloudKitMetricsFetchOp;
- (void)dealloc;
- (id)exitManager;
- (id)init;
- (long long)initialSyncAttempts;
- (bool)isSyncing;
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
- (id)longRunningSyncTimer;
- (id)messageSyncController;
- (id)nightlySyncTimer;
- (void)performMetricForSuccessfulSync;
- (id)rampManager;
- (void)recordMetricIsCloudKitEnabled;
- (void)registerForAccountNotifications;
- (void)registerForSyncStateChanges;
- (void)resetAllSyncStates;
- (void)setCloudKitMetricsFetchOp:(id)arg1;
- (void)setCloudKitSyncState:(bool)arg1;
- (void)setInitialSyncAttempts:(long long)arg1;
- (void)setLongRunningSyncTimer:(id)arg1;
- (void)setNightlySyncTimer:(id)arg1;
- (void)setStartingInitialSync:(bool)arg1;
- (void)setStartingPeriodicSync:(bool)arg1;
- (void)setSyncStartDate:(id)arg1;
- (void)syncChatsWithMessageContext:(id)arg1;
- (void)syncDeletesToCloudKit;
- (id)syncStartDate;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)updateAllCachedSyncStateFlags;
- (void)updateCloudKitSyncingState;
- (void)updateStartingFlags;
- (void)updateSyncStateFlags;

@end
