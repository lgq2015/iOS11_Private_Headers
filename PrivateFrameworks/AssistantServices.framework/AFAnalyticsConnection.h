/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsConnection : NSObject <AFAnalyticsService, AFAnalyticsServiceDelegate> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_source> * _idleTimer;
    bool  _needsCleanUpConnection;
    unsigned long long  _numberOfEventsBeingSent;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool needsCleanUpConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_cleanUpConnectionIfNeeded;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_didFinishSendingEvents:(id)arg1;
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_handleSuccessCallbackForEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)_idleTimerFired;
- (void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (void)_willStartSendingEvents:(id)arg1;
- (void)dealloc;
- (oneway void)flushStagedEventsWithReply:(id /* block */)arg1;
- (id)init;
- (bool)needsCleanUpConnection;
- (void)setNeedsCleanUpConnection:(bool)arg1;
- (oneway void)stageEvent:(id)arg1;
- (oneway void)stageEvents:(id)arg1;
- (oneway void)stageEvents:(id)arg1 completion:(id /* block */)arg2;

@end
