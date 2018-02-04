/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceRule : EKObject <NSCopying> {
    EKRecurrenceHelper * _recurrenceHelper;
    bool  _shouldPinMonthDays;
    bool  _usesEndDate;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSDate *cachedEndDate;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) bool dirtyStateMayAffectExceptionDates;
@property (nonatomic, readonly) long long firstDayOfTheWeek;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } gregorianUnits;
@property (nonatomic, readonly) long long interval;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, copy) EKRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) NSArray *setPositions;
@property (nonatomic, readonly) bool shouldPinMonthDays;
@property (readonly) bool usesEndDate;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;

+ (int)_calDayOfWeekFromEKWeekday:(long long)arg1;
+ (long long)_ekWeekdayFromCalDayOfWeek:(int)arg1;
+ (Class)frozenClass;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(bool)arg2 isFloating:(bool)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;
+ (id)iCalendarValueFromRecurrenceType:(long long)arg1;
+ (id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3;

- (void).cxx_destruct;
- (id)UUID;
- (id)_recurrenceHelper;
- (void)_updateSpecifierIfNeeded;
- (id)cachedEndDate;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (id)description;
- (bool)dirtyStateMayAffectExceptionDates;
- (id)endDate;
- (long long)firstDayOfTheWeek;
- (int)firstDayOfTheWeekRaw;
- (long long)frequency;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (id)init;
- (id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3;
- (long long)interval;
- (bool)isAnyDayRule;
- (bool)isSimpleRule;
- (bool)isWeekdayRule;
- (bool)isWeekendRule;
- (bool)mayOccurAfterDate:(id)arg1;
- (id)monthsOfTheYear;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (id)recurrenceEnd;
- (void)reset;
- (void)rollback;
- (void)setCount:(unsigned long long)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFirstDayOfTheWeek:(unsigned long long)arg1;
- (void)setFirstDayOfTheWeekRaw:(int)arg1;
- (void)setFrequency:(long long)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (id)setPositions;
- (void)setRecurrenceEnd:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (bool)shouldPinMonthDays;
- (id)specifier;
- (id)stringValueAsDateOnly:(bool)arg1 isFloating:(bool)arg2;
- (bool)usesEndDate;
- (id)weeksOfTheYear;

@end
