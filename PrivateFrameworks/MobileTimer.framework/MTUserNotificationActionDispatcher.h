/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTUserNotificationActionDispatcher : NSObject <UNUserNotificationCenterDelegate> {
    MTAlarmManager * _alarmManager;
    UNUserNotificationCenter * _notificationCenter;
    MTTimerManager * _timerManager;
}

@property (nonatomic) MTAlarmManager *alarmManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (nonatomic) MTTimerManager *timerManager;

+ (unsigned long long)_alarmNotificationActionForUserNotificationAction:(id)arg1;
+ (unsigned long long)_timerNotificationActionForUserNotificationAction:(id)arg1;
+ (void)warmUp;

- (void).cxx_destruct;
- (void)_handleAlarmNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleTimerNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)alarmManager;
- (id)initWithAlarmManager:(id)arg1;
- (id)initWithAlarmManager:(id)arg1 timerManager:(id)arg2;
- (id)initWithTimerManager:(id)arg1;
- (id)notificationCenter;
- (void)setAlarmManager:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setTimerManager:(id)arg1;
- (id)timerManager;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
