/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogManager : NSObject {
    NSMutableArray * _logAdaptors;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    void * _loggingQueueIdentityKey;
    void * _loggingQueueIdentityValue;
    <GEOLogAdaptor> * _serverLogAdaptorManager;
}

@property (nonatomic, retain) <GEOLogAdaptor> *serverLogAdaptorManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addLogAdaptor:(id)arg1;
- (void)_applicationDeactivating:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_disableLogMsgInstrumentationWithBlock:(id /* block */)arg1;
- (bool)_disableUsageLoggingForCountry;
- (void)_enableLogMsgInstrumentation;
- (void)_flushLogs;
- (void)_forceFlushLogs;
- (id)_logMessageUsageURL;
- (void)_queueLogMessage:(id)arg1;
- (void)_registerLogMsgState:(id)arg1;
- (void)_removeAllLogAdaptors;
- (void)_removeLogAdaptor:(id)arg1;
- (void)_setupDefaultAdaptors;
- (void)_unregisterLogMsgStateOfType:(int)arg1;
- (void)_updateAdaptorPolicyConfiguration:(id)arg1;
- (void)addLogAdaptor:(id)arg1;
- (void)dealloc;
- (void)disableLogMsgInstrumentation;
- (void)disableLogMsgInstrumentationWithBlock:(id /* block */)arg1;
- (void)enableLogMsgInstrumentation;
- (void)flushLogs;
- (void)forceFlushLogs;
- (id)init;
- (void)queueLogMessage:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)removeAllLogAdators;
- (void)removeLogAdaptor:(id)arg1;
- (id)serverLogAdaptorManager;
- (void)setServerLogAdaptorManager:(id)arg1;
- (bool)shouldSendUsageUsingNewLogManager;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)updateAdaptorPolicyConfiguration:(id)arg1;
- (void)waitForEmptyLoggingQueue:(id /* block */)arg1;

@end
