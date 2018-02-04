/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
 */

@interface UNSNotificationScheduler : NSObject <UNUserNotificationCenterObserver> {
    NSString * _bundleIdentifier;
    <UNSNotificationSchedulerDelegate> * _delegate;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNSNotificationSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (void)_addScheduledLocalNotifications:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_cancelScheduledLocalNotifications:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addScheduledLocalNotifications:(id)arg1;
- (void)addScheduledLocalNotifications:(id)arg1 waitUntilDone:(bool)arg2;
- (id)bundleIdentifier;
- (void)cancelAllScheduledLocalNotifications;
- (void)cancelScheduledLocalNotifications:(id)arg1;
- (void)cancelScheduledLocalNotifications:(id)arg1 waitUntilDone:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)scheduledLocalNotifications;
- (void)scheduledLocalNotificationsWithResult:(id /* block */)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScheduledLocalNotifications:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (void)snoozeScheduledLocalNotifications:(id)arg1;
- (void)snoozeScheduledLocalNotifications:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didChangePendingNotificationRequests:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotifications:(id)arg2;

@end
