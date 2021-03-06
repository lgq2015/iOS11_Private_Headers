/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface AlarmManager : NSObject {
    NSMutableArray * _alarms;
    NSString * _defaultSound;
    long long  _defaultSoundType;
    bool  _dirty;
    NSHashTable * _observers;
    Alarm * _sleepAlarm;
    bool  invalidAlarmsDetected;
    NSDate * lastModified;
    NSMutableArray * logMessageList;
}

@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) NSString *defaultSound;
@property (nonatomic, readonly) long long defaultSoundType;
@property (nonatomic, retain) NSString *defaultVibrationID;
@property (nonatomic) bool invalidAlarmsDetected;
@property (nonatomic, retain) NSDate *lastModified;
@property (nonatomic, retain) NSMutableArray *logMessageList;
@property (nonatomic, readonly) Alarm *sleepAlarm;

+ (id)assistantSyncNotificationName;
+ (id)copyReadAlarmsFromPreferences;
+ (id)copySleepAlarmFromPreferences;
+ (bool)discardOldVersion;
+ (bool)isAlarmNotification:(id)arg1;
+ (id)sharedManager;
+ (bool)upgrade;
+ (void)writeAlarmsToPreferences:(id)arg1;
+ (void)writeSleepAlarmToPreferences:(id)arg1;

- (void).cxx_destruct;
- (void)_updateAlarm:(id)arg1 active:(bool)arg2 logIntent:(bool)arg3;
- (void)addAlarm:(id)arg1 active:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)alarmWithId:(id)arg1;
- (id)alarmWithIdUrl:(id)arg1;
- (id)alarms;
- (bool)checkIfAlarmsModified;
- (void)countAlarmsInAggregateDictionary;
- (void)dealloc;
- (id)defaultSound;
- (long long)defaultSoundType;
- (id)defaultVibrationID;
- (void)handleAlarm:(id)arg1 startedUsingSong:(id)arg2;
- (void)handleAlarm:(id)arg1 stoppedUsingSong:(id)arg2;
- (void)handleAnyNotificationChanges;
- (void)handleExpiredOrSnoozedNotificationsOnly:(id)arg1;
- (void)handleNotificationFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1;
- (id)init;
- (bool)invalidAlarmsDetected;
- (id)lastModified;
- (void)loadAlarms;
- (void)loadDefaultSoundAndType;
- (void)loadScheduledNotifications;
- (void)loadScheduledNotificationsWithCancelUnused:(bool)arg1;
- (id)logMessageList;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(bool)arg2 allowRepeating:(bool)arg3;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(bool)arg2 allowRepeating:(bool)arg3 allowSnoozed:(bool)arg4;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(bool)arg2 allowRepeating:(bool)arg3 allowSnoozed:(bool)arg4 allowSleepAlarm:(bool)arg5;
- (void)reloadDefaultSoundAndType;
- (void)reloadScheduledNotifications;
- (void)reloadScheduledNotificationsWithRefreshActive:(bool)arg1 cancelUnused:(bool)arg2;
- (void)removeAlarm:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)saveAlarms;
- (void)setAlarm:(id)arg1 active:(bool)arg2;
- (void)setDefaultSound:(id)arg1 ofType:(long long)arg2;
- (void)setDefaultVibrationID:(id)arg1;
- (void)setInvalidAlarmsDetected:(bool)arg1;
- (void)setLastModified:(id)arg1;
- (void)setLogMessageList:(id)arg1;
- (id)sleepAlarm;
- (void)unloadAlarms;
- (void)updateAlarm:(id)arg1 active:(bool)arg2;
- (void)updateSleepAlarm:(id)arg1 active:(bool)arg2;

@end
