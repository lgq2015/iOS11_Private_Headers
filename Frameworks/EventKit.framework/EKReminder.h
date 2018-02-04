/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKReminder : EKCalendarItem {
    EKObjectID * _parentID;
}

@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, copy) NSDate *completionDate;
@property (nonatomic, copy) NSDateComponents *dueDateComponents;
@property (nonatomic, retain) EKObjectID *parentID;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSDateComponents *startDateComponents;

+ (id)_dateComponentsWithDate:(id)arg1 timeZone:(id)arg2 allDay:(bool)arg3;
+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;
+ (Class)frozenClass;
+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;
+ (id)reminderWithEventStore:(id)arg1;

- (void).cxx_destruct;
- (id)_generateNewUniqueID;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (bool)commit:(id*)arg1;
- (id)completionDate;
- (id)description;
- (unsigned long long)displayOrder;
- (id)dueDate;
- (bool)dueDateAllDay;
- (id)dueDateComponents;
- (id)dueDateRaw;
- (id)dueDateTimeZone;
- (id)dueDateTimeZoneName;
- (id)externalURI;
- (id)firstAlertDate;
- (id)initWithPersistentObject:(id)arg1;
- (bool)isCompleted;
- (id)parentID;
- (id)reminderIdentifier;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDueDateAllDay:(bool)arg1;
- (void)setDueDateComponents:(id)arg1;
- (void)setDueDateRaw:(id)arg1;
- (void)setDueDateTimeZone:(id)arg1;
- (void)setDueDateTimeZoneName:(id)arg1;
- (void)setFirstAlertDate:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setStartDateAllDay:(bool)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setStartDateRaw:(id)arg1;
- (void)setStartDateTimeZone:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (bool)startDateAllDay;
- (id)startDateComponents;
- (id)startDateForRecurrence;
- (id)startDateRaw;
- (id)startDateTimeZone;
- (bool)validate:(id*)arg1;

@end
