/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmStorage : NSObject <MTAlarmScheduleDelegate, MTAlarmStorage> {
    id /* block */  _currentDateProvider;
    NSDate * _lastModifiedDate;
    MTAlarmMigrator * _migrator;
    NSPointerArray * _observers;
    NSMutableArray * _orderedAlarms;
    <MTPersistence> * _persistence;
    MTAlarmScheduler * _scheduler;
    <NAScheduler> * _serializer;
    MTAlarm * _sleepAlarm;
    MTSleepMonitor * _sleepMonitor;
}

@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) NSArray *allAlarms;
@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) MTAlarmMigrator *migrator;
@property (nonatomic, readonly) MTAlarm *nextAlarm;
@property (nonatomic, retain) NSPointerArray *observers;
@property (nonatomic, retain) NSMutableArray *orderedAlarms;
@property (nonatomic, retain) <MTPersistence> *persistence;
@property (nonatomic) MTAlarmScheduler *scheduler;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) MTAlarm *sleepAlarm;
@property (nonatomic) MTSleepMonitor *sleepMonitor;
@property (readonly) Class superclass;

+ (id)_alarmsByMergingAlarms:(id)arg1 withAlarms:(id)arg2 addedAlarms:(id)arg3 updatedAlarms:(id)arg4;
+ (id)alarmsByMergingAlarms:(id)arg1 withAlarms:(id)arg2;

- (void).cxx_destruct;
- (id)_applyNecessaryChangesFromOldAlarm:(id)arg1 currentAlarm:(id)arg2;
- (void)_loadAlarmsWithCompletion:(id /* block */)arg1;
- (void)_notifyObserversForAlarmAdd:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmDismiss:(id)arg1 dismissAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmFire:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmRemoval:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmSnooze:(id)arg1 snoozeAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForNextAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_queuePersistAlarm:(id)arg1 replacingAlarm:(id)arg2;
- (void)_queue_actuallyRemoveAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_addAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id)_queue_alarmMatchingAlarm:(id)arg1;
- (id)_queue_alarmMatchingAlarmIdentifier:(id)arg1;
- (id)_queue_allAlarms;
- (void)_queue_dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (bool)_queue_hasMatchingAlarm:(id)arg1;
- (void)_queue_mergeAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)_queue_persistAlarms;
- (void)_queue_removeAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_removeAlarmWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_removeAllAlarmsForSource:(id)arg1;
- (void)_queue_resetAlarmsTo:(id)arg1 sleepAlarm:(id)arg2;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3 persist:(bool)arg4 notify:(bool)arg5;
- (void)_queue_snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (void)_queue_sortAlarms;
- (void)_queue_updateAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)addAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id)alarms;
- (id)allAlarms;
- (id /* block */)currentDateProvider;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(id /* block */)arg3 source:(id)arg4;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (void)getAlarmsWithCompletion:(id /* block */)arg1;
- (void)handleF5Reset;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 scheduler:(id)arg3 currentDateProvider:(id /* block */)arg4;
- (id)lastModifiedDate;
- (void)loadAlarms;
- (void)loadAlarmsSync;
- (void)mergeAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (id)migrator;
- (id)nextAlarm;
- (id)observers;
- (id)orderedAlarms;
- (id)persistence;
- (void)printDiagnostics;
- (void)registerObserver:(id)arg1;
- (void)removeAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)removeAllAlarmsForSource:(id)arg1;
- (id)scheduler;
- (void)scheduler:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)scheduler:(id)arg1 didFireAlarm:(id)arg2;
- (id)serializer;
- (void)setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)setLastModifiedDate:(id)arg1;
- (void)setMigrator:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOrderedAlarms:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (void)setSleepMonitor:(id)arg1;
- (id)sleepAlarm;
- (id)sleepMonitor;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(id /* block */)arg3 source:(id)arg4;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (void)updateAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;

@end
