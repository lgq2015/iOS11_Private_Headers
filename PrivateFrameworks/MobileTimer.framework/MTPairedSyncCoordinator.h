/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTPairedSyncCoordinator : NSObject <MTSyncService, MTSyncServiceDelegate, PSYSyncCoordinatorDelegate> {
    MTSyncStateOperation * _pendingOperation;
    <NAScheduler> * _serializer;
    NSString * _serviceName;
    PSYServiceSyncSession * _session;
    unsigned long long  _state;
    PSYSyncCoordinator * _syncCoordinator;
    <MTSyncService> * _syncService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTSyncStateOperation *pendingOperation;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, retain) PSYServiceSyncSession *session;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSYSyncCoordinator *syncCoordinator;
@property (nonatomic) <MTSyncService> *syncService;

- (void).cxx_destruct;
- (bool)_isCompletedOperationForOutstandingSession:(id)arg1;
- (void)_queue_beginSyncSession;
- (void)_queue_completePendingSession;
- (void)_queue_completeSession;
- (id)initWithServiceName:(id)arg1 syncService:(id)arg2;
- (id)pendingOperation;
- (void)performSyncOperation:(id)arg1;
- (id)serializer;
- (void)service:(id)arg1 didBeginSyncOperation:(id)arg2;
- (void)service:(id)arg1 didCompleteSyncOperation:(id)arg2;
- (void)service:(id)arg1 didFailSyncOperation:(id)arg2 withError:(id)arg3;
- (void)service:(id)arg1 didRequestSyncOperation:(id)arg2;
- (void)service:(id)arg1 didScheduleRetryOfSyncOperation:(id)arg2 forError:(id)arg3;
- (id)serviceName;
- (id)session;
- (void)setPendingOperation:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSyncCoordinator:(id)arg1;
- (void)setSyncService:(id)arg1;
- (void)setup;
- (bool)shouldSync;
- (void)start;
- (unsigned long long)state;
- (void)stop;
- (void)supportsMigrationSync;
- (id)syncCoordinator;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (id)syncService;
- (void)teardown;

@end
