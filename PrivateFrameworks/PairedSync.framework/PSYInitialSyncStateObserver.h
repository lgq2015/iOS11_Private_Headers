/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYInitialSyncStateObserver : NSObject <PSYSyncStateObserverInterface> {
    NSXPCConnection * _connection;
    int  _daemonStartedNotifyToken;
    <PSYInitialSyncStateObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _init;
    NSMutableDictionary * _initialSyncStateCache;
    NSMutableDictionary * _nrDevices;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _syncStateCache;
    NSMutableDictionary * _syncStateEntryCache;
    int  _syncSwitchNotifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property <PSYInitialSyncStateObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionInvalidated;
- (void)_queue_initializeIfNotInitialized;
- (void)_queue_notifyCanRetryFailedRequests;
- (void)_queue_querySyncState;
- (void)_queue_updateSyncStates:(id)arg1 notifyDelegateOfChanges:(bool)arg2;
- (void)_registerMonitorAllNRDevicesForMigrationChanges:(id /* block */)arg1;
- (void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(id /* block */)arg2;
- (void)_unregisterNRDeviceMonitors;
- (void)dealloc;
- (id)delegate;
- (oneway void)didUpdateSyncForPairingID:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)requestInitialNonMigrationSyncStateForPairingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestInitialSyncStateForPairingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSyncStateForPairingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)syncProviderWithErrorHandler:(id /* block */)arg1;

@end
