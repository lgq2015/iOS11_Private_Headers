/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTimedEventStorePurger : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _ignoreLowLevelDatabaseChangedNotifications;
    id /* block */  _internalChangedBlock;
    id /* block */  _internalCreationBlock;
    bool  _internalPurgingAllowed;
    EKEventStore * _internalStore;
    double  _internalTimeout;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) id /* block */ changedBlock;
@property (nonatomic, copy) id /* block */ creationBlock;
@property (nonatomic) bool ignoreLowLevelDatabaseChangedNotifications;
@property (nonatomic, copy) id /* block */ internalChangedBlock;
@property (nonatomic, copy) id /* block */ internalCreationBlock;
@property (nonatomic) bool internalPurgingAllowed;
@property (nonatomic, retain) EKEventStore *internalStore;
@property (nonatomic) double internalTimeout;
@property (nonatomic) bool purgingAllowed;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_addPersistentNotificationObservers;
- (void)_databaseChangedExternally;
- (void)_eventStoreChangedNotification:(id)arg1;
- (void)_fireChangedBlock;
- (void)_removePersistentNotificationObservers;
- (void)_removeTransientEventStoreChangeObserver;
- (void)_resetIdleTimer;
- (void)_uninstallTimer;
- (id)acquireCachedEventStoreOrCreate:(bool)arg1;
- (id)callbackQueue;
- (id /* block */)changedBlock;
- (id /* block */)creationBlock;
- (void)dealloc;
- (bool)ignoreLowLevelDatabaseChangedNotifications;
- (id)init;
- (id /* block */)internalChangedBlock;
- (id /* block */)internalCreationBlock;
- (bool)internalPurgingAllowed;
- (id)internalStore;
- (double)internalTimeout;
- (bool)purgingAllowed;
- (void)setCallbackQueue:(id)arg1;
- (void)setChangedBlock:(id /* block */)arg1;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)setIgnoreLowLevelDatabaseChangedNotifications:(bool)arg1;
- (void)setInternalChangedBlock:(id /* block */)arg1;
- (void)setInternalCreationBlock:(id /* block */)arg1;
- (void)setInternalPurgingAllowed:(bool)arg1;
- (void)setInternalStore:(id)arg1;
- (void)setInternalTimeout:(double)arg1;
- (void)setPurgingAllowed:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (double)timeout;
- (id)timer;
- (id)workQueue;

@end
