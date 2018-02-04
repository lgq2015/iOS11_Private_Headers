/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerStorage : NSObject <MTAgentDiagnosticDelegate, MTTimerSchedulerDelegate, MTTimerStorage> {
    id /* block */  _currentDateProvider;
    NSDate * _lastModifiedDate;
    MTTimerMigrator * _migrator;
    NSPointerArray * _observers;
    NSMutableArray * _orderedTimers;
    <MTPersistence> * _persistence;
    MTTimerScheduler * _scheduler;
    <NAScheduler> * _serializer;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, retain) MTTimerMigrator *migrator;
@property (nonatomic, readonly) MTTimer *nextTimer;
@property (nonatomic, retain) NSPointerArray *observers;
@property (nonatomic, retain) NSMutableArray *orderedTimers;
@property (nonatomic, retain) <MTPersistence> *persistence;
@property (nonatomic) MTTimerScheduler *scheduler;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *timers;

- (void).cxx_destruct;
- (id)_applyNecessaryChangesFromOldTimer:(id)arg1 currentTimer:(id)arg2;
- (void)_loadTimersWithCompletion:(id /* block */)arg1;
- (id)_queuePersistTimer:(id)arg1 replacingTimer:(id)arg2;
- (void)_queue_addTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_dismissTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (bool)_queue_hasMatchingTimer:(id)arg1;
- (void)_queue_notifyObserversForNextTimerChange:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerAdd:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerDismiss:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerFire:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerRemoval:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerUpdate:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversWithBlock:(id /* block */)arg1;
- (void)_queue_persistTimers;
- (void)_queue_removeAllTimersForSource:(id)arg1;
- (void)_queue_removeTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_repeatTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2 persist:(bool)arg3 notify:(bool)arg4;
- (void)_queue_sortTimers;
- (id)_queue_timerMatchingTimerIdentifier:(id)arg1;
- (void)_queue_updateTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)addTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id /* block */)currentDateProvider;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)getTimersWithCompletion:(id /* block */)arg1;
- (void)handleF5Reset;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 scheduler:(id)arg3 currentDateProvider:(id /* block */)arg4;
- (id)lastModifiedDate;
- (void)loadTimers;
- (void)loadTimersSync;
- (id)migrator;
- (id)nextTimer;
- (id)observers;
- (id)orderedTimers;
- (id)persistence;
- (void)printDiagnostics;
- (void)registerObserver:(id)arg1;
- (void)removeTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id)scheduler;
- (void)scheduler:(id)arg1 didChangeNextTimer:(id)arg2;
- (void)scheduler:(id)arg1 didFireTimer:(id)arg2;
- (id)serializer;
- (void)setAllTimers:(id)arg1 source:(id)arg2;
- (void)setLastModifiedDate:(id)arg1;
- (void)setMigrator:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOrderedTimers:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSerializer:(id)arg1;
- (id)timers;
- (void)updateTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;

@end
