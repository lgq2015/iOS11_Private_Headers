/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTNextAlarmManager : NSObject <UNSNotificationSchedulerDelegate> {
    NSSet * _nextAlarms;
    UNSNotificationScheduler * _scheduler;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *nextAlarms;
@property (nonatomic, retain) UNSNotificationScheduler *scheduler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)calculateNextAlarmsFromNotifications:(id)arg1;
- (id)init;
- (id)initWithNotificationScheduler:(id)arg1;
- (id)nextAlarms;
- (void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2;
- (id)scheduler;
- (void)setNextAlarms:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
