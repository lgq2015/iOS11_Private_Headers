/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver> {
    NSString * _bundleIdentifier;
    bool  _isSystemApplication;
    PCPersistentTimer * _localNotificationTimer;
    UNSLocationMonitor * _locationMonitor;
    bool  _monitoringLocaleAndTimeChanges;
    UNSNotificationRepository * _notificationRepository;
    UNSPendingNotificationRepository * _pendingNotificationRepository;
    NSMutableArray * _pendingNotificationsAwaitingDelivery;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _requiresLocalNotifications;
    bool  _userNotificationsEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canScheduledLocalNotificationTimers;
- (id)_dateFormatter;
- (void)_fireNotification:(id)arg1;
- (void)_invalidateNotificationRecordTimersAndRegionMonitors;
- (void)_invalidatePendingNotificationRecordRegionMonitors;
- (void)_invalidatePendingNotificationRecordTimers;
- (id)_pendingNotificationRecords;
- (void)_postDarwinSnoozeNotifications:(id)arg1;
- (void)_queue_triggerDidFireForDate:(id)arg1;
- (void)_queue_triggerDidFireForRegion:(id)arg1;
- (void)_queue_triggerDidFireForTimer:(id)arg1;
- (id)_sanitizeNotificationRecords:(id)arg1;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (void)_setMonitoredRegions:(id)arg1;
- (void)_setPendingNotificationRecords:(id)arg1;
- (void)_setRequestDateForPendingNotificationRecords:(id)arg1;
- (void)_updateRegionMonitorsForPendingNotificationRecords:(id)arg1;
- (void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)arg1;
- (void)_updateTimersForPendingNotificationRecords:(id)arg1;
- (void)addPendingNotificationRecords:(id)arg1;
- (void)dealloc;
- (void)handleApplicationStateRestore;
- (void)handleLocaleChange;
- (void)handleSignificantTimeChange;
- (id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 locationMonitor:(id)arg3 bundleIdentifier:(id)arg4 isSystemApplication:(bool)arg5 requiresLocalNotifications:(bool)arg6 userNotificationsEnabled:(bool)arg7 queue:(id)arg8;
- (void)invalidate;
- (void)locationMonitor:(id)arg1 triggerDidFireForRegion:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)pendingNotificationRecords;
- (void)removeAllPendingNotificationRecords;
- (void)removePendingNotificationRecords:(id)arg1;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)arg1;
- (void)setPendingNotificationRecords:(id)arg1;
- (void)setUserNotificationsEnabled:(bool)arg1;
- (id)undeliveredNotificationRecords;

@end
