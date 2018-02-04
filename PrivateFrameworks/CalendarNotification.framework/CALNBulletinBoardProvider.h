/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNBulletinBoardProvider : NSObject <CADModule> {
    _EKAlarmEngine * _alarmEngine;
    BBDataProviderConnection * _bbConnection;
    NSObject<OS_dispatch_queue> * _bulletinQueue;
    CALNRemoteEventProvider * _eventsProvider;
    _EKNotificationMonitor * _notificationMonitor;
    NSObject<OS_dispatch_queue> * _notificationMonitorQueue;
    CALNRemoteReminderProvider * _remindersProvider;
    EKTravelEngine * _travelEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bbProviderDarwinNotifications;
+ (id)_stringForBackgroundTaskAgentJobStatus:(int)arg1;
+ (id)requestedDarwinNotifications;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_alarmsDidFire:(id)arg1;
- (void)_notificationCountChanged:(id)arg1;
- (void)_notificationsChanged:(id)arg1;
- (void)_unalertedNotificationsReceived:(id)arg1;
- (void)activate;
- (void)databaseChanged;
- (void)deactivate;
- (void)dealloc;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)init;
- (void)receivedNotificationNamed:(id)arg1;
- (void)registerDataProviders;
- (void)registerForNotifications;
- (void)startAlarmEngine;
- (void)startNotificationMonitor;
- (void)startTravelEngine;

@end
