/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTCompanionSyncService : NSObject <MTAgentDiagnosticDelegate, MTSyncService, SYServiceDelegate> {
    unsigned long long  _currentBackoff;
    NSArray * _dataModels;
    <MTSyncServiceDelegate> * _delegate;
    MTCompanionSyncSession * _receivingSession;
    NSObject<OS_dispatch_source> * _retryTimer;
    MTCompanionSyncSession * _sendingSession;
    <NAScheduler> * _serializer;
    SYService * _service;
    NSObject<OS_dispatch_queue> * _syncQueue;
    MTSyncOperationQueue * _syncRequestQueue;
    <NAScheduler> * _syncScheduler;
}

@property (nonatomic) unsigned long long currentBackoff;
@property (nonatomic, retain) NSArray *dataModels;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTCompanionSyncSession *receivingSession;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *retryTimer;
@property (nonatomic, retain) MTCompanionSyncSession *sendingSession;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) SYService *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) MTSyncOperationQueue *syncRequestQueue;
@property (nonatomic, retain) <NAScheduler> *syncScheduler;

- (void).cxx_destruct;
- (void)_executeRequestForOperation:(id)arg1 resetRequest:(id /* block */)arg2 syncRequest:(id /* block */)arg3;
- (void)_requestReset:(id)arg1;
- (void)_requestSync:(id)arg1;
- (void)_requestSyncWithAppropriateUpdateBlock:(id /* block */)arg1 forOperation:(id)arg2;
- (void)_resetRetryTimer;
- (void)_scheduleRetryForOperation:(id)arg1;
- (bool)_startReceivingSession:(id)arg1;
- (bool)_startSendingSession:(id)arg1;
- (unsigned long long)currentBackoff;
- (id)dataModels;
- (id)delegate;
- (id)initWithMode:(long long)arg1 serviceName:(id)arg2 dataModels:(id)arg3 delegate:(id)arg4;
- (void)performSyncOperation:(id)arg1;
- (void)printDiagnostics;
- (id)receivingSession;
- (id)retryTimer;
- (id)sendingSession;
- (id)serializer;
- (id)service;
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (void)setCurrentBackoff:(unsigned long long)arg1;
- (void)setDataModels:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReceivingSession:(id)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setSendingSession:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncRequestQueue:(id)arg1;
- (void)setSyncScheduler:(id)arg1;
- (void)setup;
- (void)start;
- (void)stop;
- (id)syncQueue;
- (id)syncRequestQueue;
- (id)syncScheduler;
- (void)teardown;

@end
