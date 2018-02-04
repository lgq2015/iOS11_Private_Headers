/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmMigrator : NSObject {
    NSMutableArray * _alarms;
    NSArray * _oldAlarms;
    Alarm * _oldSleepAlarm;
    MTAlarm * _sleepAlarm;
}

@property (nonatomic, retain) NSMutableArray *alarms;
@property (nonatomic, retain) NSArray *oldAlarms;
@property (nonatomic, retain) Alarm *oldSleepAlarm;
@property (nonatomic, retain) MTAlarm *sleepAlarm;

+ (id)_numberFromString:(id)arg1;
+ (id)alarmFromOldAlarm:(id)arg1;
+ (unsigned long long)repeatScheduleFromOldAlarm:(id)arg1;
+ (id)soundFromOldAlarm:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasSleepAlarmBeenConfigured;
- (id)alarms;
- (void)cleanUpOldNotifications;
- (void)migrateFromOldStorage;
- (id)oldAlarms;
- (id)oldSleepAlarm;
- (void)removeFromOldStorage;
- (void)setAlarms:(id)arg1;
- (void)setOldAlarms:(id)arg1;
- (void)setOldSleepAlarm:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (id)sleepAlarm;

@end
