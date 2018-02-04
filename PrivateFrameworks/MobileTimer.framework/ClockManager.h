/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface ClockManager : NSObject <UNSNotificationSchedulerDelegate> {
    ObjectUpdates * _localNotificationUpdates;
    NSHashTable * _notificationObservers;
    UNSNotificationScheduler * _notificationScheduler;
    bool  _performingUpgrade;
    NSMutableArray * _scheduledLocalNotifications;
    bool  ignoringNotificationPostRequests;
    bool  runningInAssistantPlugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIgnoringNotificationPostRequests, nonatomic) bool ignoringNotificationPostRequests;
@property (nonatomic, retain) NSHashTable *notificationObservers;
@property (nonatomic, retain) UNSNotificationScheduler *notificationScheduler;
@property (getter=isRunningInAssistantPlugin, nonatomic) bool runningInAssistantPlugin;
@property (nonatomic, readonly) NSArray *scheduledLocalNotificationsCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ObjectUpdates *updatesToLocalNotificationsCache;

+ (void)loadUserPreferences;
+ (void)saveAndNotifyForUserPreferences:(bool)arg1 localNotifications:(bool)arg2;
+ (int)sectionFromClockAppURL:(id)arg1;
+ (id)sharedManager;
+ (id)urlForClockAppSection:(int)arg1;

- (void).cxx_destruct;
- (void)_refreshScheduledLocalNotificationsCacheWithNotifications:(id)arg1;
- (void)addNotificationObserver:(id)arg1;
- (void)cancelAllNotifications;
- (void)cancelLocalNotification:(id)arg1;
- (void)cancelLocalNotifications:(id)arg1;
- (bool)containsRemovedNotification:(id)arg1;
- (bool)discardOldVersion;
- (id)init;
- (bool)isIgnoringNotificationPostRequests;
- (bool)isRunningInAssistantPlugin;
- (id)notificationObservers;
- (id)notificationScheduler;
- (void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2;
- (void)notificationScheduler:(id)arg1 didFireLocalNotifications:(id)arg2;
- (void)postUserPreferencesChangedNotification;
- (void)refreshScheduledLocalNotificationsCache;
- (void)refreshScheduledLocalNotificationsCacheAsynchronouslyWithCompletion:(id /* block */)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (void)resetUpdatesToLocalNotificationsCache;
- (void)scheduleLocalNotification:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1;
- (id)scheduledLocalNotificationsCache;
- (void)setIgnoringNotificationPostRequests:(bool)arg1;
- (void)setNotificationObservers:(id)arg1;
- (void)setNotificationScheduler:(id)arg1;
- (void)setRunningInAssistantPlugin:(bool)arg1;
- (id)updatesToLocalNotificationsCache;
- (bool)upgrade;
- (bool)upgradeIfNeverAttempted;

@end
