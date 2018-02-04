/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUIApplicationSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {
    NSString * _appBundleIdentifier;
    BKSApplicationStateMonitor * _appStateMonitor;
    AFWatchdogTimer * _assertionTimer;
    BKSProcessAssertion * _bKSAssertionForBgLaunch;
    NSObject<OS_dispatch_group> * _bKSAssertionSetupGroup;
    NSObject<OS_dispatch_queue> * _queue;
    AFSiriTaskmaster * _taskmaster;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) AFSiriTaskmaster *taskmaster;

- (void).cxx_destruct;
- (void)_handleSuccessfulAppLaunchToBackground:(bool)arg1 forRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)_invalidateAssertionTimer;
- (void)_invalidateBackboardServices;
- (void)_processAssertionWasAcquired:(bool)arg1;
- (void)_processAssertionWasInvalidatedForRequest:(id)arg1;
- (void)_startAppStateMonitoringForRequest:(id)arg1;
- (void)dealloc;
- (void)deliverSiriTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)initWithAppBundleIdentifier:(id)arg1;
- (void)processAssertionWasInvalidatedForRequest:(id)arg1;
- (void)setTaskmaster:(id)arg1;
- (void)siriTaskDidFinish;
- (id)taskmaster;

@end
