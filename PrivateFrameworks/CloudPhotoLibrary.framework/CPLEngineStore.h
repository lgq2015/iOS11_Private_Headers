/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent> {
    bool  _batchedTransactionDequeueIsScheduled;
    NSMutableArray * _batchedTransactions;
    NSObject<OS_dispatch_queue> * _batchedTransactionsQueue;
    CPLEngineClientCache * _clientCache;
    CPLEngineCloudCache * _cloudCache;
    CPLEngineDerivativesCache * _derivativesCache;
    bool  _dontDelayChangeSessionUpdate;
    CPLEngineResourceDownloadQueue * _downloadQueue;
    CPLEngineLibrary * _engineLibrary;
    CPLEngineIDMapping * _idMapping;
    NSSet * _lastInvalidRecordIdentifiers;
    NSDate * _lastInvalidRecordsDate;
    CPLEngineOutgoingResources * _outgoingResources;
    CPLResetTracker * _pendingTracker;
    double  _pendingUpdateInterval;
    NSObject<OS_dispatch_queue> * _pendingUpdateQueue;
    NSObject<OS_dispatch_source> * _pendingUpdateTimer;
    CPLPlatformObject * _platformObject;
    CPLEngineChangePipe * _pullQueue;
    CPLEnginePushRepository * _pushRepository;
    CPLEngineQuarantinedRecords * _quarantinedRecords;
    CPLEngineRemappedDeletes * _remappedDeletes;
    NSMutableArray * _resetEvents;
    NSURL * _resetEventsURL;
    CPLEngineResourceStorage * _resourceStorage;
    bool  _schedulePendingUpdateApplyOnWriteSuccess;
    unsigned long long  _state;
    CPLEngineStatusCenter * _statusCenter;
    NSHashTable * _storages;
    bool  _supportedFeatureVersionIsMostRecent;
    CPLEngineTransientRepository * _transientPullRepository;
    bool  _unschedulePendingUpdateApplyOnWriteSuccess;
}

@property (nonatomic, readonly) CPLEngineClientCache *clientCache;
@property (nonatomic, readonly) CPLEngineCloudCache *cloudCache;
@property (nonatomic, readonly) id corruptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CPLEngineDerivativesCache *derivativesCache;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineResourceDownloadQueue *downloadQueue;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLEngineIDMapping *idMapping;
@property (readonly) NSDate *libraryCreationDate;
@property (nonatomic, readonly) CPLEngineOutgoingResources *outgoingResources;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) CPLEngineChangePipe *pullQueue;
@property (nonatomic, readonly) CPLEnginePushRepository *pushRepository;
@property (nonatomic, readonly) bool pushRepositoryIsFull;
@property (nonatomic, readonly) CPLEngineQuarantinedRecords *quarantinedRecords;
@property (nonatomic, readonly) CPLEngineRemappedDeletes *remappedDeletes;
@property (nonatomic, readonly) CPLEngineResourceStorage *resourceStorage;
@property (nonatomic, readonly) bool shouldGenerateDerivatives;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) CPLEngineStatusCenter *statusCenter;
@property (nonatomic, readonly) NSArray *storages;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportedFeatureVersionIsMostRecent;
@property (nonatomic, readonly) CPLEngineTransientRepository *transientPullRepository;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_applyPendingUpdate:(id)arg1 error:(id*)arg2;
- (bool)_canRead;
- (bool)_canWrite;
- (void)_commitWriteTransaction:(id)arg1 commitError:(id)arg2;
- (id)_currentTransaction;
- (void)_loadResetEvents;
- (void)_performTransaction:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_reallySchedulePendingUpdateApply;
- (void)_reallyUnschedulePendingUpdateApply;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (id)_resetEventsDescriptions;
- (bool)_resetLocalSyncStateWithError:(id*)arg1;
- (void)_scheduleBatchedTransactionsLocked;
- (void)_schedulePendingUpdateApply;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (void)_storeResetEvent:(id)arg1 date:(id)arg2 cause:(id)arg3;
- (void)_storeResetEvent:(id)arg1 date:(id)arg2 pending:(bool)arg3 cause:(id)arg4;
- (void)_unschedulePendingUpdateApply;
- (bool)applyPreviousChangeSessionUpdateWithExpectedLibraryVersion:(id)arg1 error:(id*)arg2;
- (void)assertCanRead;
- (void)assertCanWrite;
- (bool)beginChangeSession:(id)arg1 withLibraryVersion:(id)arg2 resetTracker:(id)arg3 error:(id*)arg4;
- (bool)checkExpectedLibraryVersion:(id)arg1 error:(id*)arg2;
- (id)clientCache;
- (id)clientCacheIdentifier;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudCache;
- (id)componentName;
- (id)corruptionInfo;
- (id)createNewLibraryVersion;
- (void)dealloc;
- (id)derivativesCache;
- (id)description;
- (id)downloadQueue;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)idMapping;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isClientInSyncWithClientCache;
- (id)lastQuarantineCountReportDate;
- (id)libraryCreationDate;
- (id)libraryVersion;
- (id)libraryZoneName;
- (void)noteInvalidRecordIdentifiersInPushSession:(id)arg1;
- (void)noteOtherResetEvent:(id)arg1 cause:(id)arg2;
- (void)noteResetSyncFinished;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)outgoingResources;
- (void)performBatchedWriteTransactionBarrier;
- (void)performBatchedWriteTransactionWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)performReadTransactionWithBlock:(id /* block */)arg1;
- (id)performWriteTransactionWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)platformObject;
- (id)pullQueue;
- (id)pushRepository;
- (bool)pushRepositoryIsFull;
- (id)quarantinedRecords;
- (void)registerStorage:(id)arg1;
- (id)remappedDeletes;
- (bool)resetCompleteSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (bool)resetLocalSyncStateWithCause:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (bool)resetLocalSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (bool)resetSyncAnchorWithCause:(id)arg1 error:(id*)arg2;
- (id)resourceStorage;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldGenerateDerivatives;
- (unsigned long long)state;
- (id)statusCenter;
- (id)storages;
- (bool)storeChangeSessionUpdate:(id)arg1 error:(id*)arg2;
- (bool)storeClientIsInSyncWithClientCacheWithError:(id*)arg1;
- (bool)storeLastQuarantineCountReportDate:(id)arg1 error:(id*)arg2;
- (bool)storeLibraryVersion:(id)arg1 withError:(id*)arg2;
- (bool)storeLibraryZoneName:(id)arg1 error:(id*)arg2;
- (bool)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 error:(id*)arg2;
- (bool)storeUserIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)supportedFeatureVersionInLastSync;
- (bool)supportedFeatureVersionIsMostRecent;
- (id)transientPullRepository;
- (id)userIdentifier;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
