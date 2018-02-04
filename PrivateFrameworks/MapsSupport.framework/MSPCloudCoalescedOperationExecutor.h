/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudCoalescedOperationExecutor : NSObject {
    unsigned long long  _countOfHoldsOnSchedulingNewTimers;
    bool  _isRunning;
    MSPJournal * _journal;
    NSMutableSet * _lockedCacheZoneNames;
    bool  _pendingCachesFetchesExecutionTimerScheduled;
    NSMutableArray * _pendingFetchRequests;
    NSOperationQueue * _queue;
}

+ (id)_cacheURLWithNameSuffix:(id)arg1;
+ (double)_coalescingTimeInterval;
+ (double)_fetchTimeout;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canScheduleNewTimers;
- (void)_clearCacheForZonesNamed:(id)arg1;
- (void)_holdNewTimers;
- (id)_init;
- (id)_loadAndLockCacheForZoneNamed:(id)arg1 accountIdentity:(id)arg2;
- (void)_releaseHoldOnNewTimers;
- (void)_requestCachingFetchForZoneNames:(id)arg1 inSeparateContainers:(id)arg2 accountIdentity:(id)arg3 qualityOfService:(long long)arg4 expectedTransferSize:(long long)arg5 successHandler:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)_runPendingCacheFetchRequests;
- (void)_saveAndUnlockZoneCache:(id)arg1;
- (void)_scheduleTimerIfPossibleAndNeeded;
- (void)_unlockCacheWithoutSavingForZoneNamed:(id)arg1;
- (void)clearAllCaches;
- (id)init;
- (id)requestCachingFetchForZoneNames:(id)arg1 inSeparateContainers:(id)arg2 accountIdentity:(id)arg3 qualityOfService:(long long)arg4 expectedTransferSize:(long long)arg5 successHandler:(id /* block */)arg6;

@end