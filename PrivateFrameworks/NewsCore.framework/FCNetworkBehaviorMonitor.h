/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _events;
    FCKeyValueStore * _localStore;
    <FCOperationThrottler> * _saveThrottler;
    NSMutableIndexSet * _sessionIDsThisLaunch;
    NSMutableArray * _sessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *networkEvents;
@property (nonatomic, readonly, copy) NSArray *sessions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_cacheStateFromEvent:(id)arg1;
- (id)_respondingPOPFromEvent:(id)arg1;
- (void)_sanitizeNetworkEvent:(id)arg1;
- (bool)_shouldFilterNetworkEvent:(id)arg1;
- (void)_visitEventGroupsFromDate:(id)arg1 toDate:(id)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)initTransient;
- (id)initWithCacheDirectory:(id)arg1;
- (void)logNetworkEvent:(id)arg1;
- (id)networkEvents;
- (void)networkInterfaceDidChange:(id)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3;
- (id)sessions;

@end
