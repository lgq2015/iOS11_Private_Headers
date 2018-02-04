/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
    NSDateFormatter * _dateFormatter;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _fencesNeedAdjusted;
    bool  _includeRefiringAlarmsForInitialReschedule;
    NSDate * _lastCheckpoint;
    int  _lastDBSequence;
    CLLocationManager * _locationManager;
    NSMutableDictionary * _monitoredRegions;
    bool  _needsAlarmTablePopulation;
    NSDate * _nextFireDate;
    bool  _pendingChanges;
    NSDate * _populateStart;
    bool  _populating;
    bool  _refirePastAlarmsForInitialUpdate;
    RTRoutineManager * _routineManager;
    bool  _shouldUpdateWithForceForAlarmTable;
    bool  _shouldUpdateWithForceForFences;
    NSTimer * _syncTimer;
    EKTimedEventStorePurger * _timedEventStorePurger;
    NSDate * _tomorrow;
    long long  _vehicleConnectionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_clampFireDate:(id)arg1;
+ (id)_publisherBulletinIDForReminder:(id)arg1;
+ (id)_publisherBulletinIDForTask:(void*)arg1;
+ (id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1;
+ (id)requestedDarwinNotifications;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_adjustFences:(id)arg1;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)arg1;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)arg1;
- (bool)_allowConservativeEntry;
- (bool)_allowVehicleTrigger;
- (void)_calendarNotificationSettingChanged;
- (void)_databaseChanged;
- (id)_dateFormatter;
- (id)_debugStringForVehicleConnectionState:(long long)arg1;
- (id)_eventStore;
- (bool)_haveAlarmsChanged:(id)arg1;
- (id)_insertSideAlarmObjectForVehicleTriggerAlarm:(id)arg1 forReminder:(id)arg2 withDelay:(double)arg3 eventStore:(id)arg4 context:(id)arg5;
- (void)_installTimerWithFireDate:(id)arg1;
- (bool)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2;
- (bool)_isDataProtected;
- (void)_killSyncTimer;
- (void)_killTimer;
- (void)_locationDaemonDidLaunch;
- (void)_motionUpdatedWithConnectionState:(long long)arg1;
- (void)_notifyAlarmsFired:(id)arg1;
- (bool)_populateAlarmTable:(id)arg1;
- (void)_populateFinished;
- (void)_protectedDataDidBecomeAvailable;
- (void)_proximityAlertTriggered:(id)arg1 entered:(bool)arg2;
- (void)_removeAllFences;
- (void)_removeAllFencesSynch;
- (void)_removeStaleRefiringAlarmsWithEventStore:(id)arg1;
- (void)_rescheduleTimer;
- (void)_resetSyncTimer;
- (void)_setupLocationManager;
- (bool)_shouldAdjustFencesWithStatus:(int)arg1;
- (bool)_shouldRefireAlarms;
- (bool)_shouldUseCoreRoutine;
- (void)_simulatedOffsetChanged:(id)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timeDidChangeSignificantly;
- (void)_timeZoneChanged:(id)arg1;
- (void)_timerFired;
- (void)_updateRegionMonitoringForRegion:(id)arg1 withLocationOfInterest:(id)arg2 forLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (void)_updateWithForceForAlarmTable:(bool)arg1 forFences:(bool)arg2;
- (void)_vehicleTriggerFired:(bool)arg1;
- (void)dealloc;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)start;

@end
