/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher> {
    NSMutableDictionary * _callbackBlocks;
    NSMutableDictionary * _callbackTimers;
    NSMutableSet * _operations;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _schedulerIsAvailable;
    <CKDAccountInfoProvider> * _unitTestingAccountInfoProvider;
    NSMutableDictionary * _unitTestingPushTokens;
}

@property (nonatomic, retain) NSMutableDictionary *callbackBlocks;
@property (nonatomic, retain) NSMutableDictionary *callbackTimers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *operations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool schedulerIsAvailable;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CKDAccountInfoProvider> *unitTestingAccountInfoProvider;
@property (nonatomic, retain) NSMutableDictionary *unitTestingPushTokens;

+ (id)sharedScheduler;
+ (id)sharedSchedulerWithUnitTestingAccountInfoProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_refreshApsToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 darkWakeEnabled:(bool)arg4 isCKSystemService:(bool)arg5 completionBlock:(id /* block */)arg6;
- (void)_removeApsToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 darkWakeEnabled:(bool)arg4 isCKSystemService:(bool)arg5 completionBlock:(id /* block */)arg6;
- (id)callbackBlocks;
- (id)callbackTimers;
- (bool)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)dealloc;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg1 apsEnvironmentString:(id)arg2 darkWakeEnabled:(bool)arg3 isCKSystemService:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)forceTokenRefreshForAllClients;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)handlePushTokenDidUpdate:(id)arg1;
- (id)init;
- (id)initWithAccountInfoProvider:(id)arg1;
- (id)operations;
- (id)queue;
- (void)refreshAllClientsNow;
- (void)registerTokenRefreshActivity;
- (bool)schedulerIsAvailable;
- (void)setCallbackBlocks:(id)arg1;
- (void)setCallbackTimers:(id)arg1;
- (void)setOperations:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSchedulerAvailable:(bool)arg1;
- (void)setSchedulerIsAvailable:(bool)arg1;
- (void)setUnitTestingAccountInfoProvider:(id)arg1;
- (void)setUnitTestingPushTokens:(id)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (void)tokenRefreshChanged;
- (id)unitTestingAccountInfoProvider;
- (id)unitTestingPushTokens;
- (void)unregisterAllTokensWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterTokenForAppContainerTuple:(id)arg1;

@end
