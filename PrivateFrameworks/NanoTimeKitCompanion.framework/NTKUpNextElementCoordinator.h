/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementCoordinator : NSObject <NTKUpNextLoggable> {
    NSMutableArray * _displayElements;
    NSHashTable * _observers;
    NSRecursiveLock * _observersLock;
    bool  _performingBatch;
    NSMutableArray * _updates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)applicationPrewarmIdentifiers;

- (void).cxx_destruct;
- (void)_enqueueOrPerformOperation:(id)arg1;
- (void)_performOperation:(id)arg1 toObserver:(id)arg2;
- (void)_performOperationsToDisplayElements:(id)arg1;
- (void)_performOperationsToDisplayElements:(id)arg1 toSection:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (id)complicationDescriptors;
- (void)dealloc;
- (void)didAddObserver:(id)arg1;
- (void)didRemoveObserver:(id)arg1;
- (id)displayElements;
- (id)elementAtIndexPath:(id)arg1;
- (void)elementAtIndexPathDidBecomeHidden:(id)arg1 fromObserver:(id)arg2;
- (void)elementAtIndexPathWillBecomeVisible:(id)arg1 fromObserver:(id)arg2;
- (void)enumerateObservers:(id /* block */)arg1;
- (id)indexPathForElement:(id)arg1;
- (id)init;
- (void)insertElement:(id)arg1 atIndexPath:(id)arg2;
- (id)logName;
- (id)loggedState;
- (void)moveElement:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (unsigned long long)numberOfElementsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfObservers;
- (void)observerDidUpdateDisabledDataSources:(id)arg1;
- (void)observerDidUpdateState:(id)arg1;
- (void)performBatchUpdateBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)postEvent:(id)arg1 fromObserver:(id)arg2;
- (void)refreshElement:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadElement:(id)arg1 atIndexPath:(id)arg2;
- (void)removeElement:(id)arg1 atIndexPath:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
