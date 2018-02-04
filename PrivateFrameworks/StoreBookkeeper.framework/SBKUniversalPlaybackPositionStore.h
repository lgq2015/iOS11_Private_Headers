/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKUniversalPlaybackPositionStore : NSObject {
    id  _accountsObserver;
    unsigned long long  _automaticSynchronizeOptions;
    double  _autorefreshInterval;
    SBKAsynchronousTask * _bagLookupTask;
    SBKAsynchronousTask * _currentTask;
    SBKRequestHandler * _currentTaskRequestHandler;
    <SBKUniversalPlaybackPositionDataSource> * _dataSource;
    NSDate * _dateToFireNextTimer;
    NSString * _domain;
    bool  _hasLocalChangesToSync;
    double  _initialAutosyncInterval;
    bool  _isActive;
    SBKAsynchronousTask * _lookupDomainVersionTask;
    NSMutableArray * _pendingTaskBlocks;
    double  _pollingLimitFromBag;
    id  _prefsObserver;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _refreshTimerActive;
    NSTimer * _timer;
}

@property unsigned long long automaticSynchronizeOptions;
@property (retain) SBKAsynchronousTask *bagLookupTask;
@property (retain) SBKAsynchronousTask *currentTask;
@property (retain) SBKRequestHandler *currentTaskRequestHandler;
@property (readonly) <SBKUniversalPlaybackPositionDataSource> *dataSource;
@property (retain) NSDate *dateToFireNextTimer;
@property bool hasLocalChangesToSync;
@property (retain) SBKAsynchronousTask *lookupDomainVersionTask;
@property (retain) NSTimer *timer;

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;

- (void).cxx_destruct;
- (id)_accountForSyncing;
- (bool)_automaticallySynchronizeLocalChangesOnResignActive;
- (bool)_automaticallySynchronizeOnBecomeActive;
- (double)_effectiveAutorefreshRate;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id /* block */)arg1;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id /* block */)arg1;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_onQueuePushMetadataItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_onQueueResumeTimer;
- (void)_onQueueRunNextPendingTaskBlock;
- (void)_onQueueRunTaskWithName:(id)arg1 taskCompletionHandler:(id /* block */)arg2 runTaskBlock:(id /* block */)arg3;
- (void)_onQueueScheduleTimer;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueStopTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id /* block */)arg1;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_timerFired:(id)arg1;
- (bool)_timerIsStopped;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(bool)arg1;
- (void)_updateForStoreAccountsChange;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (unsigned long long)automaticSynchronizeOptions;
- (bool)automaticallySynchronizeLocalChangesOnResignActive;
- (bool)automaticallySynchronizeOnBecomeActive;
- (id)bagLookupTask;
- (void)becomeActive;
- (void)checkForAvailabilityWithCompletionBlock:(id /* block */)arg1;
- (id)currentTask;
- (id)currentTaskRequestHandler;
- (id)dataSource;
- (id)dateToFireNextTimer;
- (void)dealloc;
- (void)deprecated_setDataSource:(id)arg1;
- (bool)hasLocalChangesToSync;
- (id)init;
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 isActive:(bool)arg4;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (void)loadBagContextWithCompletionBlock:(id /* block */)arg1;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id /* block */)arg1;
- (id)lookupDomainVersionTask;
- (void)pullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)pushMetadataItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resignActive;
- (void)setAutomaticSynchronizeOptions:(unsigned long long)arg1;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(bool)arg1;
- (void)setAutomaticallySynchronizeOnBecomeActive:(bool)arg1;
- (void)setBagLookupTask:(id)arg1;
- (void)setCurrentTask:(id)arg1;
- (void)setCurrentTaskRequestHandler:(id)arg1;
- (void)setDateToFireNextTimer:(id)arg1;
- (void)setHasLocalChangesToSync:(bool)arg1;
- (void)setLookupDomainVersionTask:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)synchronizeImmediatelyWithCompletionBlock:(id /* block */)arg1;
- (void)synchronizeImmediatelyWithCompletionHandler:(id /* block */)arg1;
- (id)timer;

@end
