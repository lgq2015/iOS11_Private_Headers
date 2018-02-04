/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCurrentActivitySummaryQueryServer : HDQueryServer <HDCurrentActivitySummaryHelperObserver> {
    NSDictionary * _collectionIntervals;
    HDCurrentActivitySummaryHelper * _currentSummaryHelper;
    HKActivitySummary * _lastActivitySummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_startDataCollection;
- (void)_queue_stop;
- (void)_queue_stopDataCollection;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end
