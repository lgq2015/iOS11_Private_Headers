/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _coalescedEditsNeedEntireContents;
    NSMutableSet * _coalescedPartialContentIdentifiersToFetch;
    <NSObject><NSCopying> * _contextCoalescingFor;
    NSArray * _currentProcessedContents;
    <MSPContainerStateSnapshot> * _currentStateSnapshot;
    NSCountedSet * _editCoalescingContexts;
    NSMutableArray * _enqueuedCoalescingCompletionBlocks;
    NSMutableArray * _enqueuedCoalescingEditBarrierBlocks;
    bool  _hasScheduledDelayedCommitForCoalescedEdits;
    bool  _isCommittingEnqueuedEdits;
    NSHashTable * _observers;
    MSPContainerPersister * _persister;
    bool  _preventsAssertionsForDuplicateStorageIdentifiers;
    bool  _simulatesClearingDiscardableDataAfterOperations;
}

@property (nonatomic, readonly) bool _preventsAssertionsForDuplicateStorageIdentifiers;
@property (getter=_accessQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MSPQuerySource *entireContentsQuerySource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MSPContainerPersister *persister;
@property (getter=_simulatesClearingDiscardableDataAfterOperations, setter=_setSimulatesClearingDiscardableDataAfterOperations:, nonatomic) bool simulatesClearingDiscardableDataAfterOperations;
@property (readonly) Class superclass;

+ (bool)_deletes:(unsigned long long)arg1 mayRepresentDataLossIfAppliedTo:(unsigned long long)arg2;
+ (void)_disableLogging;
+ (void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(id /* block */)arg1;
+ (void)clearDiscardableDataFromAllContainers;
+ (void)mutableObjectContentDidUpdate:(id)arg1;

- (void).cxx_destruct;
- (id)_accessQueue;
- (bool)_checkAndAddCoalescedEditForContext:(id)arg1 identifiers:(id)arg2 enqueuedBlock:(id /* block */)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)_clearObjectCacheIfNeeded;
- (void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)_commitPendingCoalescedEditsIfAny;
- (void)_endCoalescingEditsForContext:(id)arg1;
- (void)_forEachObserver:(id /* block */)arg1;
- (id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg1;
- (void)_performInitialLoadNotifyingObservers:(bool)arg1 kickOffSynchronously:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_preventsAssertionsForDuplicateStorageIdentifiers;
- (void)_processNewEditedContents:(id)arg1;
- (void)_processNewLoadedContents:(id)arg1;
- (id)_processedContentsForPersisterContents:(id)arg1;
- (void)_setSimulatesClearingDiscardableDataAfterOperations:(bool)arg1;
- (bool)_simulatesClearingDiscardableDataAfterOperations;
- (void)accessContentsUsingConcurrentBlock:(id /* block */)arg1;
- (void)accessStateSnapshotUsingConcurrentBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)beginCoalescingEditsWithContext:(id)arg1;
- (void)coalesceEditsForContext:(id)arg1 inBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)editByMergingStateSnapshot:(id)arg1 mergeOptions:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)editContentsUsingBarrierBlock:(id /* block */)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)editContentsUsingBarrierBlock:(id /* block */)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(id /* block */)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(id /* block */)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (id)entireContentsQuerySource;
- (void)eraseWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithPersister:(id)arg1;
- (id)persister;
- (void)persisterContentsDidChangeExternally:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
