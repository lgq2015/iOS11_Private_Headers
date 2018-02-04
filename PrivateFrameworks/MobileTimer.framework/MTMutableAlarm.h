/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTMutableAlarm : MTAlarm

@property (nonatomic) unsigned long long active;
@property (getter=isActiveForThisDevice, nonatomic) bool activeForThisDevice;
@property (nonatomic) bool allowsSnooze;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, copy) MTSound *sound;
@property (nonatomic, copy) NSString *title;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
