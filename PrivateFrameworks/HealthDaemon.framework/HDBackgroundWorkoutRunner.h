/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBackgroundWorkoutRunner : NSObject <HDProcessStateObserver> {
    BKSProcessAssertion * _assertion;
    HDXPCClient * _client;
    CLInUseAssertion * _coreLocationAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldAcquireCLAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_acquireBackgroundRunningAssertion;
- (void)_queue_acquireCLInUseAssertion;
- (bool)_queue_hasBackgroundPermission;
- (void)_queue_releaseAssertion;
- (void)_queue_releaseBackgroundRunningAssertion;
- (void)_queue_releaseCLInUseAssertion;
- (void)_queue_takeAssertion;
- (id)description;
- (id)initWithServer:(id)arg1 profile:(id)arg2;
- (void)processDidEnterForeground:(id)arg1;
- (void)start;
- (void)stop;

@end
