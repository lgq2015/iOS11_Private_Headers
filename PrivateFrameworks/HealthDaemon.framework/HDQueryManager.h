/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryManager : NSObject <HDDiagnosticObject, HDProcessStateObserver> {
    HDDaemon * _daemon;
    NSMutableDictionary * _queryCollectionsByProcessBundleIdentifier;
    NSMutableDictionary * _queryServersByUUID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logQueryActivationWithServer:(id)arg1;
- (void)_queryServerDidFinish:(id)arg1;
- (void)_queue_processWithBundleIdentifier:(id)arg1 didSuspend:(bool)arg2;
- (id)_queue_queryCollectionForBundleIdentifier:(id)arg1 createIfNecessary:(bool)arg2;
- (id)_queue_registerQueryServer:(id)arg1;
- (void)_queue_startQueryServer:(id)arg1 handler:(id /* block */)arg2;
- (void)_queue_unregisterQueryServer:(id)arg1;
- (id)daemon;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithDaemon:(id)arg1;
- (void)processResumed:(id)arg1;
- (void)processSuspended:(id)arg1;
- (void)startQueryServer:(id)arg1 handler:(id /* block */)arg2;

@end
