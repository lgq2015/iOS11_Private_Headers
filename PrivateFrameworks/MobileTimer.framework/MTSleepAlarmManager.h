/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSleepAlarmManager : NSObject {
    NSDateFormatter * _bedtimeFormatter;
    NSMutableArray * _bedtimeNotifications;
    NSDateComponentsFormatter * _dateComponentsFormatter;
    MTSleepAlarm * _sleepAlarm;
}

@property (nonatomic, retain) NSDateFormatter *bedtimeFormatter;
@property (nonatomic, retain) NSMutableArray *bedtimeNotifications;
@property (nonatomic, retain) NSDateComponentsFormatter *dateComponentsFormatter;
@property (nonatomic, readonly, copy) MTSleepAlarm *sleepAlarm;

+ (bool)isSleepAlarmBedtimeNotification:(id)arg1;
+ (id)sharedSleepAlarmManager;

- (void).cxx_destruct;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (void)addNotification:(id)arg1;
- (id)bedtimeFormatter;
- (id)bedtimeNotificationMessageWithCalendar:(id)arg1;
- (id)bedtimeNotifications;
- (id)dateComponentsFormatter;
- (id)init;
- (void)prepareBedtimeNotifications;
- (void)removeAllNotifications;
- (void)setBedtimeFormatter:(id)arg1;
- (void)setBedtimeNotifications:(id)arg1;
- (void)setDateComponentsFormatter:(id)arg1;
- (id)sleepAlarm;
- (id)timeZoneForOffsetCalculation;
- (void)updateSleepAlarm:(id)arg1;

@end
