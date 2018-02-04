/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementDataSourceController : NSObject <NTKUpNextElementDataSourceDelegate> {
    NTKUpNextElementDataSource * _dataSource;
    Class  _dataSourceClass;
    <NTKUpNextElementDataSourceControllerDelegate> * _delegate;
    NSMutableDictionary * _elementIdentifierMap;
    NSRecursiveLock * _elementIdentifierMapLock;
    NSMutableDictionary * _elementSectionMap;
    NSMutableSet * _elements;
    NSMutableArray * _enqueuedBlocks;
    bool  _hasUnlockedSinceFirstBoot;
    bool  _isPerformingReload;
    NSString * _loggingHeader;
    NSObject<OS_dispatch_queue> * _queue;
    NTKUpNextScheduler * _reloadScheduler;
    unsigned long long  _state;
    NTKUpNextScheduler * _updateScheduler;
    NSMutableArray * _updates;
    bool  _wantsReloadWhilePaused;
    bool  _willUnload;
}

@property (nonatomic, readonly) NSArray *allElements;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NTKUpNextElementDataSource *dataSource;
@property (nonatomic, readonly) Class dataSourceClass;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKUpNextElementDataSourceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_elementsForIds:(id)arg1;
- (id)_groupElements:(id)arg1 bySections:(id)arg2;
- (void)_handleDeviceLockStateChange:(id)arg1;
- (void)_handleSignifiantTimeChange:(id)arg1;
- (void)_loadLoggingHeader;
- (void)_performOrEnqueueUpdateBlock:(id /* block */)arg1;
- (void)_queue_performUpdates;
- (void)_queue_processUpdates:(id)arg1 forSection:(unsigned long long)arg2;
- (void)_queue_reload;
- (void)_queue_scheduleUpdate:(id)arg1;
- (void)addElements:(id)arg1 toSection:(unsigned long long)arg2;
- (id)allElements;
- (id)bundleIdentifier;
- (id)dataSource;
- (Class)dataSourceClass;
- (void)dealloc;
- (id)delegate;
- (void)elementDidBecomeHidden:(id)arg1;
- (id)elementOperationQueue;
- (void)elementWillBecomeVisible:(id)arg1;
- (bool)hasElementWithId:(id)arg1 inSection:(unsigned long long)arg2;
- (id)initWithDataSourceClass:(Class)arg1;
- (void)invalidateElements;
- (bool)isElementWithIdVisible:(id)arg1;
- (id)logName;
- (id)loggedState;
- (void)pause;
- (void)prepareToUnload;
- (void)refreshElement:(id)arg1;
- (void)refreshElement:(id)arg1 inSection:(unsigned long long)arg2;
- (void)reloadElement:(id)arg1;
- (void)reloadElement:(id)arg1 inSection:(unsigned long long)arg2;
- (void)reloadElement:(id)arg1 withElementId:(id)arg2 inSection:(unsigned long long)arg3;
- (void)removeElements:(id)arg1 fromSection:(unsigned long long)arg2;
- (void)removeElementsWithIds:(id)arg1;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
